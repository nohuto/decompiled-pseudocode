/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C008FBD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006F80 (DpiGetDxgAdapter.c)
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00071C0 (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  __int64 DxgAdapter; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  if ( KeGetCurrentIrql() )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 147LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v6 = DxgAdapter;
  if ( !DxgAdapter )
    return 3221225485LL;
  if ( !*(_QWORD *)(DxgAdapter + 2136) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5);
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    v13[3] = 275LL;
    v13[4] = 7LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    return 3221225485LL;
  if ( !*(_DWORD *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 80)) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v14[3] = 275LL;
    v14[4] = 4LL;
    v14[5] = v7;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  return VIDMM_EXPORT::VidMmCreateContextAllocation(
           *(VIDMM_EXPORT **)(*(_QWORD *)(v6 + 2136) + 400LL),
           *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v6 + 2136) + 408LL),
           *(_DWORD *)(a1 + 80),
           *(struct _DXGK_CREATECONTEXTALLOCATIONFLAGS *)a1,
           (struct DXGDEVICE *)v7,
           *(struct DXGCONTEXT **)(a1 + 24),
           *(void **)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           *(_DWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 52),
           *(_DWORD *)(a1 + 56),
           *(struct _D3DDDI_SEGMENTPREFERENCE *)(a1 + 60),
           *(struct _DXGK_SEGMENTBANKPREFERENCE *)(a1 + 64),
           *(struct _DXGK_ALLOCATIONINFOFLAGS *)(a1 + 68),
           (struct _VIDMM_CONTEXT_ALLOC **)(a1 + 72));
}
