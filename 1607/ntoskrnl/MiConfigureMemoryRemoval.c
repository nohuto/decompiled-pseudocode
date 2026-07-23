/*
 * XREFs of MiConfigureMemoryRemoval @ 0x14065801C
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiConfigureMemoryRemoval(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  char v3; // bl
  unsigned int *v5; // rdi
  unsigned __int64 v6; // r15
  _QWORD *v7; // r12
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r9
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  SIZE_T v16; // rdx
  _QWORD *PoolWithTag; // rax
  char *v19; // rdx
  unsigned __int64 *v20; // r11
  __int64 v21; // r9
  __int64 v22; // r8
  _WORD *v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r10

  v3 = 0;
  *a1 = 0LL;
  if ( *a3 )
    v5 = &a2[4 * *a2 + 4];
  else
    v5 = 0LL;
  v6 = a3[2];
  v7 = a2 + 6;
  v8 = a2 + 6;
  v9 = v6 + a3[3];
  v10 = a3[3];
  v11 = 0LL;
  v12 = -2LL;
  while ( 1 )
  {
    v13 = *(v8 - 1);
    v14 = v13 + *v8;
    if ( v6 >= v13 && v9 <= v14 )
      break;
    ++v11;
    v8 += 2;
    if ( v11 == *a2 )
      goto LABEL_15;
  }
  if ( v6 != v13 )
  {
    if ( v9 != v14 )
    {
      v12 = 1LL;
      goto LABEL_15;
    }
LABEL_14:
    v12 = 0LL;
    goto LABEL_15;
  }
  if ( v9 != v14 )
    goto LABEL_14;
  v12 = -1LL;
LABEL_15:
  v15 = *a2;
  v16 = 16 * (v12 + (unsigned int)(v15 - 1) + 3LL);
  if ( v5 )
    v16 += 2 * (v12 + v15);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x20206D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = 1LL;
  *PoolWithTag = MiSystemPartition;
  v19 = (char *)(PoolWithTag + 4);
  v20 = (unsigned __int64 *)(a2 + 4);
  v21 = 0LL;
  v22 = (unsigned int)v12 + *a2 + 1LL;
  *((_DWORD *)PoolWithTag + 4) = v12 + *a2;
  v23 = &PoolWithTag[2 * v22 + 2];
  PoolWithTag[3] = *((_QWORD *)a2 + 1) - v10;
  do
  {
    v24 = *v20;
    v25 = *v20 + *v7;
    if ( (v3 & 1) != 0 || v6 < v24 || v9 > v25 )
    {
      *(_OWORD *)v19 = *(_OWORD *)v20;
      goto LABEL_32;
    }
    v3 |= 1u;
    if ( v6 == v24 )
    {
      if ( v9 == v25 )
        goto LABEL_34;
      *(_QWORD *)v19 = v24 + v10;
LABEL_26:
      *((_QWORD *)v19 + 1) = *v7 - v10;
LABEL_32:
      v19 += 16;
      if ( v5 )
        *v23++ = *((_WORD *)v5 + v21);
      goto LABEL_34;
    }
    *(_QWORD *)v19 = v24;
    if ( v9 == v25 )
      goto LABEL_26;
    *((_QWORD *)v19 + 1) = v6 - v24;
    if ( v5 )
    {
      *v23 = *((_WORD *)v5 + v21);
      v23[1] = *((_WORD *)v5 + v21);
      v23 += 2;
    }
    *((_QWORD *)v19 + 2) = v9;
    *((_QWORD *)v19 + 3) = v25 - v9;
    v19 += 32;
LABEL_34:
    ++v21;
    v7 += 2;
    v20 += 2;
  }
  while ( v21 != *a2 );
  *a1 = PoolWithTag + 2;
  return 0LL;
}
