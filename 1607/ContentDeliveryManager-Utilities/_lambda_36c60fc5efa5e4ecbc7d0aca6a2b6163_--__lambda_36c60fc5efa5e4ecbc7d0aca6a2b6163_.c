/*
 * XREFs of _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_ @ 0x180040858
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock_::_1_::dtor$2 @ 0x18005BDC3 (_ContentManagement--TargetedContent--SubscriptionImpl--QueueContentUpdateRetryNoLoc_ea_18005BDC3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
