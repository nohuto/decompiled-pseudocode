/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B52D4
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0006930 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B014 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000B57C (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // eax
  struct _KTHREAD **VidPnSourceOwner; // rax
  struct _KTHREAD **v14; // rbx
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  if ( !*(_QWORD *)this )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 62LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v17 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v11 = 0LL;
  v12 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v12;
  if ( (v12 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v11 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, v11) - 1 <= 1 )
      {
        VidPnSourceOwner = (struct _KTHREAD **)ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)this, v11);
        v14 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&v4, v11) )
        {
          *((_QWORD *)this + v11 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v11 + 86) ^= (*((_DWORD *)this + v11 + 86) ^ (32
                                                                         * (unsigned __int8)(*((_DWORD *)VidPnSourceOwner
                                                                                             + v11
                                                                                             + 1188) >> 5))) & 0x20;
          *((_DWORD *)this + v11 + 86) ^= ((unsigned __int8)*((_DWORD *)this + v11 + 86) ^ (unsigned __int8)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v11 + 1188) >> 6) << 6)) & 0x40;
          *((_QWORD *)this + v11 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v11);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, v14 + 26);
          v15 = *((_DWORD *)v14 + v11 + 1172);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
          *((_DWORD *)this + v11 + 70) = v15;
          *((_BYTE *)this + v11 + 408) = ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)this, v11);
        }
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < *((_DWORD *)this + 4) >> 2 );
  }
}
