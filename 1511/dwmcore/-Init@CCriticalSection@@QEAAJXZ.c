/*
 * XREFs of ?Init@CCriticalSection@@QEAAJXZ @ 0x1800A2538
 * Callers:
 *     ?Init@CDisplayManager@@QEAAJXZ @ 0x18006F6D0 (-Init@CDisplayManager@@QEAAJXZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x1800A24CC (--0CMTALock@@QEAA@XZ.c)
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A3DE8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A4E04 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AE6EC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ?Startup@@YAJXZ @ 0x1800AF408 (-Startup@@YAJXZ.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800B2224 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800B3BCC (--0CMILResourceCacheIndexManager@@QEAA@XZ.c)
 *     ?Initialize@CEffectCompilationService@@AEAAJXZ @ 0x1800B3EB4 (-Initialize@CEffectCompilationService@@AEAAJXZ.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800B4224 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCriticalSection::Init(LPCRITICAL_SECTION lpCriticalSection)
{
  unsigned int v2; // ebx
  signed int LastError; // eax

  v2 = 0;
  SetLastError(0);
  if ( InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0) )
  {
    LOBYTE(lpCriticalSection[1].DebugInfo) = 1;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v2 = LastError;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x50u);
  }
  return v2;
}
