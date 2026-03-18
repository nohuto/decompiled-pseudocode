/*
 * XREFs of ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0067B40
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C006A838 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 * Callees:
 *     Template_q @ 0x1C0007190 (Template_q.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::LockUnlock(PMDL *this, void *a2, struct _MDL *a3, struct _MDL *a4)
{
  struct _MDL *Mdl; // rax
  __int64 v8; // rcx
  struct _MDL *v9; // rbx
  __int64 v10; // rax

  Mdl = IoAllocateMdl(a2, (int)a4 - (int)a3, 0, 0, 0LL);
  v9 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    MmUnlockPages(*this);
    IoFreeMdl(*this);
    *this = v9;
    this[1] = a3;
    this[2] = a4;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 5066LL;
    WdLogEvent5_WdLowResource(v10);
    return 3223191809LL;
  }
}
