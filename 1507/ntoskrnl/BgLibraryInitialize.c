/*
 * XREFs of BgLibraryInitialize @ 0x14075CD30
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1403F4F20 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x1407FD810 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14010280C (KeGetCurrentIrql.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
