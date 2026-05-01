/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800463AC
 * Callers:
 *     RmpGpuMonitorEnableForHost @ 0x1800468B0 (RmpGpuMonitorEnableForHost.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x180054F14 (MemUtilQueryGpuUtilization.c)
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
  if ( (unsigned int)dword_180071060 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v2, &unk_180064978, v3, v4, 2u, &pData);
  }
}
