/*
 * XREFs of KiOpDecodeModRM @ 0x1401426EC
 * Callers:
 *     KiOpDecode @ 0x140023740 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchBytes @ 0x1400E7EE8 (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpDecodeModRM(_BYTE *a1)
{
  char v2; // al
  __int64 result; // rax
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
    v2 = a1[57] >> 6;
    if ( !v2 && (a1[57] & 7) == 5 || v2 == 2 )
    {
      result = KiOpFetchBytes((__int64)a1, 4u, a1 + 60);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      if ( v2 != 1 )
        return 0LL;
      result = KiOpFetchBytes((__int64)a1, 1u, &v4);
      if ( (int)result >= 0 )
      {
        *((_DWORD *)a1 + 15) = v4;
        return 0LL;
      }
    }
  }
  return result;
}
