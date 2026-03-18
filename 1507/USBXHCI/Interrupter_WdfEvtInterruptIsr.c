/*
 * XREFs of Interrupter_WdfEvtInterruptIsr @ 0x1C001DB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Interrupter_WdfEvtInterruptIsr(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v7; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040220);
  v5 = v4;
  if ( a2 )
  {
    ++*(_DWORD *)(v4 + 48);
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 1136))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      a1);
    return 1;
  }
  if ( (*(_DWORD *)(v4 + 104) & 1) != 0 )
  {
LABEL_5:
    ++*(_DWORD *)(v5 + 48);
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 1136))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      a1);
    return 1;
  }
  v7 = **(_DWORD **)(v4 + 24);
  if ( (v7 & 1) != 0 )
  {
    **(_DWORD **)(v5 + 24) = v7;
    _InterlockedOr(v8, 0);
    goto LABEL_5;
  }
  return 0;
}
