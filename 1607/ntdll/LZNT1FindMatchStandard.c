/*
 * XREFs of LZNT1FindMatchStandard @ 0x18008E8C0
 * Callers:
 *     LZNT1CompressChunk @ 0x18008E5E0 (LZNT1CompressChunk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(char *a1, __int64 a2)
{
  char v2; // r15
  int v4; // r12d
  int v5; // r13d
  unsigned int v6; // r11d
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int8 *v9; // r10
  unsigned __int64 v10; // r8
  unsigned int v11; // edx
  __int64 result; // rax
  _BYTE *v13; // rbx
  _BYTE *v14; // rbx

  v2 = *a1;
  v4 = (unsigned __int8)a1[1];
  v5 = (unsigned __int8)a1[2];
  v6 = 0;
  v7 = ((-24993 * (v5 ^ (16 * (v4 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF;
  v8 = 2 * (v7 + 2);
  v9 = *(unsigned __int8 **)(a2 + 16 * v7 + 40);
  v10 = *(_QWORD *)(a2 + 16 * (v7 + 2));
  v11 = 3;
  if ( v10 >= *(_QWORD *)a2
    && v10 < (unsigned __int64)a1
    && *(_BYTE *)v10 == v2
    && *(_WORD *)(v10 + 1) == __PAIR16__(v5, v4) )
  {
    v6 = 3;
    if ( *(_DWORD *)(a2 + 16) > 3u )
    {
      v13 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v6] >= *(_QWORD *)(a2 + 8) )
          break;
        if ( *v13 != v13[v10 - (_QWORD)a1] )
          break;
        ++v6;
        ++v13;
      }
      while ( v6 < *(_DWORD *)(a2 + 16) );
    }
  }
  if ( (unsigned __int64)v9 < *(_QWORD *)a2
    || v9 >= (unsigned __int8 *)a1
    || *v9 != v2
    || v9[1] != (_BYTE)v4
    || v9[2] != (_BYTE)v5 )
  {
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a2 + 16) > 3u )
  {
    v14 = a1 + 3;
    do
    {
      if ( (unsigned __int64)&a1[v11] >= *(_QWORD *)(a2 + 8) )
        break;
      if ( *v14 != v14[v9 - (unsigned __int8 *)a1] )
        break;
      ++v11;
      ++v14;
    }
    while ( v11 < *(_DWORD *)(a2 + 16) );
  }
  if ( v6 < v11 )
  {
    *(_QWORD *)(a2 + 16LL * (((-24993 * (v5 ^ (16 * (v4 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF) + 40) = v10;
    result = v11;
    *(_QWORD *)(a2 + 8 * v8) = a1;
    *(_QWORD *)(a2 + 24) = v9;
  }
  else
  {
LABEL_3:
    *(_QWORD *)(a2 + 16LL * (((-24993 * (v5 ^ (16 * (v4 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF) + 40) = v10;
    result = v6;
    *(_QWORD *)(a2 + 8 * v8) = a1;
    *(_QWORD *)(a2 + 24) = v10;
  }
  return result;
}
