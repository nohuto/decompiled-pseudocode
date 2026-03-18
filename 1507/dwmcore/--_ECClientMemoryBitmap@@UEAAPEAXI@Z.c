/*
 * XREFs of ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x1800571E0
 * Callers:
 *     ??_ECClientMemoryBitmap@@WHA@EAAPEAXI@Z @ 0x180099E20 (--_ECClientMemoryBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800573CC (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CClientMemoryBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
