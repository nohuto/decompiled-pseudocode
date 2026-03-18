/*
 * XREFs of MiRelockProtoPoolPage @ 0x140022910
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x140022970 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x14004F188 (MiAddLockedPageCharge.c)
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
