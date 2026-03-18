/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064AA0
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00522BC (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00104B8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00657D0 (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_SEGMENT *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  char **v12; // rcx
  char *v13; // rdi
  char **v14; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( ((_DWORD)this[7] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[18], *((void **)a2 + 19));
  v6 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 17);
  *((_DWORD *)a2 + 32) = 2;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = VIDMM_SEGMENT::DriverId(v6);
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  v7 = *((unsigned int *)this + 93);
  v8 = *((_QWORD *)a2 + 2);
  this[26] = (VIDMM_LINEAR_POOL *)((char *)this[26] + v8);
  v9 = *((_QWORD *)this[1] + 5150) + 264 * v7;
  *(_QWORD *)(v9 + 8LL * *((int *)this + 117) + 232) += v8;
  ++*((_DWORD *)this + 78);
  if ( ((_DWORD)this[7] & 0x1001) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
      *((_QWORD *)a2 + 2));
  v10 = (char *)a2 + 400;
  v11 = *((_QWORD *)a2 + 50);
  v12 = (char **)*((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v11 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400) || *v12 != v10 )
    __fastfail(3u);
  *v12 = (char *)v11;
  v13 = (char *)(this + 19);
  *(_QWORD *)(v11 + 8) = v12;
  v14 = (char **)*((_QWORD *)v13 + 1);
  if ( *v14 != v13 )
    __fastfail(3u);
  *(_QWORD *)v10 = v13;
  *((_QWORD *)a2 + 51) = v14;
  *v14 = v10;
  *((_QWORD *)v13 + 1) = v10;
}
