/*
 * XREFs of ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801438C0
 * Callers:
 *     ??_ECSystemMemoryBitmap@@WHA@EAAPEAXI@Z @ 0x18009B6F0 (--_ECSystemMemoryBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x180083B00 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(CSystemMemoryBitmap *this, char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSystemMemoryBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
