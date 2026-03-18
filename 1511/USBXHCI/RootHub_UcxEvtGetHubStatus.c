/*
 * XREFs of RootHub_UcxEvtGetHubStatus @ 0x1C00056D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0027F98 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetHubStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  _QWORD v6[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041228);
  memset(v6, 0, sizeof(v6));
  LOWORD(v6[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, a2, v6);
  v4 = v6[1];
  if ( *(_BYTE *)(v6[1] + 128LL) != 0xA0
    || *(_BYTE *)(v6[1] + 129LL)
    || *(_WORD *)(v6[1] + 130LL)
    || *(_WORD *)(v6[1] + 132LL)
    || *(_WORD *)(v6[1] + 134LL) != 4 )
  {
    WPP_RECORDER_SF_DDDDDDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
      *(unsigned __int8 *)(v6[1] + 134LL),
      *(unsigned __int8 *)(v6[1] + 133LL),
      102);
    *(_DWORD *)(v4 + 4) = -1073741820;
  }
  else
  {
    **(_DWORD **)(v6[1] + 40LL) = 0;
    *(_DWORD *)(v4 + 4) = 0;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2104))(WdfDriverGlobals, a2);
}
