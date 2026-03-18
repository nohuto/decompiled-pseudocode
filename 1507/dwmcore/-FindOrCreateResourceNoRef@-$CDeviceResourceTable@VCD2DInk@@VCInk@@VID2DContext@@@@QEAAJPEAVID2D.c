/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180114430
 * Callers:
 *     ?GetBounds@CInk@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180114660 (-GetBounds@CInk@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18011478C (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180016000 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180016050 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180114200 (-CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x180121F7C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DInk **a3)
{
  int v3; // esi
  struct ID2DContext *v4; // r14
  char v5; // r13
  __int64 v6; // r9
  struct CD2DInk *v9; // r8
  int DefaultDevice; // eax
  struct CD2DInk *v11; // rdi
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // ebx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-10h]
  struct CD2DInk *v20; // [rsp+70h] [rbp+40h] BYREF
  struct ID2DContext *v21; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v21 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( a2 && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v6) + 24LL) + 16LL) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v9 = *(struct CD2DInk **)(*((_QWORD *)a1 + 2) + 8 * v6);
    v20 = v9;
    if ( v9 )
      goto LABEL_21;
  }
LABEL_7:
  if ( a2 )
  {
LABEL_11:
    v12 = CInk::CreateResource(*((CInk **)a1 + 1), a2, &v20);
    v3 = v12;
    if ( v12 < 0 )
    {
      v19 = 90;
LABEL_15:
      v13 = v12;
LABEL_35:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v19);
      v11 = v20;
      goto LABEL_22;
    }
    v12 = CD2DResource::AddResourceNotifier((struct CD2DInk *)((char *)v20 + 16), a1);
    v3 = v12;
    if ( v12 < 0 )
    {
      v19 = 92;
      goto LABEL_15;
    }
    v14 = *((_DWORD *)a1 + 10);
    v5 = 1;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v16 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_34:
      v19 = 95;
      v13 = v16;
      goto LABEL_35;
    }
    v3 = 0;
    if ( v15 > *((_DWORD *)a1 + 9) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v20);
      v16 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      v3 = v16;
      if ( v16 < 0 )
        goto LABEL_34;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * *((unsigned int *)a1 + 10)) = v20;
      *((_DWORD *)a1 + 10) = v15;
    }
    v9 = v20;
LABEL_21:
    v11 = 0LL;
    *a3 = v9;
    v20 = 0LL;
    goto LABEL_22;
  }
  DefaultDevice = FindDefaultDevice((const struct _GUID *)a1 + 4, &v21);
  v3 = DefaultDevice;
  if ( DefaultDevice >= 0 )
  {
    v4 = v21;
    a2 = v21;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
  v11 = v20;
  v4 = v21;
LABEL_22:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v11 )
        goto LABEL_28;
      CD2DResource::RemoveResourceNotifier((struct CD2DInk *)((char *)v11 + 16), a1);
      v11 = v20;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_28:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
