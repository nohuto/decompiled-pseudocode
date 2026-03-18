/*
 * XREFs of HUBACPI_EnumChildren @ 0x1C0073740
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073AD0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBACPI_EnumChildren(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *); // rax
  int v6; // eax
  int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v9; // rax
  PWDF_DRIVER_GLOBALS v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // rax
  __int64 v17; // [rsp+28h] [rbp-61h]
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+58h] [rbp-31h] BYREF
  __int64 v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v22[7]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v23[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  v18 = 0LL;
  memset(v22, 0, sizeof(v22));
  v4 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v22[4] = v4;
  LODWORD(v22[0]) = 56;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536);
  v22[3] = 0x100000001LL;
  v6 = v5(WdfDriverGlobals, v22, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 16LL, &v21, &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 24;
LABEL_3:
    LODWORD(v17) = v6;
LABEL_4:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      3u,
      v8,
      (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids,
      v17);
    goto LABEL_28;
  }
  v9 = v19;
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  v10 = WdfDriverGlobals;
  *(_DWORD *)v19 = 1214866753;
  *(_DWORD *)(v19 + 4) = 1;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(v10, *(_QWORD *)(a1 + 16));
  v18 = 0LL;
  v12 = v11;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v11,
         &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 25;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v12,
         v18,
         3325984LL,
         v21,
         0LL,
         a2,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 26;
    goto LABEL_3;
  }
  v23[1] = 0LL;
  v23[0] = 0x200000010LL;
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v18,
          v12,
          v23) )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0x1Bu, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v18);
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
  {
    v13 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a2,
                      &v20);
    if ( v20 == 20 )
    {
      if ( v7 != -2147483643 )
      {
        LODWORD(v17) = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2488),
          2u,
          3u,
          0x1Du,
          (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids,
          v17);
LABEL_27:
        v7 = -1072431089;
        goto LABEL_28;
      }
      if ( *v13 == 1198089537 && v13[1] >= 0x14u )
        goto LABEL_28;
      v14 = 30;
    }
    else
    {
      if ( v7 < 0 )
        goto LABEL_28;
      if ( *v13 == 1198089537 )
      {
        if ( v13[1] )
        {
          v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2208))(
                  WdfDriverGlobals,
                  v18);
          if ( v15 == v20 )
            goto LABEL_28;
        }
      }
      v14 = 31;
    }
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, v14, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
    goto LABEL_27;
  }
  if ( v7 != -1073741637 )
  {
    v8 = 28;
    LODWORD(v17) = v7;
    goto LABEL_4;
  }
LABEL_28:
  if ( v18 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v21 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (unsigned int)v7;
}
