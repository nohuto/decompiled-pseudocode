/*
 * XREFs of ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200
 * Callers:
 *     wWinMain @ 0x140001B70 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1400019F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001E60 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140002000 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     memset_0 @ 0x140003EB6 (memset_0.c)
 */

__int64 __fastcall CDwmAppHost::Run(CDwmAppHost *this)
{
  CDwmAppHost *v1; // rcx
  int started; // eax
  __int64 v3; // rdx
  CDwmAppHost *v4; // rcx
  void *v5; // r8
  int v6; // ebx
  int v7; // eax
  tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF

  Msg.hwnd = 0LL;
  memset_0(&Msg.message, 0, 0x28uLL);
  started = CDwmAppHost::StartComposition(v1);
  v6 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x71u);
  }
  else
  {
    v7 = CDwmAppHost::LpcSyncFlush(v4, v3, v5);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x79u);
    }
    else
    {
      while ( GetMessageW(&Msg, 0LL, 0, 0) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
      if ( hWnd )
      {
        DestroyWindow(hWnd);
        hWnd = 0LL;
      }
    }
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  else
    return uExitCode;
}
