/*
 * XREFs of VidSchSuspendAdapter @ 0x1C005FD40
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0011044 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchFlushDevice @ 0x1C003C560 (VidSchFlushDevice.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0061F4C (VidSchiRequestSchedulerStatus.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1)
{
  int v1; // eax
  int v3; // edx
  int v4; // ecx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 936);
  v3 = *(_DWORD *)(a1 + 904);
  v4 = *(_DWORD *)(a1 + 916);
  if ( v1 || v3 || v4 )
  {
    VidSchiSuspendResumeDevicesForPowerTransition((_QWORD *)a1, 1);
    v6 = *(_QWORD *)(a1 + 192);
    v9[0] = 1LL;
    v9[1] = 0LL;
    VidSchFlushDevice(v6, (int *)v9, v7, v8);
    VidSchiRequestSchedulerStatus(a1, 3LL, 1LL);
    VidSchiRequestSchedulerStatus(a1, 1LL, 1LL);
  }
  return 0LL;
}
