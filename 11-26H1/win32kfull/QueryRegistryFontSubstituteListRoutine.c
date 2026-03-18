/*
 * XREFs of QueryRegistryFontSubstituteListRoutine @ 0x1403FB260
 * Callers:
 *     <none>
 * Callees:
 *     vProcessEntry @ 0x140104BB8 (vProcessEntry.c)
 *     ??$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z @ 0x140229844 (--$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall QueryRegistryFontSubstituteListRoutine(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int16 v11[32]; // [rsp+20h] [rbp-E8h] BYREF
  wchar_t Str1[32]; // [rsp+60h] [rbp-A8h] BYREF
  char v13; // [rsp+A1h] [rbp-67h]
  wchar_t v14[32]; // [rsp+A2h] [rbp-66h] BYREF
  char v15; // [rsp+E3h] [rbp-25h]

  memset_0(v11, 0, 0xC4uLL);
  if ( (int)vProcessEntry(a3, v14, 0LL) >= 0 && (int)vProcessEntry(a1, Str1, v11) >= 0 && v13 == v15 && v13 != 2 )
  {
    v9 = *(_QWORD *)(W32GetSessionState(v8, v7) + 96);
    result = AllocAndCopyRegistryEntries<FONTSUB,1651729991>(
               (unsigned int *)(v9 + 19672),
               (void **)(v9 + 19656),
               a5,
               v11);
    if ( (int)result < 0 )
      return result;
    if ( !v13 )
      ++*(_DWORD *)(v9 + 19680);
    if ( !*(_DWORD *)(v9 + 19684) && !_wcsicmp(Str1, L"MS Shell Dlg") && !_wcsicmp(v14, L"Microsoft Sans Serif") )
      *(_DWORD *)(v9 + 19684) = 1;
  }
  return 0LL;
}
