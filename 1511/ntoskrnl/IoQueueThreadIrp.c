/*
 * XREFs of IoQueueThreadIrp @ 0x1401268B4
 * Callers:
 *     PiPagePathSetState @ 0x1405493FC (PiPagePathSetState.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  IopQueueThreadIrp((__int64)Irp, v1, v2);
}
