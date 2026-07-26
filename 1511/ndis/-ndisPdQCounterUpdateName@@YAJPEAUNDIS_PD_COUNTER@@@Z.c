/*
 * XREFs of ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00DADBC
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x1C00D8100 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00D9FF8 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0018728 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z @ 0x1C006C218 (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAGI@Z.c)
 */

__int64 __fastcall ndisPdQCounterUpdateName(struct NDIS_PD_COUNTER *a1)
{
  _UNICODE_STRING *v1; // rdi
  int v3; // eax
  const wchar_t *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rax
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v12[64]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SourceString[264]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = (_UNICODE_STRING *)((char *)a1 + 104);
  RtlFreeUnicodeString((PUNICODE_STRING)((char *)a1 + 104));
  ndisPdGetIfIndexVPortStr(*((struct NDIS_PD_ASSOCIATION **)a1 + 5), v12);
  v3 = *((_DWORD *)a1 + 24);
  if ( v3 <= 1 )
  {
    if ( v3 == 1 && (v6 = *((_QWORD *)a1 + 10), *(_WORD *)(v6 + 48)) )
    {
      v7 = *(_OWORD *)((char *)a1 + 120);
      v10 = *(_OWORD *)(v6 + 48);
      v11 = v7;
      v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%wZ: %wZ", &v10, &v11);
    }
    else
    {
      v10 = *(_OWORD *)((char *)a1 + 120);
      v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%s: %wZ", v12, &v10);
    }
  }
  else
  {
    v4 = L"RX";
    if ( *((_DWORD *)a1 + 16) != 1 )
      v4 = L"TX";
    v11 = *(_OWORD *)((char *)a1 + 120);
    v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%s: %s multi-Q: %wZ", v12, v4, &v11);
  }
  v8 = v5;
  if ( !RtlCreateUnicodeString(v1, SourceString) )
    return (unsigned int)-1073741670;
  return v8;
}
