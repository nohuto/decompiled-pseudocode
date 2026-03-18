/*
 * XREFs of ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DVertexBuffer@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B5310
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Initialize@CVertexConstantBuffer@@QEAAJPEAUID3D11Device@@@Z @ 0x1800B5E24 (-Initialize@CVertexConstantBuffer@@QEAAJPEAUID3D11Device@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHWCallbackRenderer::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CD3DVertexBuffer *a2,
        struct CD3DIndexBuffer *a3,
        struct CHWCallbackRenderer **a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         192LL);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v8 + 16) = 0;
    *(_QWORD *)v8 = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
    *(_QWORD *)(v8 + 24) = a1;
    *(_QWORD *)(v8 + 8) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_DWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
    *(_DWORD *)(v8 + 96) = 0;
    *(_QWORD *)(v8 + 104) = a2;
    *(_QWORD *)(v8 + 112) = a3;
    *(_QWORD *)(v8 + 152) = 0LL;
    memset_0((void *)(v8 + 120), 0, 0x20uLL);
    *(_QWORD *)(v9 + 160) = 0LL;
    *(_QWORD *)(v9 + 168) = 0LL;
    *(_QWORD *)(v9 + 176) = 0LL;
    *(_DWORD *)(v9 + 184) = 0;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 104) + 8LL));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 112) + 8LL));
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 16));
    v10 = CVertexConstantBuffer::Initialize(
            (CVertexConstantBuffer *)(v9 + 120),
            *(struct ID3D11Device **)(*(_QWORD *)(v9 + 24) + 568LL));
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Cu);
      CMILRefCountBase::Release((CMILRefCountBase *)(v9 + 8));
    }
    else
    {
      *a4 = (struct CHWCallbackRenderer *)v9;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x39u);
  }
  return v11;
}
