/*
 * XREFs of ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180153354
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18015355C (-GetDrawListGeneratorNoRef@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DCont.c)
 * Callees:
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000F1FC (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000F37C (-BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContex.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x18009DCF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::CreateNewGenerator(
        CCommandListBitmapRepresentation *this,
        const struct CComposition *a2,
        struct ID2DContextOwner *a3,
        struct ID2DContext *a4,
        struct CPrimitiveGroupDrawListGenerator **a5)
{
  struct CPrimitiveGroupDrawListGenerator **v5; // r12
  struct CPrimitiveGroupDrawListGenerator *v8; // r14
  struct ID2D1PrivateCompositorBuffer *v9; // rsi
  struct CPrimitiveGroupDrawListGenerator **v10; // rdi
  int D2DBitmapRealization; // eax
  struct ID2DContextOwner *v12; // rdx
  struct ID2DContext *v13; // r8
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct CPrimitiveGroupDrawListGenerator *v19; // [rsp+50h] [rbp-20h] BYREF
  struct IImageSource *v20; // [rsp+58h] [rbp-18h] BYREF
  struct ID2D1Bitmap *v21; // [rsp+60h] [rbp-10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v22; // [rsp+B8h] [rbp+48h] BYREF

  v5 = a5;
  v19 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  a5 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  D2DBitmapRealization = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, a3, &v21);
  v14 = D2DBitmapRealization;
  if ( D2DBitmapRealization < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealization, 0x13Au);
    goto LABEL_12;
  }
  if ( !v21 )
    goto LABEL_12;
  v15 = CCommandListBitmapRepresentation::BuildCommandBuffers(
          this,
          v12,
          v13,
          v21,
          &v22,
          (struct ID2D1PrivateCompositorBuffer **)&a5);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x147u);
    goto LABEL_10;
  }
  v16 = (**(__int64 (__fastcall ***)(CCommandListBitmapRepresentation *, GUID *, struct IImageSource **))this)(
          this,
          &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
          &v20);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x14Au);
LABEL_10:
    v9 = v22;
    v10 = a5;
    goto LABEL_12;
  }
  v9 = v22;
  v10 = a5;
  v17 = CPrimitiveGroupDrawListGenerator::Create(
          *((_QWORD *)a2 + 44),
          v22,
          (struct ID2D1PrivateCompositorBuffer *)a5,
          &v20,
          1uLL,
          0LL,
          0LL,
          0LL,
          0LL,
          &v19);
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x157u);
    v8 = v19;
  }
  else
  {
    *v5 = v19;
  }
LABEL_12:
  if ( v20 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v9 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*((void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator **))*v10 + 2))(v10);
  if ( v21 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v8 )
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v8 + 8LL))(v8);
  return v14;
}
