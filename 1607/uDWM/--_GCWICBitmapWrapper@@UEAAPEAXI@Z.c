/*
 * XREFs of ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x180044310
 * Callers:
 *     ??_ECWICBitmapWrapper@@WHA@EAAPEAXI@Z @ 0x180051210 (--_ECWICBitmapWrapper@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180044528 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CWICBitmapWrapper *__fastcall CWICBitmapWrapper::`scalar deleting destructor'(CWICBitmapWrapper *this, char a2)
{
  CWICBitmapWrapper::~CWICBitmapWrapper(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWICBitmapWrapper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
