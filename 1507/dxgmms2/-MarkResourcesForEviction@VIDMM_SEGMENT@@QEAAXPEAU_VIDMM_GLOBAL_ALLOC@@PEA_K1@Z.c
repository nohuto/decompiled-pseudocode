/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00702E8
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00506B0 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070A38 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C006FC98 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0076198 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  char **v12; // rax
  struct _VIDMM_POOL_BLOCK *v13; // rdx
  struct _VIDMM_POOL_BLOCK *v14; // rcx
  char *v15; // rdi
  struct _VIDMM_POOL_BLOCK *v16; // rcx

  if ( ((_DWORD)this[7] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[18], a2[18], a3, a4);
  v6 = (__int64)a2[2];
  *((_DWORD *)a2 + 30) = 1;
  VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, v6, (__int64)a3, (__int64)a4);
  --*((_DWORD *)this + 78);
  if ( ((_DWORD)this[7] & 0x1001) != 0 )
  {
    v10 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
            -(__int64)a2[2]);
    if ( v10 < (unsigned __int64)a2[2] )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10, v7, v8, v9);
      *(_QWORD *)(v11 + 24) = 1442LL;
      WdLogEvent5_WdAssertion(v11);
    }
  }
  v12 = (char **)(a2 + 48);
  v13 = a2[48];
  v14 = a2[49];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v13 + 1) != a2 + 48 || *(char ***)v14 != v12 )
    __fastfail(3u);
  *(_QWORD *)v14 = v13;
  v15 = (char *)(this + 21);
  *((_QWORD *)v13 + 1) = v14;
  v16 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v15 + 1);
  *v12 = v15;
  a2[49] = v16;
  if ( *(char **)v16 != v15 )
    __fastfail(3u);
  *(_QWORD *)v16 = v12;
  *((_QWORD *)v15 + 1) = v12;
}
