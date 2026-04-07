/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000D2D8
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000F3C4 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x180010A00 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // edx
  struct CAnimationComponent *v7; // rax
  struct CVisual *v8; // rdx
  __int64 v9; // rcx
  struct CVisual *v10; // rdx
  int v12; // eax
  int v13; // esi
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v15; // [rsp+48h] [rbp+10h] BYREF
  float v16; // [rsp+50h] [rbp+18h] BYREF

  v15 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2190;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, inserted, v14);
    return v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2191;
    goto LABEL_26;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_22;
  }
  if ( v6 <= *((_DWORD *)this + 33) )
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v5) = v15;
    *((_DWORD *)this + 34) = v6;
    goto LABEL_6;
  }
  v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v15);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xC0u);
  v4 = v13;
  if ( v13 < 0 )
  {
LABEL_22:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v13, 0x891u);
    return v4;
  }
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
  v7 = v15;
  v8 = (struct CVisual *)*((_QWORD *)v15 + 4);
  if ( !v8 )
    goto LABEL_7;
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2198;
    goto LABEL_26;
  }
  v7 = v15;
LABEL_7:
  v9 = *((_QWORD *)v7 + 5);
  if ( v9 )
    v10 = (struct CVisual *)(v9 + 8);
  else
    v10 = 0LL;
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), v10, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v14 = 2202;
    goto LABEL_26;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v15 + 16) + 72LL),
              *((_DWORD *)v15 + 7),
              &v16) >= 0 )
    *(float *)(*((_QWORD *)v15 + 5) + 920LL) = v16;
  return v4;
}
