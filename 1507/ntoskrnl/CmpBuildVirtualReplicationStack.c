/*
 * XREFs of CmpBuildVirtualReplicationStack @ 0x140657EBC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400CA874 (HvpGetCellContextReinitialize.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpBuildVirtualReplicationStack(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 result; // rax
  size_t v11; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // edx
  _WORD *v15; // r8
  __int16 v16; // cx
  _WORD *v17; // r8
  __int16 v18; // cx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx

  v4 = a1;
  v5 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  *a4 = 0LL;
  v6 = v5 << 6;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  v11 = (unsigned int)v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x20204D43u);
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
    v19 = (unsigned __int64)v14 << 6;
    *(_QWORD *)((char *)v13 + v19 + 8) = v17;
    do
    {
      if ( *v17 == 92 )
        break;
      *(_WORD *)((char *)v13 + v19) += 2;
      ++v17;
      v18 -= 2;
    }
    while ( v18 );
    ++v14;
    *(_WORD *)((char *)v13 + v19 + 2) = *(_WORD *)((char *)v13 + v19);
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
    if ( !v4 )
      goto LABEL_23;
    v20 = (unsigned __int64)(v14 - 1) << 6;
    *(_DWORD *)((char *)v13 + v20 + 56) = *(_DWORD *)(v4 + 40) >> 31;
    HvpGetCellContextReinitialize((_DWORD *)((char *)v13 + v20 + 24));
    v4 = *(_QWORD *)(v4 + 72);
  }
  v13[14] = 0;
  HvpGetCellContextReinitialize(v13 + 6);
  result = 0LL;
  *a4 = v13;
  return result;
}
