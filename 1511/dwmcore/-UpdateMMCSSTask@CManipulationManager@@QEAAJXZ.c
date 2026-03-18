/*
 * XREFs of ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x1800A6524
 * Callers:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180095BC0 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::UpdateMMCSSTask(CManipulationManager *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax

  v1 = 0;
  if ( hEvent )
  {
    SetLastError(0);
    if ( !SetEvent(hEvent) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v1 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0xFFu);
    }
  }
  return v1;
}
