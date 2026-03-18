/*
 * XREFs of ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18
 * Callers:
 *     ?Init@CDisplayManager@@QEAAJXZ @ 0x180038618 (-Init@CDisplayManager@@QEAAJXZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x18009E9AC (--0CMTALock@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800A8014 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A87D8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800A89CC (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9688 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ?Startup@@YAJXZ @ 0x1800A976C (-Startup@@YAJXZ.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1800B5EB0 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B72D0 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800B752C (--0CMILResourceCacheIndexManager@@QEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
