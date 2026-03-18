/*
 * XREFs of ACPIFlushPowerQueueCallback @ 0x1C0035A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIFlushPowerQueueCallback(__int64 a1, __int64 a2)
{
  return AMLIRestartContext(a2);
}
