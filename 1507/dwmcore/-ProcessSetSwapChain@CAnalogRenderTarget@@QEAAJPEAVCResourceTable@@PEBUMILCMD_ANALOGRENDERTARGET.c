/*
 * XREFs of ?ProcessSetSwapChain@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_SETSWAPCHAIN@@@Z @ 0x180126AD4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18006CEEC (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ @ 0x180126D48 (-RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::ProcessSetSwapChain(
        CAnalogRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGRENDERTARGET_SETSWAPCHAIN *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *v6; // r14
  struct CResource *ResourceWithoutType; // rax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

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
              79LL) )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA9u);
LABEL_12:
        CAnalogRenderTarget::UnregisterSwapChain(this);
        return v4;
      }
    }
  }
  if ( v6 != *((struct CResource **)this + 28) )
  {
    CAnalogRenderTarget::UnregisterSwapChain(this);
    *((_QWORD *)this + 28) = v6;
    *((_DWORD *)this + 64) = *((_DWORD *)a3 + 3);
    if ( v6 )
    {
      v10 = CResource::RegisterNotifier(this, v6);
      v4 = v10;
      if ( v10 < 0 )
      {
        v12 = 189;
LABEL_11:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
        goto LABEL_12;
      }
      v10 = CAnalogRenderTarget::RegisterSwapChain(this);
      v4 = v10;
      if ( v10 < 0 )
      {
        v12 = 190;
        goto LABEL_11;
      }
    }
  }
  return v4;
}
