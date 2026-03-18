/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1400DBBC4
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x140026678 (PnpStartDevice.c)
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     KiConfigureSchedulingInformation @ 0x1403FA120 (KiConfigureSchedulingInformation.c)
 *     ExpWorkerHotAddProcessor @ 0x1404045E4 (ExpWorkerHotAddProcessor.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     ExpCreateSystemThreadForNode @ 0x1404FA334 (ExpCreateSystemThreadForNode.c)
 *     ExProcessorCounterSetCallback @ 0x1404FA400 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x1404FADD4 (ExpQueryNumaProcessorMap.c)
 *     PnpCallAddDevice @ 0x140580178 (PnpCallAddDevice.c)
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405C660C (ExAllocatePrivateWorkerPool.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     ExpAllocatePoolForNode @ 0x1406F778C (ExpAllocatePoolForNode.c)
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
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
