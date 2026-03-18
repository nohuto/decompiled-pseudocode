/*
 * XREFs of ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x18012B720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800B0E54 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CCommandListBitmapRepresentation *__fastcall CCommandListBitmapRepresentation::`scalar deleting destructor'(
        CCommandListBitmapRepresentation *this,
        char a2)
{
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCommandListBitmapRepresentation *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
