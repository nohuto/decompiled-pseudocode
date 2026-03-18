/*
 * XREFs of ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@PEA_N@Z @ 0x180006190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::CheckDirectFlipSupport(CDWMSwapChain *this, struct IDXGIResource *a2, bool *a3)
{
  __int64 v3; // rsi
  bool v4; // di
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 37);
  v4 = 0;
  v9 = 0;
  v6 = 0;
  if ( v3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGIResource *, int *))(*(_QWORD *)v3 + 144LL))(
           v3,
           0LL,
           a2,
           &v9);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2F1u);
      return v6;
    }
    v4 = v9 != 0;
  }
  *a3 = v4;
  return v6;
}
