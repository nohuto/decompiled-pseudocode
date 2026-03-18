/*
 * XREFs of KiComputeThreadAffinity @ 0x14002D430
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x14002A7B4 (KiSetSystemAffinityThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140106E54 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x1401C8A4C (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x14002A910 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14002AA84 (KiUpdateNodeAffinitizedFlag.c)
 *     RtlBeginReadTickLock @ 0x14002D5BC (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x14002D5CC (KiComputeCpuSetAffinity.c)
 *     KeSelectIdealProcessor @ 0x1400937E0 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x140096888 (KeSelectNodeForAffinity.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 TickLock; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence, 0LL);
  }
  else
  {
    v3 = (__int64 *)(a1 + 576);
    do
    {
      v4 = RtlBeginReadTickLock(&KiCpuSetSequence, v1);
      v5 = *(_QWORD *)(a1 + 552);
      TickLock = v4;
      if ( ((v5 - 1) & v5) != 0 )
      {
        v7 = v5 & KiComputeCpuSetAffinity(a1);
        if ( v7 )
          v5 = v7;
      }
      if ( *v3 != v5 )
      {
        v9 = *(unsigned int *)(a1 + 196);
        *v3 = v5;
        if ( !KiPrcbInGroupAffinity(KiProcessorBlock[v9], (__int64)v3) )
        {
          v12 = v5;
          v13 = 0LL;
          LOWORD(v13) = *(_WORD *)(a1 + 584);
          v11 = KeSelectNodeForAffinity(&v12);
          v10 = KeSelectIdealProcessor(v11, &v12, 0LL);
        }
        *(_DWORD *)(a1 + 588) = v10;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[v10], a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v1 = 1LL;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  result = (unsigned int)v1;
  *(_QWORD *)(a1 + 568) = TickLock;
  return result;
}
