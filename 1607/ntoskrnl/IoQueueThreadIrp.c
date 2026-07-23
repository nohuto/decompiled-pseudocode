/*
 * XREFs of IoQueueThreadIrp @ 0x140133370
 * Callers:
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
