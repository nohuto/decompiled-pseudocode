/*
 * XREFs of ?GetSize@CBitmapColorKey@@UEAAJPEAI0@Z @ 0x1801416F0
 * Callers:
 *     ?GetSize@CBitmapColorKey@@W7EAAJPEAI0@Z @ 0x18009B660 (-GetSize@CBitmapColorKey@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapColorKey::GetSize(CBitmapColorKey *this, unsigned int *a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
