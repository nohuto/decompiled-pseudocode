/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067B40
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067C40 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0052FAC (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0053060 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006143C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // r15
  char *v6; // rsi
  char v7; // r12
  char *v9; // rbp
  char *v10; // r14
  struct VIDMM_ALLOC *v11; // rbx
  int v12; // [rsp+20h] [rbp-38h]

  v4 = (char *)a2 + 288;
  v6 = (char *)*((_QWORD *)a2 + 36);
  v7 = 0;
  while ( v6 != v4 )
  {
    v9 = v6 - 16;
    v6 = *(char **)v6;
    v10 = *(char **)v9;
    while ( v10 != v9 )
    {
      v11 = (struct VIDMM_ALLOC *)(v10 - 40);
      v10 = *(char **)v10;
      if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(this, v11);
      if ( (*((_DWORD *)v11 + 7) & 3) != 0 )
      {
        LOBYTE(a3) = 1;
        VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v11 + 1), v11, a3, a4);
        this = (VIDMM_GLOBAL *)(*((_BYTE *)v11 + 25) & 1);
        if ( !((unsigned int)this | *((_DWORD *)v11 + 38)) )
        {
          VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v11 + 1), (__int64 **)v11, 1);
          v7 = 1;
        }
        _InterlockedDecrement((volatile signed __int32 *)a2 + 39);
      }
    }
    this = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 16);
    if ( this && !*((_DWORD *)a2 + 38) )
    {
      LOBYTE(v12) = 0;
      (*(void (__fastcall **)(VIDMM_GLOBAL *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
        this,
        a2,
        0LL,
        0LL,
        v12,
        0LL);
    }
  }
  return v7;
}
