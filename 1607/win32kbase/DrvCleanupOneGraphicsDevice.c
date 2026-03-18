/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x1C006E340
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0016160 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006E2F0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00C8484 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     bSetDeviceSessionUsage @ 0x1C005E280 (bSetDeviceSessionUsage.c)
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
