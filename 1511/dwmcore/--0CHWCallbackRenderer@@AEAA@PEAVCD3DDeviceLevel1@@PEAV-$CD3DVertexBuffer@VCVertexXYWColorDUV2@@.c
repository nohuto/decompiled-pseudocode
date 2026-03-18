/*
 * XREFs of ??0CHWCallbackRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@@Z @ 0x180035B80
 * Callers:
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B1AD0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHWCallbackRenderer::CHWCallbackRenderer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(a1 + 8) = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CHWCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
  *(_QWORD *)(a1 + 8) = &CHWCallbackRenderer::`vftable'{for `CMILRefCountBase'};
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = a4;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  (***(void (__fastcall ****)(_QWORD))(a1 + 80))(*(_QWORD *)(a1 + 80));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 8LL));
  return a1;
}
