/*
 * XREFs of ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x18009D0B0
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800904F8 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetIconicData(__int64 a1, __int64 a2, _OWORD *a3, _DWORD *a4)
{
  _OWORD *v8; // rbx
  int v9; // eax
  int v10; // ecx

  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 128LL);
  v8 = (_OWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 280) = a2;
  SetRectEmpty((LPRECT)(a1 + 336));
  SetRectEmpty((LPRECT)(a1 + 352));
  if ( a3 )
  {
    *v8 = *a3;
    if ( *(int *)a3 < 0 && (*a4 & 0x2000) == 0 )
    {
      *(_OWORD *)(a1 + 352) = *a3;
      v9 = -*(_DWORD *)a3;
      *(_DWORD *)v8 -= *(_DWORD *)a3;
      *(_DWORD *)(a1 + 344) -= v9;
      v10 = *(_DWORD *)(a1 + 344);
      if ( *(_DWORD *)v8 < v10 )
        v10 = *(_DWORD *)v8;
      *(_DWORD *)v8 = v10;
    }
  }
  if ( a4 )
    *(_DWORD *)(a1 + 368) = *a4;
  return 0LL;
}
