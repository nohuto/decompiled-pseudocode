/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140532440
 * Callers:
 *     PiCreateDriverSwDevices @ 0x1404EC474 (PiCreateDriverSwDevices.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140519894 (DrvDbGetObjectSubKeyList.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140530F6C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405313E4 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x140531698 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14053184C (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1405FF7F8 (PipHardwareConfigClearStartOverrides.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140531990 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 *a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *a1;
  v7[0] = v4;
  v7[1] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, (__int64)a2, (__int64)v7);
}
