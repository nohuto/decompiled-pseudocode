/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0075E38
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0002214 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0004604 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 i; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 710) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 3122LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 3123LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 354)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 3124LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 3125LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary(this, v3) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 354) == v9 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 29);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 180); i = (unsigned int)(i + 1) )
      {
        v11 = *(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i);
        if ( v11 )
        {
          v12 = *(unsigned int *)(*(_QWORD *)(v11 + 48) + 4LL);
          if ( (v12 & 1) == 0 )
          {
            v17 = WdLogNewEntry5_WdAssertion(v12);
            *(_QWORD *)(v17 + 24) = 3141LL;
            WdLogEvent5_WdAssertion(v17);
          }
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
            *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v6, v7, v8) + 24) = v3;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 29);
    *((_DWORD *)this + v3 + 244) &= 0xFFFFFCFF;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    DXGDEVICE::SetDisplayedPrimary(this, v3, 0LL, 0, 1);
  }
}
