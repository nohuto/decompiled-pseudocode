/*
 * XREFs of HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C0019800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingInterfaceInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 i; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  _QWORD v11[5]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(__int64 **)(a1 + 960);
  v2 = *v1;
  memset(v11, 0, sizeof(v11));
  v3 = v1[55];
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v11);
  v4 = v1[6];
  v5 = v11[1];
  v6 = *(_QWORD *)(v4 + 16) - 8LL;
  if ( v4 != *(_QWORD *)(v4 + 16) - 16LL )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v6 + 32) + 2LL) != *(_BYTE *)(v11[1] + 34LL) )
    {
      v6 = *(_QWORD *)(v6 + 8) - 8LL;
      if ( v4 == v6 - 8 )
        return 4077LL;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
    {
      v8 = (unsigned __int64)(unsigned int)i << 6;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 464))(*(_QWORD *)(v8 + v6 + 40));
      if ( !v9 )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432),
          2u,
          5u,
          0x2Cu,
          (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
      *(_QWORD *)(v8 + v6 + 56) = v9;
      *(_QWORD *)(v5 + 24 * i + 64) = v9;
      (*(void (__fastcall **)(_QWORD))(v2 + 456))(*(_QWORD *)(v8 + v6 + 40));
    }
  }
  return 4077LL;
}
