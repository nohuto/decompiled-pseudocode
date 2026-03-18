/*
 * XREFs of ?SupportsMoveOptimization@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x1800B52A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CHwDisplayRenderTarget::SupportsMoveOptimization(CHwDisplayRenderTarget *this)
{
  char v2; // si

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 192LL))((char *)this - 176) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4)) != 0;
  return v2;
}
