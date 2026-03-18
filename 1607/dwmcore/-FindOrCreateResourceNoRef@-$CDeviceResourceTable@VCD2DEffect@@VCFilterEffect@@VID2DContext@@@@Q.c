/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180015030
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180014868 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18015D20C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
        struct _GUID *a1,
        struct ID2DContext *a2,
        struct ID2DContext **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // rsi
  char v6; // r12
  __int64 v7; // rdx
  struct ID2DContext *v10; // rdx
  struct ID2DContext *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int DefaultDevice; // eax
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-10h]
  struct ID2DContext *v22; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v23; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  v6 = 0;
  v23 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)a1[2].Data4 )
  {
    while ( a2
         && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8 * v7) + 24LL) + 24LL) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)a1[2].Data4 )
        goto LABEL_12;
    }
    v10 = *(struct ID2DContext **)(*(_QWORD *)&a1[1].Data1 + 8 * v7);
    v22 = v10;
    if ( v10 )
      goto LABEL_5;
  }
LABEL_12:
  if ( !a2 )
  {
    DefaultDevice = FindDefaultDevice(a1 + 4, &v23);
    v3 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
      v4 = v23;
LABEL_36:
      v11 = v22;
      goto LABEL_6;
    }
    v4 = v23;
    a2 = v23;
  }
  v13 = *(_QWORD *)a2;
  v14 = *(_QWORD *)a1->Data4;
  v23 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct ID2DContext **))(v13 + 272))(
          a2,
          v14 + 240,
          &v23);
  v3 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x314u);
    if ( v23 )
      (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  else
  {
    v22 = v23;
  }
  if ( v3 < 0 )
  {
    v21 = 90;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v21);
    goto LABEL_36;
  }
  v16 = CD2DResource::AddResourceNotifier((struct ID2DContext *)((char *)v22 + 16), (struct IDeviceResourceNotify *)a1);
  v3 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x5Cu);
    goto LABEL_36;
  }
  v17 = *(_DWORD *)a1[2].Data4;
  v6 = 1;
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_31:
    if ( v3 >= 0 )
      goto LABEL_20;
    v21 = 95;
    goto LABEL_35;
  }
  v3 = 0;
  if ( v18 > *(_DWORD *)&a1[2].Data2 )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet(&a1[1], 8LL, 1LL, &v22);
    v3 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
    goto LABEL_31;
  }
  *(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8LL * v17) = v22;
  *(_DWORD *)a1[2].Data4 = v18;
LABEL_20:
  v10 = v22;
LABEL_5:
  v11 = 0LL;
  *a3 = v10;
  v22 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !v11 )
        goto LABEL_9;
      CD2DResource::RemoveResourceNotifier(
        (struct ID2DContext *)((char *)v11 + 16),
        (const struct IDeviceResourceNotify *)a1);
      v11 = v22;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_9:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
