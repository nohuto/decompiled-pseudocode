/*
 * XREFs of ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x180075708
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     PubSebRegisterRpc @ 0x1800B8008 (PubSebRegisterRpc.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureWNFHandles(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 97)
    || (v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 776), v1 = v4, v4 >= 0) )
  {
    if ( !*((_QWORD *)this + 96) )
    {
      v5 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (char *)this + 768);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801B0A28, 1u, v5, 0x1FCu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801B0A28, 1u, v4, 0x1F6u);
  }
  return v1;
}
