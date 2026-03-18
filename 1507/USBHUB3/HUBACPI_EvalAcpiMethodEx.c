/*
 * XREFs of HUBACPI_EvalAcpiMethodEx @ 0x1C006DE9C
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

__int64 __fastcall HUBACPI_EvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int16 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  size_t v15; // rdx
  char v16; // al
  size_t v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rax
  __int64 v22; // [rsp+28h] [rbp-61h]
  void *v23; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+58h] [rbp-31h] BYREF
  __int64 v25; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v26[7]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v27[2]; // [rsp+A0h] [rbp+17h] BYREF
  int pszSrc; // [rsp+100h] [rbp+77h] BYREF

  pszSrc = a3;
  v24 = 0LL;
  memset(v26, 0, sizeof(v26));
  v7 = *(_QWORD *)(a1 + 16);
  v23 = 0LL;
  v26[4] = v7;
  LODWORD(v26[0]) = 56;
  v26[3] = 0x100000001LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v26,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         276LL,
         &v25,
         &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 17;
LABEL_3:
    LODWORD(v22) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      v10,
      (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
      v22);
    goto LABEL_23;
  }
  v11 = *a2;
  v12 = 256LL;
  if ( (unsigned __int64)((int)v11 + 1 + 5LL) <= 0x100 )
  {
    memset(v23, 0, 0x114uLL);
    v13 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v23 = 1181312321;
    *((_DWORD *)v23 + 65) = 276;
    v14 = (char *)v23 + 4;
    v15 = v13 - ((_QWORD)v23 + 4);
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
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v23 + 4, v15, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v23 + 4, v17, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v24 = 0LL;
    v19 = v18;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v18,
           &v24);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 19;
      goto LABEL_3;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
           WdfDriverGlobals,
           v19,
           v24,
           3325976LL,
           v25,
           0LL,
           a4,
           0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 20;
      goto LABEL_3;
    }
    v27[1] = 0LL;
    v27[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v24,
            v19,
            v27) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0x15u, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v24);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 22;
      goto LABEL_3;
    }
    v20 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a4,
                      0LL);
    if ( *v20 != 1114596673 || !v20[2] )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0x17u, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
      v9 = -1072431089;
    }
  }
  else
  {
    v9 = -1073741811;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0x12u, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
  }
LABEL_23:
  if ( v24 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v25 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v9;
}
