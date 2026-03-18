/*
 * XREFs of HUBMUX_CreatePSM @ 0x1C000CA2C
 * Callers:
 *     HUBMUX_CreateChildPSMs @ 0x1C000CF20 (HUBMUX_CreateChildPSMs.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C000C894 (WPP_RECORDER_SF_qqd.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBMUX_CreatePSM(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // r9d
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 Timer; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v23[7]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v24[5]; // [rsp+80h] [rbp-29h] BYREF
  _DWORD v25[4]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  char v27; // [rsp+C0h] [rbp+17h]
  int v28; // [rsp+C4h] [rbp+1Bh]
  char pszDest[16]; // [rsp+C8h] [rbp+1Fh] BYREF

  v4 = 0LL;
  memset(v23, 0, sizeof(v23));
  v23[6] = off_1C005B230;
  v23[4] = *(_QWORD *)(a1 + 16);
  v23[1] = HUBMISC_EvtPsmCleanup;
  v23[2] = HUBMISC_EvtPsmDestroy;
  LODWORD(v23[0]) = 56;
  v23[3] = 0x100000002LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v23,
         &v22);
  v6 = v5;
  if ( v5 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      4u,
      0xAu,
      (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids,
      v5);
    v22 = 0LL;
    goto LABEL_15;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v7,
    "PSM Tag",
    141LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v22,
         off_1C005B230);
  memset((void *)v4, 0, 0x5B8uLL);
  *(_QWORD *)v4 = a1;
  *(_OWORD *)(v4 + 200) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 216) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v4 + 232) = *((_QWORD *)a2 + 4);
  v8 = *a2;
  v9 = *(_DWORD *)(a1 + 96);
  v25[1] = 0;
  v25[0] = 48;
  pszDest[0] = 0;
  v28 = 16;
  v26 = v4;
  v27 = 1;
  v25[2] = 1024;
  v25[3] = 512;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d port%d", v9, v8);
  v10 = (__int64 *)(v4 + 1432);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v25, v4 + 1432) < 0 )
    *v10 = *(_QWORD *)(a1 + 2488);
  memset(v23, 0, sizeof(v23));
  v11 = *(_QWORD *)(a1 + 16);
  v23[3] = 0x100000001LL;
  v23[4] = v22;
  LODWORD(v23[0]) = 56;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v11);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          v23,
          v12,
          v4 + 16);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 11;
LABEL_7:
    WPP_RECORDER_SF_d(*v10, 2u, 4u, v14, (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids, v13);
    goto LABEL_15;
  }
  *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v4 + 16));
  KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 1112));
  v15 = *(_QWORD *)v4;
  *(_DWORD *)(v4 + 1152) = 0;
  *(_DWORD *)(v4 + 1224) = 0;
  *(_QWORD *)(v4 + 1232) = v4;
  *(_QWORD *)(v4 + 1240) = HUBSM_AddPsm20Event;
  v16 = *(_QWORD *)(v15 + 240);
  *(_QWORD *)(v4 + 1272) = v15;
  *(_QWORD *)(v4 + 1304) = v16;
  Timer = ExAllocateTimer(HUBMISC_PsmEventTimer, v4, 4LL);
  *(_QWORD *)(v4 + 1312) = Timer;
  if ( Timer )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x80000) != 0 )
    {
      memset(v23, 0, sizeof(v23));
      LODWORD(v23[0]) = 56;
      v23[3] = 0x100000001LL;
      v23[4] = v22;
      memset(v24, 0, sizeof(v24));
      LODWORD(v24[2]) = 0;
      LODWORD(v24[3]) = 0;
      v24[1] = HUBMISC_PsmResetCompletePollingTimer;
      LODWORD(v24[0]) = 40;
      BYTE4(v24[2]) = 1;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              v24,
              v23,
              v4 + 240);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 13;
        goto LABEL_7;
      }
    }
    v18 = *(_QWORD *)v4;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v4 + 16LL));
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v18 + 488))(*(_QWORD *)(v18 + 240), v19, 1LL);
    *(_QWORD *)(v4 + 1264) = v20;
    if ( !v20 )
    {
      WPP_RECORDER_SF_(*v10, 2u, 4u, 0xEu, (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids);
      v6 = -1073741670;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0xCu, (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids);
  }
LABEL_15:
  if ( v6 >= 0 )
  {
    WPP_RECORDER_SF_qqd(
      *(_QWORD *)(a1 + 2488),
      4u,
      3u,
      0xFu,
      (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids,
      a1,
      v4,
      *a2);
  }
  else if ( v22 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return 0LL;
  }
  return v22;
}
