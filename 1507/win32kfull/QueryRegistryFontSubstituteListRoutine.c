/*
 * XREFs of QueryRegistryFontSubstituteListRoutine @ 0x1C0378FD0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     vProcessEntry @ 0x1C0149610 (vProcessEntry.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall QueryRegistryFontSubstituteListRoutine(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  char *v4; // rax
  char *v5; // rbx
  char *v6; // rdx
  _OWORD v8[4]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD Str1[4]; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v10[4]; // [rsp+A0h] [rbp-68h] BYREF
  int v11; // [rsp+E0h] [rbp-28h]

  if ( (int)vProcessEntry(a3, (WCHAR *)v10 + 1, 0LL) < 0
    || (int)vProcessEntry(a1, (WCHAR *)Str1, (char *)v8) < 0
    || BYTE1(v10[0]) != HIBYTE(v11)
    || BYTE1(v10[0]) == 2 )
  {
    return 0LL;
  }
  if ( gcfsTable + 1 < gcfsTable )
    return 3221225621LL;
  v4 = (char *)PALLOCMEM2(196 * (gcfsTable + 1), 1651729991LL, 1);
  v5 = v4;
  if ( v4 )
  {
    if ( gpfsTable )
    {
      memmove(v4, gpfsTable, 196LL * gcfsTable);
      Win32FreePool(gpfsTable);
    }
    gpfsTable = v5;
    v6 = &v5[196 * gcfsTable++];
    *(_OWORD *)v6 = v8[0];
    *((_OWORD *)v6 + 1) = v8[1];
    *((_OWORD *)v6 + 2) = v8[2];
    *((_OWORD *)v6 + 3) = v8[3];
    *((_OWORD *)v6 + 4) = Str1[0];
    *((_OWORD *)v6 + 5) = Str1[1];
    *((_OWORD *)v6 + 6) = Str1[2];
    v6 += 128;
    *((_OWORD *)v6 - 1) = Str1[3];
    *(_OWORD *)v6 = v10[0];
    *((_OWORD *)v6 + 1) = v10[1];
    *((_OWORD *)v6 + 2) = v10[2];
    *((_OWORD *)v6 + 3) = v10[3];
    *((_DWORD *)v6 + 16) = v11;
    if ( !BYTE1(v10[0]) )
      ++gcfsCharSetTable;
    if ( !gbShellFontCompatible
      && !_wcsicmp((const wchar_t *)Str1, L"MS Shell Dlg")
      && !_wcsicmp((const wchar_t *)v10 + 1, L"Microsoft Sans Serif") )
    {
      gbShellFontCompatible = 1;
    }
    return 0LL;
  }
  return 3221225495LL;
}
