/*
 * XREFs of ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C01376B4
 * Callers:
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0123C68 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C000B458 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinTransitionalPrimaryAllocation(
        struct _KTHREAD **this,
        struct _VIDMM_MULTI_ALLOC **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  struct DXGALLOCATION **v20; // rcx
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a3;
  if ( (unsigned int)a3 >= *((_DWORD *)this + 4678) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 3139LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 3140LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2338]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 3141LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 3142LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((DXGDEVICE *)this, v5) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, this + 29);
    v19 = 0;
    v20 = &this[31 * v5 + 74];
    while ( *v20 != (struct DXGALLOCATION *)a2 )
    {
      ++v19;
      ++v20;
      if ( v19 >= 0x1F )
        goto LABEL_15;
    }
    *(&this[31 * v5 + 74] + v19) = 0LL;
    VIDMM_EXPORT::VidMmUnpinAllocation(*((VIDMM_EXPORT **)this[2] + 50), *((struct VIDMM_GLOBAL **)this[2] + 51), a2[3]);
LABEL_15:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
}
