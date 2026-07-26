/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C000E404
 * Callers:
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C000DE90 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C000DFC0 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C000E1B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C003787C (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C00387E0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C0038C20 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C0038E70 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0038F90 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C0039320 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C0039558 (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0044CD4 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0044DF0 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPreIovEnumVFs @ 0x1C00662B0 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C00665B0 (ndisOidPreIovEnumVPorts.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C0099860 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0099AD8 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0099CFC (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00AC91C (ndisPreSetPMParameters.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00C9D04 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00CC890 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00D9538 (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00D9748 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00DA060 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00DA2B0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00DA460 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00DA520 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00DA650 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00DA780 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00DA890 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00DA950 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00DAC70 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00DAD60 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00DAEB0 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00DB000 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00DB100 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00DB3E0 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00DB850 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00DB980 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00E1670 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E19B0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetOidSourceHandle(__int64 a1)
{
  __int64 i; // rax

  for ( i = a1 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  return *(_QWORD *)(i + 32);
}
