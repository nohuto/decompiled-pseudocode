/*
 * XREFs of ApiSetpSearchForApiSet @ 0x1C00719F4
 * Callers:
 *     ApiSetResolveToHost @ 0x1C007191C (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  unsigned int v4; // r10d
  const WCHAR *v7; // r11
  __int64 v8; // rbx
  WCHAR v9; // dx
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // r11
  unsigned int v15; // eax

  v4 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7;
      if ( (unsigned __int16)(*v7 - 65) <= 0x19u )
        v9 += 32;
      ++v7;
      v4 = v4 * a1[6] + v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0LL;
  v11 = 0;
  v12 = a1[3] - 1;
  if ( v12 < 0 )
    return v10;
  while ( 1 )
  {
    v13 = (v12 + v11) >> 1;
    v14 = (unsigned int)a1[5] + 8LL * v13;
    v15 = *(_DWORD *)((char *)a1 + v14);
    if ( v4 < v15 )
    {
      v12 = v13 - 1;
      goto LABEL_10;
    }
    if ( v4 <= v15 )
      break;
    v11 = v13 + 1;
LABEL_10:
    if ( v11 > v12 )
      return v10;
  }
  v10 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v14 + 4)] + (unsigned int)a1[4];
  if ( !v10
    || !RtlCompareUnicodeStrings(
          a2,
          a3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v10 + 4)),
          *(_DWORD *)(v10 + 12) >> 1,
          1u) )
  {
    return v10;
  }
  return 0LL;
}
