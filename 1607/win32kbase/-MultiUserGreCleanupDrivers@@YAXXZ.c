/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006E598
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C006C2D0 (ldevUnloadImage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Blink; // rax
  struct tagGRAPHICS_DEVICE *v3; // rcx
  struct tagGRAPHICS_DEVICE *v4; // rbx
  __int64 v5; // rcx
  struct _LDEV *v6; // [rsp+30h] [rbp+8h]
  struct _LIST_ENTRY *v7; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    if ( !WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
      break;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink[2].Flink) = 1;
    HIDWORD(Blink[2].Flink) = 1;
    v7 = Blink;
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
          ((void (__fastcall *)(__int64, __int64))qword_1C011B5C8)(v5, a2);
        }
      }
      v3 = v4;
    }
    while ( v4 );
  }
  if ( qword_1C011B1F8 )
    qword_1C011B1F8(qword_1C011B1E8);
  memset(&gDxgkInterface, 0, 0x760uLL);
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
    ObfDereferenceObject(*(&WPP_MAIN_CB.Reserved + 1));
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  WPP_MAIN_CB.Reserved = 0LL;
  while ( 1 )
  {
    v6 = gpldevDrivers;
    if ( !gpldevDrivers )
      break;
    *((_DWORD *)gpldevDrivers + 7) = 1;
    ldevUnloadImage((__int64)v6);
  }
}
