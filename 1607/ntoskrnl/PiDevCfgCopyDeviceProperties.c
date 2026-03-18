/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x140636F74
 * Callers:
 *     PiDevCfgConfigureDeviceInterface @ 0x1406351BC (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14063587C (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14063D98C (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, void *a2, __int64 a3, unsigned int a4, int a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a2, a3, a4, a5, 0LL, a6);
}
