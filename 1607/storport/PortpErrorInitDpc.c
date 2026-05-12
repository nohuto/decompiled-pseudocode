/*
 * XREFs of PortpErrorInitDpc @ 0x1C0044770
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0060F90 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(__int64 a1)
{
  KeInitializeDpc((PRKDPC)(a1 + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, (PVOID)a1);
}
