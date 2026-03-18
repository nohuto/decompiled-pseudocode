/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00F4110
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00F4608 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  CTokenManager *v2; // rcx

  v0 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm(v1) )
  {
    if ( g_pTokenManager )
      CTokenManager::ConfirmOutstandingAnalogTokenInternal(v2);
  }
  else
  {
    v0 = -1073741790;
  }
  KeLeaveCriticalRegion();
  return v0;
}
