/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x1401524A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN ZwIsSystemResumeAutomatic(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
