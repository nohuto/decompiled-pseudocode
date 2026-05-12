/*
 * XREFs of RaInitializeDriver @ 0x1C0050B6C
 * Callers:
 *     StorPortInitialize @ 0x1C000A450 (StorPortInitialize.c)
 * Callees:
 *     StorSqmInitialize @ 0x1C000A110 (StorSqmInitialize.c)
 *     McGenEventRegister @ 0x1C000A1A4 (McGenEventRegister.c)
 *     RaidAddPortDriver @ 0x1C000A678 (RaidAddPortDriver.c)
 *     RaDuplicateUnicodeString @ 0x1C000AF40 (RaDuplicateUnicodeString.c)
 *     StorpRegisterTraceLogging @ 0x1C0050978 (StorpRegisterTraceLogging.c)
 */

__int64 __fastcall RaInitializeDriver(__int64 a1, _QWORD *a2, __int64 a3, const UNICODE_STRING *a4)
{
  ETWENABLECALLBACK *v8; // rdx
  const GUID *v9; // rcx
  void *v10; // r8
  ULONGLONG *v11; // r9
  ETWENABLECALLBACK *v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  void *v14; // r8

  if ( MEMORY[0xFFFFF780000003C6] )
    LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) = 1;
  if ( _InterlockedIncrement(&g_RaidSQMAndETWRefCount) == 1 )
  {
    if ( (int)StorSqmInitialize() >= 0 )
    {
      g_RaidSQMInitialized = 1;
      KeInitializeTimer((PKTIMER)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      KeInitializeDpc((PRKDPC)&WPP_MAIN_CB.DeviceQueue.32, (PKDEFERRED_ROUTINE)RaSqmTimerDpc, 0LL);
      KeSetCoalescableTimer(
        (PKTIMER)&WPP_MAIN_CB.Queue.Wcb.DeviceObject,
        (LARGE_INTEGER)-3000000000LL,
        0,
        0xEA60u,
        (PKDPC)&WPP_MAIN_CB.DeviceQueue.32);
    }
    McGenEventRegister(v9, v8, v10, v11);
    StorpRegisterTraceLogging(v13, v12, v14);
  }
  a2[14] = RaDriverCreateIrp;
  a2[16] = RaDriverCloseIrp;
  a2[28] = RaDriverDeviceControlIrp;
  a2[29] = RaDriverScsiIrp;
  a2[41] = RaDriverPnpIrp;
  a2[36] = RaDriverPowerIrp;
  a2[37] = RaDriverSystemControlIrp;
  *(_QWORD *)(a2[6] + 8LL) = RaDriverAddDevice;
  a2[12] = 0LL;
  a2[13] = RaDriverUnload;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  RaDuplicateUnicodeString((PUNICODE_STRING)(a1 + 40), a4, a3, (__int64)a2);
  RaidAddPortDriver(a3, a1);
  return 0LL;
}
