/*
 * XREFs of bInitBMOBJ @ 0x1C0137ECC
 * Callers:
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     GreCreateBitmap @ 0x1C0044870 (GreCreateBitmap.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C007BBE0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

HSURF bInitBMOBJ()
{
  unsigned int v0; // ebx
  HSURF result; // rax
  unsigned __int64 v2; // rdi
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-18h]

  v0 = 0;
  result = (HSURF)GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = (unsigned __int64)result;
  if ( result )
  {
    SURFREF::SURFREF((SURFREF *)v3, result);
    if ( v4 )
    {
      HmgSetOwner(v4[4], 0, 5u);
      bSetStockObject(v2, 21, 0);
      v0 = 1;
      v4[4] = v2 | 0x800000;
      SURFACE::pdibDefault = (SURFACE *)v4;
    }
    SURFREF::~SURFREF((SURFREF *)v3);
    return (HSURF)v0;
  }
  return result;
}
