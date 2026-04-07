/*
 * XREFs of ?Init@CCriticalSection@@QEAAJXZ @ 0x180042BE4
 * Callers:
 *     ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180041664 (--0CMILResourceCacheIndexManager@@QEAA@XZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x180042B78 (--0CMTALock@@QEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x50u);
  }
  return v2;
}
