/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1400B6C20
 * Callers:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax

  v1 = *(_WORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v1 )
    return 1LL;
  if ( v1 == 1 )
    return v2 || (*(_BYTE *)(a1 + 34) & 8) != 0;
  return v1 == 2 && v2 && (*(_BYTE *)(a1 + 34) & 8) != 0;
}
