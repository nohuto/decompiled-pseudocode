/*
 * XREFs of ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x1800B1BD0
 * Callers:
 *     ??_ECClientMemoryBitmap@@WHA@EAAPEAXI@Z @ 0x1800BF9A0 (--_ECClientMemoryBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x1800B1DA4 (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
