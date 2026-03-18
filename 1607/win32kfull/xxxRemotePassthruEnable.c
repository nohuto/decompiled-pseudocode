/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C01FACC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0154900 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02BA7F8 (bDrvDisconnect.c)
 */

__int64 __fastcall xxxRemotePassthruEnable(__int64 a1)
{
  __int64 RemoteContext; // rbx
  __int64 v2; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  RemoteContext = GreGetRemoteContext(a1);
  if ( PsGetCurrentProcess(v2) != gpepCSRSS )
    return 3221225506LL;
  dword_1C0334864 = gapulCvt_VK != (_UNKNOWN *)&gapulCvt_VK_84;
  ZwDeviceIoControlFile(ghRemoteKeyboardChannel, 0LL, 0LL, 0LL, &IoStatusBlock, 0x38080Fu, &dword_1C0334864, 4u, 0LL, 0);
  if ( guKbdTblSize )
    ZwDeviceIoControlFile(
      ghRemoteKeyboardChannel,
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      ghKbdTblBase,
      guKbdTblSize,
      gpKbdTbl,
      0);
  xxxRemoteStopScreenUpdates();
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
