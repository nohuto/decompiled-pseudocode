/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C0022244
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C0021FF0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C003C4EC (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C003D450 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C003D890 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C003DAE0 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003DC00 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003DFD0 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0049A38 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049B00 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0049D40 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0049EA0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0068FD0 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0069330 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C0069A10 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0069D10 (ndisOidPreIovEnumVPorts.c)
 *     ndisPreSetPMParameters @ 0x1C00B0C9C (ndisPreSetPMParameters.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00B0E54 (ndisMiniportPreAddWoLPattern.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00C83E4 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00C85AC (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C00C9260 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00CB750 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00D8BA8 (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00D8DB8 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00D96E0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D9930 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D9BF0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00D9D50 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00D9E90 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00D9FC0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00DA0D0 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00DA190 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00DA4F0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00DA5E0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00DA730 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00DA880 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00DA980 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00DAC60 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00DB0E0 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00DB210 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00E1260 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
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
