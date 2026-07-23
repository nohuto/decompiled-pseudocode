/*
 * XREFs of PiSwFindSwDevice @ 0x1404867FC
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x140484AEC (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpCleanup @ 0x1404868C8 (PiSwIrpCleanup.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 */

__int64 __fastcall PiSwFindSwDevice(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v2; // rbx
  wchar_t *v3; // rax
  PVOID v4; // rax
  char *Buffer; // [rsp+20h] [rbp-288h] BYREF
  char v7; // [rsp+30h] [rbp-278h] BYREF
  wchar_t *v8; // [rsp+38h] [rbp-270h]
  wchar_t *v9; // [rsp+40h] [rbp-268h]
  wchar_t pszDest[5]; // [rsp+100h] [rbp-1A8h] BYREF
  wchar_t Str[195]; // [rsp+10Ah] [rbp-19Eh] BYREF

  Buffer = &v7;
  v2 = 0LL;
  if ( !wcsnicmp(pszSrc, L"SWD\\", 4uLL) && RtlStringCbCopyW(pszDest, 0x190uLL, pszSrc) >= 0 )
  {
    v8 = pszDest;
    v3 = wcschr(Str, 0x5Cu);
    if ( v3 )
    {
      *v3 = 0;
      v9 = v3 + 1;
      v4 = RtlLookupElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
      if ( v4 )
        return *(_QWORD *)v4;
    }
  }
  return v2;
}
