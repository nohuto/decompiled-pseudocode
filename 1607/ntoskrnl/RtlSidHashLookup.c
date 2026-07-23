/*
 * XREFs of RtlSidHashLookup @ 0x140060E30
 * Callers:
 *     SepSidInTokenSidHash @ 0x140060D70 (SepSidInTokenSidHash.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  int v4; // eax
  unsigned __int8 v5; // bp
  unsigned int v6; // r12d
  __int16 v7; // r15
  unsigned __int64 i; // rsi
  unsigned int SidCount; // esi
  int v11; // r13d
  _SID_AND_ATTRIBUTES *SidAttr; // rcx
  int v13; // edx
  _SID_AND_ATTRIBUTES *v14; // r14
  unsigned int v15; // ebp
  _SID_AND_ATTRIBUTES *v16; // r14
  const void **p_Sid; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  _SID_AND_ATTRIBUTES *v19; // [rsp+70h] [rbp+18h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = 0;
  v6 = 4 * v4 + 8;
  v7 = *(_WORD *)Sid;
  for ( i = SidAttrHash->Hash[*((_BYTE *)Sid + 4 * v4 + 4) & 0xF] & SidAttrHash->Hash[(*((unsigned __int8 *)Sid
                                                                                       + 4 * v4
                                                                                       + 4) >> 4)
                                                                                    + 16]; i; i >>= 8 )
  {
    LOBYTE(v11) = i;
    if ( (_BYTE)i )
    {
      SidAttr = SidAttrHash->SidAttr;
      v19 = SidAttr;
      v13 = v5;
      do
      {
        v18 = SidHashByteToIndexLookupTable[(unsigned __int8)v11];
        v14 = &SidAttr[v13 + v18];
        if ( *(_WORD *)v14->Sid == v7 )
        {
          if ( !memcmp(Sid, v14->Sid, v6) )
            return v14;
          SidAttr = v19;
          v13 = v5;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v18);
      }
      while ( (_BYTE)v11 );
    }
    v5 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  v15 = 64;
  v16 = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&v16[v15].Sid;
    if ( *(_WORD *)*p_Sid == v7 && !memcmp(Sid, *p_Sid, v6) )
      break;
    if ( ++v15 >= SidCount )
      return 0LL;
  }
  return &v16[v15];
}
