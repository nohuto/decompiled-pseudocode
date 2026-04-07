/*
 * XREFs of ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D1FC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F944 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800938BC (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z @ 0x180010BE8 (-Remove@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAHAEBQEAVCAnimationComponent@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionVisualController::RemoveAnimationComponent(
        CTransitionVisualController *this,
        struct CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // bp
  struct CVisual *v8; // rdx
  struct CVisual *v9; // rax
  __int64 v10; // rcx
  struct CVisual *v11; // rdx
  int v12; // eax
  int v14; // eax
  struct CAnimationComponent *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = (struct CAnimationComponent *)a2;
  v4 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v4, 0x8B2u);
  }
  else
  {
    v6 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v6, 0x8B3u);
    }
    else
    {
      v7 = (unsigned int)DynArray<CAnimationComponent *,0>::Remove((char *)this + 112, &v15) != 0;
      if ( !*((_DWORD *)this + 34) )
        *((_QWORD *)this + 12) = -1LL;
      v8 = a2[4];
      if ( v8
        && (v14 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8), v5 = v14, v14 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v14, 0x8BFu);
      }
      else
      {
        v9 = a2[5];
        v10 = *((_QWORD *)v9 + 4);
        if ( v10 )
        {
          v11 = v9 ? (struct CVisual *)((char *)v9 + 8) : 0LL;
          v12 = VisualCollection::Remove((VisualCollection *)(v10 + 32), v11);
          v5 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v12,
              0x8C5u);
        }
      }
      if ( v7 )
        CBaseObject::Release((CBaseObject *)a2);
    }
  }
  return v5;
}
