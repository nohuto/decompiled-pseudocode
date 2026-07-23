/*
 * XREFs of CmpTransAllocateTrans @ 0x1404CFC84
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FC998 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpBindHiveToTrans @ 0x1403FDF4C (CmpBindHiveToTrans.c)
 */

__int64 __fastcall CmpTransAllocateTrans(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int128 v10; // xmm0
  unsigned __int64 v11; // rcx
  __int128 *v12; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xB0uLL, 0x72544D43u);
  v8 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    *(_QWORD *)(v8 + 56) = a1;
    *(_DWORD *)(v8 + 48) = 8;
    v9 = *(_DWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 104) = CLFS_LSN_INVALID_EXT;
    *(_QWORD *)(v8 + 64) = a3;
    if ( (a1 & 1) != 0 )
      v9 = 136;
    *(_DWORD *)(v8 + 48) = v9;
    if ( a2 )
    {
      v10 = *a2;
    }
    else
    {
      if ( (a1 & 1) != 0 )
      {
LABEL_12:
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        *(_QWORD *)(v8 + 24) = v8 + 16;
        *(_QWORD *)(v8 + 16) = v8 + 16;
        *(_QWORD *)(v8 + 40) = v8 + 32;
        *(_QWORD *)(v8 + 32) = v8 + 32;
        CmpBindHiveToTrans(a4, v8);
        return v8;
      }
      v11 = *(_QWORD *)(v8 + 56) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_QWORD *)(v8 + 56) & 1) != 0 )
        v12 = (__int128 *)(*(_QWORD *)(v11 + 16) + 176LL);
      else
        v12 = (__int128 *)(v11 + 176);
      v10 = *v12;
    }
    *(_OWORD *)(v8 + 88) = v10;
    goto LABEL_12;
  }
  return v8;
}
