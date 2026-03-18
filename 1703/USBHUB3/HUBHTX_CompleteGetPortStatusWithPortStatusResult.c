/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0005674
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x1C0007530 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithPortStatusResult(__int64 *a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  PWDF_DRIVER_GLOBALS v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v13[5]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1[319] + 184);
  v3 = *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 a1[312])
                             + 184)
                 + 24LL);
  if ( v3 == 2228240 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2144))(
           WdfDriverGlobals,
           a1[312],
           &v12);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
             WdfDriverGlobals,
             v12,
             0LL);
      v7 = WdfDriverGlobals;
      *(_WORD *)(v6 + 4) = v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(v7, a1[312], 8LL);
    }
    else
    {
      WPP_RECORDER_SF_d(a1[311], 2u, 3u, 0x71u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids, v4);
    }
  }
  else if ( v3 == 2228243 )
  {
    memset(v13, 0, sizeof(v13));
    v8 = a1[312];
    LOWORD(v13[0]) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v8,
      v13);
    v9 = (_DWORD *)v13[1];
    v5 = 0;
    v10 = v13[2];
    if ( (v2 & 1) != 0 )
      *(_DWORD *)v13[1] |= 2u;
    else
      v5 = -1073741810;
    if ( (v2 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 32) & 0x2000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)(v10 + 32), 0xFFFFDFFF);
      else
        *v9 |= 1u;
    }
    if ( (v2 & 0x10000) != 0 )
      v5 = -1073741810;
  }
  else
  {
    v5 = -1073741630;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1[312],
           v5);
}
