/*
 * XREFs of bInitBMOBJ @ 0x1C0156878
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005C1A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     GreCreateBitmap @ 0x1C005D0D0 (GreCreateBitmap.c)
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
