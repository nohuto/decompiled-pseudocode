/*
 * XREFs of HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C001DEEC
 * Callers:
 *     HUBHSM_UpdatingHubInfoInUCX @ 0x1C0007D80 (HUBHSM_UpdatingHubInfoInUCX.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0027D24 (HUBDESC_ParseConfigurationDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HUBUCX_UpdateHubInformationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // r9
  __int64 v6; // [rsp+28h] [rbp-51h]
  _QWORD v7[14]; // [rsp+60h] [rbp-19h] BYREF
  void *v8; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v9; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v10; // [rsp+F0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v9 = 0LL;
  memset(v7, 0, 0x38uLL);
  v7[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v7[0]) = 56;
  v7[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v7,
         v1,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 59;
LABEL_3:
    LODWORD(v6) = v3;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2440), 2u, 3u, v5, (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids, v6);
    goto LABEL_14;
  }
  memset(v7, 0, 0x38uLL);
  v7[4] = v9;
  LODWORD(v7[0]) = 56;
  v7[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v7,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         40LL,
         &v10,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 60;
    goto LABEL_3;
  }
  memset(v8, 0, 0x28uLL);
  *(_DWORD *)v8 = 40;
  *((_QWORD *)v8 + 1) = *(_QWORD *)(a1 + 208);
  *((_QWORD *)v8 + 2) = *(_QWORD *)(a1 + 208);
  *((_DWORD *)v8 + 6) = *(unsigned __int16 *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 216) == 2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 1u);
    *((_DWORD *)v8 + 7) = 1;
    if ( HUBDESC_ParseConfigurationDescriptor(
           *(_QWORD *)(a1 + 1176),
           *(_QWORD *)(a1 + 1176),
           -1,
           -1,
           9,
           -1,
           2,
           0LL,
           *(_QWORD *)(a1 + 2440)) )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 2u);
      *((_DWORD *)v8 + 7) = *(unsigned __int16 *)(a1 + 44);
    }
    *((_DWORD *)v8 + 8) = (*(unsigned __int16 *)(a1 + 1103) >> 5) & 3;
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
         WdfDriverGlobals,
         v1,
         v9,
         4788263LL,
         v10,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 61;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v9,
    HUBUCX_UpdateHubInformationUsingUCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v9,
          v1,
          0LL) )
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v9);
LABEL_14:
  if ( v4 < 0 )
  {
    LODWORD(v6) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      0x3Eu,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v6);
    if ( v9 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    HUBSM_AddEvent(a1 + 1184, 0x7F6u);
  }
}
