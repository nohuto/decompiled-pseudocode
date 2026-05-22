/*
 * XREFs of ??1?$wnf_subscription_state@K@details@wil@@UEAA@XZ @ 0x18002FBA0
 * Callers:
 *     ??_G?$wnf_subscription_state@K@details@wil@@UEAAPEAXI@Z @ 0x18002FC60 (--_G-$wnf_subscription_state@K@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall wil::details::wnf_subscription_state<unsigned long>::~wnf_subscription_state<unsigned long>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  DWORD LastError; // ebx
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  void **result; // rax
  __int64 v9; // rcx

  *a1 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
  v3 = a1[1];
  if ( v3 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
    SetLastError(LastError);
  }
  a1[1] = 0LL;
  v5 = a1 + 2;
  v6 = (_QWORD *)a1[15];
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, a2);
    a1[15] = 0LL;
  }
  v7 = (_QWORD *)a1[15];
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v5;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 24LL))(v7, a2);
    a1[15] = 0LL;
  }
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  v9 = a1[1];
  if ( v9 )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion(v9);
  return result;
}
