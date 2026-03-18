/*
 * XREFs of ?FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z @ 0x18011AF00
 * Callers:
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800772E8 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z @ 0x18011C358 (-GetRemoteAppParameters@CHwndRenderTarget@@IEAAJPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800ADECC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::FindTopLevelVisualFromHwnd(CWindowManager *this, __int64 a2, struct CVisual **a3)
{
  unsigned int v4; // ebx
  int Entry; // eax
  struct CVisual *v6; // rcx
  struct CWindowAssociationMapEntry *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Entry = CWindowManager::FindEntry(this, a2, &v8);
    v4 = Entry;
    if ( Entry >= 0 )
    {
      v6 = (struct CVisual *)*((_QWORD *)v8 + 2);
      if ( v6 )
        *a3 = v6;
      else
        return (unsigned int)-2147023728;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Entry, 0x229u);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v4;
}
