/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBAXPEAI0@Z @ 0x180143A20
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, unsigned int *a2, unsigned int *a3)
{
  char *v3; // rdi

  v3 = 0LL;
  if ( this != (CSystemMemoryBitmap *)256 )
    v3 = (char *)this - 240;
  (*(void (__fastcall **)(char *, unsigned int *, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, a2, a3);
}
