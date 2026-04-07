/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000CAD8
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000EE54 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18000B330 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E224 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E318 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]
  struct CAnimationComponent *v16; // [rsp+48h] [rbp+10h] BYREF
  float v17; // [rsp+50h] [rbp+18h] BYREF

  v16 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v15 = 2318;
LABEL_21:
    v14 = inserted;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, v15);
    return v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v15 = 2319;
    goto LABEL_21;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
    goto LABEL_23;
  }
  if ( v6 <= *((_DWORD *)this + 33) )
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v5) = v16;
    *((_DWORD *)this + 34) = v6;
    goto LABEL_6;
  }
  v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v16);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  v4 = v13;
  if ( v13 < 0 )
  {
LABEL_23:
    v15 = 2321;
    v14 = v13;
    goto LABEL_24;
  }
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  v7 = v16;
  v8 = (struct CVisual *)*((_QWORD *)v16 + 4);
  if ( v8 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v15 = 2326;
      goto LABEL_21;
    }
    v7 = v16;
  }
  v9 = *((_QWORD *)v7 + 5);
  if ( v9 )
    v10 = (struct CVisual *)(v9 + 8);
  else
    v10 = 0LL;
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), v10, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v15 = 2330;
    goto LABEL_21;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v16 + 16) + 72LL),
              *((_DWORD *)v16 + 7),
              &v17) >= 0 )
    *(float *)(*((_QWORD *)v16 + 5) + 920LL) = v17;
  return v4;
}
