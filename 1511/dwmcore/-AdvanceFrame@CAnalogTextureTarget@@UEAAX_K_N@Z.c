/*
 * XREFs of ?AdvanceFrame@CAnalogTextureTarget@@UEAAX_K_N@Z @ 0x18013BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogTextureTarget::AdvanceFrame(CAnalogTextureTarget *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = *((_QWORD *)this + 18);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v3 + 176) + 192LL))(v3 + 176, a2, a3);
}
