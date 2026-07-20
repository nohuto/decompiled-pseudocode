/*
 * XREFs of SmpGetCrashParameters @ 0x140010850
 * Callers:
 *     SmpCheckForCrashDump @ 0x14000A8EC (SmpCheckForCrashDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400084FC (RtlStringCbPrintfW.c)
 *     SmpQueryDwordFromRegistry @ 0x140009748 (SmpQueryDwordFromRegistry.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     SmpQueryPathFromRegistry @ 0x140010C88 (SmpQueryPathFromRegistry.c)
 */

int __fastcall SmpGetCrashParameters(__int64 a1)
{
  int result; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-248h] BYREF
  __int64 v6; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  *(_DWORD *)&v5.Length = 1310738;
  LODWORD(v6) = 1179664;
  result = RtlStringCbPrintfW(
             pszDest,
             0x208uLL,
             L"%s\\MEMORY.DMP",
             SmpSystemRoot.Buffer,
             *(_QWORD *)&v5.Length,
             L"Overwrite",
             v6,
             L"DumpFile");
  if ( result >= 0 )
  {
    result = SmpQueryPathFromRegistry(v3, &v6, pszDest, a1);
    if ( result >= 0 )
    {
      result = SmpQueryDwordFromRegistry(v4, &v5, 1, (_DWORD *)(a1 + 16));
      if ( result >= 0 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        return 0;
      }
    }
  }
  return result;
}
