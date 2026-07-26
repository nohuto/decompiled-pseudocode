/*
 * XREFs of ?ndisPcwGetRssInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00E1120
 * Callers:
 *     ?NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DF540 (-NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMET.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001E960 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8B5C (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwGetRssInstanceName(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, struct _UNICODE_STRING *a3)
{
  const struct _UNICODE_STRING *MiniportName; // rax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned int v7; // ebx
  WCHAR SourceString[264]; // [rsp+30h] [rbp-228h] BYREF

  MiniportName = ndisPcwGetMiniportName(a1);
  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"PD RSS %u - %wZ", v5, MiniportName);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !RtlCreateUnicodeString(a3, SourceString) )
      return (unsigned int)-1073741670;
    return v7;
  }
  return result;
}
