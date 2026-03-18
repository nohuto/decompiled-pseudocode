/*
 * XREFs of ??4?$ComPtr@UIEffectInstance@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801226C8
 * Callers:
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x1800F59F0 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IEffectInstance>::operator=(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD))
{
  void (__fastcall ***v2)(_QWORD); // rdi
  void (__fastcall ***v4)(_QWORD); // rbx

  v2 = *a2;
  if ( (void (__fastcall ***)(_QWORD))*a1 != *a2 )
  {
    if ( v2 )
      (**v2)(v2);
    v4 = (void (__fastcall ***)(_QWORD))*a1;
    *a1 = v2;
    if ( v4 )
      (*v4)[1](v4);
  }
  return a1;
}
