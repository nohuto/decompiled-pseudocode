/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744 (-UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18003C3A4 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180037348 (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
