/*
 * XREFs of PpmInstallFeedbackCounters @ 0x140143BEC
 * Callers:
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x14000D000 (PpmContinueActiveTimeAccumulation.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     PpmPerfFeedbackCounterRead @ 0x140143D2C (PpmPerfFeedbackCounterRead.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ecx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r8
  bool v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rbx
  struct _GROUP_AFFINITY v13; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+70h] [rbp-8h]

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
  v10 = (v16 & 0x200) != 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 23880));
  v12 = a1 + 23880 - (_QWORD)a2;
  do
  {
    if ( *a2 )
    {
      *(_QWORD *)((char *)a2 + v12 + 24) = *a2;
      LOBYTE(v11) = 1;
      *(_QWORD *)((char *)a2 + v12 + 64) = 100LL * *(_QWORD *)(v7 + 48);
      PpmPerfFeedbackCounterRead(*a2, v11, v14);
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
  KxReleaseSpinLock((PKSPIN_LOCK)v7);
  if ( v10 )
    _enable();
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
