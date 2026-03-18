/*
 * XREFs of pConvertDfbSurfaceToDib2 @ 0x1C005B100
 * Callers:
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005AFC0 (bDynamicRemoveAllDriverRealizations.c)
 *     pConvertDfbSurfaceToDib @ 0x1C00B9790 (pConvertDfbSurfaceToDib.c)
 * Callees:
 *     IsDwmActive_0 @ 0x1C00013F8 (IsDwmActive_0.c)
 *     IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0 @ 0x1C0001668 (IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0.c)
 *     MulConvertChildRedirectionDfbSurfaceToDib_0 @ 0x1C0001670 (MulConvertChildRedirectionDfbSurfaceToDib_0.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall pConvertDfbSurfaceToDib2(SURFACE *this, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  HSEMAPHORE v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
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
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v5;
}
