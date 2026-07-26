/*
 * XREFs of ndisGetOidSourceHandle @ 0x1C0010ADC
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0001000 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0001230 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C00109B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C00394D0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C0039910 (ndisOidPreRcvFilterEnumQueues.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C0039B60 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0039C80 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003A050 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004626C (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0046380 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0064A80 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisOidPostIovDeleteNicSwitch @ 0x1C0064DE0 (ndisOidPostIovDeleteNicSwitch.c)
 *     ndisOidPreIovEnumVFs @ 0x1C0065470 (ndisOidPreIovEnumVFs.c)
 *     ndisOidPreIovEnumVPorts @ 0x1C0065770 (ndisOidPreIovEnumVPorts.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0093254 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisOidPreRemovePMProtocolOffload @ 0x1C0093490 (ndisOidPreRemovePMProtocolOffload.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0097098 (ndisMiniportPreAddWoLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00AA34C (ndisPreSetPMParameters.c)
 *     ndisMiniportPreRemoveWOLPattern @ 0x1C00C3124 (ndisMiniportPreRemoveWOLPattern.c)
 *     ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00C5CB0 (ndisXlateRemoveWolPatternToPacketPatternOid.c)
 *     ndisIovAllocateVF @ 0x1C00D2C68 (ndisIovAllocateVF.c)
 *     ndisIovCreateVPort @ 0x1C00D2E78 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00D37A0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00D39F0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00D3CB0 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00D3E10 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovFreeVF @ 0x1C00D3F50 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00D4080 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00D4190 (ndisOidPreIovInvalidateConfigBlock.c)
 *     ndisOidPreIovNicSwitchParameters @ 0x1C00D4250 (ndisOidPreIovNicSwitchParameters.c)
 *     ndisOidPreIovProbedBars @ 0x1C00D45B0 (ndisOidPreIovProbedBars.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00D46A0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00D47F0 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00D4940 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00D4A40 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00D4D20 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00D51A0 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00D52D0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisOidPrePDCloseProvider @ 0x1C00DB3A0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00DB6E0 (ndisOidPrePDOpenProvider.c)
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
