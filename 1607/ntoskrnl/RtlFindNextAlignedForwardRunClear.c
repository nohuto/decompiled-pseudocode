/*
 * XREFs of RtlFindNextAlignedForwardRunClear @ 0x1400871A4
 * Callers:
 *     EtwpFindUserBufferSpace @ 0x1404923D0 (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextAlignedForwardRunClear(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // r10d
  unsigned __int64 v9; // rbp
  _DWORD *i; // r9
  int v11; // ebx
  unsigned int v12; // r8d
  int v13; // ecx
  int v15; // ecx

  v3 = *a1;
  v6 = 0;
  v7 = 1;
  v8 = 1;
  do
    v8 |= 1 << v7++;
  while ( v7 < 0x20 );
  v9 = *((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)(v3 - 1) >> 5);
LABEL_4:
  for ( i = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * ((unsigned __int64)v6 >> 5)); (unsigned __int64)i <= v9; ++i )
  {
    v11 = *i | dword_14026D390[v6 & 0x1F];
    if ( (v8 & v11) != v8 )
    {
      v6 &= 0xFFFFFFE0;
      v12 = 0;
      while ( 1 )
      {
        if ( !_bittest(&v11, v12) )
        {
          v13 = 0;
          if ( v6 < v3 )
          {
            do
            {
              if ( _bittest64(*((const signed __int64 **)a1 + 1), v6) )
                break;
              ++v6;
              if ( ++v13 == a3 )
                return v6 - v13;
            }
            while ( v6 < v3 );
            if ( v13 )
            {
              v15 = v13 + 1;
              if ( v15 + v12 >= 0x20 )
              {
                ++v6;
                goto LABEL_4;
              }
              v12 = v15 + v12 - 1;
            }
          }
        }
        ++v6;
        if ( ++v12 >= 0x20 )
          goto LABEL_20;
      }
    }
    v6 += 32 - (v6 & 0x1F);
LABEL_20:
    ;
  }
  return 0xFFFFFFFFLL;
}
