/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C00C8484
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0053028 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C006E340 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006E46C (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax
  struct tagGRAPHICS_DEVICE *v2; // rbp
  struct tagGRAPHICS_DEVICE *v3; // rdx
  struct tagGRAPHICS_DEVICE *v5; // rsi
  wchar_t *v6; // r14
  struct _LIST_ENTRY *i; // rax
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdi
  PRKMUTEX *v9; // [rsp+48h] [rbp+10h] BYREF

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
        for ( i = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; i; i = i[1].Blink )
        {
          if ( (struct tagGRAPHICS_DEVICE *)i[162].Blink == v5 )
            i[162].Blink = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
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
          DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
          CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
          CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
            (__int64)DeviceObjectExtension,
            (_DWORD *)v5 + 66);
          CAutoMutex::~CAutoMutex(&v9);
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
