/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180015580
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sddd @ 0x1800110E4 (WPP_SF_Sddd.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180013F9C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D1F0 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     pow_0 @ 0x180024CD2 (pow_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct ScreenReaderStateChangedContext *a2)
{
  const wchar_t *v4; // r9
  int v5; // ecx
  int v6; // eax
  float v7; // xmm3_4
  int v8; // ebx
  _BOOL8 v9; // r8
  const GUID *v10; // r9
  int v11; // edx
  const struct _TlgProvider_t *v12; // rcx
  UINT32 cData; // [rsp+28h] [rbp-79h]
  int v15; // [rsp+48h] [rbp-59h] BYREF
  float v16; // [rsp+50h] [rbp-51h] BYREF
  UINT32 v17; // [rsp+58h] [rbp-49h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-41h] BYREF
  char v19; // [rsp+68h] [rbp-39h]
  __int64 v20; // [rsp+70h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-29h] BYREF
  const char *v22; // [rsp+98h] [rbp-9h]
  __int64 v23; // [rsp+A0h] [rbp-1h]
  float *v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  int *v26; // [rsp+B8h] [rbp+17h]
  __int64 v27; // [rsp+C0h] [rbp+1Fh]

  v20 = -2LL;
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v17 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = L"Disabled";
    if ( *((_DWORD *)a2 + 2) )
      v4 = L"Enabled";
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *(unsigned int *)(*(_QWORD *)a2 + 172LL),
      (__int64)WPP_GLOBAL_Control,
      v4,
      *(_DWORD *)(*(_QWORD *)a2 + 172LL),
      *(_DWORD *)(*(_QWORD *)a2 + 168LL),
      *((_DWORD *)a2 + 3));
  }
  v5 = *((_DWORD *)a2 + 3);
  if ( v5 > 0 )
    v5 = 0;
  v6 = -24;
  if ( v5 > -24 )
    v6 = v5;
  *((_DWORD *)a2 + 3) = v6;
  v16 = (float)v6;
  if ( COERCE_INT((float)v6) == -8388608 )
    v7 = 0.0;
  else
    v7 = pow_0(10.0, (float)v6 / 20.0);
  v8 = TsSessionIdScreenReaderStateChanged(
         *(_DWORD *)(*(_QWORD *)a2 + 172LL),
         *(_DWORD *)(*(_QWORD *)a2 + 168LL),
         *((_DWORD *)a2 + 2),
         v7,
         (int *)&v17);
  v15 = v8;
  if ( v8 < 0 )
    goto LABEL_19;
  v11 = *((_DWORD *)a2 + 2) == 0;
  v9 = *(_DWORD *)(*(_QWORD *)a2 + 468LL) != v11;
  *(_DWORD *)(*(_QWORD *)a2 + 468LL) = v11;
  if ( v17 || v9 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)(*(_QWORD *)a2 + 172LL), 3u);
  v8 = v15;
  if ( v15 < 0 )
  {
LABEL_19:
    v12 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v8);
      v8 = v15;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v22 = "__FUNC__";
      v23 = 9LL;
      LODWORD(v16) = 2740;
      v24 = &v16;
      v25 = 4LL;
      v26 = &v15;
      v27 = 4LL;
      TlgWrite(v12, &unk_18002D869, (LPCGUID)v9, v10, cData, &pData);
      v8 = v15;
    }
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
