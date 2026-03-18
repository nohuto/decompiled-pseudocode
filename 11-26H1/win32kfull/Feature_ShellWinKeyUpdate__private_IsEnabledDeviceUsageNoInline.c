/*
 * XREFs of Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140154F44 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x14025184C (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--operator().c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14029D55C (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     NtUserSetShellSpecialWindow @ 0x1402BDD00 (NtUserSetShellSpecialWindow.c)
 * Callees:
 *     Feature_ShellWinKeyUpdate__private_IsEnabledFallback @ 0x14029715C (Feature_ShellWinKeyUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShellWinKeyUpdate__private_featureState & 0x10) != 0 )
    return Feature_ShellWinKeyUpdate__private_featureState & 1;
  else
    return Feature_ShellWinKeyUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_ShellWinKeyUpdate__private_featureState,
             3LL);
}
