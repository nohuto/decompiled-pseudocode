/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x1405E1DAC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x140040CE8 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v8; // rdi
  unsigned int v9; // r10d
  __int64 result; // rax
  size_t v11; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // edx
  _WORD *v15; // r8
  __int16 v16; // cx
  _WORD *v17; // r8
  __int16 v18; // cx
  __int64 v19; // r9
  __int16 v20; // ax
  __int64 v21; // rdx

  v5 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  *a4 = 0LL;
  v8 = a1;
  v9 = 40 * v5;
  if ( (unsigned __int64)(40 * v5) > 0xFFFFFFFF )
    return 3221225621LL;
  v11 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v11);
  v14 = 4;
  v15 = *(_WORD **)(a2 + 8);
  v16 = *(_OWORD *)a2;
  while ( *v15 != 92 || --v14 )
  {
    v16 -= 2;
    if ( !v16 )
    {
LABEL_23:
      ExFreePoolWithTag(v13, 0);
      return 3221225485LL;
    }
    ++v15;
  }
  v17 = v15 + 1;
  v18 = v16 - 2;
  while ( v18 )
  {
    v19 = 5LL * v14;
    *(_QWORD *)&v13[10 * v14 + 2] = v17;
    do
    {
      if ( *v17 == 92 )
        break;
      LOWORD(v13[10 * v14]) += 2;
      ++v17;
      v18 -= 2;
    }
    while ( v18 );
    v20 = v13[10 * v14++];
    HIWORD(v13[2 * v19]) = v20;
    if ( !v18 )
      break;
    do
    {
      if ( *v17 != 92 )
        break;
      ++v17;
      v18 -= 2;
    }
    while ( v18 );
  }
  *a3 = v14;
  while ( v14 > 1 )
  {
    if ( !v8 )
      goto LABEL_23;
    v21 = v14 - 1;
    v13[10 * v21 + 9] = *(_DWORD *)(v8 + 40) >> 31;
    HvpGetCellContextReinitialize(&v13[10 * v21 + 6]);
    v8 = *(_QWORD *)(v8 + 72);
  }
  v13[9] = 0;
  HvpGetCellContextReinitialize(v13 + 6);
  result = 0LL;
  *a4 = v13;
  return result;
}
