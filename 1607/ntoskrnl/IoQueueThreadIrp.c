/*
 * XREFs of IoQueueThreadIrp @ 0x140132E00
 * Callers:
 *     PiPagePathSetState @ 0x14057D324 (PiPagePathSetState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
