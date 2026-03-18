/*
 * XREFs of ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x1800826E0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075010 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCrossThreadComposition::PostRender(CCrossThreadComposition *this)
{
  unsigned int v1; // ebx
  __int64 i; // rdi
  __int64 (__fastcall *v4)(CDesktopRenderTarget *); // rbp
  int v5; // eax

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
  {
    v4 = *(__int64 (__fastcall **)(CDesktopRenderTarget *))(**(_QWORD **)(*((_QWORD *)this + 65) + 8 * i) + 176LL);
    if ( v4 == CDesktopRenderTarget::PostRender )
      v5 = CDesktopRenderTarget::PostRender(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8 * i));
    else
      v5 = v4(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8 * i));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x148u);
  }
  return v1;
}
