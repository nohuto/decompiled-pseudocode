/*
 * XREFs of ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800DDA8C
 * Callers:
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDEAC (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDF38 (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x180060FA0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180091DD8 (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?Create@?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x180091EB8 (-Create@-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x1800DEB0C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CD2DContext::EnsureHwCallbackRenderer(CD2DContext *this)
{
  unsigned int v1; // ebx
  __int64 *v3; // r14
  struct CD3DDeviceLevel1 *v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // esi
  __int64 v15; // rdx
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  volatile signed __int32 *v19; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v19 = 0LL;
  if ( *((_QWORD *)this + 39) )
    return v1;
  v3 = (__int64 *)((char *)this + 288);
  if ( *((_QWORD *)this + 36)
    || (v4 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this),
        v6 = CD3DIndexBuffer::Create(v4, v5, (struct CD3DIndexBuffer **)v3),
        v1 = v6,
        v6 >= 0) )
  {
    if ( !*((_QWORD *)this + 35) )
    {
      v7 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this);
      v6 = CD3DVertexBuffer<CVertexXYWColorDUV2>::Create(v7, v8, v9, (CD3DBuffer **)this + 35);
      v1 = v6;
      if ( v6 < 0 )
      {
        v18 = 532;
        goto LABEL_11;
      }
    }
    if ( !*((_DWORD *)this + 86) )
    {
      v10 = (*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 184LL))(this);
      v6 = CHWCallbackRenderer::Create(v10, *((_QWORD *)this + 35), *v3, &v19);
      v1 = v6;
      if ( v6 < 0 )
      {
        v18 = 542;
        goto LABEL_11;
      }
      v12 = *((_DWORD *)this + 86);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v1 = -2147024362;
LABEL_24:
        v18 = 544;
        v11 = v14;
        goto LABEL_25;
      }
      v1 = 0;
      if ( v13 > *((_DWORD *)this + 85) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 320, 8u, 1, &v19);
        v14 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        v1 = v14;
        if ( v14 < 0 )
          goto LABEL_24;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * *((unsigned int *)this + 86)) = v19;
        *((_DWORD *)this + 86) = v13;
      }
      v19 = 0LL;
    }
    v15 = (unsigned int)(*((_DWORD *)this + 86) - 1);
    *((_QWORD *)this + 39) = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)v15);
    DynArray<CWARPCallbackRenderer *,0>::RemoveAt((char *)this + 320, v15);
    goto LABEL_18;
  }
  v18 = 522;
LABEL_11:
  v11 = v6;
LABEL_25:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
LABEL_18:
  if ( v19 )
    CMILRefCountBase::Release((CMILRefCountBase *)(v19 + 2));
  return v1;
}
