/*
 * XREFs of ?CreateSwapChain@CAnalogDisplayRenderTarget@@AEAAJPEAUDXGI_SWAP_CHAIN_DESC@@KPEAPEAVCSwapChainBase@@@Z @ 0x180167BCC
 * Callers:
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180167E50 (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z @ 0x1801681AC (-Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CreateSwapChain(
        CAnalogDisplayRenderTarget *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        unsigned int a3,
        struct CSwapChainBase **a4)
{
  __int64 v4; // rax
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  struct CSwapChainBase **v12; // rdi
  int v13; // eax
  struct CSwapChainBase *v14; // rcx
  struct IAnalogFlipChain *v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 23);
  v16 = 0LL;
  v17 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 568))(
    *(_QWORD *)(v4 + 568),
    &GUID_db6f6ddb_ac77_4e88_8253_819df9bbf140,
    &v17);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IAnalogFlipChain **))(*(_QWORD *)xmmword_1801F03A0 + 24LL))(
         xmmword_1801F03A0,
         v17,
         a3,
         a2,
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A2u);
  }
  else
  {
    v12 = (struct CSwapChainBase **)((char *)this + 336);
    v13 = CAnalogSwapChain::Create(
            (struct CD3DResourceManager *)(*((_QWORD *)this + 23) + 880LL),
            v16,
            v10,
            (struct CAnalogSwapChain **)this + 42);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1A8u);
    }
    else
    {
      v14 = *v12;
      *a4 = *v12;
      (**(void (__fastcall ***)(struct CSwapChainBase *))v14)(v14);
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v16 )
    (*(void (__fastcall **)(struct IAnalogFlipChain *))(*(_QWORD *)v16 + 16LL))(v16);
  return v11;
}
