/*
 * XREFs of VidSchSuspendAdapter @ 0x1C00795E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C001AFD0 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0040E18 (VidSchiRequestSchedulerStatus.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1)
{
  int v1; // eax
  int v3; // edx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 928);
  v3 = *(_DWORD *)(a1 + 896);
  v4 = *(_DWORD *)(a1 + 908);
  if ( v1 || v3 || v4 )
  {
    VidSchiSuspendResumeDevicesForPowerTransition((_QWORD *)a1, 1);
    v5 = *(_QWORD *)(a1 + 184);
    v9[0] = 1LL;
    v9[1] = 0LL;
    VidSchFlushDevice(v5, (int *)v9, v6, v7);
    VidSchiRequestSchedulerStatus(a1, 3, 1);
    VidSchiRequestSchedulerStatus(a1, 1, 1);
  }
  return 0LL;
}
