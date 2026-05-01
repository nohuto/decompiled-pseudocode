/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180034B58
 * Callers:
 *     RmpGpuMonitorEnableForHost @ 0x180035004 (RmpGpuMonitorEnableForHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x180038D84 (MemUtilQueryGpuUtilization.c)
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
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v2, &unk_180042255, v3, v4, 2u, &pData);
  }
}
