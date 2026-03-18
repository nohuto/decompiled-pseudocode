/*
 * XREFs of ?IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z @ 0x180049230
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::IsStereoDisplay(CDesktopRenderTarget *this, unsigned int a2, bool *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a2 >= *((_DWORD *)this + 8) )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6A9u);
  }
  else
  {
    *a3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * a2) + 96LL) != 0LL;
  }
  return v3;
}
