/*
 * XREFs of ?SetProtectedContentInFrame@CAnalogDisplayRenderTarget@@QEAAX_N@Z @ 0x18013E01C
 * Callers:
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogDisplayRenderTarget::SetProtectedContentInFrame(CAnalogDisplayRenderTarget *this, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 41);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 288) + 96LL))(*(_QWORD *)(v2 + 288), a2);
}
