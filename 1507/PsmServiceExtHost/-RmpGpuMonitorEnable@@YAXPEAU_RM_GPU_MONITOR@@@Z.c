/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18004177C
 * Callers:
 *     RmpGpuMonitorEnableForHost @ 0x180041C80 (RmpGpuMonitorEnableForHost.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x18004E3C4 (MemUtilQueryGpuUtilization.c)
 */

void __fastcall RmpGpuMonitorEnable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 13) |= 1u;
  if ( (*((_BYTE *)a1 + 52) & 2) == 0 )
  {
    if ( (int)MemUtilQueryGpuUtilization((char *)a1 + 24) >= 0 )
      RtlQueryUnbiasedInterruptTime((char *)a1 + 32);
    *((_DWORD *)a1 + 13) |= 2u;
    SetThreadpoolTimer(*((PTP_TIMER *)a1 + 1), (PFILETIME)a1 + 2, 0, *((_DWORD *)a1 + 12));
  }
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v2, &unk_18005CB2A, v3, v4, 2u, &pData);
  }
}
