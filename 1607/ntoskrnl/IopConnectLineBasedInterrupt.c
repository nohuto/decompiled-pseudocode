/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x1405392E8
 * Callers:
 *     IoConnectInterruptEx @ 0x140539558 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140539B0C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
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
