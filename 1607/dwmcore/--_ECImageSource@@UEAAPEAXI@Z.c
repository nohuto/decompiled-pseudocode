/*
 * XREFs of ??_ECImageSource@@UEAAPEAXI@Z @ 0x180137990
 * Callers:
 *     ??_ECImageSource@@WBA@EAAPEAXI@Z @ 0x1800C02B0 (--_ECImageSource@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008DF34 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CImageSource *__fastcall CImageSource::`vector deleting destructor'(CImageSource *this, char a2)
{
  CResource::~CResource((CImageSource *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImageSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
