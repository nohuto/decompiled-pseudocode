/*
 * XREFs of SmpConfigureSubSystems @ 0x1400089A0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140008AA8 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureSubSystems(wchar_t *Str1, int a2, __int64 a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edi

  v6 = 0;
  if ( a2 != 7 )
  {
    if ( _wcsicmp(Str1, L"Kmode") )
    {
      if ( _wcsicmp(Str1, L"Required") && _wcsicmp(Str1, L"Optional") )
        return (unsigned int)SmpSaveRegistryValue(a6 + 2, Str1, a3, 1LL, 0LL);
    }
    else if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v6 = SmpSaveRegistryValue(a6 + 6, a3, 0LL, 1LL, 0LL);
      if ( v6 >= 0 )
      {
        ++*a6;
        a6[1] += a4 + 2;
      }
    }
  }
  return (unsigned int)v6;
}
