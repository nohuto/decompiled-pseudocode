/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0136238
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000F470 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?TryInvalidatePrimaryAllocation@DXGDEVICE@@QEAA_NIIAEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001D2E0 (-TryInvalidatePrimaryAllocation@DXGDEVICE@@QEAA_NIIAEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(PERESOURCE **this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int i; // edi
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4678) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2992LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 2993LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2338]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 2994LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 70) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = 2995LL;
    WdLogEvent5_WdAssertion(v17);
  }
  for ( i = 0; i < 0x1F; ++i )
  {
    v19 = 0LL;
    if ( DXGDEVICE::TryInvalidatePrimaryAllocation((struct _KTHREAD **)this, v4, i, &v19) )
      VIDMM_EXPORT::VidMmInvalidateAllocation((VIDMM_EXPORT *)this[2][50], (struct VIDMM_GLOBAL *)this[2][51], v19);
  }
  DXGDEVICE::SetDisplayedPrimary((DXGDEVICE *)this, v4, 0LL, 0);
}
