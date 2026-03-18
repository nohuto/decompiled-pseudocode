/*
 * XREFs of KiTriggerForegroundBoostDpc @ 0x1400EAF84
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
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
  KeSetTimer2(KiForegroundState, -300000LL, 0LL, (__int64)v4);
}
