/*
 * XREFs of ACPISystemPowerGetSxD @ 0x1C0067CD8
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C00164C0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00184A0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C0071D10 (ACPISystemPowerProcessSxD.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 */

__int64 __fastcall ACPISystemPowerGetSxD(signed __int64 *a1, int a2, int *a3)
{
  int v3; // ebx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  *a3 = 0;
  if ( a2 < 1 )
    return 3221225523LL;
  if ( (*a1 & 0xA000000000000LL) != 0 )
    return 3221225524LL;
  v7 = ACPIGet(a1, dword_1C004DCF4[a2], -1878786046, 0LL, 0, 0LL, 0LL, (__int64)&v10, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned __int8)v10 < 4u )
      v3 = DevicePowerStateTranslation[(unsigned __int8)v10];
    *a3 = v3;
  }
  else if ( a2 == 2 && v7 == -1073741772 && (((*a1 & 0xA00000000000LL) != 0) & _bittest64(a1, 0x19u)) != 0 )
  {
    *a3 = 2;
    return 0;
  }
  return v8;
}
