/*
 * XREFs of ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800A554C
 * Callers:
 *     ??_ECInteractionContextWrapper@@W7EAAPEAXI@Z @ 0x1800C1240 (--_ECInteractionContextWrapper@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800A5488 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CInteractionContextWrapper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
