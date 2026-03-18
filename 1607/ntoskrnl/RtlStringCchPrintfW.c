/*
 * XREFs of RtlStringCchPrintfW @ 0x14007F50C
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14023B340 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IoCreateDevice @ 0x1404734C0 (IoCreateDevice.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     RtlpInitNlsSectionName @ 0x1404758D0 (RtlpInitNlsSectionName.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404ED840 (ExpCheckPortableOperatingSystem.c)
 *     IopBootLog @ 0x1404EFE0C (IopBootLog.c)
 *     RtlpInitNlsFileName @ 0x1404F02F4 (RtlpInitNlsFileName.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14051DAC0 (ExpHwidSysVolIfGetDiskInfo.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     IoWMIOpenBlock @ 0x1405456CC (IoWMIOpenBlock.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x140551AE8 (PiDrvDbRegisterNode.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     AslGuidToString @ 0x140573734 (AslGuidToString.c)
 *     _SysCtxOpenControlSet @ 0x1405798B4 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A8B0 (PpCreateLegacyDeviceIds.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140639900 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FD2C (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640D9C (PiDevCfgResolveVariableSwitchCase.c)
 *     SepReadAndInsertCaps @ 0x140696138 (SepReadAndInsertCaps.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1406C50FC (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x1406C8E7C (AslpFileQueryVersionString.c)
 *     EncloseSubCondition @ 0x1406CC8C0 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1406CD89C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1406CFC88 (LocalpGetStringForCondition.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DE9C4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopCreateArcNamesDisk @ 0x1407985F0 (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x1407B980C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x14014CCB4 (_vsnwprintf.c)
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
