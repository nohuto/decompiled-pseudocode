/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18006CB40
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180095BC0 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x18006CF6C (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TokenThread, 0x93u);
  }
  return v1;
}
