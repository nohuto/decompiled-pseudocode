/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F0AE8
 * Callers:
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0270B58 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0041888 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*((_DWORD *)a1 + 148) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 148) )
    return (unsigned int)_SurfaceAccessCheck(a1, a2);
  return v2;
}
