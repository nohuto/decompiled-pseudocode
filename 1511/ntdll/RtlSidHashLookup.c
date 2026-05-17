/*
 * XREFs of RtlSidHashLookup @ 0x180077AD0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1800992D0 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r15
  __int16 v6; // r8
  unsigned int v7; // r9d
  unsigned __int64 i; // rbx
  int v9; // ebp
  int v10; // r12d
  const void **v11; // r14
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  __int64 v15; // r14
  const void **v16; // rdi
  unsigned int v17; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = 0;
  v6 = *(_WORD *)a2;
  v7 = 4 * v4 + 8;
  v17 = v7;
  for ( i = *(_QWORD *)(a1 + 8LL * (a2[4 * v4 + 4] & 0xF) + 16) & *(_QWORD *)(a1
                                                                            + 8
                                                                            * ((unsigned __int64)a2[4 * v4 + 4] >> 4)
                                                                            + 144); i; i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      do
      {
        v10 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v9];
        v11 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (v10 + (unsigned int)v5));
        if ( *(_WORD *)*v11 == v6 )
        {
          if ( !memcmp(a2, *v11, v7) )
            return v11;
          v6 = *(_WORD *)a2;
          v7 = v17;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v10);
      }
      while ( (_BYTE)v9 );
    }
    v5 += 8;
  }
  v12 = *(_DWORD *)a1;
  v13 = 64;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v16 = (const void **)(v15 + 16LL * v13);
    if ( *(_WORD *)*v16 != v6 )
      goto LABEL_17;
    if ( !memcmp(a2, *v16, v7) )
      return (const void **)(v15 + 16LL * v13);
    v6 = *(_WORD *)a2;
LABEL_17:
    if ( ++v13 >= v12 )
      return 0LL;
    v7 = v17;
  }
}
