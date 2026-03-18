/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18000FB10
 * Callers:
 *     ?GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000FA08 (-GetD2D1PrimitiveProperties@CPrimitiveColor@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PrivateCompositor.c)
 * Callees:
 *     ?UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000FE44 (-UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800278A0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        unsigned __int64 a2,
        struct CD2DPrimitiveProperties **a3)
{
  unsigned int v3; // esi
  char v4; // r12
  CD2DPrimitiveProperties *v5; // rdi
  __int64 v6; // r9
  unsigned __int64 v8; // r15
  int updated; // eax
  int v11; // r9d
  unsigned int v12; // eax
  int v13; // ebx
  CD2DPrimitiveProperties *v14; // rdi
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-10h]
  CD2DPrimitiveProperties *v18; // [rsp+60h] [rbp+30h] BYREF

  v3 = 0;
  v4 = 0;
  v18 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v8 = a2;
  if ( *((_DWORD *)this + 18) )
  {
    a2 = *((_QWORD *)this + 6);
    while ( v8 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * v6) + 24LL) + 16LL) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
        goto LABEL_7;
    }
    v5 = *(CD2DPrimitiveProperties **)(a2 + 8 * v6);
  }
LABEL_7:
  v18 = v5;
  if ( v5 )
    goto LABEL_20;
  updated = (*(__int64 (__fastcall **)(unsigned __int64, CD2DPrimitiveProperties **, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v8 + 248LL))(
              v8,
              &v18,
              a3,
              v6);
  v3 = updated;
  if ( updated >= 0 )
  {
    updated = CD2DPrimitiveProperties::UpdateContextColor(v18, (const struct _D3DCOLORVALUE *)this + 6);
    v3 = updated;
    if ( updated < 0 )
    {
      v17 = 120;
      goto LABEL_14;
    }
    updated = CD2DResource::AddResourceNotifier((CD2DPrimitiveProperties *)((char *)v18 + 16), this);
    v3 = updated;
    if ( updated < 0 )
    {
      v17 = 123;
      goto LABEL_14;
    }
    v12 = *((_DWORD *)this + 18);
    v4 = 1;
    a2 = v12 + 1;
    if ( (unsigned int)a2 < v12 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_30:
      v17 = 127;
      v11 = v13;
      goto LABEL_31;
    }
    v3 = 0;
    if ( (unsigned int)a2 > *((_DWORD *)this + 17) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 8LL, 1LL, &v18);
      v13 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      v3 = v13;
      if ( v13 < 0 )
        goto LABEL_30;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *((unsigned int *)this + 18)) = v18;
      *((_DWORD *)this + 18) = a2;
    }
    v5 = v18;
LABEL_20:
    (*(void (__fastcall **)(CD2DPrimitiveProperties *, unsigned __int64, struct CD2DPrimitiveProperties **, __int64))(*(_QWORD *)v5 + 8LL))(
      v5,
      a2,
      a3,
      v6);
    v14 = 0LL;
    *a3 = v18;
    v18 = 0LL;
    goto LABEL_21;
  }
  v17 = 117;
LABEL_14:
  v11 = updated;
LABEL_31:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v17);
  v14 = v18;
LABEL_21:
  if ( v14 )
  {
    if ( v4 )
    {
      CD2DResource::RemoveResourceNotifier((CD2DPrimitiveProperties *)((char *)v14 + 16), this);
      v14 = v18;
    }
    if ( v14 )
      (*(void (__fastcall **)(CD2DPrimitiveProperties *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v3;
}
