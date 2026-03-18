/*
 * XREFs of ApiSetpSearchForApiSet @ 0x140255A38
 * Callers:
 *     ApiSetResolveToHost @ 0x14034EAF0 (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  SIZE_T v3; // r11
  unsigned int v6; // r9d
  const WCHAR *v7; // r8
  int v8; // edi
  __int64 v9; // rbx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // edx
  int v15; // r8d
  char *v16; // rsi

  v3 = a3;
  v6 = 0;
  v7 = a2;
  if ( (_WORD)v3 )
  {
    v8 = a1[6];
    v9 = (unsigned int)v3;
    do
    {
      v10 = *v7++;
      v11 = v10 + 32;
      if ( (unsigned __int16)(v10 - 65) > 0x19u )
        v11 = v10;
      v6 = v11 + v8 * v6;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0LL;
  v13 = a1[3] - 1;
  v14 = 0;
  while ( v14 <= v13 )
  {
    v15 = (v14 + v13) >> 1;
    v16 = (char *)a1 + (unsigned int)a1[5];
    if ( v6 >= *(_DWORD *)&v16[8 * v15] )
    {
      if ( v6 <= *(_DWORD *)&v16[8 * v15] )
      {
        v12 = (__int64)&a1[6 * *(unsigned int *)&v16[8 * v15 + 4]] + (unsigned int)a1[4];
        if ( v12
          && RtlCompareUnicodeStrings(
               a2,
               v3,
               (PCWCH)((char *)a1 + *(unsigned int *)(v12 + 4)),
               (unsigned __int64)*(unsigned int *)(v12 + 12) >> 1,
               1u) )
        {
          return 0LL;
        }
        return v12;
      }
      v14 = v15 + 1;
    }
    else
    {
      v13 = v15 - 1;
    }
  }
  return v12;
}
