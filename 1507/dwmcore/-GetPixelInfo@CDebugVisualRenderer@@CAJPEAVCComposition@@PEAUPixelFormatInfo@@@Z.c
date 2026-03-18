/*
 * XREFs of ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1800EF178
 * Callers:
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDebugVisualRenderer::GetPixelInfo(struct CComposition *a1, struct PixelFormatInfo *a2)
{
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v4; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v6; // ebx

  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(a1);
  if ( PrimaryDesktopRenderTargetNoRef )
    (*(void (__fastcall **)(struct IRenderTargetDesktop *, struct PixelFormatInfo *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                    + 24LL))(
      PrimaryDesktopRenderTargetNoRef,
      a2);
  else
    *(_DWORD *)a2 = 87;
  *((_DWORD *)a2 + 1) = HasAlphaChannel(*(_DWORD *)a2) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v4, (struct PixelFormatInfo *)((char *)a2 + 8));
  v6 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace >= 0 )
    *((_QWORD *)a2 + 2) = 0LL;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x59u);
  return v6;
}
