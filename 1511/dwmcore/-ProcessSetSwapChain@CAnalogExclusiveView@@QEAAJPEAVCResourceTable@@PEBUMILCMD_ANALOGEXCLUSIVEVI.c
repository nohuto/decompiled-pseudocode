/*
 * XREFs of ?ProcessSetSwapChain@CAnalogExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1800F9998
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800944B0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B928 (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogExclusiveView::ProcessSetSwapChain(
        CAnalogExclusiveView *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGEXCLUSIVEVIEW_SETSWAPCHAIN *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *v6; // r14
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
              87LL) )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x5Cu);
LABEL_14:
        CAnalogExclusiveView::DeactivateSwapChain(this);
        CAnalogExclusiveView::ReleaseSwapChain(this);
        return v4;
      }
    }
  }
  if ( *((_QWORD *)this + 8) )
  {
    CAnalogExclusiveView::DeactivateSwapChain(this);
    CAnalogExclusiveView::ReleaseSwapChain(this);
  }
  if ( v6 )
  {
    *((_QWORD *)this + 8) = v6;
    v9 = CResource::RegisterNotifier(this, v6);
    v4 = v9;
    if ( v9 >= 0 )
    {
      if ( *((_BYTE *)this + 56) )
      {
        v10 = CAnalogExclusiveView::ActivateSwapChain(this);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x70u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Du);
    }
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_14;
  }
  return v4;
}
