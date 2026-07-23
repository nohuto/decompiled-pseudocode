/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x14000509C
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140007EE0 (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     ExpCreateSystemThreadForNode @ 0x1403E5C70 (ExpCreateSystemThreadForNode.c)
 *     ExpQueryNumaProcessorMap @ 0x1403E5F6C (ExpQueryNumaProcessorMap.c)
 *     ExProcessorCounterSetCallback @ 0x140406328 (ExProcessorCounterSetCallback.c)
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575A48 (ExAllocatePrivateWorkerPool.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     ExpAllocatePoolForNode @ 0x1406B6078 (ExpAllocatePoolForNode.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
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
