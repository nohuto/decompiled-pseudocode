/*
 * XREFs of ??$WrapWithTask@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Z @ 0x180044318
 * Callers:
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ??$Make@V?$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Z @ 0x180044920 (--$Make@V-$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask<_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>,_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
