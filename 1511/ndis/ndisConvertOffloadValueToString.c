/*
 * XREFs of ndisConvertOffloadValueToString @ 0x1C00C00AC
 * Callers:
 *     ndisUpdateOffloadKeywords @ 0x1C00C2318 (ndisUpdateOffloadKeywords.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisConvertOffloadValueToString(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  const wchar_t *v5; // rdx

  result = 0LL;
  ndisLastOffloadSetting = a2;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 3221225485LL;
        v5 = L"3";
      }
      else
      {
        v5 = L"2";
      }
    }
    else
    {
      v5 = L"1";
    }
  }
  else
  {
    v5 = (const wchar_t *)L"0";
  }
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}
