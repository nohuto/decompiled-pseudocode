/*
 * XREFs of KiOpDecode @ 0x140023740
 * Callers:
 *     KiPreprocessFault @ 0x14002315C (KiPreprocessFault.c)
 * Callees:
 *     KiOpIsPrefix @ 0x140023894 (KiOpIsPrefix.c)
 *     KiOpLocateDecodeEntry @ 0x140023934 (KiOpLocateDecodeEntry.c)
 *     KiOpFetchBytes @ 0x1400E7EE8 (KiOpFetchBytes.c)
 *     KiOpDecodeModRM @ 0x1401426EC (KiOpDecodeModRM.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KiOpDecode(__int64 a1, __int64 a2, char a3, int a4, _DWORD *a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // r10
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+68h] [rbp+10h] BYREF
  char v18; // [rsp+70h] [rbp+18h] BYREF
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
    result = KiOpFetchBytes(v9, 1LL, &v18);
    if ( (int)result >= 0 )
    {
      LOBYTE(v12) = v18;
      result = KiOpIsPrefix(v9, v12, &v19);
      v13 = (unsigned int)result;
      if ( (int)result >= 0 )
        continue;
    }
    return result;
  }
  while ( v19 );
  if ( v18 != 15
    || (*((_BYTE *)v9 + 49) = 1, result = KiOpFetchBytes(v9, 1LL, &v18), v13 = (unsigned int)result, (int)result >= 0) )
  {
    *((_QWORD *)v9 + 4) = *((_QWORD *)v9 + 1) - 1LL;
    *((_BYTE *)v9 + 48) = v18;
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
    if ( (*(_DWORD *)(v14 + 12) & 4) == 0
      || (result = KiOpDecodeModRM(v9, v13), LODWORD(v13) = result, (int)result >= 0) )
    {
      if ( (*(_DWORD *)(v14 + 12) & 1) != 0 )
      {
        result = KiOpFetchBytes(v9, 1LL, &a5);
        LODWORD(v13) = result;
        if ( (int)result >= 0 )
        {
          v15 = (char)a5;
LABEL_27:
          *((_QWORD *)v9 + 8) = v15;
          return (unsigned int)v13;
        }
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 10) + 12LL) & 2) == 0 )
          return (unsigned int)v13;
        if ( (v9[10] & 0x40) != 0 )
        {
          result = KiOpFetchBytes(v9, 2LL, &v17);
          LODWORD(v13) = result;
          if ( (int)result >= 0 )
          {
            v15 = v17;
            goto LABEL_27;
          }
        }
        else
        {
          result = KiOpFetchBytes(v9, 4LL, v16);
          LODWORD(v13) = result;
          if ( (int)result >= 0 )
          {
            v15 = v16[0];
            goto LABEL_27;
          }
        }
      }
    }
  }
  return result;
}
