/*
 * XREFs of KiOpDecode @ 0x1400F28F0
 * Callers:
 *     KiPreprocessFault @ 0x1400F2138 (KiPreprocessFault.c)
 * Callees:
 *     KiOpFetchBytes @ 0x14009A358 (KiOpFetchBytes.c)
 *     KiOpIsPrefix @ 0x1400F2A20 (KiOpIsPrefix.c)
 *     KiOpLocateDecodeEntry @ 0x1400F2AC0 (KiOpLocateDecodeEntry.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiOpDecodeModRM @ 0x1401DB0E4 (KiOpDecodeModRM.c)
 */

__int64 __fastcall KiOpDecode(__int64 a1, __int64 a2, char a3, int a4, _DWORD *a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int8 v18; // [rsp+70h] [rbp+18h] BYREF
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v9 = a5;
  memset(a5, 0, 0x60uLL);
  v9[13] = a4;
  v10 = *(_QWORD *)(a2 + 248);
  *(_QWORD *)v9 = v10;
  *((_QWORD *)v9 + 1) = v10;
  *((_QWORD *)v9 + 3) = a1;
  *((_QWORD *)v9 + 2) = a2;
  *((_BYTE *)v9 + 73) = a3;
  *((_BYTE *)v9 + 89) = 0;
  if ( *(_WORD *)(a2 + 56) == 35 )
    *((_BYTE *)v9 + 50) = 1;
  do
  {
    result = KiOpFetchBytes((__int64)v9, 1u, &v18);
    if ( (int)result >= 0 )
    {
      v12 = v18;
      result = KiOpIsPrefix(v9, v18, &v19);
      v13 = (unsigned int)result;
      if ( (int)result >= 0 )
        continue;
    }
    return result;
  }
  while ( v19 );
  if ( v12 == 15 )
  {
    *((_BYTE *)v9 + 49) = 1;
    result = KiOpFetchBytes((__int64)v9, 1u, &v18);
    v13 = (unsigned int)result;
    if ( (int)result < 0 )
      return result;
    v12 = v18;
  }
  *((_QWORD *)v9 + 4) = *((_QWORD *)v9 + 1) - 1LL;
  *((_BYTE *)v9 + 48) = v12;
  if ( (a4 & 0x8000000) != 0 )
  {
    *((_QWORD *)v9 + 10) = 0LL;
  }
  else
  {
    result = KiOpLocateDecodeEntry(v9, v13);
    v13 = (unsigned int)result;
    if ( (int)result < 0 )
      return result;
  }
  v14 = *((_QWORD *)v9 + 10);
  if ( !v14 )
    return 0LL;
  if ( (*(_DWORD *)(v14 + 12) & 4) == 0 || (result = KiOpDecodeModRM(v9, v13), LODWORD(v13) = result, (int)result >= 0) )
  {
    if ( (*(_DWORD *)(v14 + 12) & 1) != 0 )
    {
      result = KiOpFetchBytes((__int64)v9, 1u, &a5);
      LODWORD(v13) = result;
      if ( (int)result < 0 )
        return result;
      v15 = (char)a5;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)v9 + 10) + 12LL) & 2) == 0 )
        return (unsigned int)v13;
      if ( (v9[10] & 0x40) != 0 )
      {
        result = KiOpFetchBytes((__int64)v9, 2u, &v17);
        LODWORD(v13) = result;
        if ( (int)result < 0 )
          return result;
        v15 = v17;
      }
      else
      {
        result = KiOpFetchBytes((__int64)v9, 4u, v16);
        LODWORD(v13) = result;
        if ( (int)result < 0 )
          return result;
        v15 = v16[0];
      }
    }
    *((_QWORD *)v9 + 8) = v15;
    return (unsigned int)v13;
  }
  return result;
}
