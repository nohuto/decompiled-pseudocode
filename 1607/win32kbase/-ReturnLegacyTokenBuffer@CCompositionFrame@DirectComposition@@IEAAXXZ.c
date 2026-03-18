/*
 * XREFs of ?ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ @ 0x1C0019AD0
 * Callers:
 *     ?Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0019724 (-Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0016FA8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C001A4E0 (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 */

void __fastcall DirectComposition::CCompositionFrame::ReturnLegacyTokenBuffer(
        DirectComposition::CCompositionFrame *this)
{
  CTokenManager *v2; // rcx

  v2 = (CTokenManager *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    if ( g_pTokenManager )
      CTokenManager::ReturnLegacyTokenBufferInternal(v2, v2);
    else
      CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
}
