/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800061B0
 * Callers:
 *     _ContentManagement::ContentManagementService::EnsureOpenConnection_::_1_::dtor$0 @ 0x180028D5F (_ContentManagement--ContentManagementService--EnsureOpenConnection_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::CloseConnection_::_1_::dtor$0 @ 0x180028D89 (_ContentManagement--ContentManagementService--CloseConnection_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
