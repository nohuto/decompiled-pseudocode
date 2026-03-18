/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C0133150
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C001CF2C (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 DxgAdapter; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax

  if ( KeGetCurrentIrql() )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 147LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v10 = DxgAdapter;
  if ( !DxgAdapter )
    return 3221225485LL;
  if ( !*(_QWORD *)(DxgAdapter + 1984) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v12[3] = 275LL;
    v12[4] = 7LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( !v13 )
    return 3221225485LL;
  if ( !*(_DWORD *)(v13 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v13 + 80)) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
    v17[3] = 275LL;
    v17[4] = 4LL;
    v17[5] = v13;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  return VIDMM_EXPORT::VidMmCreateContextAllocation(
           *(_QWORD *)(*(_QWORD *)(v10 + 1984) + 400LL),
           *(_QWORD *)(*(_QWORD *)(v10 + 1984) + 408LL),
           *(_DWORD *)(a1 + 80),
           *(_DWORD *)a1,
           v13,
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           *(_DWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 52),
           *(_DWORD *)(a1 + 56),
           *(_DWORD *)(a1 + 60),
           *(_DWORD *)(a1 + 64),
           *(_DWORD *)(a1 + 68),
           a1 + 72);
}
