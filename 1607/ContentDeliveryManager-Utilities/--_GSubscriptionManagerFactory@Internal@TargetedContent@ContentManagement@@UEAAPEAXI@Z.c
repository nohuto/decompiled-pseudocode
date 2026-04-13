/*
 * XREFs of ??_GSubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x18001AED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::`scalar deleting destructor'(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory *this,
        char a2)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 11) = -1073741823;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
