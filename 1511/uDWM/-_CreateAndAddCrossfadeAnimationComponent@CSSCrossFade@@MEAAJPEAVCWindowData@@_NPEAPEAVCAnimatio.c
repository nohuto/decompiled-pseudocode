/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180095200
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18001138C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        char a3,
        struct CAnimationComponent **a4)
{
  bool v7; // si
  int v8; // eax

  if ( a3 )
  {
    *((_DWORD *)a2 + 144) |= 0x200000u;
  }
  else if ( ((*((_DWORD *)a2 + 144) & 0x10000000) == 0
          || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0)
         && (*((_DWORD *)a2 + 144) & 0x20000000) == 0 )
  {
    v7 = 1;
    goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  v8 = (*(__int64 (__fastcall **)(CSSCrossFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 144));
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v8, 0LL, 0LL, -1, v7, a4);
}
