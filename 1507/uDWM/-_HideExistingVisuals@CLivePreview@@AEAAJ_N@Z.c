/*
 * XREFs of ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180069CE0
 * Callers:
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x1800694EC (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180069564 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800762DC (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

__int64 __fastcall CLivePreview::_HideExistingVisuals(CLivePreview *this, char a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v6; // rcx
  int started; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 78) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 36) + 40 * v3) + 368LL);
      if ( v6 )
      {
        started = CTopLevelWindow::StartLivePreviewAnimation(v6, 2 - (unsigned int)(a2 != 0));
        v2 = started;
        if ( started < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 78) )
        return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x487u);
  }
  return v2;
}
