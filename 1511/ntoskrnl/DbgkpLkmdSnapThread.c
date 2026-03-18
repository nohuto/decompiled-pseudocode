/*
 * XREFs of DbgkpLkmdSnapThread @ 0x1401ABABC
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateQueueApc @ 0x1401C7740 (KeEnumerateQueueApc.c)
 */

__int64 __fastcall DbgkpLkmdSnapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KeEnumerateQueueApc(a3, DbgkpLkmdEnumApcOrDpcDataCallback, a1, 0LL);
  return DbgkpLkmdLaunchSnapApc(a1, a2, a3, a4);
}
