/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180069ACC
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003A1E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r14d
  int v4; // r9d
  unsigned int v5; // esi
  struct CVolumeStrip *v6; // rbx
  struct CVolumeStrip *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int16 v10; // dx
  int v11; // r9d
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-39h] BYREF
  __int64 v15; // [rsp+28h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-29h] BYREF
  __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  struct CVolumeStrip *v18; // [rsp+40h] [rbp-19h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-11h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h]
  __int64 v21; // [rsp+58h] [rbp-1h]
  unsigned int v22; // [rsp+60h] [rbp+7h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+Fh]
  __int64 v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int8 v26; // [rsp+C8h] [rbp+6Fh]
  int v27; // [rsp+D0h] [rbp+77h]
  unsigned int v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v26 = a2;
  v24 = -2LL;
  v2 = 0LL;
  v17 = 0LL;
  v3 = a2;
  v22 = a2;
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
           &v17) < 0 )
      goto LABEL_70;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v28);
    v5 = 0;
    v27 = 0;
    if ( !v28 )
      goto LABEL_70;
    while ( 1 )
    {
      v18 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, v5, &v14) < 0 )
        goto LABEL_10;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pv) < 0 )
        break;
      if ( (int)CVolumeProvider::GetDeviceVolumeStrip(lpCriticalSection, (STRSAFE_PCNZWCH)pv, (struct IUnknown **)&v18) >= 0 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_S(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            41LL,
            &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
            pv);
        }
        CoTaskMemFree(pv);
        if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 2LL, &v15) >= 0 )
        {
          pvar = 0LL;
          v20 = 0LL;
          v21 = 0LL;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                 v15,
                 &PKEY_Endpoint_Flags,
                 &pvar) >= 0
            && ((_WORD)pvar == 19 || !(_WORD)pvar) )
          {
            v7 = v18;
            if ( (*(int (__fastcall **)(struct CVolumeStrip *, int *))(*(_QWORD *)v18 + 192LL))(v18, &v25) < 0 )
            {
LABEL_33:
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              (*(void (__fastcall **)(struct CVolumeStrip *))(*(_QWORD *)v7 + 16LL))(v7);
              v5 = v27;
              goto LABEL_69;
            }
            v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x2Au,
                (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
                v25);
              v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            }
            if ( v26 )
            {
              LOWORD(pvar) = 19;
              if ( v25 )
                LODWORD(v20) = v20 | 4;
              else
                LODWORD(v20) = v20 & 0xFFFFFFFB;
              v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 48LL))(
                     v15,
                     &PKEY_Endpoint_Flags,
                     &pvar);
              if ( v9 < 0 )
              {
                v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
                if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                  && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
                {
                  v10 = 43;
                  v11 = v9;
                  goto LABEL_55;
                }
              }
            }
            else
            {
              v3 = ((unsigned __int8)v20 >> 2) & 1;
              if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(v8 + 28) & 0x10) != 0
                && *(_BYTE *)(v8 + 25) >= 4u )
              {
                v10 = 44;
                v11 = ((unsigned __int8)v20 >> 2) & 1;
LABEL_55:
                WPP_SF_D(*(_QWORD *)(v8 + 16), v10, (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids, v11);
              }
            }
            PropVariantClear(&pvar);
            if ( v25 != v3 )
            {
              v12 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, void *))(*(_QWORD *)v7 + 184LL))(
                      v7,
                      v3,
                      &EVENTCONTEXT_POWEREVENT);
              if ( v12 < 0
                && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
              {
                WPP_SF_D(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  0x2Du,
                  (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
                  v12);
              }
            }
            goto LABEL_33;
          }
          PropVariantClear(&pvar);
        }
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v6 = v18;
        if ( !v18 )
          goto LABEL_69;
      }
      else
      {
        CoTaskMemFree(pv);
        pv = 0LL;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v6 = v18;
        if ( !v18 )
          goto LABEL_69;
      }
      (*(void (__fastcall **)(struct CVolumeStrip *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_69:
      v27 = ++v5;
      v3 = v22;
      if ( v5 >= v28 )
        goto LABEL_70;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
LABEL_10:
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_69;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x28u,
      (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
      v4);
LABEL_70:
    v2 = v17;
  }
LABEL_71:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
