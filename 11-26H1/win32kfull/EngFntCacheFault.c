/*
 * XREFs of EngFntCacheFault @ 0x1402960A0
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x14025AC08 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     UmfdLoadFontFileView @ 0x140326DD0 (UmfdLoadFontFileView.c)
 * Callees:
 *     bSetFntCacheReg @ 0x14029678C (bSetFntCacheReg.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // eax

  v3 = *(_QWORD *)(W32GetSessionState(ulFastCheckSum, *(_QWORD *)&iFaultMode) + 96);
  if ( (*(_DWORD *)(v3 + 19584) & 3) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 19592);
    if ( v4 )
    {
      if ( iFaultMode - 1 <= 1 )
      {
        v5 = *(_DWORD *)(v4 + 24);
        if ( (v5 & 1) == 0 )
        {
          *(_DWORD *)(v4 + 24) = v5 | 1;
          bSetFntCacheReg(1LL, *(unsigned int *)(*(_QWORD *)(v3 + 19592) + 24LL));
        }
      }
    }
  }
}
