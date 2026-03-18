/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C005BC80 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005BCB0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C006E5F0 (GreSetSolidBrushLight.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported_0 @ 0x1C0001060 (IsMulDestroyBrushInternalSupported_0.c)
 *     MulDestroyBrushInternal_0 @ 0x1C0001068 (MulDestroyBrushInternal_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C00841F0 (EngFreeUserMem.c)
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
