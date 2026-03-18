/*
 * XREFs of ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00E02CC
 * Callers:
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00DFAD0 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C006FE60 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogTokenInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  __int64 v2; // rcx

  v1 = g_pTokenManager;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  v2 = *((_QWORD *)v1 + 24);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
    CTokenManager::DeleteOutstandingAnalogTokenInternal(v1);
  }
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
