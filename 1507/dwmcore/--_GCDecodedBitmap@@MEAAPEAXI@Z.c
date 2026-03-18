/*
 * XREFs of ??_GCDecodedBitmap@@MEAAPEAXI@Z @ 0x180153440
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDecodedBitmap@@MEAA@XZ @ 0x1801533E0 (--1CDecodedBitmap@@MEAA@XZ.c)
 */

CDecodedBitmap *__fastcall CDecodedBitmap::`scalar deleting destructor'(CDecodedBitmap *this, char a2)
{
  CDecodedBitmap::~CDecodedBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDecodedBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
