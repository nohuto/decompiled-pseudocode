/*
 * XREFs of CmpTryAcquireIXLockExclusive @ 0x1404293DC
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpTryAcquireIXLockExclusive(_DWORD *a1)
{
  return *a1 == 0;
}
