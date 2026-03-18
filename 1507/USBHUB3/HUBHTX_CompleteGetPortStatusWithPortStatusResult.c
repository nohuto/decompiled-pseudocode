/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0004EC8
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x1C0006C80 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithPortStatusResult(__int64 *a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v11[5]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1[313] + 184);
  v3 = *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 a1[306])
                             + 184)
                 + 24LL);
  if ( v3 == 2228240 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2144))(
           WdfDriverGlobals,
           a1[306],
           &v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v10,
                   0LL)
               + 4) = v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        a1[306],
        8LL);
    }
    else
    {
      WPP_RECORDER_SF_d(a1[305], 2u, 3u, 0x71u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids, v4);
    }
  }
  else if ( v3 == 2228243 )
  {
    memset(v11, 0, sizeof(v11));
    v6 = a1[306];
    LOWORD(v11[0]) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v6,
      v11);
    v7 = (_DWORD *)v11[1];
    v5 = 0;
    v8 = v11[2];
    if ( (v2 & 1) != 0 )
      *(_DWORD *)v11[1] |= 2u;
    else
      v5 = -1073741810;
    if ( (v2 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 0x2000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)(v8 + 32), 0xFFFFDFFF);
      else
        *v7 |= 1u;
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
           a1[306],
           v5);
}
