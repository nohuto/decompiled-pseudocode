/*
 * XREFs of RtlSidHashLookup @ 0x140123624
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140172AE0 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r15
  __int16 v6; // r8
  unsigned int v7; // r9d
  unsigned __int64 i; // rbx
  int v9; // ebp
  __int64 v10; // r13
  int v11; // ecx
  int v12; // r12d
  const void **v13; // r14
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  __int64 v17; // r14
  const void **v18; // rdi
  __int16 v19; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = *(_WORD *)a2;
  v19 = *(_WORD *)a2;
  v7 = 4 * v4 + 8;
  LODWORD(v4) = a2[4 * v4 + 4];
  v20 = v7;
  for ( i = *(_QWORD *)(a1 + 8 * (v4 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)v4 >> 4) + 144);
        i;
        i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      v10 = *(_QWORD *)(a1 + 8);
      v11 = v5;
      do
      {
        v12 = SidHashByteToIndexLookupTable[(unsigned __int8)v9];
        v13 = (const void **)(v10 + 16LL * (unsigned int)(v11 + v12));
        if ( *(_WORD *)*v13 == v6 )
        {
          if ( !memcmp(a2, *v13, v7) )
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
  v15 = *(_DWORD *)a1;
  v16 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v17 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v18 = (const void **)(v17 + 16LL * v16);
    if ( *(_WORD *)*v18 != v6 )
      goto LABEL_18;
    if ( !memcmp(a2, *v18, v7) )
      return (const void **)(v17 + 16LL * v16);
    v6 = v19;
LABEL_18:
    if ( ++v16 >= v15 )
      return 0LL;
    v7 = v20;
  }
}
