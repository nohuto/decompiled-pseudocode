/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x140635138
 * Callers:
 *     PiDevCfgConfigureDeviceDriver @ 0x140635070 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406358F4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140636F9C (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // edi
  int v9; // esi
  __int64 result; // rax

  v8 = a2;
  v9 = a1;
  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(v9, v8, a3, a4, a5, a6);
  result = PiDevCfgCopyObjectProperties(a1, a2, a3, a3, *(_QWORD *)(a1 + 48), 1, *(_QWORD *)(a2 + 16));
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(v9, v8, a3, a4, a5, a6);
  return result;
}
