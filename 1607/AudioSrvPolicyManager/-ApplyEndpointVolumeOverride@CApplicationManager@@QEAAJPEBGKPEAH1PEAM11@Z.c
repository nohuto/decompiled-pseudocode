/*
 * XREFs of ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800158F0
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_dS @ 0x1800112C4 (WPP_SF_dS.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001D630 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ApplyEndpointVolumeOverride(
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
  UINT32 cData; // [rsp+28h] [rbp-C9h]
  int v16; // [rsp+58h] [rbp-99h] BYREF
  int v17; // [rsp+5Ch] [rbp-95h] BYREF
  float v18[2]; // [rsp+60h] [rbp-91h] BYREF
  __int64 v19; // [rsp+68h] [rbp-89h] BYREF
  int *v20; // [rsp+70h] [rbp-81h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-79h] BYREF
  char v22; // [rsp+80h] [rbp-71h]
  __int64 v23; // [rsp+88h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-59h] BYREF
  const char *v25; // [rsp+B8h] [rbp-39h]
  int v26; // [rsp+C0h] [rbp-31h]
  int v27; // [rsp+C4h] [rbp-2Dh]
  int **v28; // [rsp+C8h] [rbp-29h]
  int v29; // [rsp+D0h] [rbp-21h]
  int v30; // [rsp+D4h] [rbp-1Dh]
  int *v31; // [rsp+D8h] [rbp-19h]
  int v32; // [rsp+E0h] [rbp-11h]
  int v33; // [rsp+E4h] [rbp-Dh]

  v23 = -2LL;
  v20 = a8;
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v19 = 0LL;
  v18[0] = FLOAT_1_0;
  v17 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, a3, a2);
  }
  *a4 = 0;
  *a5 = 0;
  *a7 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_pVolumeProvider
                                                                                                 + 48LL))(
          g_pVolumeProvider,
          a2,
          &v19);
  v16 = v11;
  if ( v11 < 0
    || ((*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v19 + 120LL))(v19, v18),
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 192LL))(v19, &v17),
        v11 = TsSessionIdAddEndpointVolumeReference(a3, a2, v18[0], v17, a4, a5, a6, a7, v20),
        v16 = v11,
        v11 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v11);
      v11 = v16;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v25 = "__FUNC__";
      v26 = 9;
      v27 = 0;
      LODWORD(v20) = 2844;
      v28 = &v20;
      v29 = 4;
      v30 = 0;
      v31 = &v16;
      v32 = 4;
      v33 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v12, v13, cData, &pData);
      v11 = v16;
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
