/*
 * XREFs of KiComputeThreadAffinity @ 0x1400D54A4
 * Callers:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x1400D50B8 (KiSetSystemAffinityThread.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14013328C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140205E64 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateNodeAffinitizedFlag @ 0x14000FA64 (KiUpdateNodeAffinitizedFlag.c)
 *     RtlBeginReadTickLock @ 0x140017F48 (RtlBeginReadTickLock.c)
 *     KeSelectIdealProcessor @ 0x14002B7F8 (KeSelectIdealProcessor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiComputeCpuSetAffinity @ 0x1400D5538 (KiComputeCpuSetAffinity.c)
 *     KeSelectNodeForAffinity @ 0x14012B5E8 (KeSelectNodeForAffinity.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 TickLock; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
  }
  else
  {
    do
    {
      v3 = RtlBeginReadTickLock(&KiCpuSetSequence);
      v4 = *(_QWORD *)(a1 + 552);
      TickLock = v3;
      if ( ((v4 - 1) & v4) != 0 )
      {
        v6 = KiComputeCpuSetAffinity(a1);
        v7 = v4 & v6;
        if ( v7 )
          v4 = v7;
      }
      if ( *(_QWORD *)(a1 + 576) != v4 )
      {
        v9 = *(unsigned int *)(a1 + 196);
        *(_QWORD *)(a1 + 576) = v4;
        v10 = KiProcessorBlock[v9];
        if ( *(unsigned __int8 *)(v10 + 1616) != *(_WORD *)(a1 + 584) || (v4 & *(_QWORD *)(v10 + 1608)) == 0 )
        {
          v12 = v4;
          v13 = 0LL;
          LOWORD(v13) = *(_WORD *)(a1 + 584);
          v11 = KeSelectNodeForAffinity(&v12);
          LODWORD(v9) = KeSelectIdealProcessor(v11, (__int64)&v12, 0LL);
        }
        *(_DWORD *)(a1 + 588) = v9;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[(unsigned int)v9], a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v1 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  *(_QWORD *)(a1 + 568) = TickLock;
  return v1;
}
