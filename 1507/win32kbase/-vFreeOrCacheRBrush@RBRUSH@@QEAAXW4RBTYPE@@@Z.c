/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0017C10
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00393C0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C005B150 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 * Callees:
 *     IsMulDestroyBrushInternalSupported_0 @ 0x1C0001060 (IsMulDestroyBrushInternalSupported_0.c)
 *     MulDestroyBrushInternal_0 @ 0x1C0001068 (MulDestroyBrushInternal_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     EngFreeUserMem @ 0x1C0069890 (EngFreeUserMem.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  struct RBRUSH **v4; // rdi

  v2 = (__int64)a1;
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
    if ( *v4 || v3 == 1 || (v2 = _InterlockedExchange64((volatile __int64 *)v4, v2)) != 0 )
      Win32FreePool(v2);
  }
}
