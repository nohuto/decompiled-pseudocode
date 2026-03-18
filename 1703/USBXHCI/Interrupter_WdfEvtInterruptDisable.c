/*
 * XREFs of Interrupter_WdfEvtInterruptDisable @ 0x1C0003E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDisable(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00452A0);
  v2 = *(_DWORD *)(v1 + 32);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL),
    v2,
    8,
    31,
    (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
    *(_DWORD *)(v1 + 32));
  *(_DWORD *)(v1 + 96) &= ~4u;
  **(_DWORD **)(v1 + 24) &= ~2u;
  _InterlockedOr(v4, 0);
  return 0LL;
}
