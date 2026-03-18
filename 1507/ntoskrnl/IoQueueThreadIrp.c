/*
 * XREFs of IoQueueThreadIrp @ 0x140159CD8
 * Callers:
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
