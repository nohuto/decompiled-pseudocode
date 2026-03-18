/*
 * XREFs of ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000F4E4
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 * Callees:
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000F1FC (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000F37C (-BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContex.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18009C698 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::GetD2DCommandList(
        CCommandListBitmapRepresentation *this,
        struct CPolygon *a2,
        struct ID2DContextOwner *a3,
        struct ID2DContext *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  struct ID2DContext *v6; // rsi
  unsigned int v9; // r9d
  struct ID2D1PrivateCompositorBuffer *v10; // r12
  struct ID2D1PrivateCompositorBuffer *v11; // r15
  struct ID2D1PrivateCompositorCommandList *v12; // rdi
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rsi
  int ID2DCommandList; // eax
  int v17; // ebx
  int v18; // eax
  int D2DBitmapRealization; // eax
  struct ID2DContextOwner *v21; // rdx
  struct ID2DContext *v22; // r8
  int v23; // eax
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // edx
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // [rsp+28h] [rbp-51h]
  struct ID2D1Bitmap *v31; // [rsp+68h] [rbp-11h] BYREF
  CD2DCommandList *v32; // [rsp+70h] [rbp-9h] BYREF
  struct ID2D1PrivateCompositorBuffer *v33; // [rsp+78h] [rbp-1h] BYREF
  struct ID2D1PrivateCompositorBuffer *v34; // [rsp+80h] [rbp+7h] BYREF
  __int128 v35; // [rsp+88h] [rbp+Fh] BYREF
  struct ID2D1PrivateCompositorCommandList *v36; // [rsp+D8h] [rbp+5Fh] BYREF
  struct CPolygon *v37; // [rsp+E0h] [rbp+67h]
  struct ID2DContext *v38; // [rsp+F0h] [rbp+77h]

  v38 = a4;
  v37 = a2;
  v6 = a4;
  v33 = 0LL;
  v34 = 0LL;
  v9 = *((_DWORD *)this + 84);
  v10 = 0LL;
  v36 = 0LL;
  v11 = 0LL;
  v32 = 0LL;
  v12 = 0LL;
  v31 = 0LL;
  v13 = 0;
  *a5 = 0LL;
  if ( !v9 )
  {
LABEL_24:
    D2DBitmapRealization = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, a3, &v31);
    v17 = D2DBitmapRealization;
    if ( D2DBitmapRealization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealization, 0xABu);
      goto LABEL_11;
    }
    if ( !v31 )
      goto LABEL_19;
    v23 = CCommandListBitmapRepresentation::BuildCommandBuffers(this, v21, v22, v31, &v33, &v34);
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xBBu);
      v10 = v33;
      v11 = v34;
      goto LABEL_11;
    }
    v11 = v34;
    v10 = v33;
    v24 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, __int64, _QWORD, _QWORD, _QWORD, _QWORD, CD2DCommandList **))(*(_QWORD *)v6 + 248LL))(
            v6,
            v33,
            v34,
            &v31,
            1LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &v32);
    v17 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC8u);
      goto LABEL_11;
    }
    ID2DCommandList = CD2DCommandList::GetID2DCommandList(v32, v37, &v36);
    v17 = ID2DCommandList;
    if ( ID2DCommandList < 0 )
    {
      v30 = 206;
      goto LABEL_39;
    }
    v25 = (_QWORD *)((char *)this + 312);
    *(_QWORD *)&v35 = v32;
    v26 = *((unsigned int *)this + 84);
    BYTE8(v35) = 0;
    v27 = v26 + 1;
    if ( (int)v26 + 1 < (unsigned int)v26 )
    {
      v17 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v17 = 0;
      if ( v27 <= *((_DWORD *)this + 83) )
      {
        *(_OWORD *)(*v25 + 16 * v26) = v35;
        *((_DWORD *)this + 84) = v27;
        goto LABEL_32;
      }
      v29 = DynArrayImpl<0>::AddMultipleAndSet(v25, 16LL, 1LL, &v35);
      v17 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
    }
    if ( v17 < 0 )
    {
      v30 = 212;
      v28 = v17;
      goto LABEL_41;
    }
LABEL_32:
    v32 = 0LL;
LABEL_23:
    v12 = v36;
    goto LABEL_10;
  }
  v14 = *((_QWORD *)this + 39);
  while ( v6 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v14 + 16LL * v13) + 24LL) + 24LL) )
  {
    if ( ++v13 >= v9 )
      goto LABEL_24;
  }
  v15 = v14 + 16LL * v13;
  if ( !v15 )
  {
    v6 = v38;
    goto LABEL_24;
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(*(CD2DCommandList **)v15, a2, &v36);
  v17 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
  {
    v30 = 142;
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(v15 + 8)
    && !(*(unsigned __int8 (__fastcall **)(CCommandListBitmapRepresentation *))(*(_QWORD *)this + 48LL))(this) )
  {
    goto LABEL_23;
  }
  ID2DCommandList = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, a3, &v31);
  v17 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
  {
    v30 = 155;
LABEL_39:
    v28 = ID2DCommandList;
LABEL_41:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v30);
    v12 = v36;
    goto LABEL_11;
  }
  v12 = v36;
  v18 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorCommandList *, struct ID2D1Bitmap **, __int64))(*(_QWORD *)v36 + 32LL))(
          v36,
          &v31,
          1LL);
  v17 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA1u);
    goto LABEL_11;
  }
  *(_BYTE *)(v15 + 8) = 0;
LABEL_10:
  *a5 = v12;
  v12 = 0LL;
LABEL_11:
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_19:
  if ( v32 )
    (*(void (__fastcall **)(CD2DCommandList *))(*(_QWORD *)v32 + 16LL))(v32);
  return (unsigned int)v17;
}
