/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A2224
 * Callers:
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC30 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*((_DWORD *)a1 + 150) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 150) )
    return (unsigned int)_SurfaceAccessCheck(a1);
  return v1;
}
