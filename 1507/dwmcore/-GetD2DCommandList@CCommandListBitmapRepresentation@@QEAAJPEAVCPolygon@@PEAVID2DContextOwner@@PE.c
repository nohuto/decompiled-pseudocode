/*
 * XREFs of ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180011858
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180010DD8 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 * Callees:
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x1800117A0 (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x180011C5C (-EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180015758 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18005E638 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::GetD2DCommandList(
        CCommandListBitmapRepresentation *this,
        struct CPolygon *a2,
        struct ID2DContextOwner *a3,
        struct ID2DContext *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  struct ID2D1PrivateCompositorCommandList *v5; // rsi
  struct ID2D1PrivateCompositorBuffer *v6; // r12
  struct ID2D1PrivateCompositorBuffer *v7; // r13
  struct ID2DContext *v9; // r15
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v14; // r8
  __int64 v15; // r15
  int ID2DCommandList; // eax
  unsigned int v17; // edi
  int v18; // eax
  int D2DBitmapRealization; // eax
  struct ID2DContextOwner *v21; // rdx
  int v22; // eax
  int v23; // eax
  _OWORD *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // edx
  int v30; // r9d
  int v31; // ebx
  int v32; // eax
  unsigned int v33; // [rsp+28h] [rbp-51h]
  struct ID2D1Bitmap *v34; // [rsp+58h] [rbp-21h] BYREF
  CD2DCommandList *v35; // [rsp+60h] [rbp-19h] BYREF
  struct ID2D1PrivateCompositorBuffer *v36; // [rsp+68h] [rbp-11h] BYREF
  struct ID2D1PrivateCompositorBuffer *v37; // [rsp+70h] [rbp-9h] BYREF
  __int128 v38; // [rsp+78h] [rbp-1h] BYREF
  struct ID2D1PrivateCompositorCommandList *v39; // [rsp+D8h] [rbp+5Fh] BYREF
  struct CPolygon *v40; // [rsp+E0h] [rbp+67h]
  struct ID2DContextOwner *v41; // [rsp+E8h] [rbp+6Fh]
  struct ID2DContext *v42; // [rsp+F0h] [rbp+77h]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v5 = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  *a5 = 0LL;
  v9 = a4;
  v10 = *((_DWORD *)this + 82);
  v11 = 0;
  v37 = 0LL;
  v39 = 0LL;
  if ( !v10 )
  {
LABEL_26:
    D2DBitmapRealization = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, a3, &v34);
    v17 = D2DBitmapRealization;
    if ( D2DBitmapRealization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealization, 0x6Fu);
      goto LABEL_11;
    }
    if ( !v34 )
      goto LABEL_19;
    CCommandListBitmapRepresentation::EnsureCommandListBufferData(this, v21, v34);
    v22 = CD2DSharedBuffer::CreateFromHeap(0x90u, &v36);
    v17 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x7Fu);
      v6 = v36;
      goto LABEL_11;
    }
    v23 = CD2DSharedBuffer::CreateFromHeap(0x94u, &v37);
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x85u);
      v6 = v36;
      v7 = v37;
      goto LABEL_11;
    }
    v6 = v36;
    v24 = (_OWORD *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v36 + 24LL))(v36);
    v7 = v37;
    *v24 = *(_OWORD *)((char *)this + 8);
    v24[1] = *(_OWORD *)((char *)this + 24);
    v24[2] = *(_OWORD *)((char *)this + 40);
    v24[3] = *(_OWORD *)((char *)this + 56);
    v24[4] = *(_OWORD *)((char *)this + 72);
    v24[5] = *(_OWORD *)((char *)this + 88);
    v24[6] = *(_OWORD *)((char *)this + 104);
    v24[7] = *(_OWORD *)((char *)this + 120);
    v24[8] = *(_OWORD *)((char *)this + 136);
    v25 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v7 + 24LL))(v7);
    *(_OWORD *)v25 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)(v25 + 16) = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)(v25 + 32) = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)(v25 + 48) = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)(v25 + 64) = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)(v25 + 80) = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)(v25 + 96) = *(_OWORD *)((char *)this + 248);
    *(_OWORD *)(v25 + 112) = *(_OWORD *)((char *)this + 264);
    *(_OWORD *)(v25 + 128) = *(_OWORD *)((char *)this + 280);
    *(_DWORD *)(v25 + 144) = *((_DWORD *)this + 74);
    v26 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, __int64, _QWORD, _QWORD, _QWORD, _QWORD, CD2DCommandList **))(*(_QWORD *)v9 + 240LL))(
            v9,
            v6,
            v7,
            &v34,
            1LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &v35);
    v17 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x9Du);
      goto LABEL_11;
    }
    ID2DCommandList = CD2DCommandList::GetID2DCommandList(v35, v40, &v39);
    v17 = ID2DCommandList;
    if ( ID2DCommandList < 0 )
    {
      v33 = 163;
      goto LABEL_47;
    }
    v27 = (_QWORD *)((char *)this + 304);
    *(_QWORD *)&v38 = v35;
    v28 = *((unsigned int *)this + 82);
    BYTE8(v38) = 0;
    v29 = v28 + 1;
    if ( (int)v28 + 1 < (unsigned int)v28 )
    {
      v31 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v17 = -2147024362;
    }
    else
    {
      v17 = 0;
      if ( v29 <= *((_DWORD *)this + 81) )
      {
        *(_OWORD *)(*v27 + 16 * v28) = v38;
        *((_DWORD *)this + 82) = v29;
LABEL_35:
        v35 = 0LL;
LABEL_25:
        v5 = v39;
        goto LABEL_10;
      }
      v32 = DynArrayImpl<0>::AddMultipleAndSet(v27, 16LL, 1LL, &v38);
      v31 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
      v17 = v31;
      if ( v31 >= 0 )
        goto LABEL_35;
    }
    v33 = 169;
    v30 = v31;
    goto LABEL_53;
  }
  v14 = *((_QWORD *)this + 38);
  while ( v9 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v14 + 16LL * v11) + 24LL) + 16LL) )
  {
    if ( ++v11 >= v10 )
      goto LABEL_26;
  }
  v15 = v14 + 16LL * v11;
  if ( !v15 )
  {
    v9 = v42;
    goto LABEL_26;
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(*(CD2DCommandList **)v15, a2, &v39);
  v17 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
  {
    v33 = 80;
LABEL_47:
    v30 = ID2DCommandList;
LABEL_53:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v33);
    v5 = v39;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(v15 + 8)
    && !(*(unsigned __int8 (__fastcall **)(CCommandListBitmapRepresentation *))(*(_QWORD *)this + 64LL))(this)
    && !(*(unsigned __int8 (__fastcall **)(CCommandListBitmapRepresentation *))(*(_QWORD *)this + 32LL))(this)
    && !(*(unsigned __int8 (__fastcall **)(CCommandListBitmapRepresentation *))(*(_QWORD *)this + 40LL))(this) )
  {
    goto LABEL_25;
  }
  ID2DCommandList = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, v41, &v34);
  v17 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
  {
    v33 = 95;
    goto LABEL_47;
  }
  v5 = v39;
  v18 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorCommandList *, struct ID2D1Bitmap **, __int64))(*(_QWORD *)v39 + 32LL))(
          v39,
          &v34,
          1LL);
  v17 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x65u);
    goto LABEL_11;
  }
  *(_BYTE *)(v15 + 8) = 0;
LABEL_10:
  *a5 = v5;
  v5 = 0LL;
LABEL_11:
  if ( v34 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_19:
  if ( v35 )
    (*(void (__fastcall **)(CD2DCommandList *))(*(_QWORD *)v35 + 16LL))(v35);
  return v17;
}
