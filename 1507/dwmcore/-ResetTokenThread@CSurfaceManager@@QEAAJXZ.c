/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180087CD4
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180069430 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x1800924F0 (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::ResetTokenThread(HANDLE *this)
{
  unsigned int v1; // ebx
  int TokenThread; // eax

  v1 = -2147467260;
  if ( this[51] )
  {
    if ( !*((_BYTE *)this + 424) )
    {
      SetEvent(this[52]);
      return 0;
    }
  }
  else
  {
    TokenThread = CSurfaceManager::CreateTokenThread((CSurfaceManager *)this);
    v1 = TokenThread;
    if ( TokenThread < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TokenThread, 0x6Au);
  }
  return v1;
}
