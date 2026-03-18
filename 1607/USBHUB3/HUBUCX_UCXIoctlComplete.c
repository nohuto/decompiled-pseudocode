/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C001C660
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     Template_pqq @ 0x1C000A36C (Template_pqq.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0010194 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C001C594 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
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
  __int64 v36; // rax
  __int64 v37; // rdx
  PWDF_DRIVER_GLOBALS v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 kk; // rcx
  unsigned int mm; // edx
  unsigned __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // rax
  bool v49; // zf
  __int64 v50; // rax
  _QWORD *v51; // r9
  __int64 v52; // rax
  _QWORD *i; // rdx
  unsigned int j; // ecx
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  PWDF_DRIVER_GLOBALS v58; // rcx
  int USBDErrorFromNTStatus; // eax
  __int64 v60; // [rsp+20h] [rbp-38h]
  __int64 v61; // [rsp+28h] [rbp-30h]
  int v62; // [rsp+30h] [rbp-28h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), a2, a3, 0xAu, v60);
    v7 = *(_DWORD *)(a4 + 424);
    v8 = (unsigned int)(v7 - 4788231);
    if ( (unsigned int)v8 > 0x38 || (v9 = 0x100000001000001LL, !_bittest64(&v9, v8)) )
    {
      WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), v7, v6, 0xBu, v60);
      v10 = *(_QWORD *)(a4 + 8);
      v11 = *(unsigned int *)(*(_QWORD *)v10 + 2536LL);
      if ( (v11 & 0x80u) != 0LL )
        HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v10 + 272);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20000) != 0 )
      {
        LODWORD(v60) = *(_DWORD *)(a4 + 424);
        Template_pqq(
          v11,
          &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
          (const GUID *)(a4 + 1500),
          *(_QWORD *)(a4 + 24),
          v60,
          v4);
      }
    }
  }
  if ( *(_DWORD *)(a4 + 424) != 4788247 )
  {
    switch ( *(_DWORD *)(a4 + 424) )
    {
      case 0x49101B:
        v50 = *(_QWORD *)(a4 + 48);
        if ( v50 )
        {
          v51 = (_QWORD *)(v50 + 16);
          v52 = *(_QWORD *)(v50 + 16) - 8LL;
          for ( i = (_QWORD *)(v52 + 8); v51 != i; i = (_QWORD *)*i )
          {
            for ( j = 0; j < *(_DWORD *)(v52 + 24); ++j )
            {
              v55 = (unsigned __int64)j << 6;
              if ( *(_DWORD *)(v55 + v52 + 48) == 5 )
                *(_DWORD *)(v55 + v52 + 48) = 6;
            }
            v52 = *i - 8LL;
          }
        }
        goto LABEL_89;
      case 0x49101F:
        v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C00580E8);
        if ( v4 < 0 )
        {
          *(_DWORD *)(a4 + 2416) = 1073807361;
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
          {
            LODWORD(v60) = v4;
            Template_pq(
              v46,
              &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
              (const GUID *)(a4 + 1500),
              *(_QWORD *)(a4 + 24),
              v60);
          }
          if ( (*(_DWORD *)(a4 + 1440) & 0x20000) != 0 && (*(_BYTE *)(a4 + 1622) & 1) == 0 )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x11u,
              (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids);
            _InterlockedOr((volatile signed __int32 *)(a4 + 1620), 0x10000u);
            _InterlockedIncrement((volatile signed __int32 *)(v47 + 88));
          }
        }
        else
        {
          v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                  WdfDriverGlobals,
                  *(_QWORD *)(a4 + 416),
                  0LL);
          v49 = (*(_BYTE *)(a4 + 1622) & 1) == 0;
          *(_DWORD *)(a4 + 1632) = *(_DWORD *)(v48 + 28);
          if ( !v49 )
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
              2u,
              5u,
              0x10u,
              (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids);
            _InterlockedAnd((volatile signed __int32 *)(a4 + 1620), 0xFFFEFFFF);
            _InterlockedDecrement((volatile signed __int32 *)(v47 + 88));
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
        v62 = *(unsigned __int16 *)(a4 + 2192);
        v32 = 13;
        LODWORD(v61) = *(_DWORD *)(v14 + 76);
        v33 = 2;
      }
      else
      {
        v31 = v30 - v29;
        *(_DWORD *)(a4 + 2560) = v31;
        v62 = v31;
        v32 = 12;
        v33 = 4;
        LODWORD(v61) = *(_DWORD *)(v14 + 76);
      }
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        v33,
        5u,
        v32,
        (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
        v61,
        v62);
    }
    else if ( v4 >= 0 )
    {
      v35 = v29 + *(unsigned __int16 *)(a4 + 2192);
      *(_DWORD *)(a4 + 2560) = v35;
      LODWORD(v61) = *(_DWORD *)(v14 + 76);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        4u,
        5u,
        0xEu,
        (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
        v61,
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
        (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids);
      v36 = WdfFunctions_01015;
      v37 = *(_QWORD *)(a4 + 2400);
      v4 = -1073741823;
      v38 = WdfDriverGlobals;
      *(_DWORD *)(a4 + 1548) = -2147481856;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v36 + 2552))(v38, v37, -10000000LL);
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
    v39 = *(_QWORD *)(a4 + 48);
    if ( v39 )
    {
      v40 = v39 + 16;
      for ( kk = *(_QWORD *)(v39 + 16); ; kk = *(_QWORD *)(v45 + 8) )
      {
        v45 = kk - 8;
        if ( v40 == v45 + 8 )
          break;
        for ( mm = 0; mm < *(_DWORD *)(v45 + 24); ++mm )
        {
          v43 = (unsigned __int64)mm << 6;
          if ( *(_DWORD *)(v43 + v45 + 48) == 3 )
          {
            v44 = 6;
            if ( v4 >= 0 )
              v44 = 4;
            *(_DWORD *)(v43 + v45 + 48) = v44;
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
    v56 = WdfFunctions_01015;
    v57 = *(_QWORD *)(a4 + 2400);
    v4 = -1073741823;
    v58 = WdfDriverGlobals;
    *(_DWORD *)(a4 + 1548) = -2147481856;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v56 + 2552))(v58, v57, -10000000LL);
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
