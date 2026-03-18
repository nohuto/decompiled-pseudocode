/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0013B24
 * Callers:
 *     GreGetPaletteEntries @ 0x1C00EAB90 (GreGetPaletteEntries.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00FCA5C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     EngQueryPalette @ 0x1C0280340 (EngQueryPalette.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B0C50 (NtGdiColorCorrectPalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B2010 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x1C02B57E0 (PALOBJ_cGetColors.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B76A0 (XLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall XEPALOBJ::ulGetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        struct tagPALETTEENTRY *a4,
        int a5)
{
  struct tagPALETTEENTRY *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct tagPALETTEENTRY *v10; // rcx

  v5 = a4;
  v6 = a3;
  if ( !a4 )
    return *(unsigned int *)(*(_QWORD *)this + 28LL);
  v7 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( a2 >= v7 )
    return 0LL;
  v8 = v7 - a2;
  if ( a3 > v8 )
    v6 = v8;
  memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)this + 128LL) + 4LL * a2), 4LL * v6);
  if ( a5 )
  {
    v10 = &v5[v6];
    while ( v5 < v10 )
    {
      v5->peFlags = 0;
      ++v5;
    }
  }
  return v6;
}
