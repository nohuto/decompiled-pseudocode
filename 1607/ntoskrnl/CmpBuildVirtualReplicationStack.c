/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x1406008BC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v8; // rdi
  unsigned int v9; // r10d
  __int64 result; // rax
  size_t v11; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  __int64 v14; // r8
  _WORD *v15; // rdx
  __int16 v16; // cx
  _WORD *v17; // rdx
  __int16 v18; // cx
  __int64 v19; // r9
  __int16 v20; // ax

  v5 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  *a4 = 0LL;
  v8 = a1;
  v9 = 48 * v5;
  if ( (unsigned __int64)(48 * v5) > 0xFFFFFFFF )
    return 3221225621LL;
  v11 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20204D43u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v11);
  LODWORD(v14) = 4;
  v15 = *(_WORD **)(a2 + 8);
  v16 = *(_OWORD *)a2;
  while ( 1 )
  {
    if ( *v15 == 92 )
    {
      LODWORD(v14) = v14 - 1;
      if ( !(_DWORD)v14 )
        break;
    }
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
    v19 = 6LL * (unsigned int)v14;
    *(_QWORD *)&v13[12 * (unsigned int)v14 + 2] = v17;
    do
    {
      if ( *v17 == 92 )
        break;
      LOWORD(v13[12 * (unsigned int)v14]) += 2;
      ++v17;
      v18 -= 2;
    }
    while ( v18 );
    v20 = v13[12 * (unsigned int)v14];
    LODWORD(v14) = v14 + 1;
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
  while ( (unsigned int)v14 > 1 )
  {
    if ( !v8 )
      goto LABEL_23;
    v14 = (unsigned int)(v14 - 1);
    v13[12 * v14 + 10] = *(_DWORD *)(v8 + 32) >> 31;
    v8 = *(_QWORD *)(v8 + 64);
  }
  v13[10] = 0;
  result = 0LL;
  *a4 = v13;
  return result;
}
