/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x1C006CCB0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0021838 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C006C948 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006CC64 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BAF80 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 */

__int64 __fastcall DrvCleanupOneGraphicsDevice(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 184) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 200) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 216) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 208) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 232) )
    Win32FreePool();
  if ( *(_QWORD *)(a1 + 240) )
  {
    if ( (*(_DWORD *)(a1 + 164) & 2) != 0 )
      bSetDeviceSessionUsage(a1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 240));
  }
  if ( *(_QWORD *)(a1 + 288) )
  {
    Win32FreePool();
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  return Win32FreePool();
}
