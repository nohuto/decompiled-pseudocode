/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x140637028
 * Callers:
 *     PiDevCfgConfigureDeviceInterface @ 0x140635270 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140635930 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14063DA40 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, void *a2, __int64 a3, unsigned int a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a2, a3, a4, a5, 0LL, a6);
}
