/*
 * XREFs of ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18009F02C
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_dS @ 0x1800776A8 (WPP_SF_dS.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18009D278 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RevertEndpointVolumeOverride(
        CApplicationManager *this,
        char *a2,
        DWORD a3,
        int *a4,
        int *a5,
        float *a6,
        int *a7,
        int *a8)
{
  int v11; // eax
  unsigned int v12; // ebx
  LPCRITICAL_SECTION v14; // [rsp+48h] [rbp-20h] BYREF
  char v15; // [rsp+50h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v14,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
      a3,
      a2);
  }
  *a4 = 0;
  *a5 = 0;
  *a7 = 0;
  v11 = TsSessionIdReleaseEndpointVolumeReference(a3, a2, a4, a5, a6, a7, a8);
  v12 = v11;
  if ( v11 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v11);
  }
  if ( v15 )
    ATL::CCritSecLock::Unlock(&v14);
  return v12;
}
