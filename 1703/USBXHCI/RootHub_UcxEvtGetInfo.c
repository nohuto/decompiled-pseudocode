/*
 * XREFs of RootHub_UcxEvtGetInfo @ 0x1C0009A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtGetInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // r8
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+30h] [rbp-48h]
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045200);
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v4 = (_WORD *)v12[1];
  if ( *(_DWORD *)v12[1] < 0x10u )
  {
    v10 = *(_DWORD *)v12[1];
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0xBBu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v10);
    v5 = -1073741811;
  }
  else
  {
    v5 = 0;
    *(_DWORD *)(v12[1] + 4LL) = 0;
    v6 = *(unsigned __int16 *)(v3 + 20);
    v4[4] = v6;
    v7 = *(unsigned __int16 *)(v3 + 22);
    v4[5] = v7;
    v4[6] = *(_WORD *)(v3 + 24);
    v4[7] = *(_WORD *)(v3 + 26);
    v11 = v7;
    v9 = v6;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      4u,
      0xAu,
      0xBCu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v9,
      v11);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v5);
}
