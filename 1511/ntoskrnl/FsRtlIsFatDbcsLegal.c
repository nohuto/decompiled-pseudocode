/*
 * XREFs of FsRtlIsFatDbcsLegal @ 0x1404AD4C8
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x1404AD4C8 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     FsRtlIsFatDbcsLegal @ 0x1404AD4C8 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlDissectDbcs @ 0x1405F48D4 (FsRtlDissectDbcs.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x1405F49A8 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsFatDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // cx
  char v7; // di
  char *v8; // rax
  unsigned __int16 v9; // ax
  unsigned int v10; // r8d
  char *v11; // rbx
  unsigned __int8 v12; // r9
  __int64 v13; // rcx
  char v15; // dl
  char *Buffer; // rdx
  __m128i v17; // xmm1
  __int16 v18; // ax
  unsigned int i; // ecx
  unsigned __int8 v20; // dl
  _STRING RemainingName; // [rsp+20h] [rbp-38h] BYREF
  ANSI_STRING Path; // [rsp+30h] [rbp-28h] BYREF
  _STRING FirstName; // [rsp+40h] [rbp-18h] BYREF

  Length = DbcsName->Length;
  v7 = 0;
  if ( !Length )
    return 0;
  if ( WildCardsPermissible )
  {
    if ( Length == 1 )
    {
      v15 = *DbcsName->Buffer;
      if ( v15 == 46 || v15 == 34 )
        return 1;
    }
    if ( Length == 2 )
    {
      Buffer = DbcsName->Buffer;
      if ( *Buffer == 46 && Buffer[1] == 46 )
        return 1;
      if ( *Buffer == 34 && Buffer[1] == 34 )
        return 1;
    }
  }
  v8 = DbcsName->Buffer;
  if ( *v8 == 92 )
  {
    if ( !LeadingBackslashPermissible )
      return 0;
    if ( Length <= 1u )
      return 1;
    DbcsName->Buffer = v8 + 1;
    --DbcsName->MaximumLength;
    DbcsName->Length = Length - 1;
  }
  if ( !PathNamePermissible )
  {
    if ( WildCardsPermissible && FsRtlDoesDbcsContainWildCards(DbcsName) )
    {
      for ( i = 0; i < DbcsName->Length; ++i )
      {
        v20 = DbcsName->Buffer[i];
        if ( v20 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v20] )
        {
          ++i;
        }
        else if ( (v20 & 0x80u) == 0 && (byte_1402453B0[v20] & 9) == 0 )
        {
          return 0;
        }
      }
      return 1;
    }
    v9 = DbcsName->Length;
    if ( DbcsName->Length <= 0xCu )
    {
      v10 = 0;
      if ( !v9 )
        return 1;
      v11 = DbcsName->Buffer;
      do
      {
        v12 = v11[v10];
        if ( v12 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v12] )
        {
          if ( !v7 && v10 >= 7 || v10 == v9 - 1 )
            return 0;
          ++v10;
        }
        else
        {
          if ( (v12 & 0x80u) == 0
            && (((WildCardsPermissible != 0 ? 8 : 0) | 1) & byte_1402453B0[(unsigned __int8)v11[v10]]) == 0 )
          {
            return 0;
          }
          if ( v12 == 46 || v12 == 34 )
          {
            if ( !v10 || v7 || v9 - v10 - 1 > 3 || v11[v10 - 1] == 32 )
              return 0;
            v7 = 1;
          }
          if ( v10 >= 8 && !v7 )
            return 0;
        }
        ++v10;
      }
      while ( v10 < v9 );
      if ( v12 > 0x2Eu )
        return 1;
      v13 = 0x400500000000LL;
      if ( !_bittest64(&v13, v12) )
        return 1;
    }
    return 0;
  }
  v17 = *(__m128i *)DbcsName;
  v18 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
  RemainingName = *DbcsName;
  if ( v18 )
  {
    while ( *(_BYTE *)_mm_srli_si128(v17, 8).m128i_i8[0] != 92 )
    {
      Path = (ANSI_STRING)v17;
      FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
      Path = FirstName;
      if ( !FsRtlIsFatDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
        break;
      if ( !RemainingName.Length )
        return 1;
      v17 = (__m128i)RemainingName;
    }
    return 0;
  }
  return 1;
}
