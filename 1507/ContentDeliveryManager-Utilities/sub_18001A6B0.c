/*
 * XREFs of sub_18001A6B0 @ 0x18001A6B0
 * Callers:
 *     sub_18001FAD0 @ 0x18001FAD0 (sub_18001FAD0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_18001A6B0(__int64 a1, HSTRING *a2)
{
  HRESULT result; // eax
  const WCHAR *v4; // rcx
  __int64 v5; // rdx

  result = 0;
  *a2 = 0LL;
  v4 = *(const WCHAR **)(a1 + 192);
  if ( v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    return WindowsCreateString(v4, v5, a2);
  }
  return result;
}
