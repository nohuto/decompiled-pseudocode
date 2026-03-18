/*
 * XREFs of sprintf_s @ 0x14014975C
 * Callers:
 *     RtlIpv4AddressToStringA @ 0x14012BD84 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1401F9B6C (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1401F9BD0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1401F9C84 (RtlIpv6AddressToStringA.c)
 *     RtlIpv6AddressToStringExA @ 0x1401F9EF8 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14051DCB4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14051F904 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x1406D6DE0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1406D7450 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1406D7978 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1406D7EA8 (HdlspSendBlueScreenInfo.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpGetAcpiBiosVersion @ 0x140744AE8 (CmpGetAcpiBiosVersion.c)
 *     CmpAddAliasEntry @ 0x140781EB8 (CmpAddAliasEntry.c)
 * Callees:
 *     vsprintf_s @ 0x14014977C (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
