/*
 * XREFs of ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180111F7C
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18010740C (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d

  v1 = *((_DWORD *)this + 214);
  v2 = v1 - *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(*((_DWORD *)this + 6) - 1) + 8);
  if ( v2 >= v1 )
    return 0;
  while ( !*(_BYTE *)(120LL * v2 + *((_QWORD *)this + 104) + 112) )
  {
    if ( ++v2 >= v1 )
      return 0;
  }
  return 1;
}
