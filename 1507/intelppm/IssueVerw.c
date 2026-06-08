/*
 * XREFs of IssueVerw @ 0x1C0002240
 * Callers:
 *     MWaitIdle @ 0x1C00032A0 (MWaitIdle.c)
 *     C1Idle @ 0x1C0004290 (C1Idle.c)
 *     C2Idle @ 0x1C00042E0 (C2Idle.c)
 *     C3Idle @ 0x1C00043B0 (C3Idle.c)
 *     IoHaltC1Idle @ 0x1C0004530 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
