/*
 * XREFs of ?RemoveRange@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHHH@Z @ 0x18017A01C
 * Callers:
 *     ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x180179FA0 (-RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18009ED18 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rsi
  int v4; // ecx
  void *v5; // rax
  void *v6; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( a2 + 1 > v4 )
    return 0LL;
  if ( a2 + 1 != v4 )
  {
    memmove((void *)(*(_QWORD *)a1 + 8LL * a2), (const void *)(*(_QWORD *)a1 + 8 * (a2 + 1LL)), 8LL * (v4 - a2 - 1));
    memmove(
      (void *)(*(_QWORD *)(a1 + 8) + 8 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 8 * (v2 + 1)),
      8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
  }
  v5 = ReallocHeap(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v5 )
    *(_QWORD *)a1 = v5;
  v6 = ReallocHeap(*(void **)(a1 + 8), 8LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v6 )
    *(_QWORD *)(a1 + 8) = v6;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
