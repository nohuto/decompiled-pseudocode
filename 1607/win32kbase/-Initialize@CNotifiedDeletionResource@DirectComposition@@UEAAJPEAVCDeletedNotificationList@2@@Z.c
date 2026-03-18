/*
 * XREFs of ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C004C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C004C9CC (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CNotifiedDeletionResource::Initialize(
        DirectComposition::CNotifiedDeletionResource *this,
        struct DirectComposition::CDeletedNotificationList *a2)
{
  __int64 result; // rax

  result = DirectComposition::CDeletedNotificationList::EnsureTagAllocation(a2);
  if ( (int)result >= 0 )
    return (**(__int64 (__fastcall ***)(DirectComposition::CNotifiedDeletionResource *))this)(this);
  return result;
}
