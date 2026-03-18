/*
 * XREFs of RtlStringCchPrintfW @ 0x140003C28
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1403BF0B8 (SepValidateReferencedLowBoxHandles.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsFileName @ 0x140461828 (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x140461A80 (RtlpInitNlsSectionName.c)
 *     sub_140496110 @ 0x140496110 (sub_140496110.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     sub_1404C80E8 @ 0x1404C80E8 (sub_1404C80E8.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     IoWMIOpenBlock @ 0x14050B130 (IoWMIOpenBlock.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405139AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     _SysCtxOpenControlSet @ 0x14052423C (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNode @ 0x1405251A4 (PiDrvDbRegisterNode.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     AslGuidToString @ 0x14054DC80 (AslGuidToString.c)
 *     PpCreateLegacyDeviceIds @ 0x140600864 (PpCreateLegacyDeviceIds.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14060BCA4 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14060CD10 (PiDevCfgResolveVariableSwitchCase.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140680030 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x1406832F8 (AslpFileQueryVersionString.c)
 *     EncloseSubCondition @ 0x140688040 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x140689058 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x14068B44C (LocalpGetStringForCondition.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x140750D8C (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x14076F68C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
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
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      pszDest[v5] = 0;
      return v4;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      pszDest[v5] = 0;
      return -2147483643;
    }
  }
  return v4;
}
