/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D7AC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D8AC (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005BC3C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005BC70 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00693CC (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // r15
  char *v4; // rsi
  char v5; // r12
  char *v7; // rbp
  char *v8; // r14
  struct VIDMM_ALLOC *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]

  v2 = (char *)a2 + 296;
  v4 = (char *)*((_QWORD *)a2 + 37);
  v5 = 0;
  while ( v4 != v2 )
  {
    v7 = v4 - 16;
    v4 = *(char **)v4;
    v8 = *(char **)v7;
    while ( v8 != v7 )
    {
      v9 = (struct VIDMM_ALLOC *)(v8 - 40);
      v8 = *(char **)v8;
      if ( (*((_DWORD *)v9 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(this, v9);
      if ( (*((_DWORD *)v9 + 7) & 3) != 0 )
      {
        VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v9 + 1), v9, 1);
        this = (VIDMM_GLOBAL *)(*((_BYTE *)v9 + 25) & 1);
        if ( !((unsigned int)this | *((_DWORD *)v9 + 42)) )
        {
          LOBYTE(v10) = 1;
          VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v9 + 1), (__int64 ***)v9, v10, v11);
          v5 = 1;
        }
        _InterlockedDecrement((volatile signed __int32 *)a2 + 41);
      }
    }
    this = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 17);
    if ( this && !*((_DWORD *)a2 + 40) )
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
  return v5;
}
