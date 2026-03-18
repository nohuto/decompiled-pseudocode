/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C003A7BC
 * Callers:
 *     GreGetPaletteEntries @ 0x1C00F04E0 (GreGetPaletteEntries.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00F0FD8 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     EngQueryPalette @ 0x1C027E4D0 (EngQueryPalette.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B28C0 (NtGdiColorCorrectPalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B4130 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x1C02B78C0 (PALOBJ_cGetColors.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B9CB0 (XLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
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
  memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 4LL * a2), 4LL * v6);
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
