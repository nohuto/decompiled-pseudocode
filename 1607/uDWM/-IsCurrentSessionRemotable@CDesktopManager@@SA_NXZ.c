/*
 * XREFs of ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x180086570
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     <none>
 */

char CDesktopManager::IsCurrentSessionRemotable(void)
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( GetSystemMetrics(4096) )
    return 1;
  if ( (unsigned __int8)WinStationIsSessionRemoteable(0LL, 0xFFFFFFFFLL, &v2) )
    return v2 != 0;
  return v0;
}
