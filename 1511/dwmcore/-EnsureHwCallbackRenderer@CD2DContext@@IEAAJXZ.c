/*
 * XREFs of ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA640 (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA6CC (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800A95D0 (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?Create@?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800A96B0 (-Create@-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B1AD0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 */

__int64 __fastcall CD2DContext::EnsureHwCallbackRenderer(CD2DContext *this)
{
  unsigned int v1; // ebx
  struct CD3DIndexBuffer **v4; // r14
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx
  struct CD3DDeviceLevel1 *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // esi
  int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v22 = 0LL;
  if ( *((_QWORD *)this + 37) )
    return v1;
  v4 = (struct CD3DIndexBuffer **)((char *)this + 280);
  if ( *((_QWORD *)this + 35)
    || (v12 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this),
        v9 = CD3DIndexBuffer::Create(v12, v13, v4),
        v1 = v9,
        v9 >= 0) )
  {
    if ( !*((_QWORD *)this + 34) )
    {
      v14 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this);
      v9 = CD3DVertexBuffer<CVertexXYWColorDUV2>::Create(v14, v15, v16, (char *)this + 272);
      v1 = v9;
      if ( v9 < 0 )
      {
        v21 = 549;
        goto LABEL_25;
      }
    }
    if ( *((_DWORD *)this + 82) )
    {
LABEL_6:
      v5 = (unsigned int)(*((_DWORD *)this + 82) - 1);
      *((_QWORD *)this + 37) = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v5);
      v6 = *((_DWORD *)this + 82);
      if ( (unsigned int)v5 < v6 )
      {
        v7 = *((_QWORD *)this + 38);
        if ( (unsigned int)v5 < v6 - 1 )
        {
          do
          {
            v20 = (unsigned int)v5;
            LODWORD(v5) = v5 + 1;
            *(_QWORD *)(v7 + 8 * v20) = *(_QWORD *)(v7 + 8LL * (unsigned int)v5);
          }
          while ( (unsigned int)v5 < *((_DWORD *)this + 82) - 1 );
        }
        --*((_DWORD *)this + 82);
        goto LABEL_9;
      }
      v21 = 404;
      v19 = -2147024809;
      goto LABEL_29;
    }
    v8 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this);
    v9 = CHWCallbackRenderer::Create(v8, *((_QWORD *)this + 34), *v4, &v22);
    v1 = v9;
    if ( v9 < 0 )
    {
      v21 = 559;
      goto LABEL_25;
    }
    v10 = *((_DWORD *)this + 82);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v18 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v1 = -2147024362;
    }
    else
    {
      v1 = 0;
      if ( v11 <= *((_DWORD *)this + 81) )
      {
        *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * v10) = v22;
        *((_DWORD *)this + 82) = v11;
LABEL_15:
        v22 = 0LL;
        goto LABEL_6;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 304, 8LL, 1LL, &v22);
      v18 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      v1 = v18;
      if ( v18 >= 0 )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x231u);
    goto LABEL_9;
  }
  v21 = 539;
LABEL_25:
  v19 = v9;
LABEL_29:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v21);
LABEL_9:
  if ( v22 )
    CMILRefCountBase::Release((CMILRefCountBase *)(v22 + 8));
  return v1;
}
