/*
 * XREFs of ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x18010E98C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165588 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x180165AEC (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogExclusiveView::ProcessSetSwapChain(
        CAnalogExclusiveView *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *v6; // rsi
  struct CResource *ResourceWithoutType; // rax
  int v9; // eax
  int v10; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5);
    v6 = ResourceWithoutType;
    if ( ResourceWithoutType )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              92LL) )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x5Du);
LABEL_14:
        CAnalogExclusiveView::DeactivateSwapChain(this);
        CAnalogExclusiveView::ReleaseSwapChain(this);
        return v4;
      }
    }
  }
  if ( *((_QWORD *)this + 17) )
  {
    CAnalogExclusiveView::DeactivateSwapChain(this);
    CAnalogExclusiveView::ReleaseSwapChain(this);
  }
  if ( v6 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 23);
    *((_QWORD *)this + 17) = v6;
    ReleaseSRWLockExclusive((PSRWLOCK)this + 23);
    v9 = CResource::RegisterNotifier(this, *((struct CResource **)this + 17));
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x76u);
    }
    else if ( *((_BYTE *)this + 128) )
    {
      v10 = CAnalogExclusiveView::ActivateSwapChain(this);
      v4 = v10;
      if ( v10 >= 0 )
        return v4;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x79u);
    }
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_14;
  }
  return v4;
}
