/*
 * XREFs of BgLibraryInitialize @ 0x140725CB8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E860 (KeGetCurrentIrql.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
