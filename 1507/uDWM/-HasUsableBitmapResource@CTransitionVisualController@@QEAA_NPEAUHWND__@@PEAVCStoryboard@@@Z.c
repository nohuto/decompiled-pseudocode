/*
 * XREFs of ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x18008CD38
 * Callers:
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180093538 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18008D45C (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

char __fastcall CTransitionVisualController::HasUsableBitmapResource(
        CTransitionVisualController *this,
        HWND a2,
        struct CStoryboard *a3)
{
  int TransitionBitmapIndex; // eax
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax

  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(this, a2);
  v6 = 0LL;
  v7 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( !*(_DWORD *)(v8 + 4) )
    return 0;
  while ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 4 * v6) & 0xFFF) != (*(_DWORD *)(56 * v7 + *((_QWORD *)this + 19) + 8) & 0xFFF) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)(v8 + 4) )
      return 0;
  }
  return 1;
}
