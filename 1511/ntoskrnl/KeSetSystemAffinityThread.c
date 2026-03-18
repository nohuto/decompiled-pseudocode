/*
 * XREFs of KeSetSystemAffinityThread @ 0x1401C31A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeSetSystemAffinityThread(KAFFINITY Affinity)
{
  KeSetSystemAffinityThreadEx(Affinity);
}
