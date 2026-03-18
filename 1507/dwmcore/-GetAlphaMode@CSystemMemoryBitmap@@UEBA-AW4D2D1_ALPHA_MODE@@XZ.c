/*
 * XREFs of ?GetAlphaMode@CSystemMemoryBitmap@@UEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x1801439D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSystemMemoryBitmap::GetAlphaMode(CSystemMemoryBitmap *this)
{
  char *v1; // rdi

  v1 = 0LL;
  if ( this != (CSystemMemoryBitmap *)256 )
    v1 = (char *)this - 240;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))(v1);
}
