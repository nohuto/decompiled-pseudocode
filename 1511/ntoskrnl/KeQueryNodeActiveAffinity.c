/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1400F69BC
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x14001AD94 (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiZeroNodePages @ 0x140131668 (MiZeroNodePages.c)
 *     PpmParkRegisterParking @ 0x140138DFC (PpmParkRegisterParking.c)
 *     KiConfigureSchedulingInformation @ 0x1403A8B9C (KiConfigureSchedulingInformation.c)
 *     ExpWorkerHotAddProcessor @ 0x1403B3244 (ExpWorkerHotAddProcessor.c)
 *     ExProcessorCounterSetCallback @ 0x1404D07B8 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x1404D117C (ExpQueryNumaProcessorMap.c)
 *     ExpCreateSystemThreadForNode @ 0x1404D1234 (ExpCreateSystemThreadForNode.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x14054E918 (ExAllocatePrivateWorkerPool.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 *     ExpAllocatePoolForNode @ 0x14067323C (ExpAllocatePoolForNode.c)
 *     ExpWorkerInitialization @ 0x14076B754 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( Affinity )
  {
    Affinity->Mask = 0LL;
    *(_QWORD *)&Affinity->Group = 0LL;
  }
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v3 = KeNodeBlock[NodeNumber];
    if ( Affinity )
    {
      Affinity->Group = *(_WORD *)(v3 + 144);
      Affinity->Mask = *(_QWORD *)(v3 + 136);
    }
    if ( Count )
    {
      v4 = *(_QWORD *)(v3 + 136) - ((*(_QWORD *)(v3 + 136) >> 1) & 0x5555555555555555LL);
      *Count = (0x101010101010101LL
              * (((v4 & 0x3333333333333333LL)
                + ((v4 >> 2) & 0x3333333333333333LL)
                + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
  }
}
