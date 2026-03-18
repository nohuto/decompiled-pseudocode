/*
 * XREFs of HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C006AEA4
 * Callers:
 *     HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C001B960 (HUBDSM_SettingExtPropDescSemaphoreForMsOs2.c)
 * Callees:
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C006D78C (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_SetExtPropDescSemaphoreInRegistry(int a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 1;
  v1 = HUBREG_WriteValueToDeviceHardwareKey(a1, (unsigned int)L"(*", 4, 4, (__int64)&v4);
  v2 = 4065;
  if ( v1 >= 0 )
    return 4077;
  return v2;
}
