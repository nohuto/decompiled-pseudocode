/*
 * XREFs of MiRelockProtoPoolPage @ 0x1400105C4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x1400111C0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2)
{
  char v4; // di
  __int64 v5; // rdx

  if ( a2 )
  {
    v4 = MiLockPageInline(a1);
    *a2 = v4;
  }
  else
  {
    v4 = 17;
    MiLockPageAtDpcInline(a1);
  }
  MiAddLockedPageCharge(a1, 1LL);
  LOBYTE(v5) = v4;
  MiLockOwnedProtoPage(a1, v5);
  return a1;
}
