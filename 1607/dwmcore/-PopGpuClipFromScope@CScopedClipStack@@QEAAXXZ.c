/*
 * XREFs of ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18001B654
 * Callers:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScopedClipStack::PopGpuClipFromScope(CScopedClipStack *this)
{
  int v1; // eax
  __int64 v2; // rdx

  v1 = *((_DWORD *)this + 518);
  if ( v1 )
    *((_DWORD *)this + 518) = v1 - 1;
  v2 = 10LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(*(_QWORD *)this + 8 * v2 + 4);
}
