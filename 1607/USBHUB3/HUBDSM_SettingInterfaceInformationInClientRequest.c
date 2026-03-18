/*
 * XREFs of HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C0017E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingInterfaceInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // r13
  _QWORD *v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 i; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  _QWORD v12[5]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(__int64 **)(a1 + 960);
  v2 = *v1;
  memset(v12, 0, sizeof(v12));
  v3 = v1[55];
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v12);
  v4 = v12[1];
  v5 = (_QWORD *)(v1[6] + 16);
  v6 = *v5 - 8LL;
  v7 = (_QWORD *)*v5;
  if ( v5 != (_QWORD *)*v5 )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v6 + 32) + 2LL) != *(_BYTE *)(v12[1] + 34LL) )
    {
      v6 = *v7 - 8LL;
      v7 = (_QWORD *)*v7;
      if ( v5 == v7 )
        return 4077LL;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
    {
      v9 = (unsigned __int64)(unsigned int)i << 6;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 448))(*(_QWORD *)(v9 + v6 + 40));
      if ( !v10 )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432),
          2u,
          5u,
          0x2Cu,
          (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
      *(_QWORD *)(v9 + v6 + 56) = v10;
      *(_QWORD *)(v4 + 24 * i + 64) = v10;
      (*(void (__fastcall **)(_QWORD))(v2 + 440))(*(_QWORD *)(v9 + v6 + 40));
    }
  }
  return 4077LL;
}
