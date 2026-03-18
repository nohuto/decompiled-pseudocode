/*
 * XREFs of ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B1AD0
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Init@CHWCallbackRenderer@@AEAAJXZ @ 0x1800359D8 (-Init@CHWCallbackRenderer@@AEAAJXZ.c)
 *     ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@@Z @ 0x180035B80 (--0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHWCallbackRenderer::Create(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 **a4)
{
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         152LL);
  if ( v8 )
    v9 = (volatile signed __int32 *)CHWCallbackRenderer::CHWCallbackRenderer(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 4);
    v10 = CHWCallbackRenderer::Init((CHWCallbackRenderer *)v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Eu);
    }
    else
    {
      *a4 = v9;
      v9 = 0LL;
    }
    if ( v9 )
      CMILRefCountBase::Release((CMILRefCountBase *)(v9 + 2));
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Bu);
  }
  return v11;
}
