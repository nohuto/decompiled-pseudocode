/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005CF10
 * Callers:
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C0025640 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0059350 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported_0 @ 0x1C0001060 (IsMulDestroyBrushInternalSupported_0.c)
 *     MulDestroyBrushInternal_0 @ 0x1C0001068 (MulDestroyBrushInternal_0.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  int v3; // esi
  struct RBRUSH **v4; // rdi

  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = &gpCachedEngbrush;
    }
    else
    {
      v3 = a1[2];
      v4 = &gpCachedDbrush;
      if ( v3 && (int)IsMulDestroyBrushInternalSupported_0() >= 0 )
        MulDestroyBrushInternal_0();
    }
    if ( *v4 || v3 == 1 || _InterlockedExchange64((volatile __int64 *)v4, (__int64)a1) )
      Win32FreePool();
  }
}
