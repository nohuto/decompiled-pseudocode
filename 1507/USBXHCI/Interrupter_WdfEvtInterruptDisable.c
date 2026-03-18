/*
 * XREFs of Interrupter_WdfEvtInterruptDisable @ 0x1C00018D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDisable(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040220);
  v2 = *(_DWORD *)(v1 + 32);
  LOBYTE(v2) = 4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v1 + 8) + 64LL),
    v2,
    8,
    31,
    (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
    *(_DWORD *)(v1 + 32));
  *(_DWORD *)(v1 + 104) &= ~4u;
  **(_DWORD **)(v1 + 24) &= ~2u;
  _InterlockedOr(v4, 0);
  return 0LL;
}
