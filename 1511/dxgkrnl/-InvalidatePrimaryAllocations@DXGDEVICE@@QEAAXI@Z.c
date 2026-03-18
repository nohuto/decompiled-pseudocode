/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C013AA48
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C009A900 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CC590 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01298A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002320 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004798 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 i; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 710) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3012LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3013LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 354)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3014LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 70) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 3015LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 29);
  *((_DWORD *)this + v3 + 244) &= ~0x200u;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 180); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v15[3] = *(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i);
      v15[4] = (unsigned int)i;
      v15[5] = v3;
      v16 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i) + 48LL) + 4LL);
      if ( (v16 & 0x10) != 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v17 + 24) = 3027LL;
        WdLogEvent5_WdAssertion(v17);
      }
      VIDMM_EXPORT::VidMmInvalidateAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
        *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i) + 48LL) + 8LL));
      v11 = *(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i);
      *(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v3 + 74) + 8 * i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 976);
    }
  }
  DXGDEVICE::SetDisplayedPrimary(this, v3, 0LL, 0, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
