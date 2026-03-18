/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18001AD00
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x18001AAF4 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800278A0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x1801371DC (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
        struct _GUID *a1,
        struct ID2DContext *a2,
        struct ID2DContext **a3)
{
  int v3; // edi
  struct ID2DContext *v4; // r14
  __int64 v6; // rdx
  struct ID2DContext *v9; // rdx
  char v10; // r15
  struct ID2DContext *v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  struct ID2DContext *v16; // r15
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edx
  int DefaultDevice; // eax
  int v21; // ebx
  int v22; // eax
  struct ID2DContext *v23[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ID2DContext *v24; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v23[0] = 0LL;
  if ( !*(_DWORD *)a1[2].Data4 )
    goto LABEL_13;
  while ( a2 && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8 * v6) + 24LL) + 16LL) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)a1[2].Data4 )
      goto LABEL_13;
  }
  v9 = *(struct ID2DContext **)(*(_QWORD *)&a1[1].Data1 + 8 * v6);
  v24 = v9;
  if ( !v9 )
  {
LABEL_13:
    if ( !a2 )
    {
      DefaultDevice = FindDefaultDevice(a1 + 4, v23);
      v3 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
        v4 = v23[0];
        goto LABEL_32;
      }
      v4 = v23[0];
      a2 = v23[0];
    }
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD *)a1->Data4;
    v23[0] = 0LL;
    v15 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct ID2DContext **))(v13 + 272))(
            a2,
            v14 + 160,
            v23);
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2F6u);
      v16 = v23[0];
    }
    else
    {
      v16 = 0LL;
      v24 = v23[0];
      v23[0] = 0LL;
    }
    if ( v16 )
      (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Au);
    }
    else
    {
      v17 = CD2DResource::AddResourceNotifier(
              (struct ID2DContext *)((char *)v24 + 16),
              (struct IDeviceResourceNotify *)a1);
      v3 = v17;
      if ( v17 >= 0 )
      {
        v18 = *(_DWORD *)a1[2].Data4;
        v10 = 1;
        v19 = v18 + 1;
        if ( v18 + 1 < v18 )
        {
          v21 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v3 = -2147024362;
        }
        else
        {
          v3 = 0;
          if ( v19 <= *(_DWORD *)&a1[2].Data2 )
          {
            *(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8LL * v18) = v24;
            *(_DWORD *)a1[2].Data4 = v19;
LABEL_23:
            v9 = v24;
            goto LABEL_6;
          }
          v22 = DynArrayImpl<0>::AddMultipleAndSet(&a1[1], 8LL, 1LL, &v24);
          v21 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
          v3 = v21;
          if ( v21 >= 0 )
            goto LABEL_23;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x5Fu);
        v11 = v24;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x5Cu);
    }
LABEL_32:
    v11 = v24;
    v10 = 0;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_6:
  v11 = 0LL;
  *a3 = v9;
  v24 = 0LL;
LABEL_7:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v10 )
    {
      if ( !v11 )
        goto LABEL_10;
      CD2DResource::RemoveResourceNotifier(
        (struct ID2DContext *)((char *)v11 + 16),
        (const struct IDeviceResourceNotify *)a1);
      v11 = v24;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_10:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
