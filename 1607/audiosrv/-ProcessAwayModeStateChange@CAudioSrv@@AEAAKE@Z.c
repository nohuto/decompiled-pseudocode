/*
 * XREFs of ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180052B70
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800303F0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSrv::ProcessAwayModeStateChange(CAudioSrv *this, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rcx
  __int64 v5; // r9
  CVolumeProvider *v6; // r15
  unsigned int i; // esi
  unsigned int v8; // ebx
  CAudioSession *v9; // rcx
  int v10; // eax
  int v11; // eax
  void (*v12)(void); // rax
  CVolumeStrip *v14; // [rsp+30h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  unsigned int v20; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+60h] BYREF

  v16[1] = -2LL;
  v2 = a2;
  v4 = 0LL;
  v16[0] = 0LL;
  v5 = *((unsigned int *)this + 24);
  if ( a2 != (_DWORD)v5 )
  {
    *((_DWORD *)this + 24) = a2;
    v6 = g_pVolumeProvider;
    if ( !g_pVolumeProvider )
      goto LABEL_50;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           0LL,
           1LL,
           v16) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v16[0] + 24LL))(v16[0], &v20);
      for ( i = 0; i < v20; ++i )
      {
        v14 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        v8 = v2;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)v16[0] + 32LL))(v16[0], i, &v22) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 40LL))(v22, &pv) < 0
            || (*(int (__fastcall **)(CVolumeProvider *, LPVOID, CVolumeStrip **))(*(_QWORD *)v6 + 48LL))(v6, pv, &v14) < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x22u,
                (__int64)&WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
                (const wchar_t *)pv);
            }
            CoTaskMemFree(pv);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, 2LL, &v23) >= 0 )
            {
              pvar = 0LL;
              v18 = 0LL;
              v19 = 0LL;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
                     v23,
                     &PKEY_Endpoint_Flags,
                     &pvar) < 0
                || (_WORD)pvar != 19 && (_WORD)pvar )
              {
                PropVariantClear(&pvar);
              }
              else if ( (*(int (__fastcall **)(CVolumeStrip *, unsigned int *))(*(_QWORD *)v14 + 192LL))(v14, &v21) >= 0 )
              {
                v9 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    35LL,
                    &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
                    v21);
                  v9 = WPP_GLOBAL_Control;
                }
                if ( (_BYTE)v2 )
                {
                  LOWORD(pvar) = 19;
                  if ( v21 )
                    LODWORD(v18) = v18 | 4;
                  else
                    LODWORD(v18) = v18 & 0xFFFFFFFB;
                  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 48LL))(
                          v23,
                          &PKEY_Endpoint_Flags,
                          &pvar);
                  if ( v10 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1414, v10);
                }
                else
                {
                  v8 = ((unsigned __int8)v18 >> 2) & 1;
                  if ( v9 != (CAudioSession *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)v9 + 28) & 0x10) != 0
                    && *((_BYTE *)v9 + 25) >= 4u )
                  {
                    WPP_SF_D(*((_QWORD *)v9 + 2), 36LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v8);
                  }
                }
                PropVariantClear(&pvar);
                if ( v21 != v8 )
                {
                  v11 = (*(__int64 (__fastcall **)(CVolumeStrip *, _QWORD, void *))(*(_QWORD *)v14 + 184LL))(
                          v14,
                          v8,
                          &EVENTCONTEXT_POWEREVENT);
                  if ( v11 < 0 )
                    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessAwayModeStateChange", 1437, v11);
                }
              }
            }
          }
        }
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v14 )
        {
          v12 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
          if ( (char *)v12 == (char *)CVolumeStrip::Release )
            CVolumeStrip::Release(v14);
          else
            v12();
        }
      }
    }
    goto LABEL_49;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v5);
LABEL_49:
    v4 = v16[0];
  }
LABEL_50:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
