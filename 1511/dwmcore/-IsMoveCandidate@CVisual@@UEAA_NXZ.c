/*
 * XREFs of ?IsMoveCandidate@CVisual@@UEAA_NXZ @ 0x1800B6100
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CVisual::IsMoveCandidate(CVisual *this)
{
  __int64 v1; // r14
  char v2; // si
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 45);
  v2 = 0;
  if ( v1 )
  {
    v4 = *((_QWORD *)this + 7);
    if ( (v4 & 2) != 0 )
      v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v5 = *((_QWORD *)this + 7) & 1LL;
    if ( !v5
      && ((*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 45), 87LL)
       || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 48LL))(
            *((_QWORD *)this + 45),
            92LL)) )
    {
      return 1;
    }
  }
  return v2;
}
