/*
 * XREFs of IopFillTriageDumpDataBlocks @ 0x1401C724C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401C5708 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

unsigned __int64 __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rsi
  char *v7; // rbx
  unsigned __int64 result; // rax
  _QWORD *v10; // r10
  __int64 v11; // r12
  _QWORD *v12; // rbp
  unsigned __int64 v13; // rcx
  const void *v14; // rdx
  char *v15; // r8
  size_t v16; // r8
  _QWORD *v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v4 = 0;
  v5 = (_QWORD *)(a4 + a1[30]);
  v7 = (char *)&v5[2 * a1[31]];
  v17 = v5;
  result = a2;
  v10 = v5;
  if ( a2 )
  {
    while ( 1 )
    {
      v18 = 0;
      v11 = *(_QWORD *)(a3 + 8);
      if ( *(_DWORD *)a3 )
        break;
LABEL_11:
      ++v4;
      a3 += 16LL;
      if ( v4 >= (unsigned int)result )
        return result;
    }
    v12 = v10 + 2;
    while ( 1 )
    {
      result = ((__int64)v12 - 16 - (__int64)v5) >> 4;
      if ( (unsigned int)result >= a1[31] )
        break;
      v13 = a4 + a1[1];
      if ( (unsigned __int64)v12 > v13 )
        break;
      v14 = *(const void **)v11;
      result = *(_QWORD *)(v11 + 8);
      if ( result < *(_QWORD *)v11 )
        break;
      result -= (unsigned __int64)v14;
      v15 = &v7[(unsigned int)result];
      if ( v15 < v7 || (unsigned __int64)v15 > v13 )
        break;
      *v10 = v14;
      *((_DWORD *)v12 - 2) = (_DWORD)v7 - a4;
      v16 = (unsigned int)(*(_DWORD *)(v11 + 8) - *(_DWORD *)v11);
      *((_DWORD *)v12 - 1) = v16;
      memmove(v7, *(const void **)v11, v16);
      v11 += 16LL;
      v7 += *((unsigned int *)v12 - 1);
      v10 = v17 + 2;
      a4 = v20;
      v12 += 2;
      v17 += 2;
      if ( (unsigned int)++v18 >= *(_DWORD *)a3 )
      {
        result = a2;
        goto LABEL_11;
      }
    }
  }
  return result;
}
