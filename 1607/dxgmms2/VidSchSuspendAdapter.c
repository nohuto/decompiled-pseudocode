/*
 * XREFs of VidSchSuspendAdapter @ 0x1C00403B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C000EF98 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0069BF8 (VidSchiRequestSchedulerStatus.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v5; // ecx

  v3 = *(_DWORD *)(a1 + 940);
  v5 = *(_DWORD *)(a1 + 952);
  if ( v3 || v5 )
  {
    if ( !a3 )
      VidSchiSuspendResumeDevicesForPowerTransition((_QWORD *)a1, 1);
    VidSchFlushDevice(*(_QWORD *)(a1 + 216));
    VidSchiRequestSchedulerStatus(a1, 3LL, 1LL);
    VidSchiRequestSchedulerStatus(a1, 1LL, 1LL);
  }
  return 0LL;
}
