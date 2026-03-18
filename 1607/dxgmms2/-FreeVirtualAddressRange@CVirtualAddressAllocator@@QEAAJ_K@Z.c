/*
 * XREFs of ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0072050
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0044B54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0048F7C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0067E94 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C008CAE8 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0067768 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::FreeVirtualAddressRange(
        struct _KTHREAD **this,
        struct _RTL_BALANCED_NODE *a2)
{
  char v2; // bp
  unsigned int v5; // esi
  struct _RTL_BALANCED_NODE *v6; // rbx
  int started; // eax
  __int64 v8; // r8
  __int64 v10; // rax
  struct _RTL_BALANCED_NODE *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v5 = -1073741811;
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 5));
    v2 = 1;
  }
  v6 = (struct _RTL_BALANCED_NODE *)this[4];
  v11 = a2;
  if ( !v6 )
    goto LABEL_14;
  do
  {
    started = CompareVadByStartAddressAvl(&v11, v6);
    if ( started < 0 )
    {
      v6 = v6->Children[0];
    }
    else
    {
      if ( started <= 0 )
        break;
      v6 = v6->Children[1];
    }
  }
  while ( v6 );
  if ( v6 )
  {
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
      (CVirtualAddressAllocator *)this,
      (struct VIDMM_VAD *)v6,
      v8);
    v5 = 0;
  }
  else
  {
LABEL_14:
    v10 = WdLogNewEntry5_WdWarning(this);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = a2;
    WdLogEvent5_WdWarning(v10);
  }
  if ( v2 )
  {
    this[6] = 0LL;
    ExReleasePushLockExclusiveEx(this + 5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
