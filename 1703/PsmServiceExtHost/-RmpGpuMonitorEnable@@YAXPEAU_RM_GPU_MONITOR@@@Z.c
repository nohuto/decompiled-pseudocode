/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180035808
 * Callers:
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800358A4 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x180038CEC (MemUtilQueryGpuUtilization.c)
 */

void __fastcall RmpGpuMonitorEnable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 11) |= 1u;
  if ( (*((_BYTE *)a1 + 44) & 2) == 0 )
  {
    if ( (int)MemUtilQueryGpuUtilization((char *)a1 + 16) >= 0 )
      RtlQueryUnbiasedInterruptTime((char *)a1 + 24);
    *((_DWORD *)a1 + 11) |= 2u;
    TpSetTimer(*(_QWORD *)a1, (char *)a1 + 8, 0LL, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v2, &unk_18004360C, v3, v4, 2u, &pData);
  }
}
