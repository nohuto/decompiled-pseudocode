/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x180015D24
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000A814 (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x18001118C (WPP_SF_Sg.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        unsigned int a6)
{
  __int64 v8; // rdx
  int v9; // ebx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const struct _TlgProvider_t *v12; // rcx
  double cData; // [rsp+28h] [rbp-79h]
  int v15; // [rsp+38h] [rbp-69h] BYREF
  __int64 v16; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+48h] [rbp-59h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-51h] BYREF
  char v19; // [rsp+58h] [rbp-49h]
  __int64 v20; // [rsp+60h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  const char *v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+90h] [rbp-11h]
  int v24; // [rsp+94h] [rbp-Dh]
  int *v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+A0h] [rbp-1h]
  int v27; // [rsp+A4h] [rbp+3h]
  int *v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+B0h] [rbp+Fh]
  int v30; // [rsp+B4h] [rbp+13h]

  v20 = -2LL;
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v16 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_pVolumeProvider
                                                                                                + 48LL))(
         g_pVolumeProvider,
         a2,
         &v16);
  v15 = v9;
  if ( v9 < 0 )
    goto LABEL_15;
  if ( a5 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(cData) = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Cu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, a2);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 184LL))(
           v16,
           a6,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
    v15 = v9;
    if ( v9 < 0 )
      goto LABEL_15;
  }
  if ( a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      cData = a4;
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, (__int64)v10, a2);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 104LL))(
           v16,
           v8,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE);
    v15 = v9;
  }
  if ( v9 < 0 )
  {
LABEL_15:
    v12 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Eu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v9);
      v9 = v15;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v22 = "__FUNC__";
      v23 = 9;
      v24 = 0;
      v17 = 2941;
      v25 = &v17;
      v26 = 4;
      v27 = 0;
      v28 = &v15;
      v29 = 4;
      v30 = 0;
      TlgWrite(v12, &unk_18002D869, v10, v11, LODWORD(cData), &pData);
      v9 = v15;
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
