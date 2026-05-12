/*
 * XREFs of StorpTelemetrySmartCommand @ 0x1C0041C30
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00415F8 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

NTSTATUS __fastcall StorpTelemetrySmartCommand(__int64 a1, char a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rcx
  char *v8; // rcx
  PIRP v9; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( KeGetCurrentIrql() )
    return -1073741496;
  if ( !a3 )
    return -1073741811;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset(a3, 0, 0x22CuLL);
  *a3 = 28;
  memmove(a3 + 1, "SCSIDISK", 8uLL);
  a3[3] = 0;
  v7 = (unsigned int)*a3;
  a3[6] = 528;
  v8 = (char *)a3 + v7;
  a3[4] = 1770763;
  *(_DWORD *)v8 = 33;
  v8[4] = a2;
  *(_DWORD *)(v8 + 5) = -1035010047;
  v8[10] = -80;
  v8[12] = *(_BYTE *)(a1 + 89);
  v9 = IoBuildDeviceIoControlRequest(
         0x4D008u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a3,
         0x3Cu,
         a3,
         0x22Cu,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v9 )
    return -1073741670;
  v9->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v9);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && IoStatusBlock.Information < 0x2C )
    return -1073741637;
  return result;
}
