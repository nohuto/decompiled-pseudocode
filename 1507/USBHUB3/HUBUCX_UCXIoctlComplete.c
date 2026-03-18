/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C001BA10
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C000FA0C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C001B944 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 */

void __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // r8d
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 *v15; // r9
  __int64 k; // rcx
  unsigned int m; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 n; // rax
  unsigned int ii; // ecx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int jj; // edx
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // eax
  unsigned __int16 v32; // r9
  unsigned __int8 v33; // dl
  unsigned int v34; // esi
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 kk; // rcx
  unsigned int mm; // edx
  unsigned __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // rax
  bool v47; // zf
  __int64 v48; // rax
  _QWORD *v49; // r9
  __int64 v50; // rax
  _QWORD *i; // rdx
  unsigned int j; // ecx
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  int USBDErrorFromNTStatus; // eax
  __int64 v56; // [rsp+20h] [rbp-38h]
  __int64 v57; // [rsp+28h] [rbp-30h]
  int v58; // [rsp+30h] [rbp-28h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), a2, a3, 0xAu, v56);
    v7 = *(_DWORD *)(a4 + 424);
    v8 = (unsigned int)(v7 - 4788231);
    if ( (unsigned int)v8 > 0x38 || (v9 = 0x100000001000001LL, !_bittest64(&v9, v8)) )
    {
      WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), v7, v6, 0xBu, v56);
      v10 = *(_QWORD *)(a4 + 8);
      v11 = *(unsigned int *)(*(_QWORD *)v10 + 2512LL);
      if ( (v11 & 0x80u) != 0LL )
        HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v10 + 272);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x10000) != 0 )
      {
        LODWORD(v56) = *(_DWORD *)(a4 + 424);
        Template_pqq(
          v11,
          &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
          (const GUID *)(a4 + 1500),
          *(_QWORD *)(a4 + 24),
          v56,
          v4);
      }
    }
  }
  if ( *(_DWORD *)(a4 + 424) != 4788247 )
  {
    switch ( *(_DWORD *)(a4 + 424) )
    {
      case 0x49101B:
        v48 = *(_QWORD *)(a4 + 48);
        if ( v48 )
        {
          v49 = (_QWORD *)(v48 + 16);
          v50 = *(_QWORD *)(v48 + 16) - 8LL;
          for ( i = (_QWORD *)(v50 + 8); v49 != i; i = (_QWORD *)*i )
          {
            for ( j = 0; j < *(_DWORD *)(v50 + 24); ++j )
            {
              v53 = (unsigned __int64)j << 6;
              if ( *(_DWORD *)(v53 + v50 + 48) == 5 )
                *(_DWORD *)(v53 + v50 + 48) = 6;
            }
            v50 = *i - 8LL;
          }
        }
        goto LABEL_89;
      case 0x49101F:
        v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C0057090);
        if ( v4 < 0 )
        {
          *(_DWORD *)(a4 + 2416) = 1073807361;
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x40) != 0 )
          {
            LODWORD(v56) = v4;
            Template_pq(
              v44,
              &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
              (const GUID *)(a4 + 1500),
              *(_QWORD *)(a4 + 24),
              v56);
          }
          if ( (*(_DWORD *)(a4 + 1440) & 0x20000) != 0 && (*(_BYTE *)(a4 + 1622) & 1) == 0 )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x11u,
              (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids);
            _InterlockedOr((volatile signed __int32 *)(a4 + 1620), 0x10000u);
            _InterlockedIncrement((volatile signed __int32 *)(v45 + 88));
          }
        }
        else
        {
          v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                  WdfDriverGlobals,
                  *(_QWORD *)(a4 + 416),
                  0LL);
          v47 = (*(_BYTE *)(a4 + 1622) & 1) == 0;
          *(_DWORD *)(a4 + 1632) = *(_DWORD *)(v46 + 28);
          if ( !v47 )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x10u,
              (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids);
            _InterlockedAnd((volatile signed __int32 *)(a4 + 1620), 0xFFFEFFFF);
            _InterlockedDecrement((volatile signed __int32 *)(v45 + 88));
          }
        }
        goto LABEL_89;
      case 0x491023:
        if ( v4 < 0 )
        {
          if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                              WdfDriverGlobals,
                              *(_QWORD *)(a4 + 416),
                              0LL)
                          + 56) & 1) != 0 )
          {
            v34 = 4024;
            goto LABEL_97;
          }
        }
        else
        {
          *(_WORD *)(a4 + 2192) = *(_WORD *)(a4 + 2194);
        }
        goto LABEL_89;
    }
    if ( *(_DWORD *)(a4 + 424) != 4788279 )
      goto LABEL_89;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
            WdfDriverGlobals,
            *(_QWORD *)(a4 + 416),
            0LL);
    v13 = *(_QWORD *)(a4 + 48);
    v14 = v12;
    if ( v13 )
    {
      v15 = (__int64 *)(v13 + 16);
      for ( k = *v15; ; k = *(_QWORD *)(v19 + 8) )
      {
        v19 = k - 8;
        if ( v15 == (__int64 *)(v19 + 8) )
          break;
        for ( m = 0; m < *(_DWORD *)(v19 + 24); ++m )
        {
          v18 = (unsigned __int64)m << 6;
          if ( *(_DWORD *)(v18 + v19 + 48) == 5 )
            *(_DWORD *)(v18 + v19 + 48) = 6;
        }
      }
    }
    v20 = *(_QWORD *)(a4 + 56);
    if ( v20 )
    {
      v21 = v20 + 16;
      for ( n = *(_QWORD *)(v20 + 16); ; n = *(_QWORD *)(v25 + 8) )
      {
        v25 = n - 8;
        if ( v21 == v25 + 8 )
          break;
        for ( ii = 0; ii < *(_DWORD *)(v25 + 24); ++ii )
        {
          v24 = (unsigned __int64)ii << 6;
          if ( *(_DWORD *)(v24 + v25 + 48) == 5 )
            *(_DWORD *)(v24 + v25 + 48) = 6;
        }
      }
    }
    v26 = *(_QWORD *)(a4 + 72);
    if ( v26 )
    {
      for ( jj = 0; jj < *(_DWORD *)(v26 + 24); *(_DWORD *)((v28 << 6) + v26 + 48) = 6 )
        v28 = jj++;
    }
    v29 = *(_DWORD *)(v14 + 76);
    if ( !v29 )
      goto LABEL_39;
    if ( (*(_DWORD *)(v14 + 72) & 4) != 0 )
    {
      v30 = *(unsigned __int16 *)(a4 + 2192);
      if ( v30 <= v29 )
      {
        v58 = *(unsigned __int16 *)(a4 + 2192);
        v32 = 13;
        LODWORD(v57) = *(_DWORD *)(v14 + 76);
        v33 = 2;
      }
      else
      {
        v31 = v30 - v29;
        *(_DWORD *)(a4 + 2560) = v31;
        v58 = v31;
        v32 = 12;
        v33 = 4;
        LODWORD(v57) = *(_DWORD *)(v14 + 76);
      }
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        v33,
        5u,
        v32,
        (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
        v57,
        v58);
    }
    else if ( v4 >= 0 )
    {
      v35 = v29 + *(unsigned __int16 *)(a4 + 2192);
      *(_DWORD *)(a4 + 2560) = v35;
      LODWORD(v57) = *(_DWORD *)(v14 + 76);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        4u,
        5u,
        0xEu,
        (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
        v57,
        v35);
      goto LABEL_39;
    }
    *(_DWORD *)(a4 + 2560) = 0;
LABEL_39:
    if ( (*(_DWORD *)(v14 + 72) & 7) != 0 )
    {
      v4 = -1073741823;
      *(_DWORD *)(a4 + 1548) = -2147481856;
      if ( *(_WORD *)(a4 + 2192) )
      {
        memmove(
          (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
          *(const void **)(a4 + 120),
          8LL * *(unsigned int *)(a4 + 128));
        *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
        v34 = 4024;
        *(_DWORD *)(a4 + 128) = 0;
        *(_DWORD *)(a4 + 1544) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
        goto LABEL_97;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 2400),
        -10000000LL);
    }
    if ( (*(_DWORD *)(a4 + 1620) & 0x8000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a4 + 1620), 0xFFFF7FFF);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        4u,
        5u,
        0xFu,
        (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids);
      v36 = *(_QWORD *)(a4 + 2400);
      *(_DWORD *)(a4 + 1548) = -2147481856;
      v4 = -1073741823;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
        WdfDriverGlobals,
        v36,
        -10000000LL);
    }
    else if ( *(_DWORD *)(a4 + 112) && v4 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 2400),
        0LL);
    }
    else if ( v4 == -1073741823 )
    {
      v4 = -1073741670;
    }
    v37 = *(_QWORD *)(a4 + 48);
    if ( v37 )
    {
      v38 = v37 + 16;
      for ( kk = *(_QWORD *)(v37 + 16); ; kk = *(_QWORD *)(v43 + 8) )
      {
        v43 = kk - 8;
        if ( v38 == v43 + 8 )
          break;
        for ( mm = 0; mm < *(_DWORD *)(v43 + 24); ++mm )
        {
          v41 = (unsigned __int64)mm << 6;
          if ( *(_DWORD *)(v41 + v43 + 48) == 3 )
          {
            v42 = 6;
            if ( v4 >= 0 )
              v42 = 4;
            *(_DWORD *)(v41 + v43 + 48) = v42;
          }
        }
      }
    }
    *(_DWORD *)(a4 + 128) = 0;
    *(_DWORD *)(a4 + 112) = 0;
    *(_DWORD *)(a4 + 144) = 0;
    goto LABEL_89;
  }
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      *(_QWORD *)(a4 + 416),
                      0LL)
                  + 32) & 3) != 0 )
  {
    v54 = *(_QWORD *)(a4 + 2400);
    *(_DWORD *)(a4 + 1548) = -2147481856;
    v4 = -1073741823;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      v54,
      -10000000LL);
  }
  else if ( v4 < 0 )
  {
    if ( v4 == -1073741823 )
    {
      v4 = -1073741670;
      goto LABEL_90;
    }
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a4 + 2400),
      0LL);
  }
LABEL_89:
  if ( v4 < 0 )
  {
LABEL_90:
    *(_DWORD *)(a4 + 1544) = v4;
    if ( !*(_DWORD *)(a4 + 1548) )
    {
      if ( v4 == -1073741667 )
        USBDErrorFromNTStatus = -1073713152;
      else
        USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v4);
      *(_DWORD *)(a4 + 1548) = USBDErrorFromNTStatus;
    }
  }
  v34 = 4020;
  if ( v4 >= 0 )
    v34 = 4028;
LABEL_97:
  HUBSM_AddEvent(a4 + 488, v34);
}
