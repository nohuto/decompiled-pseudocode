/*
 * XREFs of ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18011F9D4
 * Callers:
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDebugVisualRenderer::GetPixelInfo(struct CComposition *a1, struct PixelFormatInfo *a2)
{
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v4; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v6; // edi

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
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x59u);
  else
    *((_QWORD *)a2 + 2) = 0LL;
  return v6;
}
