/*
 * XREFs of MiRelockProtoPoolPage @ 0x140022490
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x1400224F0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2)
{
  char v4; // di
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx

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
  MiAddLockedPageCharge(a1, 1LL, v5, v6);
  LOBYTE(v7) = v4;
  MiLockOwnedProtoPage(a1, v7);
  return a1;
}
