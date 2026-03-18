/*
 * XREFs of MiGetThreadPartition @ 0x14021D480
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall MiGetThreadPartition(__int64 a1)
{
  return MiGetVmPartition(*(_QWORD *)(a1 + 184) + 1272LL);
}
