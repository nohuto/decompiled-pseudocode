/*
 * XREFs of MemUtilQueryGpuUtilization @ 0x18004E3C4
 * Callers:
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18004177C (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18004181C (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

NTSTATUS __fastcall MemUtilQueryGpuUtilization(_QWORD *a1)
{
  NTSTATUS result; // eax
  _DWORD SystemInformation[4]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v4; // [rsp+30h] [rbp-30h]
  int v5; // [rsp+38h] [rbp-28h]
  _DWORD v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h]

  memset_0(SystemInformation, 0, 0x20uLL);
  v7 = 0LL;
  v6[1] = -1;
  SystemInformation[0] = 45;
  SystemInformation[1] = 1802856515;
  SystemInformation[2] = 28;
  v4 = v6;
  v5 = 16;
  v6[0] = 1;
  result = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    *a1 = v7;
    return 0;
  }
  return result;
}
