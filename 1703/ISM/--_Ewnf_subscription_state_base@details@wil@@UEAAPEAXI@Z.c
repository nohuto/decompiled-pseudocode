/*
 * XREFs of ??_Ewnf_subscription_state_base@details@wil@@UEAAPEAXI@Z @ 0x18002F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

wil::details::wnf_subscription_state_base *__fastcall wil::details::wnf_subscription_state_base::`vector deleting destructor'(
        wil::details::wnf_subscription_state_base *this,
        char a2)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  if ( *((_QWORD *)this + 1) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
