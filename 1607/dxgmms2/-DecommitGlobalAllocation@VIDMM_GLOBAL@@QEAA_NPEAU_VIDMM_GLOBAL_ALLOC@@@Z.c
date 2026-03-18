/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0088778
 * Callers:
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C008B06C (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004B86C (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004BA80 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054A00 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005AADC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

char __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2, __int64 a3, __int64 a4)
{
  char v4; // si
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _VIDMM_GLOBAL_ALLOC *i; // r14
  __int64 v18; // r8
  VIDMM_GLOBAL *v19; // rcx
  __int64 v20; // r9
  char v21; // [rsp+20h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[63] + 2) == 2 && (*((_DWORD *)a2 + 23) & 2) != 0 )
  {
    if ( a2[17] )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2, 0LL, 0LL);
      v21 = 0;
      (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, _QWORD, _QWORD, char, _QWORD))(*(_QWORD *)a2[17] + 48LL))(
        a2[17],
        a2,
        0LL,
        0LL,
        v21,
        0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v14, v15, v16);
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      DXGFASTMUTEX::Acquire(a2[40]);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2) )
    {
LABEL_7:
      v9 = WdLogNewEntry5_WdWarning(v7);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdWarning(v9);
      goto LABEL_8;
    }
  }
  if ( *((_WORD *)a2[63] + 2) != 3 )
    goto LABEL_7;
  v4 = 1;
  for ( i = a2[37]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 37); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    KeStackAttachProcess(**((PRKPROCESS **)i - 6), &ApcState);
    LOBYTE(v18) = 1;
    VIDMM_GLOBAL::UncommitLocalBackingStore(v19, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), v18, v20);
    KeUnstackDetachProcess(&ApcState);
  }
  VIDMM_GLOBAL::UncommitGlobalBackingStore(v7, (PVOID *)a2, 0LL, v8);
  v10 = _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2[13] + 1) + 32LL) + 312LL),
          -(__int64)a2[1]);
LABEL_8:
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v10, v11, v12);
  return v4;
}
