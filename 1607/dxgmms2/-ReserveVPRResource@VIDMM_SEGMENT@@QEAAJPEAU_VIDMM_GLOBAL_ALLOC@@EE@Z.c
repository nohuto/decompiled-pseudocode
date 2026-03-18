/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C0099EEC
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0064640 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00982BC (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C009A998 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C009EDFC (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C009F8AC (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r15
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  unsigned int v18; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v20; // [rsp+B8h] [rbp+10h]

  v4 = *((_QWORD *)this + 51);
  v6 = *((_QWORD *)this + 52);
  v18 = *((_DWORD *)a2 + 8);
  v20 = *((_QWORD *)a2 + 2);
  LODWORD(v10) = VIDMM_LINEAR_POOL::Allocate(
                   *((VIDMM_LINEAR_POOL **)this + 18),
                   v20,
                   v18,
                   0LL,
                   v4,
                   v6,
                   a3,
                   a4,
                   a2,
                   (union _LARGE_INTEGER *)a2 + 27,
                   (void **)a2 + 26);
  if ( (int)v10 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v20, *((unsigned int *)a2 + 8));
    LODWORD(v10) = VIDMM_LINEAR_POOL::Allocate(
                     *((VIDMM_LINEAR_POOL **)this + 18),
                     v20,
                     v18,
                     0LL,
                     v4,
                     v6,
                     a3,
                     a4,
                     a2,
                     (union _LARGE_INTEGER *)a2 + 27,
                     (void **)a2 + 26);
    if ( (int)v10 < 0 )
    {
      if ( *((_QWORD *)this + 54) + v20 < (unsigned __int64)(unsigned int)dword_1C0035418
                                        * *((_QWORD *)this + 53)
                                        / (unsigned int)dword_1C003541C )
      {
        v13 = v4;
        v19 = 0;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2040LL)
                        + 48LL * *((unsigned int *)this + 93)
                        + 16) & 4) != 0 )
        {
          VIDMM_LINEAR_POOL::DefragmentRange(*((_QWORD *)this + 18));
          v14 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 18),
                  v20,
                  v18,
                  0LL,
                  v4,
                  v6,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 27,
                  (void **)a2 + 26);
          v13 = v4;
          LODWORD(v10) = v14;
          v19 = 1;
        }
        if ( (int)v10 < 0 )
        {
          v15 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v13, a2, a3, a4);
          v10 = v15;
          if ( v15 < 0 && !v19 )
            goto LABEL_13;
        }
      }
      else
      {
        LODWORD(v10) = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 51), a2, a3, a4);
        if ( (int)v10 < 0
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2040LL)
                        + 48LL * *((unsigned int *)this + 93)
                        + 16) & 4) != 0 )
        {
          VIDMM_LINEAR_POOL::DefragmentRange(*((_QWORD *)this + 18));
          v11 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 18),
                  v20,
                  v18,
                  0LL,
                  v4,
                  v6,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 27,
                  (void **)a2 + 26);
          v10 = v11;
          if ( v11 < 0 )
          {
LABEL_13:
            v16 = WdLogNewEntry5_WdWarning(v12);
            *(_QWORD *)(v16 + 24) = v10;
            WdLogEvent5_WdWarning(v16);
            VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 18), v4, v6, 1LL);
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
