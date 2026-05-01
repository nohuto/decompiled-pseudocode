/*
 * XREFs of ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x180034AF4
 * Callers:
 *     RmpEnforcerContextRundown @ 0x18002B560 (RmpEnforcerContextRundown.c)
 *     RmpGpuMonitorDisableForHost @ 0x180034EFC (RmpGpuMonitorDisableForHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorDisable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 11) &= ~1u;
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(a1, 1uLL) )
      TlgWrite(v1, &unk_180042233, v2, v3, 2u, &pData);
  }
}
