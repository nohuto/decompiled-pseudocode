/*
 * XREFs of sprintf_s @ 0x140152AEC
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x140133C18 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140213E98 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x140213EFC (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x140213FB0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x140214224 (RtlIpv6AddressToStringExA.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055C8D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14055FE7C (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140723450 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140723978 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x140723EA8 (HdlspSendBlueScreenInfo.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpGetAcpiBiosVersion @ 0x1407AD738 (CmpGetAcpiBiosVersion.c)
 *     CmpAddAliasEntry @ 0x1407CD4E0 (CmpAddAliasEntry.c)
 * Callees:
 *     vsprintf_s @ 0x140152B0C (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
