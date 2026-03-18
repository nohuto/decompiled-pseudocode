/*
 * XREFs of ?CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBase@@@Z @ 0x18013DD08
 * Callers:
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x18013E070 (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z @ 0x18013E45C (-Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CreateSwapChain(
        CAnalogDisplayRenderTarget *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        unsigned int a3,
        struct CSwapChainBase **a4)
{
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // esi
  int v11; // eax
  struct CSwapChainBase *v12; // rdi
  struct IAnalogFlipChain *v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 20) + 552LL))(
    *(_QWORD *)(*((_QWORD *)this + 20) + 552LL),
    &GUID_db6f6ddb_ac77_4e88_8253_819df9bbf140,
    &v15);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IAnalogFlipChain **))(*(_QWORD *)xmmword_1801A3FB0 + 24LL))(
         xmmword_1801A3FB0,
         v15,
         a3,
         a2,
         &v14);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = CAnalogSwapChain::Create(
            (struct CD3DResourceManager *)(*((_QWORD *)this + 20) + 848LL),
            v14,
            v9,
            (struct CAnalogSwapChain **)this + 41);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = (struct CSwapChainBase *)*((_QWORD *)this + 41);
      *a4 = v12;
      (**(void (__fastcall ***)(struct CSwapChainBase *))v12)(v12);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1B0u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1AAu);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v14 )
    (*(void (__fastcall **)(struct IAnalogFlipChain *))(*(_QWORD *)v14 + 16LL))(v14);
  return v10;
}
