/*
 * XREFs of ??_GCMessageConversationHost@@UEAAPEAXI@Z @ 0x18011B940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x18011B9A4 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::`scalar deleting destructor'(
        CMessageConversationHost *this,
        char a2)
{
  *(_QWORD *)this = &CMessageConversationHost::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CMessageConversationHost::`vftable'{for `IMessageConversationHost'};
  CMessageConversationHost::Disconnect(this);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMessageConversationHost *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
