/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0064BC8
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0052154 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00999EC (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z @ 0x1C0064374 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAX_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0065840 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  char **v11; // rax
  struct _VIDMM_POOL_BLOCK *v12; // rdx
  struct _VIDMM_POOL_BLOCK *v13; // rcx
  char *v14; // rdi
  struct _VIDMM_POOL_BLOCK *v15; // rcx
  __int64 v16; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( ((_DWORD)this[7] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[18], a2[19], a3, a4);
  v8 = (__int64)a2[2];
  *((_DWORD *)a2 + 32) = 1;
  VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, v8);
  --*((_DWORD *)this + 78);
  if ( ((_DWORD)this[7] & 0x1001) != 0 )
  {
    v10 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
            -(__int64)a2[2]);
    if ( v10 < (unsigned __int64)a2[2] )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v16 + 24) = 1947LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  v11 = (char **)(a2 + 50);
  v12 = a2[50];
  v13 = a2[51];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v12 + 1) != a2 + 50 || *(char ***)v13 != v11 )
    __fastfail(3u);
  *(_QWORD *)v13 = v12;
  v14 = (char *)(this + 21);
  *((_QWORD *)v12 + 1) = v13;
  v15 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v14 + 1);
  if ( *(char **)v15 != v14 )
    __fastfail(3u);
  *v11 = v14;
  a2[51] = v15;
  *(_QWORD *)v15 = v11;
  *((_QWORD *)v14 + 1) = v11;
}
