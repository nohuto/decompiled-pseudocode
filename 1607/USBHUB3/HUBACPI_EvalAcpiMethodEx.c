/*
 * XREFs of HUBACPI_EvalAcpiMethodEx @ 0x1C006FB54
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00702A4 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C003074C (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBACPI_EvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **); // rax
  int v9; // eax
  unsigned int v10; // edi
  unsigned __int16 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  size_t v16; // rdx
  char v17; // al
  size_t v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  _DWORD *v21; // rax
  __int64 v23; // [rsp+28h] [rbp-61h]
  void *v24; // [rsp+50h] [rbp-39h] BYREF
  __int64 v25; // [rsp+58h] [rbp-31h] BYREF
  __int64 v26; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v27[7]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v28[2]; // [rsp+A0h] [rbp+17h] BYREF
  int pszSrc; // [rsp+100h] [rbp+77h] BYREF

  pszSrc = a3;
  v25 = 0LL;
  memset(v27, 0, sizeof(v27));
  v7 = *(_QWORD *)(a1 + 16);
  v24 = 0LL;
  v27[4] = v7;
  LODWORD(v27[0]) = 56;
  v8 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536);
  v27[3] = 0x100000001LL;
  v9 = v8(WdfDriverGlobals, v27, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 276LL, &v26, &v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 17;
LABEL_3:
    LODWORD(v23) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      v11,
      (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids,
      v23);
    goto LABEL_23;
  }
  v12 = *a2;
  v13 = 256LL;
  if ( (unsigned __int64)((int)v12 + 1 + 5LL) <= 0x100 )
  {
    memset(v24, 0, 0x114uLL);
    v14 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v24 = 1181312321;
    *((_DWORD *)v24 + 65) = 276;
    v15 = (char *)v24 + 4;
    v16 = v14 - ((_QWORD)v24 + 4);
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
    if ( !v13 )
      --v15;
    *v15 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v24 + 4, v16, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v24 + 4, v18, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v25 = 0LL;
    v20 = v19;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v19,
           &v25);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 19;
      goto LABEL_3;
    }
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
           WdfDriverGlobals,
           v20,
           v25,
           3325976LL,
           v26,
           0LL,
           a4,
           0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 20;
      goto LABEL_3;
    }
    v28[1] = 0LL;
    v28[0] = 0x200000010LL;
    if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01015 + 2024))(
            WdfDriverGlobals,
            v25,
            v20,
            v28) )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 2u, 3u, 0x15u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v25);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 22;
      goto LABEL_3;
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      a4,
                      0LL);
    if ( *v21 != 1114596673 || !v21[2] )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 2u, 3u, 0x17u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
      v10 = -1072431089;
    }
  }
  else
  {
    v10 = -1073741811;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 2u, 3u, 0x12u, (__int64)&WPP_1f8d4bc1bafd3b07a71bc23db7e99769_Traceguids);
  }
LABEL_23:
  if ( v25 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v26 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v10;
}
