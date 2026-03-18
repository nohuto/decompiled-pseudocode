/*
 * XREFs of RtlSidHashLookup @ 0x14008A600
 * Callers:
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
 *     SepTokenIsOwner @ 0x14008A540 (SepTokenIsOwner.c)
 * Callees:
 *     memcmp @ 0x140144AB0 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  unsigned int v6; // r12d
  __int16 v7; // r15
  unsigned __int64 i; // rsi
  unsigned int v9; // esi
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // edx
  const void **v14; // r14
  unsigned int v15; // ebp
  __int64 v16; // r14
  const void **v17; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = 4 * v4 + 8;
  LODWORD(v4) = a2[4 * v4 + 4];
  v7 = *(_WORD *)a2;
  for ( i = *(_QWORD *)(a1 + 8 * (v4 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)v4 >> 4) + 144);
        i;
        i >>= 8 )
  {
    LOBYTE(v11) = i;
    if ( (_BYTE)i )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v19 = v12;
      v13 = v5;
      do
      {
        v18 = SidHashByteToIndexLookupTable[(unsigned __int8)v11];
        v14 = (const void **)(v12 + 16LL * (unsigned int)(v13 + v18));
        if ( *(_WORD *)*v14 == v7 )
        {
          if ( !memcmp(a2, *v14, v6) )
            return v14;
          v12 = v19;
          v13 = v5;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v18);
      }
      while ( (_BYTE)v11 );
    }
    v5 += 8;
  }
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v15 = 64;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v17 = (const void **)(v16 + 16LL * v15);
    if ( *(_WORD *)*v17 == v7 && !memcmp(a2, *v17, v6) )
      break;
    if ( ++v15 >= v9 )
      return 0LL;
  }
  return (const void **)(v16 + 16LL * v15);
}
