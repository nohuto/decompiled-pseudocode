/*
 * XREFs of KiComputeThreadAffinity @ 0x1400EFEB0
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x1400C885C (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x1400CAA54 (KiSetSystemAffinityThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x1401D7938 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14007D230 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1400AE80C (KeSelectNodeForAffinity.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 *     RtlBeginReadTickLock @ 0x1400F003C (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x1400F004C (KiComputeCpuSetAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400F0CF8 (KiUpdateNodeAffinitizedFlag.c)
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
