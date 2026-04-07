/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x18003D2D0
 * Callers:
 *     ?UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ @ 0x180019590 (-UpdateAtlas@CTopLevelAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180023840 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  int v5; // edi
  __int64 result; // rax
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v4 <= *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v4;
  }
  else
  {
    v7 = a2;
    v5 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v7);
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
    else
      *(_QWORD *)(*(_QWORD *)a1 + (unsigned int)(8 * (*(_DWORD *)(a1 + 24))++)) = *v7;
    return (unsigned int)v5;
  }
  return result;
}
