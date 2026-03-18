/*
 * XREFs of pConvertDfbSurfaceToDib2 @ 0x1C005DA50
 * Callers:
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005D910 (bDynamicRemoveAllDriverRealizations.c)
 *     pConvertDfbSurfaceToDib @ 0x1C00B77B0 (pConvertDfbSurfaceToDib.c)
 * Callees:
 *     IsDwmActive_0 @ 0x1C0001458 (IsDwmActive_0.c)
 *     IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0 @ 0x1C00016C8 (IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0.c)
 *     MulConvertChildRedirectionDfbSurfaceToDib_0 @ 0x1C00016D0 (MulConvertChildRedirectionDfbSurfaceToDib_0.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 */

__int64 __fastcall pConvertDfbSurfaceToDib2(SURFACE *this, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  PERESOURCE v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = ghsemDwmState;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  v5 = 0LL;
  if ( a3 && !(unsigned int)IsDwmActive_0() )
    goto LABEL_6;
  if ( (*((_DWORD *)this + 29) & 1) == 0 )
  {
LABEL_5:
    v5 = pConvertDfbSurfaceToDibInternal(this);
    goto LABEL_6;
  }
  v6 = *((_QWORD *)this + 6);
  if ( (*(_DWORD *)(v6 + 56) & 0x20000) != 0 )
  {
    if ( (int)IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0() < 0
      || !(unsigned int)MulConvertChildRedirectionDfbSurfaceToDib_0() )
    {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 56LL) & 0x20000) == 0 )
    goto LABEL_5;
  if ( (int)IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0() >= 0 )
    v5 = (int)MulConvertChildRedirectionDfbSurfaceToDib_0();
LABEL_6:
  SEMOBJ::vUnlock((SEMOBJ *)&v10, v7, v8);
  return v5;
}
