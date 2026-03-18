/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004BD88
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E6E8 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059238 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00596FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059860 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // r15
  char *v4; // rsi
  char v5; // r12
  char *v6; // rbp
  char *v7; // r14
  struct VIDMM_ALLOC *v8; // rbx
  int v10; // [rsp+20h] [rbp-38h]

  v2 = (char *)a2 + 288;
  v4 = (char *)*((_QWORD *)a2 + 36);
  v5 = 0;
  while ( v4 != v2 )
  {
    v6 = v4 - 16;
    v4 = *(char **)v4;
    v7 = *(char **)v6;
    while ( v7 != v6 )
    {
      v8 = (struct VIDMM_ALLOC *)(v7 - 40);
      v7 = *(char **)v7;
      if ( (*((_DWORD *)v8 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(this, v8);
      if ( (*((_DWORD *)v8 + 7) & 3) != 0 )
      {
        VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v8 + 1), v8, 1);
        this = (VIDMM_GLOBAL *)(*((_BYTE *)v8 + 25) & 1);
        if ( !((unsigned int)this | *((_DWORD *)v8 + 38)) )
        {
          VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v8 + 1), v8, 1);
          v5 = 1;
        }
        _InterlockedDecrement((volatile signed __int32 *)a2 + 39);
      }
    }
    this = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 16);
    if ( this && !*((_DWORD *)a2 + 38) )
    {
      LOBYTE(v10) = 0;
      (*(void (__fastcall **)(VIDMM_GLOBAL *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
        this,
        a2,
        0LL,
        0LL,
        v10,
        0LL);
    }
  }
  return v5;
}
