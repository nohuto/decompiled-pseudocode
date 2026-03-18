/*
 * XREFs of ACPIMatchHardwareAddress @ 0x1C0086BCC
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C0086A04 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_LqLL @ 0x1C000D878 (WPP_RECORDER_SF_LqLL.c)
 *     WPP_RECORDER_SF_LqL @ 0x1C000D928 (WPP_RECORDER_SF_LqL.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0086C90 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPIMatchHardwareAddress(PDEVICE_OBJECT DeviceObject, int a2, _BYTE *a3)
{
  int v6; // edx
  int DeviceCapabilities; // ebp
  int v8; // r8d
  int v9; // r9d
  _DWORD v11[16]; // [rsp+50h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  *a3 = 0;
  DeviceCapabilities = ACPIInternalGetDeviceCapabilities(DeviceObject, v11);
  if ( DeviceCapabilities >= 0 )
  {
    WPP_RECORDER_SF_LqL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
    if ( a2 == v11[2] )
      *a3 = 1;
  }
  WPP_RECORDER_SF_LqLL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
  return (unsigned int)DeviceCapabilities;
}
