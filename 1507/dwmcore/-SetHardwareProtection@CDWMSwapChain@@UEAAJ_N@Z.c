/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18013BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18008EB24 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x18013BE20 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r14
  int v6; // eax
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 360) )
  {
    v5 = *((_QWORD *)this + 37);
    if ( !v5 )
    {
      v2 = -2003292404;
      v9 = 1212;
      v7 = -2003292404;
      goto LABEL_9;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5 + 208LL))(*((_QWORD *)this + 37), a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      v9 = 1194;
LABEL_5:
      v7 = v6;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v9);
      return v2;
    }
    *((_BYTE *)this + 360) = a2;
    CSwapChainBase::ReleaseD2DBitmaps(this);
    v6 = CSwapChainBase::SetupDepthBuffer(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      v9 = 1208;
      goto LABEL_5;
    }
  }
  return v2;
}
