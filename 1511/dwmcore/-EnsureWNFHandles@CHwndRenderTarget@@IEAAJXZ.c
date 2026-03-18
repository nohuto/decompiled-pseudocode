/*
 * XREFs of ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x18007E0E8
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18007C4E4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     PubSebRegisterRpc @ 0x180069F00 (PubSebRegisterRpc.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureWNFHandles(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 73)
    || (v3 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (_QWORD *)this + 73), v1 = v3, v3 >= 0) )
  {
    if ( !*((_QWORD *)this + 72) )
    {
      v4 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK, (_QWORD *)this + 72);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_180178EF0, 1u, v4, 0x20Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180178EF0, 1u, v3, 0x204u);
  }
  return v1;
}
