/*
 * XREFs of ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C0036F98
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0034C94 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsSourceBGRA(struct SURFACE *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  int v3; // ecx
  _DWORD *v5; // rcx

  v1 = *((_QWORD *)a1 + 15);
  v2 = 0;
  if ( *((_DWORD *)a1 + 24) == 6 )
  {
    if ( v1 )
    {
      v3 = *(_DWORD *)(v1 + 24);
      if ( (v3 & 8) != 0 )
        return 1;
      if ( (v3 & 2) != 0 )
      {
        v5 = *(_DWORD **)(v1 + 128);
        if ( *v5 == 16711680 && v5[1] == 65280 && v5[2] == 255 )
          return 1;
      }
    }
  }
  return v2;
}
