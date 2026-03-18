/*
 * XREFs of KiSetAffinityThread @ 0x140095508
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x140095414 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x14012DAD4 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14014075C (KeSetAffinityProcess.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x14002A910 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14002AA84 (KiUpdateNodeAffinitizedFlag.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KeSelectIdealProcessor @ 0x1400937E0 (KeSelectIdealProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x140096888 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceThreadAffinity @ 0x14020E374 (EtwTraceThreadAffinity.c)
 */

__int64 __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 *v4; // rsi
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  char v12; // r15
  int v13; // r8d
  __int64 v14; // r14
  volatile signed __int64 *v15; // rdi
  unsigned int v16; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]

  v3 = 0;
  v4 = (__int64 *)a3;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *v4;
  v7 = *(unsigned int *)(a1 + 196);
  v8 = KiProcessorBlock[v7];
  if ( !KiPrcbInGroupAffinity(v8, (__int64)v4) )
  {
    v10 = KeSelectNodeForAffinity(v4);
    v22 = 0LL;
    LOWORD(v22) = *((_WORD *)v4 + 4);
    v21 = *v4 & *(_QWORD *)(v10 + 136);
    LODWORD(v7) = KeSelectIdealProcessor(v10, (__int64)&v21, 0LL);
    *(_DWORD *)(a1 + 196) = v7;
    v8 = KiProcessorBlock[(unsigned int)v7];
  }
  v18 = 0LL;
  result = *(unsigned int *)(a1 + 116);
  if ( (result & 8) == 0 )
  {
    v12 = KiAcquireThreadStateLock(a1, &v18, (volatile signed __int32 **)&v20);
    *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
    *(_QWORD *)(a1 + 576) = *v4;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      v4 = &v21;
      LOWORD(v22) = *(_WORD *)(a1 + 584);
      v21 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v7;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v8, a1);
    }
    v14 = v18;
    LOBYTE(v13) = v12;
    v15 = v20;
    result = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)v4, v13, v18, (__int64)v20, a2);
    v3 = result;
    if ( v14 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
      v15 = v20;
    }
    if ( v15 )
      _InterlockedAnd64(v15, 0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
  {
    result = v18;
    v16 = *(_DWORD *)(v18 + 36);
    if ( KeGetPcr()->Prcb.Number != v16 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v9) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v16, v9);
    }
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, v4);
  return result;
}
