/*
 * XREFs of KiSetAffinityThread @ 0x1400C885C
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x1400C8768 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeSelectIdealProcessor @ 0x14007D230 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1400AE80C (KeSelectNodeForAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400C8DDC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400F0CF8 (KiUpdateNodeAffinitizedFlag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwTraceThreadAffinity @ 0x140226054 (EtwTraceThreadAffinity.c)
 */

__int64 __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // r15d
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 result; // rax
  char v11; // r15
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  volatile signed __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  int v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int64 *v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]

  v3 = 0;
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a1 + 560) = *((_WORD *)a3 + 4);
  *(_QWORD *)(a1 + 552) = *a3;
  v7 = *(unsigned int *)(a1 + 196);
  v8 = KiProcessorBlock[v7];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v8, a3) )
  {
    v17 = KeSelectNodeForAffinity((__int64)a3);
    v24 = 0LL;
    LOWORD(v24) = *((_WORD *)a3 + 4);
    v23 = *a3 & *(_QWORD *)(v17 + 136);
    LODWORD(v7) = KeSelectIdealProcessor(v17, (__int64)&v23, 0LL);
    *(_DWORD *)(a1 + 196) = v7;
    v8 = KiProcessorBlock[(unsigned int)v7];
  }
  v21 = 0LL;
  result = *(unsigned int *)(a1 + 116);
  if ( (result & 8) == 0 )
  {
    v11 = KiAcquireThreadStateLock(a1, &v21, &v22);
    *(_WORD *)(a1 + 584) = *((_WORD *)a3 + 4);
    *(_QWORD *)(a1 + 576) = *a3;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      a3 = &v23;
      LOWORD(v24) = *(_WORD *)(a1 + 584);
      v23 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v7;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v8, a1, v13, v14);
    }
    v15 = v21;
    LOBYTE(v12) = v11;
    v16 = v22;
    result = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)a3, v12, v21, (__int64)v22, a2);
    v3 = result;
    if ( v15 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      v16 = v22;
    }
    if ( v16 )
      _InterlockedAnd64(v16, 0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
  {
    result = v21;
    v18 = *(_DWORD *)(v21 + 36);
    if ( KeGetPcr()->Prcb.Number != v18 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v9) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v18, v9);
    }
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, a3);
  return result;
}
