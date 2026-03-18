/*
 * XREFs of pConvertDfbSurfaceToDib2 @ 0x1C006B550
 * Callers:
 *     bDynamicRemoveAllDriverRealizations @ 0x1C006B2F0 (bDynamicRemoveAllDriverRealizations.c)
 *     pConvertDfbSurfaceToDib @ 0x1C00C5360 (pConvertDfbSurfaceToDib.c)
 * Callees:
 *     IsDwmActive_0 @ 0x1C0001468 (IsDwmActive_0.c)
 *     IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0 @ 0x1C00016D8 (IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0.c)
 *     MulConvertChildRedirectionDfbSurfaceToDib_0 @ 0x1C00016E0 (MulConvertChildRedirectionDfbSurfaceToDib_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall pConvertDfbSurfaceToDib2(SURFACE *this, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  HSEMAPHORE v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v7 = 0LL;
  if ( !a3 || (unsigned int)IsDwmActive_0() )
  {
    if ( (*((_DWORD *)this + 29) & 1) != 0
      && (v8 = *((_QWORD *)this + 6), (*(_DWORD *)(v8 + 56) & 0x20000) == 0)
      && (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 56LL) & 0x20000) != 0 )
    {
      if ( a4 )
      {
        v7 = 1LL;
      }
      else if ( (int)IsMulConvertChildRedirectionDfbSurfaceToDibSupported_0() >= 0 )
      {
        v7 = (int)MulConvertChildRedirectionDfbSurfaceToDib_0();
      }
    }
    else
    {
      v7 = pConvertDfbSurfaceToDibInternal(this);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)v10);
  return v7;
}
