/*
 * XREFs of ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C013E52C
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C0101A80 (GreGetDxSharedSurface.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall SFMLOGICALSURFACE::AdapterLuid(SFMLOGICALSURFACE *this, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 24);
  if ( v4 && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v4) + 116) & 1) != 0 )
    *a2 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)this + 24)) + 504);
  else
    *a2 = *((_QWORD *)this + 26);
  return (struct _LUID)a2;
}
