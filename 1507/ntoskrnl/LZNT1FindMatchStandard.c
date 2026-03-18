/*
 * XREFs of LZNT1FindMatchStandard @ 0x1403EBD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(char *a1, __int64 a2)
{
  int v2; // r11d
  char v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r10
  unsigned int v7; // r9d
  int v8; // edx
  __int64 v9; // rax
  unsigned __int8 *v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 result; // rax
  __int64 v14; // r15
  unsigned int v15; // ebx
  unsigned __int64 v16; // rdi
  _BYTE *v17; // rdx
  _BYTE *v18; // rdx

  v2 = (unsigned __int8)a1[2];
  v4 = *a1;
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 16);
  v8 = (unsigned __int8)a1[1];
  v9 = ((-24993 * (v2 ^ (16 * (v8 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF;
  v10 = *(unsigned __int8 **)(a2 + 16LL * (unsigned int)v9 + 40);
  v11 = a2 + 16LL * (unsigned int)v9;
  v12 = v9 + 2;
  result = 0LL;
  v14 = 2 * v12;
  v15 = 3;
  v16 = *(_QWORD *)(a2 + 8 * v14);
  if ( v16 >= v5 && v16 < (unsigned __int64)a1 && *(_BYTE *)v16 == v4 && *(_WORD *)(v16 + 1) == __PAIR16__(v2, v8) )
  {
    result = 3LL;
    if ( v7 > 3 )
    {
      v17 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[(unsigned int)result] >= v6 )
          break;
        if ( *v17 != v17[v16 - (_QWORD)a1] )
          break;
        result = (unsigned int)(result + 1);
        ++v17;
      }
      while ( (unsigned int)result < v7 );
      LOBYTE(v8) = a1[1];
    }
  }
  if ( (unsigned __int64)v10 < v5
    || v10 >= (unsigned __int8 *)a1
    || *v10 != v4
    || v10[1] != (_BYTE)v8
    || v10[2] != (_BYTE)v2 )
  {
    goto LABEL_3;
  }
  if ( v7 > 3 )
  {
    v18 = a1 + 3;
    do
    {
      if ( (unsigned __int64)&a1[v15] >= v6 )
        break;
      if ( *v18 != v18[v10 - (unsigned __int8 *)a1] )
        break;
      ++v15;
      ++v18;
    }
    while ( v15 < v7 );
  }
  if ( (unsigned int)result < v15 )
  {
    *(_QWORD *)(v11 + 40) = v16;
    result = v15;
    *(_QWORD *)(a2 + 8 * v14) = a1;
    *(_QWORD *)(a2 + 24) = v10;
  }
  else
  {
LABEL_3:
    *(_QWORD *)(v11 + 40) = v16;
    *(_QWORD *)(a2 + 8 * v14) = a1;
    *(_QWORD *)(a2 + 24) = v16;
  }
  return result;
}
