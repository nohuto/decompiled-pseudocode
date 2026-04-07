/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001EB18 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002C5E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180032798 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18004055C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180088E90 (-Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180091438 (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x1800160E0 (-MovePrevious@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // r10
  unsigned int v3; // edi
  __int64 v5; // r10
  VisualCollection *v6; // rsi
  int v7; // eax
  int inserted; // eax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  __int16 v12; // [rsp+3Ch] [rbp-Ch]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    *((_BYTE *)this + 84) &= ~0x10u;
    v10 = v2 + 32;
    v11 = -1;
    *((_BYTE *)this + 84) |= 16 * (a2 & 1);
    v12 = 0;
    if ( VisualCollectionIterator::MovePrevious((VisualCollectionIterator *)&v10)
      && *(CVisual **)(*(_QWORD *)(v10 + 16) + 8LL * v11) != this )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      v6 = (VisualCollection *)(v5 + 32);
      v7 = VisualCollection::Remove((VisualCollection *)(v5 + 32), this);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x2ACu);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(v6, this, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x2AFu);
      }
      CBaseObject::Release(this);
    }
  }
  return v3;
}
