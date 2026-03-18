/*
 * XREFs of ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x1C00646C0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006475C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void MultiUserDrvCleanupGraphicsDeviceList(void)
{
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C0104858 )
  {
    Win32FreePool();
    qword_1C0104858 = 0LL;
  }
  if ( qword_1C0104868 )
  {
    Win32FreePool();
    qword_1C0104868 = 0LL;
  }
  if ( Object )
  {
    if ( dword_1C0104870 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  memset(Dest, 0, 0x20uLL);
  qword_1C0104874 = 0LL;
}
