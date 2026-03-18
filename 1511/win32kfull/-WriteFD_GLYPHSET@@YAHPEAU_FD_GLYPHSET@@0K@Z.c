/*
 * XREFs of ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C02A9A94
 * Callers:
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A33B8 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02AB050 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02ADF20 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall WriteFD_GLYPHSET(struct _FD_GLYPHSET *a1, struct _FD_GLYPHSET *a2, ULONG a3)
{
  ULONG cRuns; // r14d
  ULONG i; // ecx
  __int64 v8; // rax

  cRuns = a2->cRuns;
  memmove(a1, a2, a3);
  a1->cjThis = a3;
  for ( i = 0; i < cRuns; ++i )
  {
    if ( a2->awcrun[i].phg )
    {
      v8 = (unsigned int)(LODWORD(a2->awcrun[i].phg) - (_DWORD)a2);
      if ( (unsigned int)v8 >= a3 )
        return 0LL;
      a1->awcrun[i].phg = (ULONG *)((char *)&a1->cjThis + v8);
    }
  }
  return 1LL;
}
