/*
 * XREFs of ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000F37C
 * Callers:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000F4E4 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180153354 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 * Callees:
 *     ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x18000F28C (-EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800B24C4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::BuildCommandBuffers(
        CCommandListBitmapRepresentation *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct ID2D1Bitmap *a4,
        struct ID2D1PrivateCompositorBuffer **a5,
        struct ID2D1PrivateCompositorBuffer **a6)
{
  struct ID2D1PrivateCompositorBuffer *v6; // rbx
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  struct ID2D1PrivateCompositorBuffer *v11; // rdi
  _OWORD *v12; // rax
  struct ID2D1PrivateCompositorBuffer *v13; // rbx
  struct ID2D1PrivateCompositorBuffer *v14; // rcx
  __int64 v15; // rax
  struct ID2D1PrivateCompositorBuffer *v17; // [rsp+58h] [rbp+10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v18; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  CCommandListBitmapRepresentation::EnsureCommandListBufferData(this, a2, a4);
  v8 = CD2DSharedBuffer::CreateFromHeap(0x90u, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Cu);
  }
  else
  {
    v10 = CD2DSharedBuffer::CreateFromHeap(0x94u, &v18);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = v17;
      v12 = (_OWORD *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v17 + 24LL))(v17);
      v13 = v18;
      v14 = v18;
      *v12 = *(_OWORD *)((char *)this + 8);
      v12[1] = *(_OWORD *)((char *)this + 24);
      v12[2] = *(_OWORD *)((char *)this + 40);
      v12[3] = *(_OWORD *)((char *)this + 56);
      v12[4] = *(_OWORD *)((char *)this + 72);
      v12[5] = *(_OWORD *)((char *)this + 88);
      v12[6] = *(_OWORD *)((char *)this + 104);
      v12[7] = *(_OWORD *)((char *)this + 120);
      v12[8] = *(_OWORD *)((char *)this + 136);
      v15 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v14 + 24LL))(v14);
      *(_OWORD *)v15 = *(_OWORD *)((char *)this + 152);
      *(_OWORD *)(v15 + 16) = *(_OWORD *)((char *)this + 168);
      *(_OWORD *)(v15 + 32) = *(_OWORD *)((char *)this + 184);
      *(_OWORD *)(v15 + 48) = *(_OWORD *)((char *)this + 200);
      *(_OWORD *)(v15 + 64) = *(_OWORD *)((char *)this + 216);
      *(_OWORD *)(v15 + 80) = *(_OWORD *)((char *)this + 232);
      *(_OWORD *)(v15 + 96) = *(_OWORD *)((char *)this + 248);
      *(_OWORD *)(v15 + 112) = *(_OWORD *)((char *)this + 264);
      *(_OWORD *)(v15 + 128) = *(_OWORD *)((char *)this + 280);
      *(_DWORD *)(v15 + 144) = *((_DWORD *)this + 74);
      *a5 = v11;
      *a6 = v13;
      return v9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x52u);
    v6 = v18;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
