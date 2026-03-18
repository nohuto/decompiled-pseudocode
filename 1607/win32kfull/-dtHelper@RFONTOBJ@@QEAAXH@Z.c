/*
 * XREFs of ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002CCA8
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0124534 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_dtHelperWrap @ 0x1C0159ED0 (RFONTOBJ_dtHelperWrap.c)
 * Callees:
 *     TraceGreReleaseSemaphore @ 0x1C0159D38 (TraceGreReleaseSemaphore.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C029B4FC (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtHelper(RFONTOBJ *this)
{
  int v2; // ebx

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
  v2 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  RFONTOBJ::vUnlockEUDCFontsGlyphCache(this);
  if ( (v2 & 0x81) != 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
  TraceGreReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
}
