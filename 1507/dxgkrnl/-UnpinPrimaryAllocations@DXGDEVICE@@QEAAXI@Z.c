/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00B7C98
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00B5A5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B5D3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00B5DE8 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CheckForPrimaryInfo@DXGDEVICE@@QEAA_NIIAEAIAEAPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B3D0 (-CheckForPrimaryInfo@DXGDEVICE@@QEAA_NIIAEAIAEAPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C000B458 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z @ 0x1C000B51C (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int i; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+30h] [rbp-28h] BYREF
  struct _VIDMM_MULTI_ALLOC *v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4678) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 3092LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v20 + 24) = 3093LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2338)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v21 + 24) = 3094LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v22 + 24) = 3095LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary(this, v5) )
  {
    v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 2338) == v17 )
    {
      for ( i = 0; i < 0x1F; ++i )
      {
        v26 = 0;
        v25 = 0LL;
        if ( DXGDEVICE::CheckForPrimaryInfo(this, v5, i, &v26, &v25) )
        {
          if ( !v26 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v17, v14, v15, v16);
            *(_QWORD *)(v23 + 24) = 3111LL;
            WdLogEvent5_WdAssertion(v23);
          }
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
            v25);
        }
      }
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v14, v15, v16) + 24) = v5;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, (struct _KTHREAD **)this + 29);
    *((_DWORD *)this + v5 + 1188) &= 0xFFFFFF9F;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
    DXGDEVICE::SetDisplayedPrimary(this, v5, 0LL, 0);
  }
}
