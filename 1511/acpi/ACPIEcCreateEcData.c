/*
 * XREFs of ACPIEcCreateEcData @ 0x1C003A738
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0006BD4 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcStartDevice @ 0x1C003A890 (ACPIEcStartDevice.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

PVOID ACPIEcCreateEcData()
{
  PVOID result; // rax
  __int64 v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x45706341u);
  v1 = (__int64)result;
  if ( result )
  {
    memset(result, 0, 0x388uLL);
    *(_QWORD *)(v1 + 8) = _InterlockedExchange64(&EcExtensionList, v1);
    *(_DWORD *)(v1 + 64) = 50;
    *(_DWORD *)(v1 + 68) = 10;
    *(_WORD *)(v1 + 121) = 0;
    *(_BYTE *)(v1 + 488) = 0;
    *(_BYTE *)(v1 + 458) = 1;
    *(_BYTE *)(v1 + 504) = 0;
    KeQueryPerformanceCounter((PLARGE_INTEGER)(v1 + 512));
    *(_QWORD *)(v1 + 472) = v1 + 464;
    *(_QWORD *)(v1 + 464) = v1 + 464;
    KeInitializeEvent((PRKEVENT)(v1 + 96), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 88));
    KeInitializeTimer((PKTIMER)(v1 + 520));
    KeInitializeDpc((PRKDPC)(v1 + 584), ACPIEcWatchdogDpc, (PVOID)v1);
    return (PVOID)v1;
  }
  return result;
}
