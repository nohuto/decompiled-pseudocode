/*
 * XREFs of ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18000EA90
 * Callers:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180010764 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScopedClipStack::PopGpuClipFromScope(CScopedClipStack *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *((_DWORD *)this + 468);
  if ( v1 )
    *((_DWORD *)this + 468) = v1 - 1;
  v2 = 76LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(v2 + *(_QWORD *)this + 4);
}
