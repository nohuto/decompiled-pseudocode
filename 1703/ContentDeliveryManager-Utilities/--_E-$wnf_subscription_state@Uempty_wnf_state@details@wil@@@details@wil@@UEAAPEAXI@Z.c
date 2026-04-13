/*
 * XREFs of ??_E?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z @ 0x18003F140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18003EF8C (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vector deleting destructor'(
        _QWORD *a1,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(
    a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
