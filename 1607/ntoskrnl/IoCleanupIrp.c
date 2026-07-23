/*
 * XREFs of IoCleanupIrp @ 0x1401C88DC
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2437uLL, 0LL, 0LL);
  v1 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v1 )
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
}
