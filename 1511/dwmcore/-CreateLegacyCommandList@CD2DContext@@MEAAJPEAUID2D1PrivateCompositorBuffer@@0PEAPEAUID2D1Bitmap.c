/*
 * XREFs of ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x180020C00
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000A18C (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x180027A08 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::CreateLegacyCommandList(
        CD2DContext *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct ID2D1Bitmap **a4,
        unsigned __int64 a5,
        struct ID2D1Bitmap **a6,
        unsigned __int64 a7,
        struct ID2D1PrivateCompositorPrimitiveProperties **a8,
        unsigned __int64 a9,
        struct CD2DCommandList **a10)
{
  __int64 v10; // rdi
  struct CD2DCommandList *v12; // r15
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  struct ID2D1PrivateCompositorCommandList *v17; // [rsp+50h] [rbp-38h] BYREF
  struct CD2DCommandList *v18; // [rsp+90h] [rbp+8h] BYREF

  v10 = *((_QWORD *)this + 6);
  v17 = 0LL;
  v12 = 0LL;
  v18 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _DWORD, struct ID2D1Bitmap **, _DWORD, struct ID2D1PrivateCompositorPrimitiveProperties **, _DWORD, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v10 + 24LL))(
          v10,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          &v17);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x892u);
  }
  else
  {
    v15 = CD2DCommandList::Create(*((struct CD2DResourceManager **)this + 1), v17, &v18);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x896u);
      v12 = v18;
    }
    else
    {
      *a10 = v18;
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v12 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v12 + 16LL))(v12);
  return v14;
}
