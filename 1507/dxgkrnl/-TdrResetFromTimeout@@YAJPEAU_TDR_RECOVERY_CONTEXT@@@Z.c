/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E1F0
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C013E300 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C013CBE0 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C013CC90 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C013E1D0 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(struct _TDR_RECOVERY_CONTEXT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *Pool; // rax
  struct _TDR_RECOVERY_CONTEXT *v6; // rax
  __int64 v7; // r8

  if ( (int)DXGADAPTER::Reset(*((DXGADAPTER **)a1 + 4), a1, a3, a4) < 0 )
  {
    *((_QWORD *)a1 + 11) = -1LL;
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  Pool = TdrAllocatePool(0x20uLL, PagedPool);
  if ( Pool )
  {
    Pool[1] = 0LL;
    *((_DWORD *)Pool + 4) = 0;
    *Pool = &CTDR_GDI_RESET_THREAD::`vftable';
    v6 = TdrReferenceRecoveryContext(a1);
    *(_QWORD *)(v7 + 24) = v6;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( CVP_SYSTEM_THREAD::Start((void **)v7) < 0 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  return 0LL;
}
