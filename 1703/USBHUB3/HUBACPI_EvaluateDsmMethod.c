/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x1C0072F14
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0073AD0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C0033514 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 (__fastcall *v8)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **); // rax
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int16 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  char *v15; // rcx
  size_t v16; // rdx
  char v17; // al
  char *v18; // rax
  size_t v19; // rdx
  __int64 v20; // r12
  _WORD *v21; // rdi
  char *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  _DWORD *v25; // rax
  __int64 v27; // [rsp+30h] [rbp-71h]
  void *v28; // [rsp+58h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v31[7]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp+7h] BYREF

  v29 = 0LL;
  memset(v31, 0, sizeof(v31));
  v31[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v31[0]) = 56;
  v8 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536);
  v31[3] = 0x100000001LL;
  v28 = 0LL;
  v9 = v8(WdfDriverGlobals, v31, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 312LL, &v30, &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 10;
LABEL_3:
    LODWORD(v27) = v9;
LABEL_4:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      3u,
      v11,
      (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids,
      v27);
    goto LABEL_28;
  }
  v12 = *a2;
  v13 = 256LL;
  if ( (unsigned __int64)(v12 + 6) <= 0x100 )
  {
    memset(v28, 0, 0x138uLL);
    v14 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v28 = 1181312321;
    *((_DWORD *)v28 + 65) = 276;
    *((_DWORD *)v28 + 66) = 4;
    v15 = (char *)v28 + 4;
    v16 = v14 - ((_QWORD)v28 + 4);
    do
    {
      if ( !(v13 + v12 - 256) )
        break;
      v17 = v15[v16];
      if ( !v17 )
        break;
      *v15++ = v17;
      --v13;
    }
    while ( v13 );
    v18 = v15 - 1;
    if ( v13 )
      v18 = v15;
    *v18 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v28 + 4, v16, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v28 + 4, v19, "_DSM", 4uLL);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v29 = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v20,
           &v29);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 12;
      goto LABEL_3;
    }
    v21 = v28;
    v22 = (char *)v28 + 272;
    *((_DWORD *)v28 + 67) = 1048578;
    memcpy_s(v22, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
    LOWORD(v23) = v21[135];
    if ( (unsigned __int16)v23 >= 4u )
      v23 = (unsigned __int16)v23;
    else
      v23 = 4LL;
    *(_QWORD *)((char *)v21 + v23 + 272) = 0x40000LL;
    *(_DWORD *)((char *)v21 + v23 + 280) = 0x40000;
    *(_DWORD *)((char *)v21 + v23 + 284) = 2;
    *(_DWORD *)((char *)v21 + v23 + 288) = 3;
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
            WdfDriverGlobals,
            v20,
            v29,
            3325976LL,
            v30,
            0LL,
            a6,
            0LL);
    v10 = v24;
    if ( v24 < 0 )
    {
      v11 = 13;
      LODWORD(v27) = v24;
      goto LABEL_4;
    }
    v32[1] = 0LL;
    v32[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v29,
            v20,
            v32) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0xEu, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v29);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741810 )
    {
      v11 = 15;
      LODWORD(v27) = v10;
      goto LABEL_4;
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a6,
                      0LL);
    if ( *v25 != 1114596673 || !v25[2] )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0x10u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
      v10 = -1072431089;
    }
  }
  else
  {
    v10 = -1073741811;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 2u, 3u, 0xBu, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
  }
LABEL_28:
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v30 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v10;
}
