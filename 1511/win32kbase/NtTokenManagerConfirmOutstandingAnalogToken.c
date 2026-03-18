/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00E1A20
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00E2210 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  CTokenManager *v3; // rcx

  v0 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v2, v1) )
  {
    if ( g_pTokenManager )
      CTokenManager::ConfirmOutstandingAnalogTokenInternal(v3);
  }
  else
  {
    v0 = -1073741790;
  }
  KeLeaveCriticalRegion();
  return v0;
}
