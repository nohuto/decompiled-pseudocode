/*
 * XREFs of ACPICMButtonStart @ 0x1C0090A9C
 * Callers:
 *     ACPICMPowerButtonStart @ 0x1C0090A90 (ACPICMPowerButtonStart.c)
 *     ACPICMExperienceButtonStart @ 0x1C009A840 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1C009A970 (ACPICMLidStart.c)
 *     ACPICMSleepButtonStart @ 0x1C009A980 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
