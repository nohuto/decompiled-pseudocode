/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@EEAAXXZ @ 0x18003E2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

int __fastcall std::_Ref_count_obj<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::_Destroy(
        __int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  char *v5; // rcx
  int result; // eax

  v1 = *(__int64 **)(a1 + 24);
  if ( v1 )
  {
    v3 = *(__int64 **)(a1 + 32);
    while ( v1 != v3 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        *v1 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v1;
    }
    operator delete(*(void **)(a1 + 24));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(char **)(a1 + 16);
  result = (_DWORD)v5 - 1;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v5);
  return result;
}
