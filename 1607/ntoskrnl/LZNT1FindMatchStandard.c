/*
 * XREFs of LZNT1FindMatchStandard @ 0x1403C8C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v2; // r15
  int v4; // r12d
  int v5; // r13d
  unsigned __int64 v7; // r10
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int8 **v11; // rcx
  unsigned __int8 *v12; // rdi
  __int64 result; // rax
  unsigned __int8 *v14; // rsi
  unsigned int v15; // r11d
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  unsigned __int8 **v18; // [rsp+40h] [rbp+10h]

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 16);
  v9 = *(_QWORD *)a2;
  v10 = ((-24993 * (v5 ^ (16 * (v4 ^ (16 * *a1))))) >> 4) & 0xFFF;
  v18 = (unsigned __int8 **)(a2 + 16 * (v10 + 2));
  v11 = (unsigned __int8 **)(a2 + 16LL * (unsigned int)v10 + 40);
  v12 = *v18;
  result = 0LL;
  v14 = *v11;
  v15 = 3;
  if ( (unsigned __int64)*v18 >= *(_QWORD *)a2 && v12 < a1 && *v12 == v2 && v12[1] == (_BYTE)v4 && v12[2] == (_BYTE)v5 )
  {
    result = 3LL;
    if ( v8 > 3 )
    {
      v16 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[(unsigned int)result] >= v7 )
          break;
        if ( *v16 != v16[v12 - a1] )
          break;
        result = (unsigned int)(result + 1);
        ++v16;
      }
      while ( (unsigned int)result < v8 );
    }
  }
  if ( (unsigned __int64)v14 < v9 || v14 >= a1 || *v14 != v2 || v14[1] != (_BYTE)v4 || v14[2] != (_BYTE)v5 )
    goto LABEL_12;
  if ( v8 > 3 )
  {
    v17 = a1 + 3;
    do
    {
      if ( (unsigned __int64)&a1[v15] >= v7 )
        break;
      if ( *v17 != v17[v14 - a1] )
        break;
      ++v15;
      ++v17;
    }
    while ( v15 < v8 );
  }
  if ( (unsigned int)result < v15 )
  {
    *v11 = v12;
    result = v15;
    *v18 = a1;
    *(_QWORD *)(a2 + 24) = v14;
  }
  else
  {
LABEL_12:
    *v11 = v12;
    *v18 = a1;
    *(_QWORD *)(a2 + 24) = v12;
  }
  return result;
}
