/*
 * XREFs of RtlSidHashLookup @ 0x140123624
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140172AE0 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r15
  __int16 v6; // r8
  unsigned int v7; // r9d
  unsigned __int64 i; // rbx
  int v9; // ebp
  _SID_AND_ATTRIBUTES *SidAttr; // r13
  int v11; // ecx
  int v12; // r12d
  _SID_AND_ATTRIBUTES *v13; // r14
  unsigned int SidCount; // ebp
  unsigned int v16; // ebx
  _SID_AND_ATTRIBUTES *v17; // r14
  const void **p_Sid; // rdi
  __int16 v19; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = 0;
  v6 = *(_WORD *)Sid;
  v19 = *(_WORD *)Sid;
  v7 = 4 * v4 + 8;
  LODWORD(v4) = *((unsigned __int8 *)Sid + 4 * v4 + 4);
  v20 = v7;
  for ( i = SidAttrHash->Hash[v4 & 0xF] & SidAttrHash->Hash[((unsigned __int64)(unsigned int)v4 >> 4) + 16]; i; i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      SidAttr = SidAttrHash->SidAttr;
      v11 = v5;
      do
      {
        v12 = SidHashByteToIndexLookupTable[(unsigned __int8)v9];
        v13 = &SidAttr[v11 + v12];
        if ( *(_WORD *)v13->Sid == v6 )
        {
          if ( !memcmp(Sid, v13->Sid, v7) )
            return v13;
          v6 = v19;
          v7 = v20;
          v11 = v5;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v12);
      }
      while ( (_BYTE)v9 );
    }
    v5 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  v16 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  v17 = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&v17[v16].Sid;
    if ( *(_WORD *)*p_Sid != v6 )
      goto LABEL_18;
    if ( !memcmp(Sid, *p_Sid, v7) )
      return &v17[v16];
    v6 = v19;
LABEL_18:
    if ( ++v16 >= SidCount )
      return 0LL;
    v7 = v20;
  }
}
