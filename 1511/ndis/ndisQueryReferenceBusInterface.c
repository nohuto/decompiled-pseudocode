/*
 * XREFs of ndisQueryReferenceBusInterface @ 0x1C00CD450
 * Callers:
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     ndisQueryDriverInterface @ 0x1C00CD2D4 (ndisQueryDriverInterface.c)
 */

__int64 __fastcall ndisQueryReferenceBusInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  _WORD *PoolWithTag; // rax
  __int64 v5; // r9
  NTSTATUS DriverInterface; // edi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6962444Eu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(
                      DeviceObject,
                      (unsigned __int64)&GUID_4747b320_62ce_11cf_a5d6_28db04c10000,
                      0x100u,
                      v5,
                      PoolWithTag);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}
