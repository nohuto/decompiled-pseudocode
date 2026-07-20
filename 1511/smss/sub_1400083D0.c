/*
 * XREFs of sub_1400083D0 @ 0x1400083D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400084D8 @ 0x1400084D8 (sub_1400084D8.c)
 */

__int64 __fastcall sub_1400083D0(wchar_t *Str1, int a2, __int64 a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edi

  v6 = 0;
  if ( a2 != 7 )
  {
    if ( wcsicmp(Str1, L"Kmode") )
    {
      if ( wcsicmp(Str1, L"Required") && wcsicmp(Str1, L"Optional") )
        return (unsigned int)sub_1400084D8(a6 + 2, Str1, a3, 1LL, 0LL);
    }
    else if ( (unsigned int)(a2 - 1) <= 1 )
    {
      v6 = sub_1400084D8(a6 + 6, a3, 0LL, 1LL, 0LL);
      if ( v6 >= 0 )
      {
        ++*a6;
        a6[1] += a4 + 2;
      }
    }
  }
  return (unsigned int)v6;
}
