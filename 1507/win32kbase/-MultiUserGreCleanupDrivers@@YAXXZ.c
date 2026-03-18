/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C006CE2C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C005E930 (ldevUnloadImage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1, __int64 a2)
{
  struct PDEV *v2; // rax
  struct tagGRAPHICS_DEVICE *v3; // rcx
  struct tagGRAPHICS_DEVICE *v4; // rbx
  __int64 v5; // rcx
  struct _LDEV *v6; // [rsp+30h] [rbp+8h]
  struct PDEV *v7; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = gppdevList;
    if ( !gppdevList )
      break;
    *((_DWORD *)gppdevList + 8) = 1;
    *((_DWORD *)v2 + 9) = 1;
    v7 = v2;
    PDEVOBJ::vUnreferencePdev((__int64 *)&v7, 2);
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
          ((void (__fastcall *)(__int64, __int64))qword_1C0101460)(v5, a2);
        }
      }
      v3 = v4;
    }
    while ( v4 );
  }
  if ( qword_1C0101098 )
    qword_1C0101098(qword_1C0101088);
  memset(&gDxgkInterface, 0, 0x6D0uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  while ( 1 )
  {
    v6 = gpldevDrivers;
    if ( !gpldevDrivers )
      break;
    *((_DWORD *)gpldevDrivers + 7) = 1;
    ldevUnloadImage((__int64)v6);
  }
}
