/*
 * XREFs of ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CD3DVertexBuffer@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800ACC38 (-Create@CD3DVertexBuffer@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800ACD0C (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DVertexBuffer@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B5310 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DVertexBuffer@@PEAVCD3DIndexBuffer@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@@Z @ 0x180177FCC (-CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConst.c)
 */

__int64 __fastcall CD2DContext::EnsureHwCallbackRenderer(CD2DContext *this, unsigned __int64 a2)
{
  int v2; // ebx
  struct CHwLightCollectionBuffer *v3; // rbp
  __int64 v5; // rax
  struct CD3DIndexBuffer **v7; // rbx
  struct CD3DVertexBuffer **v8; // rbx
  unsigned __int64 v9; // r8
  unsigned int v10; // eax
  struct CD3DConstantBuffer **v11; // r9
  __int64 v12; // rdi
  struct CD3DDeviceLevel1 *v13; // rax
  int v14; // eax
  unsigned int v15; // eax
  struct CD3DDeviceLevel1 *v16; // rax
  unsigned int v17; // edx
  int v18; // eax
  struct CD3DDeviceLevel1 *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // r9d
  __int64 v24; // rcx
  int ConstantBuffer; // eax
  unsigned int v26; // [rsp+20h] [rbp-18h]
  struct CHWCallbackRenderer *v27; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CHwLightCollectionBuffer *)a2;
  v27 = 0LL;
  v5 = *((_QWORD *)this + 40);
  if ( !v5 )
  {
    v7 = (struct CD3DIndexBuffer **)((char *)this + 304);
    if ( !*((_QWORD *)this + 38) )
    {
      v16 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 176LL))(this);
      v18 = CD3DIndexBuffer::Create(v16, v17, v7);
      v2 = v18;
      if ( v18 < 0 )
      {
        v26 = 888;
LABEL_30:
        v23 = v18;
LABEL_32:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v26);
        goto LABEL_14;
      }
    }
    v8 = (struct CD3DVertexBuffer **)((char *)this + 296);
    if ( !*((_QWORD *)this + 37) )
    {
      v19 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 176LL))(this);
      v18 = CD3DVertexBuffer::Create(v19, v20, v21, (struct CD3DVertexBuffer **)this + 37);
      v2 = v18;
      if ( v18 < 0 )
      {
        v26 = 898;
        goto LABEL_30;
      }
      v8 = (struct CD3DVertexBuffer **)((char *)this + 296);
    }
    if ( *((_DWORD *)this + 88) )
      goto LABEL_7;
    v13 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(CD2DContext *))(*(_QWORD *)this + 176LL))(this);
    v14 = CHWCallbackRenderer::Create(v13, *v8, *((struct CD3DIndexBuffer **)this + 38), &v27);
    v2 = v14;
    if ( v14 < 0 )
    {
      v26 = 908;
      v23 = v14;
      goto LABEL_32;
    }
    v15 = *((_DWORD *)this + 88);
    a2 = v15 + 1;
    if ( (unsigned int)a2 < v15 )
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( (unsigned int)a2 <= *((_DWORD *)this + 87) )
      {
        *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * v15) = v27;
        *((_DWORD *)this + 88) = a2;
LABEL_20:
        v27 = 0LL;
LABEL_7:
        v9 = (unsigned int)(*((_DWORD *)this + 88) - 1);
        *((_QWORD *)this + 40) = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v9);
        v10 = *((_DWORD *)this + 88);
        if ( (unsigned int)v9 >= v10 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
        else
        {
          v11 = (struct CD3DConstantBuffer **)*((_QWORD *)this + 41);
          if ( (unsigned int)v9 < v10 - 1 )
          {
            do
            {
              a2 = (unsigned int)(v9 + 1);
              v24 = (unsigned int)v9;
              v9 = a2;
              v11[v24] = v11[a2];
            }
            while ( (unsigned int)a2 < *((_DWORD *)this + 88) - 1 );
          }
          --*((_DWORD *)this + 88);
        }
        v12 = *((_QWORD *)this + 40);
        v2 = 0;
        if ( !v3
          || (v11 = (struct CD3DConstantBuffer **)(v12 + 72), *(_QWORD *)(v12 + 72))
          || (ConstantBuffer = CHwLightCollectionBuffer::CreateConstantBuffer(
                                 v3,
                                 *(struct CD3DDeviceLevel1 **)(v12 + 24),
                                 (unsigned __int64 *)(v12 + 80),
                                 v11),
              v2 = ConstantBuffer,
              ConstantBuffer >= 0) )
        {
          *(_QWORD *)(v12 + 64) = v3;
          if ( v3 )
            (**(void (__fastcall ***)(struct CHwLightCollectionBuffer *, unsigned __int64, unsigned __int64, struct CD3DConstantBuffer **))v3)(
              v3,
              a2,
              v9,
              v11);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0xBFu);
        }
        if ( v2 >= 0 )
          goto LABEL_14;
        v26 = 920;
        goto LABEL_35;
      }
      v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 328, 8LL, 1LL, &v27);
      v2 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    if ( v2 < 0 )
    {
      v26 = 910;
LABEL_35:
      v23 = v2;
      goto LABEL_32;
    }
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v5 + 64) == a2 )
    return (unsigned int)v2;
  CD2DContext::FlushDrawList((struct ID2D1PrivateCompositorRenderer **)this);
  CD2DContext::EnsureHwCallbackRenderer(this, v3);
LABEL_14:
  if ( v27 )
    CMILRefCountBase::Release((struct CHWCallbackRenderer *)((char *)v27 + 8));
  return (unsigned int)v2;
}
