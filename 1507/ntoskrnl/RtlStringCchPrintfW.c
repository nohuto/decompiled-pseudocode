/*
 * XREFs of RtlStringCchPrintfW @ 0x140008054
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     RtlpInitNlsSectionName @ 0x140410278 (RtlpInitNlsSectionName.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsFileName @ 0x14055BB08 (RtlpInitNlsFileName.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     IoWMIOpenBlock @ 0x14058240C (IoWMIOpenBlock.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14058B1A0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x1405955BC (PiDrvDbRegisterNode.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     _SysCtxOpenControlSet @ 0x1405BBE68 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     AslGuidToString @ 0x1405C53C0 (AslGuidToString.c)
 *     PpCreateLegacyDeviceIds @ 0x14067B474 (PpCreateLegacyDeviceIds.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14068B800 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14068C9D8 (PiDevCfgResolveVariableSwitchCase.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140704E64 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x140707F9C (AslpFileQueryVersionString.c)
 *     EncloseSubCondition @ 0x14070A658 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x14070AA38 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x14070B8B8 (LocalpGetStringForCondition.c)
 *     IopCreateArcNamesDisk @ 0x1407B6124 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x140171A38 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
