/*
 * XREFs of ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x180109174
 * Callers:
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
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
