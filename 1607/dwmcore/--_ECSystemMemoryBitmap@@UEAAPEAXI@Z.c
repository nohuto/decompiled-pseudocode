/*
 * XREFs of ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801820A0
 * Callers:
 *     ??_ECSystemMemoryBitmap@@WHA@EAAPEAXI@Z @ 0x1800C1C10 (--_ECSystemMemoryBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800A17E0 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
