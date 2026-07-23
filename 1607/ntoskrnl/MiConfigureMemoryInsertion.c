/*
 * XREFs of MiConfigureMemoryInsertion @ 0x140657CE0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryInsertion(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v5; // r14
  unsigned __int64 v7; // r14
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 *v16; // r9
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r11
  SIZE_T v20; // rdx
  _QWORD *PoolWithTag; // rax
  char *v22; // r14
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rsi
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r15
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 *v32; // r10
  int v33; // r9d
  unsigned __int64 v35; // [rsp+78h] [rbp+10h]
  __int64 v36; // [rsp+80h] [rbp+18h]
  unsigned __int64 v37; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a3 + 16);
  v5 = *(_QWORD *)(a3 + 24);
  *a1 = 0LL;
  v7 = v3 + v5;
  v37 = v7;
  if ( *(_QWORD *)a3 )
    v8 = &a2[4 * *a2 + 4];
  else
    v8 = 0LL;
  v9 = *a2 + 1;
  if ( (unsigned int)v9 < *a2 )
    return 3221225626LL;
  v11 = *a2;
  v12 = 16 * (*a2 - 1 + 3LL);
  if ( v8 )
  {
    if ( (unsigned __int64)(-1 - v12) >> 1 < (unsigned int)v9 )
      return 3221225626LL;
    v12 += 2 * v9;
  }
  v13 = 0LL;
  v14 = a2 + 6;
  v15 = 0LL;
  v16 = (unsigned __int64 *)(a2 + 4);
  v17 = 1LL;
  v36 = 1LL;
  do
  {
    v18 = *v16;
    if ( *v14 )
    {
      v19 = *v14 + v18;
      if ( v3 >= v18 )
      {
        if ( v3 < v19 )
          return 3221225496LL;
      }
      else if ( v7 > v18 )
      {
        return 3221225496LL;
      }
      if ( (v3 == v19 || v7 == v18)
        && (!v8 || *((_BYTE *)v8 + 2 * v13) == *(_BYTE *)(a3 + 32)
                && *((_BYTE *)v8 + 2 * v13 + 1) == *(_BYTE *)(a3 + 33)) )
      {
        if ( v17 == 1 )
        {
          v15 = v13;
          v17 = 0LL;
        }
        else
        {
          v17 = -1LL;
        }
        v36 = v17;
      }
    }
    ++v13;
    v16 += 2;
    v14 += 2;
  }
  while ( v13 < v11 );
  v20 = 16 * v17 + v12;
  if ( v8 )
    v20 += 2 * (v11 + v17);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v22 = (char *)(PoolWithTag + 2);
  PoolWithTag[1] = 1LL;
  *PoolWithTag = MiSystemPartition;
  v23 = v37 - v3;
  v35 = v37 - v3;
  *((_DWORD *)PoolWithTag + 4) = v17 + v11;
  v24 = &PoolWithTag[2 * (unsigned int)(v17 + v11) + 4];
  PoolWithTag[3] = v37 - v3 + *((_QWORD *)a2 + 1);
  v25 = PoolWithTag + 4;
  if ( v36 == -1 )
  {
    memmove(v25, a2 + 4, 16 * v15 + 16);
    if ( v8 )
      memmove(v24, v8, 2 * v15 + 2);
    *(_QWORD *)&v22[16 * v15 + 24] += v35 + *(_QWORD *)&a2[4 * v15 + 10];
    v26 = v15 + 2;
    if ( v15 + 2 != v11 )
    {
      v27 = v11 - v15;
      memmove(&v22[16 * v26], &a2[4 * v15 + 12], 16 * v27 - 32);
      if ( v8 )
        memmove(&v24[2 * v15 + 2], (char *)v8 + 2 * v26, 2 * v27 - 4);
    }
  }
  else if ( v36 )
  {
    v31 = 0LL;
    v32 = (unsigned __int64 *)(a2 + 4);
    v33 = 0;
    do
    {
      if ( !v33 && v37 <= *v32 )
      {
        *v25 = v3;
        v25[1] = v23;
        v25 += 2;
        if ( v8 )
        {
          v24[1] = *(_BYTE *)(a3 + 33);
          *v24 = *(_BYTE *)(a3 + 32);
          v24 += 2;
        }
        v33 = 1;
      }
      *(_OWORD *)v25 = *(_OWORD *)v32;
      v25 += 2;
      if ( v8 )
      {
        *(_WORD *)v24 = *((_WORD *)v8 + v31);
        v24 += 2;
      }
      ++v31;
      v32 += 2;
    }
    while ( v31 != *a2 );
    if ( !v33 )
    {
      *v25 = v3;
      v25[1] = v23;
      if ( v8 )
      {
        v24[1] = *(_BYTE *)(a3 + 33);
        *v24 = *(_BYTE *)(a3 + 32);
      }
    }
  }
  else
  {
    memmove(v25, a2 + 4, 16 * v11);
    if ( v8 )
      memmove(v24, v8, 2 * v11);
    v28 = 2 * v15;
    v29 = *(_QWORD *)&a2[2 * v28 + 4];
    v30 = *(_QWORD *)&a2[2 * v28 + 6];
    *(_QWORD *)&v22[8 * v28 + 24] += v35;
    if ( v3 != v29 + v30 )
      *(_QWORD *)&v22[8 * v28 + 16] = v3;
  }
  *a1 = v22;
  return 0LL;
}
