/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18014DAB0
 * Callers:
 *     ?GetBounds@CPencil@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DCB0 (-GetBounds@CPencil@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ?GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z @ 0x18014DD98 (-GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CPencil@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18014D8C4 (-CreateResource@CPencil@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18015D20C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DPencil,CPencil,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DPencil **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // rdi
  char v6; // r15
  __int64 v7; // rdx
  struct CD2DPencil *v10; // rdx
  int DefaultDevice; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  struct CD2DPencil *v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-10h]
  struct CD2DPencil *v19; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v20; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v20 = 0LL;
  v7 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( a2 && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v7) + 24LL) + 24LL) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v10 = *(struct CD2DPencil **)(*((_QWORD *)a1 + 2) + 8 * v7);
    v19 = v10;
    if ( v10 )
      goto LABEL_18;
  }
LABEL_7:
  if ( !a2 )
  {
    DefaultDevice = FindDefaultDevice((const struct _GUID *)a1 + 4, &v20);
    v3 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
      v4 = v20;
LABEL_26:
      v15 = v19;
      goto LABEL_27;
    }
    v4 = v20;
    a2 = v20;
  }
  v12 = CPencil::CreateResource(*((CPencil **)a1 + 1), a2, &v19);
  v3 = v12;
  if ( v12 < 0 )
  {
    v18 = 90;
    goto LABEL_25;
  }
  v12 = CD2DResource::AddResourceNotifier((struct CD2DPencil *)((char *)v19 + 16), a1);
  v3 = v12;
  if ( v12 < 0 )
  {
    v18 = 92;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v18);
    goto LABEL_26;
  }
  v13 = *((_DWORD *)a1 + 10);
  v6 = 1;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_21;
  }
  v3 = 0;
  if ( v14 > *((_DWORD *)a1 + 9) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v19);
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
LABEL_21:
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Fu);
      goto LABEL_26;
    }
    goto LABEL_17;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * *((unsigned int *)a1 + 10)) = v19;
  *((_DWORD *)a1 + 10) = v14;
LABEL_17:
  v10 = v19;
LABEL_18:
  v15 = 0LL;
  *a3 = v10;
  v19 = 0LL;
LABEL_27:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !v15 )
        goto LABEL_33;
      CD2DResource::RemoveResourceNotifier((struct CD2DPencil *)((char *)v15 + 16), a1);
      v15 = v19;
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CD2DPencil *))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_33:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
