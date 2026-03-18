/*
 * XREFs of Controller_UcxEvtReset @ 0x1C001FD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 */

__int64 __fastcall Controller_UcxEvtReset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043340);
  if ( Controller_IsControllerAccessible(v2) )
    Controller_InternalReset(v2, v3, v4);
  else
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), 2u, 3u, 0xB5u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  v7 = 1;
  v6 = 12LL;
  return ((__int64 (__fastcall *)(void *, __int64, __int64 *))qword_1C0044738)(WPP_MAIN_CB.Dpc.SystemArgument2, a1, &v6);
}
