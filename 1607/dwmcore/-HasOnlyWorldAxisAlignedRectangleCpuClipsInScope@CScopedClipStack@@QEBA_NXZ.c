/*
 * XREFs of ?HasOnlyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180098288
 * Callers:
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18006A4C0 (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CScopedClipStack::HasOnlyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d

  v1 = *((_DWORD *)this + 214);
  v2 = v1 - *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(*((_DWORD *)this + 6) - 1) + 8);
  if ( v2 >= v1 )
    return 1;
  while ( *(_BYTE *)(120LL * v2 + *((_QWORD *)this + 104) + 112) )
  {
    if ( ++v2 >= v1 )
      return 1;
  }
  return 0;
}
