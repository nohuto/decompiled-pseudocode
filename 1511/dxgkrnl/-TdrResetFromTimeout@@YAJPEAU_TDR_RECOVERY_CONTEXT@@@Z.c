/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144640
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0144750 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ED94 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C0143010 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C01430C0 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C0144620 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0144D30 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(ULONG_PTR BugCheckParameter1)
{
  _QWORD *Pool; // rax
  struct _TDR_RECOVERY_CONTEXT *v3; // rax
  __int64 v4; // r8

  if ( (int)DXGADAPTER::Reset(
              *(DXGADAPTER **)(BugCheckParameter1 + 32),
              (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1) < 0 )
  {
    *(_QWORD *)(BugCheckParameter1 + 88) = -1LL;
    TdrBugcheckOnTimeout(BugCheckParameter1);
  }
  Pool = TdrAllocatePool(0x20uLL, PagedPool);
  if ( Pool )
  {
    Pool[1] = 0LL;
    *((_DWORD *)Pool + 4) = 0;
    *Pool = &CTDR_GDI_RESET_THREAD::`vftable';
    v3 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    *(_QWORD *)(v4 + 24) = v3;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    TdrBugcheckOnTimeout(BugCheckParameter1);
  if ( CVP_SYSTEM_THREAD::Start((void **)v4) < 0 )
    TdrBugcheckOnTimeout(BugCheckParameter1);
  return 0LL;
}
