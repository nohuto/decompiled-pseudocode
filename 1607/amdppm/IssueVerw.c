/*
 * XREFs of IssueVerw @ 0x1C00067C0
 * Callers:
 *     C1Idle @ 0x1C0003520 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0003570 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C00035E0 (C2Idle.c)
 *     C3Idle @ 0x1C0003730 (C3Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
