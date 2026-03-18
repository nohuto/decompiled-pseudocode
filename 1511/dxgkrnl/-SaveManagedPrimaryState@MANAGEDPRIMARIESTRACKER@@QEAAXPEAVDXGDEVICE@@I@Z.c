/*
 * XREFs of ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00B059C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00AFD1C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0007E78 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007EC4 (-IsPrimaryVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000D2D0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState(
        MANAGEDPRIMARIESTRACKER *this,
        struct DXGDEVICE *a2,
        int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // eax
  DXGDEVICE *VidPnSourceOwner; // rax
  DXGDEVICE *v10; // rbx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( !*(_QWORD *)this )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 62LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = 0LL;
  v8 = *((_DWORD *)this + 4) | 2;
  *((_DWORD *)this + 4) = v8;
  if ( (v8 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      *((_QWORD *)this + v7 + 3) = 0LL;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)this, v7) - 1 <= 1 )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)this, v7);
        v10 = VidPnSourceOwner;
        if ( a2 != VidPnSourceOwner || !_bittest(&a3, v7) )
        {
          *((_QWORD *)this + v7 + 3) = VidPnSourceOwner;
          *((_DWORD *)this + v7 + 86) ^= (*((_DWORD *)this + v7 + 86) ^ ((unsigned __int8)BYTE1(*((_DWORD *)VidPnSourceOwner
                                                                                                + v7
                                                                                                + 244)) << 8)) & 0x100;
          *((_DWORD *)this + v7 + 86) ^= ((unsigned __int16)*((_DWORD *)this + v7 + 86) ^ (unsigned __int16)((unsigned __int8)(*((_DWORD *)VidPnSourceOwner + v7 + 244) >> 9) << 9)) & 0x200;
          *((_QWORD *)this + v7 + 19) = DXGDEVICE::GetDisplayedPrimary(VidPnSourceOwner, v7);
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
            (struct _KTHREAD **)v10 + 26);
          v11 = *((_DWORD *)v10 + v7 + 228);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
          *((_DWORD *)this + v7 + 70) = v11;
          *((_BYTE *)this + v7 + 408) = ADAPTER_DISPLAY::IsPrimaryVisible(*(ADAPTER_DISPLAY **)this, v7);
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)this + 4) >> 2 );
  }
}
