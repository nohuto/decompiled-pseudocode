/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000BA80
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800F4D70 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180006778 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180104F64 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 */

_UNKNOWN **__fastcall CCompositionSurfaceInfo::SetCompositionMode(__int64 a1, int a2, char a3)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rdi
  CComposition *v8; // rax
  __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a2 && *(_BYTE *)(a1 + 69) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
    result = (_UNKNOWN **)CRenderTargetManager::SetIndependentFlipNotifyMode(
                            *(CRenderTargetManager **)(v9 + 32),
                            *(struct _LUID *)(a1 + 40));
  }
  if ( a3 )
  {
    if ( a2 != *(_DWORD *)(a1 + 136) )
    {
      v7 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 136) = a2;
      v8 = (CComposition *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      return (_UNKNOWN **)CComposition::AddCompSurfInfoUpdate(v8, (struct CCompositionSurfaceInfo *)a1);
    }
  }
  return result;
}
