/*
 * XREFs of PiDevCfgCopyDeviceProperties @ 0x140608220
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140514FDC (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140515990 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14060A2CC (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceProperties(void *a1, void *a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  return PiDevCfgCopyDeviceKey(a1, a2, a3, a4, a5, 0LL, a6);
}
