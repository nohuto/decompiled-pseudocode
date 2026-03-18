/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C00B9690
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxCleanupAndFreeDdeConvSupported_0 @ 0x1C0002850 (IsxxxCleanupAndFreeDdeConvSupported_0.c)
 *     xxxCleanupAndFreeDdeConv_0 @ 0x1C0002858 (xxxCleanupAndFreeDdeConv_0.c)
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  if ( (int)IsxxxCleanupAndFreeDdeConvSupported_0() >= 0 )
    xxxCleanupAndFreeDdeConv_0();
}
