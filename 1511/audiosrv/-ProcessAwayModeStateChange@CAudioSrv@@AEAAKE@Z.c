/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x18006862C
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003B740 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r14d
  int v4; // r9d
  unsigned int v5; // esi
  CVolumeStrip *v6; // rdi
  __int64 (__fastcall *v7)(CVolumeStrip *); // rbx
  CVolumeStrip *v8; // rcx
  TraceLoggingHProvider v9; // rcx
  int v10; // eax
  unsigned __int16 v11; // dx
  int v12; // r9d
  int v13; // eax
  __int64 (__fastcall *v14)(CVolumeStrip *); // rdi
  __int64 v16; // [rsp+20h] [rbp-39h] BYREF
  __int64 v17; // [rsp+28h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-29h] BYREF
  __int64 v19; // [rsp+38h] [rbp-21h] BYREF
  CVolumeStrip *v20; // [rsp+40h] [rbp-19h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h]
  __int64 v23; // [rsp+58h] [rbp-1h]
  unsigned int v24; // [rsp+60h] [rbp+7h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+Fh]
  __int64 v26; // [rsp+70h] [rbp+17h]
  int v27; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int8 v28; // [rsp+C8h] [rbp+6Fh]
  unsigned int v29; // [rsp+D0h] [rbp+77h]
  unsigned int v30; // [rsp+D8h] [rbp+7Fh] BYREF

  v28 = a2;
  v26 = -2LL;
  v2 = 0LL;
  v19 = 0LL;
  v3 = a2;
  v24 = a2;
  v4 = *((_DWORD *)this + 20);
  if ( a2 != v4 )
  {
    *((_DWORD *)this + 20) = a2;
    lpCriticalSection = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
      goto LABEL_71;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           0LL,
           1LL,
           &v19) < 0 )
      goto LABEL_70;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v30);
    v5 = 0;
    v29 = 0;
    if ( !v30 )
      goto LABEL_70;
    while ( 1 )
    {
      v20 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, v5, &v16) < 0 )
        goto LABEL_10;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v16 + 40LL))(v16, &pv) < 0 )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
LABEL_10:
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_69;
      }
      if ( (int)CVolumeProvider::GetDeviceVolumeStrip(lpCriticalSection, (const unsigned __int16 *)pv, (PCNZWCH **)&v20) < 0 )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
        goto LABEL_60;
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, pv);
      }
      CoTaskMemFree(pv);
      if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 2LL, &v17) < 0 )
        goto LABEL_60;
      pvar = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
             v17,
             &PKEY_Endpoint_Flags,
             &pvar) < 0
        || (_WORD)pvar != 19 && (_WORD)pvar )
      {
        PropVariantClear(&pvar);
LABEL_60:
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( !v20 )
          goto LABEL_69;
        v14 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v20 + 16LL);
        if ( v14 != CVolumeStrip::Release )
        {
          v14(v20);
          goto LABEL_69;
        }
        v8 = v20;
LABEL_67:
        CVolumeStrip::Release(v8);
        goto LABEL_69;
      }
      v6 = v20;
      if ( (*(int (__fastcall **)(CVolumeStrip *, int *))(*(_QWORD *)v20 + 192LL))(v20, &v27) >= 0 )
        break;
LABEL_28:
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v7 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v6 + 16LL);
      if ( v7 == CVolumeStrip::Release )
      {
        v8 = v6;
        goto LABEL_67;
      }
      v7(v6);
LABEL_69:
      v5 = ++v29;
      v3 = v24;
      if ( v29 >= v30 )
        goto LABEL_70;
    }
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Au,
        (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        v27);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v28 )
    {
      LOWORD(pvar) = 19;
      if ( v27 )
        LODWORD(v22) = v22 | 4;
      else
        LODWORD(v22) = v22 & 0xFFFFFFFB;
      v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 48LL))(
              v17,
              &PKEY_Endpoint_Flags,
              &pvar);
      if ( v10 < 0 )
      {
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          v11 = 43;
          v12 = v10;
LABEL_52:
          WPP_SF_D(*((_QWORD *)v9 + 2), v11, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v12);
        }
      }
    }
    else
    {
      v3 = ((unsigned __int8)v22 >> 2) & 1;
      if ( v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v9 + 28) & 0x10) != 0
        && *((_BYTE *)v9 + 25) >= 4u )
      {
        v11 = 44;
        v12 = ((unsigned __int8)v22 >> 2) & 1;
        goto LABEL_52;
      }
    }
    PropVariantClear(&pvar);
    if ( v27 != v3 )
    {
      v13 = (*(__int64 (__fastcall **)(CVolumeStrip *, _QWORD, void *))(*(_QWORD *)v6 + 184LL))(
              v6,
              v3,
              &EVENTCONTEXT_POWEREVENT);
      if ( v13 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Du,
          (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
          v13);
      }
    }
    goto LABEL_28;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v4);
LABEL_70:
    v2 = v19;
  }
LABEL_71:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
