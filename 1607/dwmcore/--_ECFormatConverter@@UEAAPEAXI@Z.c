/*
 * XREFs of ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180184420
 * Callers:
 *     ??_ECFormatConverter@@WBA@EAAPEAXI@Z @ 0x1800C1D80 (--_ECFormatConverter@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180184324 (--1CFormatConverter@@UEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::`vector deleting destructor'(CFormatConverter *this, char a2)
{
  CFormatConverter::~CFormatConverter(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CFormatConverter *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
