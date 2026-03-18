/*
 * XREFs of Interrupter_WdfEvtInterruptEnable @ 0x1C0005A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptEnable(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0041250);
  v2 = *(_DWORD *)(v1 + 32);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL),
    v2,
    8,
    30,
    (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
    *(_DWORD *)(v1 + 32));
  v3 = *(_QWORD *)(v1 + 24);
  *(_DWORD *)(v1 + 104) = *(_DWORD *)(v1 + 104) & 0xFFFFFFF9 | 4;
  *(_DWORD *)(v3 + 4) = 200;
  _InterlockedOr(v5, 0);
  **(_DWORD **)(v1 + 24) |= 2u;
  _InterlockedOr(v5, 0);
  return 0LL;
}
