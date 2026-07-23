/*
 * XREFs of IopQueryReconfiguration @ 0x14064A100
 * Callers:
 *     PnpCancelStopDeviceNode @ 0x14062FFD4 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x1406303E8 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1406307DC (PnpStopDeviceSubtree.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryReconfiguration(char a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *DeviceNode; // r9
  __int64 v5; // r9
  bool v7; // zf
  _BYTE v8[88]; // [rsp+30h] [rbp-58h] BYREF

  DeviceNode = a2->DeviceObjectExtension->DeviceNode;
  if ( a1 == 4 )
  {
    v7 = DeviceNode[75] == 777;
  }
  else
  {
    if ( a1 != 5 )
    {
      if ( a1 == 6 && (unsigned int)(DeviceNode[75] - 776) <= 1 )
        goto LABEL_5;
      return 3221225473LL;
    }
    v7 = DeviceNode[75] == 776;
  }
  if ( v7 )
  {
LABEL_5:
    memset(v8, 0, 0x48uLL);
    v8[0] = 27;
    v8[1] = a1;
    return IopSynchronousCall(a2, (__int64)v8, -1073741637, v5, 0LL);
  }
  return 3221225473LL;
}
