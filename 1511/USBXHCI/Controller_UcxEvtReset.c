/*
 * XREFs of Controller_UcxEvtReset @ 0x1C001F8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
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
         off_1C00410E8);
  if ( Controller_IsControllerAccessible(v2) )
    Controller_InternalReset(v2, v3, v4);
  else
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 64), 2u, 3u, 0xB2u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  v7 = 1;
  v6 = 12LL;
  return ((__int64 (__fastcall *)(void *, __int64, __int64 *))qword_1C0042758)(WPP_MAIN_CB.Dpc.DpcData, a1, &v6);
}
