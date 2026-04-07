/*
 * XREFs of ?WriteInstruction@CDrawAtlasedRectsInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016D40
 * Callers:
 *     ?UpdateRenderData@CVisual@@UEAAJXZ @ 0x18001DA10 (-UpdateRenderData@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawAtlasedRectsInstruction::WriteInstruction(
        CDrawAtlasedRectsInstruction *this,
        _DWORD *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v7 = 0;
  (*(void (__fastcall **)(CDrawAtlasedRectsInstruction *, int *, const struct CVisual *))(v3 + 8))(this, &v7, a3);
  *a2 = v7 + 4;
  a2[1] = 203;
  a2[2] = *(_DWORD *)(*((_QWORD *)this + 2) + 24LL);
  result = 0LL;
  a2[3] = *(_DWORD *)(*((_QWORD *)this + 3) + 24LL);
  return result;
}
