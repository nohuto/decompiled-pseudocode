/*
 * XREFs of ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00F4608
 * Callers:
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00F4110 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 * Callees:
 *     ?DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0019C44 (-DeleteOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogTokenInternal(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  __int64 v2; // rcx

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  v2 = *((_QWORD *)v1 + 27);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    CTokenManager::DeleteOutstandingAnalogTokenInternal(v1);
  }
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
