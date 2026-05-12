/*
 * XREFs of PortpErrorInitDpc @ 0x1C003DE40
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0059AF0 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(__int64 a1)
{
  KeInitializeDpc((PRKDPC)(a1 + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, (PVOID)a1);
}
