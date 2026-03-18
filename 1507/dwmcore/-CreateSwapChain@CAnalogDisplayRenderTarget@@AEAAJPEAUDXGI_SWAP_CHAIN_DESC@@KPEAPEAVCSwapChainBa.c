/*
 * XREFs of ?CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBase@@@Z @ 0x180127D04
 * Callers:
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180127F8C (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z @ 0x18012834C (-Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CreateSwapChain(
        CAnalogDisplayRenderTarget *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        unsigned int a3,
        struct CSwapChainBase **a4)
{
  __int64 v4; // rax
  struct CAnalogSwapChain *v5; // r15
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  struct IAnalogFlipChain *v16; // [rsp+38h] [rbp-8h] BYREF
  struct CAnalogSwapChain *v17; // [rsp+70h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 20);
  v5 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 544))(
    *(_QWORD *)(v4 + 544),
    &GUID_db6f6ddb_ac77_4e88_8253_819df9bbf140,
    &v15);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IAnalogFlipChain **))(*(_QWORD *)qword_180195FD0 + 24LL))(
          qword_180195FD0,
          v15,
          a3,
          a2,
          &v16);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = CAnalogSwapChain::Create((struct CD3DResourceManager *)(*((_QWORD *)this + 20) + 896LL), v16, v11, &v17);
    v12 = v13;
    if ( v13 >= 0 )
    {
      *a4 = v17;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x197u);
      v5 = v17;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x191u);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v5 )
    (*(void (__fastcall **)(struct CAnalogSwapChain *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v16 )
    (*(void (__fastcall **)(struct IAnalogFlipChain *))(*(_QWORD *)v16 + 16LL))(v16);
  return v12;
}
