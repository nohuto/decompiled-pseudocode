/*
 * XREFs of BgLibraryInitialize @ 0x1406D9CE8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1403A2150 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140787C58 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140079D9C (KeGetCurrentIrql.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
