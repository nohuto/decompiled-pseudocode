/*
 * XREFs of ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C013DDAC
 * Callers:
 *     ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C013C8C0 (--_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C013DB40 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C013CBE0 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C013CC90 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DD58 (-TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrDereferenceRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1, unsigned __int8 a2)
{
  DXGADAPTER *v4; // rcx
  _QWORD *Pool; // rax

  if ( a1 && _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 716, 0xFFFFFFFF) <= 1 )
  {
    v4 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
    if ( v4 )
    {
      DXGADAPTER::ReleaseReference(v4);
      *((_QWORD *)a1 + 4) = 0LL;
    }
    if ( (a2 & (unsigned __int8)-(*((_QWORD *)a1 + 352) != 0LL)) != 0 )
    {
      Pool = TdrAllocatePool(0x20uLL, PagedPool);
      if ( !Pool )
        TdrBugcheckOnTimeout((ULONG_PTR)a1);
      Pool[1] = 0LL;
      *((_DWORD *)Pool + 4) = 0;
      *Pool = &CTDR_SUBMIT_REPORT_THREAD::`vftable';
      Pool[3] = a1;
      if ( CVP_SYSTEM_THREAD::Start((void **)Pool) < 0 )
        TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
    else
    {
      TdrDeleteRecoveryContext(a1);
    }
  }
}
