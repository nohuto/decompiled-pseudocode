/*
 * XREFs of ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180046348
 * Callers:
 *     RmpGpuMonitorClose @ 0x180046768 (RmpGpuMonitorClose.c)
 *     RmpGpuMonitorDisableForHost @ 0x1800467C4 (RmpGpuMonitorDisableForHost.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorDisable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 13) &= ~1u;
  if ( (unsigned int)dword_180071060 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v1, &unk_1800648AD, v2, v3, 2u, &pData);
  }
}
