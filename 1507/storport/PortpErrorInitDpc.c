/*
 * XREFs of PortpErrorInitDpc @ 0x1C003B470
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0055C2C (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(__int64 a1)
{
  KeInitializeDpc((PRKDPC)(a1 + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, (PVOID)a1);
}
