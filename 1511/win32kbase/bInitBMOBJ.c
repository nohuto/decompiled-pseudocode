/*
 * XREFs of bInitBMOBJ @ 0x1C013AE60
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005DAB0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 bInitBMOBJ()
{
  unsigned int v0; // edi
  __int64 result; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  struct SURFACE *v4; // rbx

  v0 = 0;
  result = GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = HmgShareLockCheck(result, 5);
    v4 = (struct SURFACE *)v3;
    if ( v3 )
    {
      HmgSetOwner(*(_QWORD *)(v3 + 32), 0, 5);
      bSetStockObject(v2, 21, 0);
      *((_QWORD *)v4 + 4) = v2 | 0x800000;
      v0 = 1;
      SURFACE::pdibDefault = v4;
      HmgDecrementShareReferenceCount(v4);
    }
    return v0;
  }
  return result;
}
