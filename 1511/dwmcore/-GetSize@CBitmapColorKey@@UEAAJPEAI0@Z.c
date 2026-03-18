/*
 * XREFs of ?GetSize@CBitmapColorKey@@UEAAJPEAI0@Z @ 0x180150AE0
 * Callers:
 *     ?GetSize@CBitmapColorKey@@W7EAAJPEAI0@Z @ 0x1800BE420 (-GetSize@CBitmapColorKey@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetSize(CBitmapColorKey *this, unsigned int *a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
