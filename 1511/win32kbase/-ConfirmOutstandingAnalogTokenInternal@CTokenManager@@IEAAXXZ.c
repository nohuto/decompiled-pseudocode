/*
 * XREFs of ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00E2210
 * Callers:
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00E1A20 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C003C9AC (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogTokenInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  __int64 v2; // rcx

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  v2 = *((_QWORD *)v1 + 28);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    CTokenManager::DeleteOutstandingAnalogTokenInternal(v1);
  }
  *(_QWORD *)v1 = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 64);
}
