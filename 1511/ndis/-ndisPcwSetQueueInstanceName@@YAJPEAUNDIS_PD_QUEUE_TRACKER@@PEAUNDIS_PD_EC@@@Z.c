/*
 * XREFs of ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C00DAC28
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x1C00D8100 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0018728 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z @ 0x1C006C218 (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z.c)
 */

__int64 __fastcall ndisPcwSetQueueInstanceName(struct NDIS_PD_QUEUE_TRACKER *a1, struct NDIS_PD_EC *a2)
{
  const wchar_t *v4; // rdx
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-2B8h]
  unsigned __int16 v8[64]; // [rsp+40h] [rbp-2A8h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-228h] BYREF

  ndisPdGetIfIndexVPortStr(*((struct NDIS_PD_ASSOCIATION **)a1 + 5), v8);
  v4 = L"RX";
  if ( *((_DWORD *)a1 + 40) != 1 )
    v4 = L"TX";
  v7 = *((_DWORD *)a1 + 70);
  v5 = RtlStringCbPrintfW(
         (wchar_t *)SourceString,
         0x202uLL,
         L"EC %u: %s: %s %u",
         *((unsigned int *)a2 + 10),
         v8,
         v4,
         v7);
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)a1 + 18, SourceString) )
    return (unsigned int)-1073741670;
  return v5;
}
