/*
 * XREFs of ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800AE3E4
 * Callers:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800AE0B0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x1800F4780 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x1800F48E0 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CFlipChain::ReadSharedDataFromDwm(CFlipChain *this)
{
  __int64 v1; // rsi
  int v3; // eax
  _QWORD *v4; // rsi
  int v5; // eax
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 26);
  if ( v1 )
  {
    v6 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v1 + 8LL))(v1, 1LL, &v6);
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x32Bu);
    v4 = v6;
    if ( *v6 )
      *((_QWORD *)this + 14) = *v6;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 26) + 16LL))(*((_QWORD *)this + 26), v4);
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x332u);
  }
}
