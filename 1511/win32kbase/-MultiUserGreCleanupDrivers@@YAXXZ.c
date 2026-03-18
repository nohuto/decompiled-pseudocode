/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00649C0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C005C300 (ldevUnloadImage.c)
 *     DxDdCleanupDxGraphics @ 0x1C0064A48 (DxDdCleanupDxGraphics.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1, __int64 a2)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v2; // rax
  struct tagGRAPHICS_DEVICE *v3; // rcx
  struct tagGRAPHICS_DEVICE *v4; // rbx
  __int64 v5; // rcx
  struct _LDEV *v6; // [rsp+30h] [rbp+8h]
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v7; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = WPP_MAIN_CB.DeviceQueue.1;
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
      break;
    *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 32LL) = 1;
    *(_DWORD *)(*(_QWORD *)&v2 + 36LL) = 1;
    v7 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v2;
    PDEVOBJ::vUnreferencePdev(&v7, 2);
  }
  v3 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    do
    {
      v4 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v3 + 16);
      if ( (*((_DWORD *)v3 + 40) & 0x4000000) != 0 )
      {
        v5 = *((_QWORD *)v3 + 37);
        if ( v5 )
        {
          LOBYTE(a2) = 1;
          ((void (__fastcall *)(__int64, __int64))qword_1C0104280)(v5, a2);
        }
      }
      v3 = v4;
    }
    while ( v4 );
  }
  DxDdCleanupDxGraphics();
  while ( 1 )
  {
    v6 = gpldevDrivers;
    if ( !gpldevDrivers )
      break;
    *((_DWORD *)gpldevDrivers + 7) = 1;
    ldevUnloadImage((__int64)v6);
  }
}
