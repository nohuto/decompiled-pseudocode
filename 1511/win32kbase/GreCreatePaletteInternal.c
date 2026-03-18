/*
 * XREFs of GreCreatePaletteInternal @ 0x1C005CF0C
 * Callers:
 *     GreCreatePalette @ 0x1C00BE850 (GreCreatePalette.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z.c)
 *     GreSetPaletteOwner @ 0x1C005CFA0 (GreSetPaletteOwner.c)
 */

__int64 __fastcall GreCreatePaletteInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r8d
  __int64 *v5; // rdi
  __int64 *v7; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp-10h]

  if ( *(_WORD *)a1 != 768 )
    return 0LL;
  v2 = 0LL;
  if ( !a2 )
    return 0LL;
  v8 = 0;
  v7 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v7, 1, a2, (unsigned int *)(a1 + 4), 0, 0, 0, 0x500u) )
  {
    v5 = v7;
    if ( (unsigned int)GreSetPaletteOwner(*v7, 2147483650LL) )
    {
      v2 = *v5;
      v8 = 1;
    }
  }
  PALMEMOBJ::~PALMEMOBJ(&v7, v3, v4);
  return v2;
}
