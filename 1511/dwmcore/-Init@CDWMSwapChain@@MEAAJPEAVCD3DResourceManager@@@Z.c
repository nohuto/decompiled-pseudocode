/*
 * XREFs of ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180073D40
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180072950 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMSwapChain::Init(CDWMSwapChain *this, struct CD3DResourceManager *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // eax

  v3 = CSwapChainBase::Init(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x76u);
  }
  else
  {
    v5 = *((_QWORD *)this + 39);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 344);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7Au);
    }
  }
  return v4;
}
