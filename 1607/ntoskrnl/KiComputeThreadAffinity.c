/*
 * XREFs of KiComputeThreadAffinity @ 0x1400F2060
 * Callers:
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x1400CA9BC (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x1400CCBB4 (KiSetSystemAffinityThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140111090 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x1401D7B0C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14007D1B0 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1400B079C (KeSelectNodeForAffinity.c)
 *     KiPrcbInGroupAffinity @ 0x1400CCD10 (KiPrcbInGroupAffinity.c)
 *     RtlBeginReadTickLock @ 0x1400F21EC (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x1400F21FC (KiComputeCpuSetAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F2E14 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400F2EA8 (KiUpdateNodeAffinitizedFlag.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  __int64 *v2; // r14
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rdi
  __int64 TickLock; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
  }
  else
  {
    v2 = (__int64 *)(a1 + 576);
    do
    {
      v3 = RtlBeginReadTickLock(&KiCpuSetSequence);
      v5 = *(_QWORD *)(a1 + 552);
      TickLock = v3;
      if ( ((v5 - 1) & v5) != 0 )
      {
        v7 = v5 & KiComputeCpuSetAffinity(a1);
        if ( v7 )
          v5 = v7;
      }
      if ( *v2 != v5 )
      {
        v9 = *(unsigned int *)(a1 + 196);
        *v2 = v5;
        if ( !KiPrcbInGroupAffinity(KiProcessorBlock[v9], (__int64)v2) )
        {
          v13 = v5;
          v14 = 0LL;
          LOWORD(v14) = *(_WORD *)(a1 + 584);
          v12 = KeSelectNodeForAffinity((__int64)&v13);
          v10 = (unsigned int)KeSelectIdealProcessor(v12, (__int64)&v13, 0LL);
        }
        *(_DWORD *)(a1 + 588) = v10;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[(unsigned int)v10], a1, v10, v11);
        KiUpdateNodeAffinitizedFlag(a1);
        v4 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  result = v4;
  *(_QWORD *)(a1 + 568) = TickLock;
  return result;
}
