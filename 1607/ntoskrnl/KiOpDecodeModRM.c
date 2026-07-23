/*
 * XREFs of KiOpDecodeModRM @ 0x1401DB0E4
 * Callers:
 *     KiOpDecode @ 0x1400F28F0 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchBytes @ 0x14009A358 (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpDecodeModRM(_BYTE *a1)
{
  __int64 result; // rax
  char v3; // al
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1[72] )
  {
    result = KiOpFetchBytes((__int64)a1, 1u, a1 + 57);
    if ( (int)result < 0 )
      return result;
    a1[72] = 1;
  }
  if ( (a1[57] & 0xC0) == 0xC0
    || (a1[57] & 7) != 4
    || (result = KiOpFetchBytes((__int64)a1, 1u, a1 + 58), (int)result >= 0) )
  {
    v3 = a1[57] >> 6;
    if ( !v3 && (a1[57] & 7) == 5 || v3 == 2 )
    {
      result = KiOpFetchBytes((__int64)a1, 4u, a1 + 60);
      if ( (int)result < 0 )
        return result;
    }
    else if ( v3 == 1 )
    {
      result = KiOpFetchBytes((__int64)a1, 1u, &v4);
      if ( (int)result < 0 )
        return result;
      *((_DWORD *)a1 + 15) = v4;
    }
    return 0LL;
  }
  return result;
}
