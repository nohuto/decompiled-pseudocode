/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18014C050
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180072E4C (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x18014BF30 (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 37);
  v3 = 0;
  if ( !v2 )
  {
    v3 = -2003292404;
    v9 = 1212;
    v7 = -2003292404;
    goto LABEL_10;
  }
  if ( a2 != *((_BYTE *)this + 392) && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 651LL) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 208LL))(*((_QWORD *)this + 37), a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      v9 = 1189;
LABEL_6:
      v7 = v6;
LABEL_10:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v9);
      return v3;
    }
    *((_BYTE *)this + 392) = a2;
    CSwapChainBase::ReleaseD2DBitmaps(this);
    v6 = CSwapChainBase::SetupDepthBuffer(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      v9 = 1203;
      goto LABEL_6;
    }
  }
  return v3;
}
