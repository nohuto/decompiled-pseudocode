/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C00BC7B0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00647B0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00648DC (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0067C38 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax
  struct tagGRAPHICS_DEVICE *v2; // rbp
  struct tagGRAPHICS_DEVICE *v3; // rdx
  struct tagGRAPHICS_DEVICE *v5; // rsi
  wchar_t *v6; // r14
  __int64 v7; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rax
  void *v9; // rdi
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
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        for ( i = WPP_MAIN_CB.DeviceQueue.1;
              i;
              i = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&i + 24LL) )
        {
          if ( *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)&i + 2600LL) == v5 )
            *(_QWORD *)(*(_QWORD *)&i + 2600LL) = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v7);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
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
          v9 = qword_1C01045D8;
          CAutoMutex::CAutoMutex((CAutoMutex *)&v10, (struct CMutex *)((char *)qword_1C01045D8 + 24));
          CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter((__int64)v9, (_DWORD *)v5 + 66);
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
