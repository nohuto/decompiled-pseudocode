/*
 * XREFs of IopCheckIfNotNativeDriver @ 0x1406711E4
 * Callers:
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14014A260 (RtlStringCbCopyNW.c)
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     wcsstr @ 0x140173DA0 (wcsstr.c)
 *     IopIsNotNativeDriverImage @ 0x140671E78 (IopIsNotNativeDriverImage.c)
 */

char __fastcall IopCheckIfNotNativeDriver(int a1, __int64 a2)
{
  wchar_t *v2; // rbx

  v2 = *(wchar_t **)(a2 + 8);
  if ( a1 == -1073741772 )
  {
    if ( !v2 )
      return 0;
    while ( wcsnicmp(v2, L"\\System32\\drivers\\", 0x12uLL) )
    {
      v2 = wcsstr(v2 + 1, L"\\");
      if ( !v2 )
        return 0;
    }
    RtlStringCbCopyNW(
      v2 + 1,
      *(unsigned __int16 *)(a2 + 2) - (unsigned __int16)((_WORD)v2 - *(_WORD *)(a2 + 8)),
      L"SysWow64",
      0x10uLL);
    v2[9] = 92;
  }
  return IopIsNotNativeDriverImage(a2);
}
