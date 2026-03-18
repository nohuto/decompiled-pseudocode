/*
 * XREFs of KiTriggerForegroundBoostDpc @ 0x1400AB764
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 */

void __fastcall KiTriggerForegroundBoostDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = -1LL;
  v4[0] = 0LL;
  ((void (__fastcall *)(void *, __int64, _QWORD, _QWORD *))KeSetTimer2)(&KiForegroundState, -300000LL, 0LL, v4);
}
