/*
 * XREFs of KiOpIsPrefix @ 0x1400F2A20
 * Callers:
 *     KiOpDecode @ 0x1400F28F0 (KiOpDecode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpIsPrefix(__int64 a1, char a2, _BYTE *a3)
{
  int v3; // r10d
  __int64 v6; // rcx
  _BYTE *v7; // rax
  __int64 result; // rax
  int v9; // r8d
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx

  v3 = 0;
  if ( !*(_BYTE *)(a1 + 50) && (a2 & 0xF0) == 0x40 )
  {
    v9 = 2048;
    *(_BYTE *)(a1 + 56) = a2;
  }
  else
  {
    v6 = 0LL;
    v7 = KiOpPrefixTable;
    while ( *v7 != a2 )
    {
      v6 = (unsigned int)(v6 + 1);
      v7 += 12;
      if ( (unsigned int)v6 >= 0xB )
        goto LABEL_6;
    }
    v12 = 3 * v6;
    v9 = KiOpPrefixTable[v12 + 1];
    v3 = KiOpPrefixTable[v12 + 2];
    if ( !v9 )
    {
LABEL_6:
      *a3 = 0;
      return 0LL;
    }
  }
  v10 = *(_DWORD *)(a1 + 40);
  if ( (v10 & v9) != 0 )
    return 3221225501LL;
  v11 = *(_DWORD *)(a1 + 44);
  if ( (v11 & v3) != 0 )
    return 3221225501LL;
  *(_DWORD *)(a1 + 40) = v9 | v10;
  *(_DWORD *)(a1 + 44) = v3 | v11;
  result = 0LL;
  *a3 = 1;
  return result;
}
