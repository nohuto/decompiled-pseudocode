/*
 * XREFs of MiGetThreadPartition @ 0x140127940
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetThreadPartition(__int64 a1)
{
  return MiGetVmPartition(*(_QWORD *)(a1 + 184) + 1280LL);
}
