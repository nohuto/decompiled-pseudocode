/*
 * XREFs of ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x180045CB0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800492E0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCrossThreadComposition::PostRender(CCrossThreadComposition *this)
{
  unsigned int v1; // ebx
  __int64 i; // rdi
  __int64 (__fastcall *v4)(CDesktopRenderTarget *__hidden); // rbp
  int v5; // eax

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 136); i = (unsigned int)(i + 1) )
  {
    v4 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)this + 65) + 8 * i) + 176LL);
    if ( v4 == CDesktopRenderTarget::PostRender )
      v5 = CDesktopRenderTarget::PostRender(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8 * i));
    else
      v5 = v4(*(CDesktopRenderTarget **)(*((_QWORD *)this + 65) + 8 * i));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x13Fu);
  }
  return v1;
}
