/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@PEAUISubscriptionManager@Internal@23@@Z @ 0x18003F8BC
 * Callers:
 *     _lambda_770ef59a870ab0485516ac767e870dae_::operator() @ 0x180040F4C (_lambda_770ef59a870ab0485516ac767e870dae_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::SubscriptionImpl *this,
        HSTRING a2,
        struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // esi
  HSTRING v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedExchange((volatile __int32 *)this + 22, 0);
  _InterlockedExchange((volatile __int32 *)this + 23, 0);
  v5 = WindowsDuplicateString(a2, &newString);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    v7 = (HSTRING)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = newString;
    WindowsDeleteString(v7);
    if ( *((struct ContentManagement::TargetedContent::Internal::ISubscriptionManager **)this + 10) != a3 )
    {
      if ( a3 )
        (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *))(*(_QWORD *)a3 + 8LL))(a3);
      v8 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = a3;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    *((_QWORD *)this + 16) = 0LL;
    *((_DWORD *)this + 42) = 0;
    result = 0LL;
    *((_BYTE *)this + 144) = 0;
  }
  return result;
}
