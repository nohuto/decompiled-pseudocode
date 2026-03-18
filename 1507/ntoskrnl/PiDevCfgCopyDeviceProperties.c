/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x140685510
 * Callers:
 *     PiDevCfgConfigureDeviceInterface @ 0x1406833E4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140683BA8 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14068937C (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, void *a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a2, a3, a4, a5, 0LL, a6);
}
