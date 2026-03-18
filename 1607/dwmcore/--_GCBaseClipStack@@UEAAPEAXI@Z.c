/*
 * XREFs of ??_GCBaseClipStack@@UEAAPEAXI@Z @ 0x18018CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseClipStack@@UEAA@XZ @ 0x1800A3818 (--1CBaseClipStack@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBaseClipStack *__fastcall CBaseClipStack::`scalar deleting destructor'(CBaseClipStack *this, char a2)
{
  CBaseClipStack::~CBaseClipStack(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseClipStack *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
