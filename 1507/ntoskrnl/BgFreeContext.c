/*
 * XREFs of BgFreeContext @ 0x14075C000
 * Callers:
 *     BgkResumeFinished @ 0x1403EC37C (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14010280C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 */

KIRQL BgFreeContext()
{
  PVOID v0; // rbx
  KIRQL result; // al

  v0 = Address;
  result = KeGetCurrentIrql();
  if ( result <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140323CF0 & 1) != 0 )
      ResFwFreeContext(v0);
    return BgpFwReleaseLock();
  }
  return result;
}
