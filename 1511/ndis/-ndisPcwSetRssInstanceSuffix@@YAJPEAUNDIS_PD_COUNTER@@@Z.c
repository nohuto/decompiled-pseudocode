/*
 * XREFs of ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00DACF0
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00D8850 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0018728 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwSetRssInstanceSuffix(struct NDIS_PD_COUNTER *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  bool v4; // zf
  WCHAR SourceString[264]; // [rsp+20h] [rbp-228h] BYREF

  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"RSS %u", *((unsigned int *)a1 + 18));
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)a1 + 104), SourceString) )
      return 3221225626LL;
    v4 = RtlCreateUnicodeString((PUNICODE_STRING)((char *)a1 + 120), SourceString) == 0;
    result = v3;
    if ( v4 )
      return 3221225626LL;
  }
  return result;
}
