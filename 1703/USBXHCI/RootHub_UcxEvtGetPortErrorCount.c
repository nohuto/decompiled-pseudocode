/*
 * XREFs of RootHub_UcxEvtGetPortErrorCount @ 0x1C0024000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0024B90 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortErrorCount(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // r15d
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+28h] [rbp-A0h]
  int v16; // [rsp+30h] [rbp-98h]
  __int64 v17; // [rsp+30h] [rbp-98h]
  _QWORD v18[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045200);
  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v18);
  v4 = v18[1];
  v5 = 0;
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      4u,
      0xAu,
      0xB0u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    *(_DWORD *)(v4 + 4) = -1073713152;
    v5 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v5);
  }
  v6 = *(unsigned __int16 *)(v4 + 132);
  if ( *(_BYTE *)(v4 + 128) != 0xA3
    || *(_BYTE *)(v4 + 129) != 13
    || *(_WORD *)(v4 + 130)
    || !*(_WORD *)(v4 + 132)
    || v6 > *(_DWORD *)(v3 + 16)
    || *(_WORD *)(v4 + 134) != 2 )
  {
    v10 = 177;
    v11 = *(unsigned __int8 *)(v4 + 134);
    v12 = *(unsigned __int8 *)(v4 + 133);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( *(_BYTE *)(56 * v7 + *(_QWORD *)(v3 + 48) + 1) != 3 )
  {
    v10 = 180;
    v11 = *(unsigned __int8 *)(v4 + 134);
    v12 = *(unsigned __int8 *)(v4 + 133);
LABEL_15:
    WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL), v11, v12, v10);
    v5 = -1073741823;
    *(_DWORD *)(v4 + 4) = -1073741820;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v5);
  }
  v8 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 16 * v7 + 8);
  **(_WORD **)(v4 + 40) = v8;
  v9 = (unsigned __int16)v8;
  v16 = (unsigned __int16)v8;
  v14 = v6;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
    4u,
    0xAu,
    0xB2u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v14,
    v16);
  if ( v9 > 0xA )
  {
    LODWORD(v17) = v9;
    LODWORD(v15) = v6;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      2u,
      0xAu,
      0xB3u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v15,
      v17);
  }
  *(_DWORD *)(v4 + 4) = 0;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v5);
}
