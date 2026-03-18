/*
 * XREFs of PpmInstallFeedbackCounters @ 0x140167770
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x140013B30 (PpmContinueActiveTimeAccumulation.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     PpmPerfFeedbackCounterRead @ 0x1401678CC (PpmPerfFeedbackCounterRead.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ecx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  bool v11; // r14
  __int64 v12; // rbx
  struct _GROUP_AFFINITY v13; // [rsp+20h] [rbp-58h] BYREF
  char v14[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+70h] [rbp-8h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v13.Reserved[1] = 0;
  v13.Reserved[2] = 0;
  *(_DWORD *)&v13.Group = (unsigned __int16)(v4 >> 6);
  v13.Mask = 1LL << (v4 & 0x3F);
  KeSetSystemGroupAffinityThread(&v13, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  v7 = a1 + 23880;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v9);
  _disable();
  v11 = (v16 & 0x200) != 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 23880);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 23880));
  }
  v12 = v7 - (_QWORD)a2;
  do
  {
    if ( *a2 )
    {
      *(_QWORD *)((char *)a2 + v12 + 24) = *a2;
      LOBYTE(v10) = 1;
      *(_QWORD *)((char *)a2 + v12 + 64) = 100LL * *(_QWORD *)(v7 + 48);
      PpmPerfFeedbackCounterRead(*a2, v10, v14);
    }
    ++a2;
    --v6;
  }
  while ( v6 );
  if ( *(_QWORD *)(v7 + 32) )
  {
    *(_BYTE *)(v7 + 136) = 1;
  }
  else if ( *(_QWORD *)(v7 + 24) )
  {
    *(_BYTE *)(v7 + 136) = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v7, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  if ( v11 )
    _enable();
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
