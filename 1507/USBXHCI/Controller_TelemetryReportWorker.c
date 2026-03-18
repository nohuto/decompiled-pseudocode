/*
 * XREFs of Controller_TelemetryReportWorker @ 0x1C0015ED0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_InitiateRecovery @ 0x1C001515C (Controller_InitiateRecovery.c)
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 */

LONG __fastcall Controller_TelemetryReportWorker(__int64 a1)
{
  ULONG v2; // edi
  __int64 v3; // rax
  _QWORD *v4; // r15
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 *v7; // rcx
  int v8; // r12d
  NTSTATUS v9; // eax
  PDEVICE_OBJECT *PoolWithTag; // rax
  PDEVICE_OBJECT *v11; // rsi
  NTSTATUS v12; // eax
  __int64 *i; // r14
  PDEVICE_OBJECT *v14; // rcx
  __int64 *v15; // rax
  __int64 *v17; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-8h]
  ULONG ActualNumberDeviceObjects; // [rsp+88h] [rbp+48h] BYREF
  ULONG v20; // [rsp+90h] [rbp+50h] BYREF

  v2 = 0;
  ActualNumberDeviceObjects = 0;
  v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3048))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   v3,
                   off_1C00400B8);
  v5 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040298);
  WPP_RECORDER_SF_(v4[8], 4u, 3u, 0xD2u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  KeWaitForSingleObject((PVOID)(v5 + 24), Executive, 0, 0, 0LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
  v7 = *(__int64 **)v5;
  if ( *(_QWORD *)v5 == v5 )
  {
    v18 = &v17;
    v17 = (__int64 *)&v17;
  }
  else
  {
    v17 = *(__int64 **)v5;
    v18 = *(_QWORD **)(v5 + 8);
    v7[1] = (__int64)&v17;
    *v18 = &v17;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
  }
  v8 = *(_DWORD *)(v5 + 80);
  *(_DWORD *)(v5 + 80) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 16), v6);
  v9 = IoEnumerateDeviceObjectList(
         *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
         0LL,
         0,
         &ActualNumberDeviceObjects);
  if ( v9 == -1073741789 )
  {
    PoolWithTag = (PDEVICE_OBJECT *)ExAllocatePoolWithTag(
                                      *(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type,
                                      8LL * ActualNumberDeviceObjects,
                                      0x49434858u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = IoEnumerateDeviceObjectList(
              *(PDRIVER_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
              PoolWithTag,
              8 * ActualNumberDeviceObjects,
              &v20);
      if ( v12 >= 0 )
      {
        for ( i = v17; &v17 != (__int64 **)i; i = (__int64 *)*i )
          Controller_TelemetryReport((__int64)v4, v5, (__int64)i, v11, ActualNumberDeviceObjects);
        v20 = 0;
        if ( ActualNumberDeviceObjects )
        {
          do
          {
            ObfDereferenceObject(v11[v2]);
            v2 = v20 + 1;
            v20 = v2;
          }
          while ( v2 < ActualNumberDeviceObjects );
        }
      }
      else
      {
        WPP_RECORDER_SF_d(v4[8], 2u, 3u, 0xD5u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v12);
      }
      v14 = v11;
      goto LABEL_16;
    }
    WPP_RECORDER_SF_(v4[8], 2u, 3u, 0xD4u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  }
  else
  {
    WPP_RECORDER_SF_d(v4[8], 2u, 3u, 0xD3u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v9);
  }
  while ( 1 )
  {
    v14 = (PDEVICE_OBJECT *)v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    v15 = (__int64 *)*v17;
    if ( (__int64 **)v17[1] != &v17 || (__int64 *)v15[1] != v17 )
      __fastfail(3u);
    v17 = (__int64 *)*v17;
    v15[1] = (__int64)&v17;
LABEL_16:
    ExFreePoolWithTag(v14, 0x49434858u);
  }
  Controller_InitiateRecovery(v4, v5, v8);
  return KeReleaseMutex((PRKMUTEX)(v5 + 24), 0);
}
