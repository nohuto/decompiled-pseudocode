/*
 * XREFs of PortpErrorDrainListDpc @ 0x1C0044750
 * Callers:
 *     <none>
 * Callees:
 *     PortTraceErrorDrainList @ 0x1C0044680 (PortTraceErrorDrainList.c)
 */

PSLIST_ENTRY __fastcall PortpErrorDrainListDpc(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  result = PortTraceErrorDrainList(*(PVOID *)(a2 + 8), (PSLIST_HEADER)(a2 + 64));
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 84));
  return result;
}
