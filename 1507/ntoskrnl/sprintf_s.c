/*
 * XREFs of sprintf_s @ 0x1401777DC
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14015B60C (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14015B8DC (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140248B74 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x140248BD8 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x140248C8C (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpFindControlSet @ 0x140590E08 (CmpFindControlSet.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405A5580 (CmpAddProcessorConfigurationEntry.c)
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14075A4F4 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14075AAA0 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14075B08C (HdlspSendBlueScreenInfo.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 * Callees:
 *     vsprintf_s @ 0x1401777FC (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
