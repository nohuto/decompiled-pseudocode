/*
 * XREFs of ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C027A028
 * Callers:
 *     GreClientRgnUpdated @ 0x1C0075BE8 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0279A70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C027A74C (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TRACKOBJ::vUpdateDrvDelta(TRACKOBJ *this, struct EWNDOBJ *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9

  if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)a2 + 4)) )
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 40))(v4, v3);
}
