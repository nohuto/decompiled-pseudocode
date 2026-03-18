/*
 * XREFs of ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C007A710
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0043820 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005E860 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

void __fastcall VIDMM_GLOBAL::EnsureLockedPages(
        VIDMM_GLOBAL *this,
        PRKPROCESS **a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v8; // rcx
  VIDMM_GLOBAL *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  VIDMM_GLOBAL **v18; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v9 = (VIDMM_GLOBAL *)operator new(0x18uLL, 0x39356956u, PagedPool);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C002F60C);
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 21451LL;
    WdLogEvent5_WdLowResource(v10);
LABEL_5:
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v13, v14);
    v17[5] = 0LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    v17[3] = 270LL;
    v17[4] = 55LL;
    WdLogEvent5_WdCriticalError(v17);
    return;
  }
  KeStackAttachProcess(*a2[1], &ApcState);
  *((_QWORD *)v9 + 2) = VidMmiProbeAndLockAllocation(
                          (struct _VIDMM_GLOBAL_ALLOC *)*a2,
                          a3,
                          a4,
                          IoModifyAccess,
                          0LL,
                          (struct _VIDMM_LOCAL_ALLOC *)a2);
  KeUnstackDetachProcess(&ApcState);
  if ( !*((_QWORD *)v9 + 2) )
  {
    v16 = WdLogNewEntry5_WdWarning(v15);
    WdLogEvent5_WdWarning(v16);
    goto LABEL_5;
  }
  v18 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4984);
  *(_QWORD *)v9 = (char *)this + 39864;
  *((_QWORD *)v9 + 1) = v18;
  if ( *v18 != (VIDMM_GLOBAL *)((char *)this + 39864) )
    __fastfail(3u);
  *v18 = v9;
  *((_QWORD *)this + 4984) = v9;
}
