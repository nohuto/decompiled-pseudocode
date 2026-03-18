/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x140502B18
 * Callers:
 *     IoConnectInterruptEx @ 0x140502D88 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14050392C (IopGetInterruptConnectionData.c)
 */

__int64 __fastcall IopConnectLineBasedInterrupt(struct _DEVICE_OBJECT *a1, _QWORD *a2, __int64 a3)
{
  _DWORD *DeviceNode; // rdx

  *a2 = 0LL;
  if ( a1 && (DeviceNode = a1->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a3 )
    return IopGetInterruptConnectionData(a1);
  else
    return 3221225485LL;
}
