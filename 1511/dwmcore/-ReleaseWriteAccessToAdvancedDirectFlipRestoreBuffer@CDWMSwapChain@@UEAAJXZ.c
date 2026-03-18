/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJXZ @ 0x18014BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMSwapChain::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 396) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 37) + 232LL))(
           *((_QWORD *)this + 37),
           0LL,
           *((unsigned int *)this + 94));
    v1 = v3;
    if ( v3 >= 0 )
      *((_BYTE *)this + 396) = 0;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x392u);
  }
  return v1;
}
