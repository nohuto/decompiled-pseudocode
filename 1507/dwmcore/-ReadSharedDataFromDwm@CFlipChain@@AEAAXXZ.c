/*
 * XREFs of ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1801098BC
 * Callers:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1801084B8 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010960C (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x1801097E8 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
