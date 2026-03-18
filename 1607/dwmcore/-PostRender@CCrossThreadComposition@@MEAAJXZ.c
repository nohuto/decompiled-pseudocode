/*
 * XREFs of ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x1800390D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075EC0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossThreadComposition::PostRender(CCrossThreadComposition *this)
{
  unsigned int v1; // ebx
  __int64 i; // rdi
  CDesktopRenderTarget *v4; // rcx
  __int64 (*v5)(void); // rax
  int v6; // eax

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 138); i = (unsigned int)(i + 1) )
  {
    v4 = *(CDesktopRenderTarget **)(*((_QWORD *)this + 66) + 8 * i);
    v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 168LL);
    if ( (char *)v5 == (char *)CDesktopRenderTarget::PostRender )
      v6 = CDesktopRenderTarget::PostRender(v4);
    else
      v6 = v5();
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x181u);
  }
  return v1;
}
