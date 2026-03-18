/*
 * XREFs of HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C0017BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingConfigurationInformationInClientRequest(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rdx
  unsigned __int16 *v3; // rbp
  __int64 v4; // rsi
  _QWORD *v5; // r14
  bool i; // zf
  __int64 j; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  int v10; // eax
  int v11; // edi
  _QWORD *v13; // [rsp+30h] [rbp-78h]
  __int64 v14; // [rsp+40h] [rbp-68h]
  _QWORD *v15; // [rsp+48h] [rbp-60h]
  _QWORD v16[5]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 960);
  v13 = v1;
  v14 = *v1 + 320LL;
  memset(v16, 0, sizeof(v16));
  v2 = v1[55];
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v16);
  v3 = (unsigned __int16 *)(v16[1] + 40LL);
  v15 = (_QWORD *)(v1[6] + 16LL);
  v4 = *v15 - 8LL;
  v5 = (_QWORD *)*v15;
  for ( i = v15 == (_QWORD *)*v15; !i; i = v15 == v5 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v4 + 24); v1 = v13 )
    {
      v8 = (unsigned __int64)(unsigned int)j << 6;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(v14 + 128))(*(_QWORD *)(v8 + v4 + 40));
      if ( !v9 )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432LL),
          2u,
          5u,
          0x2Bu,
          (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
      v10 = (*(__int64 (__fastcall **)(_QWORD))(v14 + 136))(*(_QWORD *)(v8 + v4 + 40));
      *(_QWORD *)(v8 + v4 + 56) = v9;
      *(_QWORD *)&v3[12 * j + 16] = v9;
      v11 = v10;
      (*(void (__fastcall **)(_QWORD))(v14 + 120))(*(_QWORD *)(v8 + v4 + 40));
      *(_DWORD *)&v3[12 * j + 20] = v11;
      j = (unsigned int)(j + 1);
    }
    v4 = *v5 - 8LL;
    v3 = (unsigned __int16 *)((char *)v3 + *v3);
    v5 = (_QWORD *)*v5;
  }
  return 4077LL;
}
