/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x140243BC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DesktopDisplayBroker__private_IsEnabledPreCheck @ 0x140243C0C (Feature_DesktopDisplayBroker__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck @ 0x140243C80 (Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x140243CF0 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  Feature_DesktopDisplayBroker__private_IsEnabledPreCheck();
  if ( !(unsigned int)UserIsConsoleConnection() )
    return (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0 ? 3 : 0;
  Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck();
  Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck();
  return 3LL;
}
