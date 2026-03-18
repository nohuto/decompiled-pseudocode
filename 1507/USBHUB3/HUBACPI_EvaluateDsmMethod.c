/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x1C006DA30
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C006E5EC (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C002F7BC (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v8; // eax
  unsigned int v9; // esi
  unsigned __int16 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  size_t v15; // rdx
  char v16; // al
  int v17; // r9d
  size_t v18; // r14
  size_t v19; // rdx
  __int64 v20; // rdi
  GUID *v21; // rax
  size_t v22; // rcx
  int v23; // eax
  _DWORD *v24; // rax
  __int64 v26; // [rsp+30h] [rbp-71h]
  void *v27; // [rsp+58h] [rbp-49h] BYREF
  __int64 v28; // [rsp+60h] [rbp-41h] BYREF
  __int64 v29; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v30[7]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v31[2]; // [rsp+A8h] [rbp+7h] BYREF

  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  v30[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v30[0]) = 56;
  v30[3] = 0x100000001LL;
  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v30,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         312LL,
         &v29,
         &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 10;
LABEL_3:
    LODWORD(v26) = v8;
LABEL_4:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      v10,
      (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
      v26);
    goto LABEL_28;
  }
  v11 = *a2;
  v12 = 256LL;
  if ( (unsigned __int64)((int)v11 + 1 + 5LL) <= 0x100 )
  {
    memset(v27, 0, 0x138uLL);
    v13 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v27 = 1181312321;
    *((_DWORD *)v27 + 65) = 276;
    *((_DWORD *)v27 + 66) = 4;
    v14 = (char *)v27 + 4;
    v15 = v13 - ((_QWORD)v27 + 4);
    do
    {
      if ( !(v12 + v11 - 256) )
        break;
      v16 = v14[v15];
      if ( !v16 )
        break;
      *v14++ = v16;
      --v12;
    }
    while ( v12 );
    if ( !v12 )
      --v14;
    *v14 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v27 + 4, v15, ".", 1uLL);
    v18 = (unsigned int)(v17 + 3);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v27 + 4, v19, "_DSM", v18);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v28 = 0LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v20,
           &v28);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = v18 + 8;
      goto LABEL_3;
    }
    v21 = (GUID *)v27;
    *((_DWORD *)v27 + 67) = 1048578;
    v21[17] = GUID_USB_ACPI_DSM;
    LOWORD(v22) = *(_WORD *)&v21[16].Data4[6];
    if ( (unsigned __int16)v18 <= (unsigned __int16)v22 )
      v22 = (unsigned __int16)v22;
    else
      v22 = v18;
    *(_QWORD *)((char *)&v21[17].Data1 + v22) = 0x40000LL;
    *(_DWORD *)&v21[17].Data4[v22] = 0x40000;
    *(_DWORD *)&v21[17].Data4[v22 + 4] = 2;
    *(unsigned int *)((char *)&v21[18].Data1 + v22) = 3;
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
            WdfDriverGlobals,
            v20,
            v28,
            3325976LL,
            v29,
            0LL,
            a6,
            0LL);
    v9 = v23;
    if ( v23 < 0 )
    {
      v10 = 13;
      LODWORD(v26) = v23;
      goto LABEL_4;
    }
    v31[1] = 0LL;
    v31[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v28,
            v20,
            v31) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0xEu, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v28);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741810 )
    {
      v10 = 15;
      LODWORD(v26) = v9;
      goto LABEL_4;
    }
    v24 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a6,
                      0LL);
    if ( *v24 != 1114596673 || !v24[2] )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0x10u, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
      v9 = -1072431089;
    }
  }
  else
  {
    v9 = -1073741811;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0xBu, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
  }
LABEL_28:
  if ( v28 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v9;
}
