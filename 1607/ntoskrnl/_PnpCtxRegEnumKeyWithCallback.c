/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140562F74
 * Callers:
 *     PiCreateDriverSwDevices @ 0x1404ED268 (PiCreateDriverSwDevices.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561A98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140561D68 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x14056201C (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140562370 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140629848 (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x1406E1DE4 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x1405624B4 (_RegRtlEnumKeyWithCallback.c)
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
