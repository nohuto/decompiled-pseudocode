/*
 * XREFs of ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x180015B68
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_dS @ 0x1800112C4 (WPP_SF_dS.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18001DA00 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RevertEndpointVolumeOverride(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        DWORD a3,
        int *a4,
        int *a5,
        float *a6,
        int *a7,
        int *a8)
{
  int v11; // ebx
  const GUID *v12; // r8
  const GUID *v13; // r9
  const struct _TlgProvider_t *v14; // rcx
  UINT32 cData; // [rsp+28h] [rbp-99h]
  int v17; // [rsp+48h] [rbp-79h] BYREF
  int v18; // [rsp+4Ch] [rbp-75h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-71h] BYREF
  char v20; // [rsp+58h] [rbp-69h]
  __int64 v21; // [rsp+60h] [rbp-61h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  const char *v23; // [rsp+88h] [rbp-39h]
  __int64 v24; // [rsp+90h] [rbp-31h]
  int *v25; // [rsp+98h] [rbp-29h]
  __int64 v26; // [rsp+A0h] [rbp-21h]
  int *v27; // [rsp+A8h] [rbp-19h]
  __int64 v28; // [rsp+B0h] [rbp-11h]

  v21 = -2LL;
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, a3, a2);
  }
  *a4 = 0;
  *a5 = 0;
  *a7 = 0;
  v11 = TsSessionIdReleaseEndpointVolumeReference(a3, a2, a4, a5, a6, a7, a8);
  v17 = v11;
  if ( v11 < 0 )
  {
    v14 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Bu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v11);
      v11 = v17;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v23 = "__FUNC__";
      v24 = 9LL;
      v18 = 2893;
      v25 = &v18;
      v26 = 4LL;
      v27 = &v17;
      v28 = 4LL;
      TlgWrite(v14, &unk_18002D869, v12, v13, cData, &pData);
      v11 = v17;
    }
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
