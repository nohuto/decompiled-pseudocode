/*
 * XREFs of ?PrepareForRender@CMesh2DEffect@@UEAAJW4D2D1_CHANGE_TYPE@@@Z @ 0x180168740
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMesh2DEffect::PrepareForRender(CMesh2DEffect *this, enum D2D1_CHANGE_TYPE a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 16) + 72LL))(
           *((_QWORD *)this + 16),
           (char *)this + 32,
           96LL);
}
