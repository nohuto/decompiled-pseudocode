/*
 * XREFs of ApiSetpSearchForApiSet @ 0x180015D10
 * Callers:
 *     ApiSetResolveToHost @ 0x180015BEC (ApiSetResolveToHost.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800195A0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  __int64 v4; // rdi
  unsigned int v7; // r11d
  const WCHAR *v8; // r9
  __int64 v9; // r10
  WCHAR v10; // ax
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r9
  unsigned int v15; // eax

  v4 = 0LL;
  v7 = 0;
  v8 = a2;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      v10 = *v8;
      if ( (unsigned __int16)(*v8 - 65) <= 0x19u )
        v10 += 32;
      ++v8;
      v7 = v7 * a1[6] + v10;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0;
  v12 = a1[3] - 1;
  if ( v12 < 0 )
    return v4;
  while ( 1 )
  {
    v13 = (v12 + v11) >> 1;
    v14 = (unsigned int)a1[5] + 8LL * v13;
    v15 = *(_DWORD *)((char *)a1 + v14);
    if ( v7 < v15 )
    {
      v12 = v13 - 1;
      goto LABEL_10;
    }
    if ( v7 <= v15 )
      break;
    v11 = v13 + 1;
LABEL_10:
    if ( v11 > v12 )
      return v4;
  }
  v4 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v14 + 4)] + (unsigned int)a1[4];
  if ( !v4
    || !RtlCompareUnicodeStrings(
          a2,
          a3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v4 + 4)),
          (unsigned __int64)*(unsigned int *)(v4 + 12) >> 1,
          1u) )
  {
    return v4;
  }
  return 0LL;
}
