/*
 * XREFs of ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180041718
 * Callers:
 *     RmpGpuMonitorClose @ 0x180041B38 (RmpGpuMonitorClose.c)
 *     RmpGpuMonitorDisableForHost @ 0x180041B94 (RmpGpuMonitorDisableForHost.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorDisable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 13) &= ~1u;
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v1, &unk_18005CA5F, v2, v3, 2u, &pData);
  }
}
