/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C00BAF80
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C006CCB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006CD60 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0070860 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax
  struct tagGRAPHICS_DEVICE *v2; // rbp
  struct tagGRAPHICS_DEVICE *v3; // rdx
  struct tagGRAPHICS_DEVICE *v5; // rsi
  wchar_t *v6; // r14
  __int64 v7; // r8
  struct PDEV *i; // rax
  __int64 *v9; // rdi
  PRKMUTEX *v10; // [rsp+48h] [rbp+10h] BYREF

  result = gpLocalGraphicsDeviceList;
  v2 = 0LL;
  v3 = gpLocalGraphicsDeviceListLast;
  gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
  v5 = gpLocalGraphicsDeviceList;
  gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
  if ( gpLocalGraphicsDeviceList )
  {
    do
    {
      v6 = (wchar_t *)*((_QWORD *)v5 + 16);
      if ( a1 && a1 == *((_QWORD *)v5 + 18) )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        for ( i = gppdevList; i; i = (struct PDEV *)*((_QWORD *)i + 3) )
        {
          if ( *((struct tagGRAPHICS_DEVICE **)i + 325) == v5 )
            *((_QWORD *)i + 325) = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v7);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        if ( v5 == (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList )
        {
          gpGraphicsDeviceList = v6;
        }
        else if ( v2 )
        {
          *((_QWORD *)v2 + 16) = v6;
        }
        if ( v5 == gpGraphicsDeviceListLast )
          gpGraphicsDeviceListLast = v2;
        if ( (*((_DWORD *)v5 + 40) & 0x800000) != 0 )
        {
          v9 = (__int64 *)qword_1C01003A0;
          CAutoMutex::CAutoMutex((CAutoMutex *)&v10, (struct CMutex *)((char *)qword_1C01003A0 + 24));
          CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v9, (_DWORD *)v5 + 66);
          CAutoMutex::~CAutoMutex(&v10);
          DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v5 + 264));
        }
        DrvCleanupOneGraphicsDevice((__int64)v5);
        result = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
        v5 = v2;
        v3 = gpGraphicsDeviceListLast;
      }
      v2 = v5;
      v5 = (struct tagGRAPHICS_DEVICE *)v6;
    }
    while ( v6 );
  }
  gpLocalGraphicsDeviceList = result;
  gpLocalGraphicsDeviceListLast = v3;
  return result;
}
