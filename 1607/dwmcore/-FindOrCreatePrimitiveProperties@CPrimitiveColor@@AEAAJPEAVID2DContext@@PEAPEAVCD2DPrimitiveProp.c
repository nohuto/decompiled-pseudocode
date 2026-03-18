/*
 * XREFs of ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18001BCB4
 * Callers:
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18000EAC0 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 * Callees:
 *     ?UpdateContextColor@CD2DPrimitiveProperties@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18001BF74 (-UpdateContextColor@CD2DPrimitiveProperties@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveColor::FindOrCreatePrimitiveProperties(
        CPrimitiveColor *this,
        struct ID2DContext *a2,
        struct CD2DPrimitiveProperties **a3)
{
  unsigned int v3; // r11d
  int v4; // ebx
  char v5; // bp
  CD2DPrimitiveProperties *v6; // r9
  __int64 v7; // r10
  __int64 v10; // r8
  __int64 v11; // rax
  CD2DPrimitiveProperties *v12; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // r9d
  CD2DPrimitiveProperties *v18; // rcx
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-28h]
  CD2DPrimitiveProperties *v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 36);
  v4 = 0;
  v21 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( v3 )
  {
    v10 = *((_QWORD *)this + 15);
    while ( a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v7) + 24LL) + 24LL) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v3 )
        goto LABEL_5;
    }
    v6 = *(CD2DPrimitiveProperties **)(v10 + 8 * v7);
  }
LABEL_5:
  v21 = v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)v6;
    v12 = v6;
LABEL_7:
    (*(void (__fastcall **)(CD2DPrimitiveProperties *))(v11 + 8))(v12);
    *a3 = v21;
    return (unsigned int)v4;
  }
  v14 = (*(__int64 (__fastcall **)(struct ID2DContext *, CD2DPrimitiveProperties **))(*(_QWORD *)a2 + 256LL))(a2, &v21);
  v4 = v14;
  if ( v14 < 0 )
  {
    v20 = 117;
  }
  else
  {
    CD2DPrimitiveProperties::UpdateContextColor(v21, (const struct _D3DCOLORVALUE *)((char *)this + 168));
    v14 = CD2DResource::AddResourceNotifier((CD2DPrimitiveProperties *)((char *)v21 + 16), this);
    v4 = v14;
    if ( v14 >= 0 )
    {
      v15 = *((_DWORD *)this + 36);
      v5 = 1;
      v16 = v15 + 1;
      if ( v15 + 1 < v15 )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        v4 = 0;
        if ( v16 <= *((_DWORD *)this + 35) )
        {
          *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * *((unsigned int *)this + 36)) = v21;
          *((_DWORD *)this + 36) = v16;
          goto LABEL_25;
        }
        v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 120, 8LL, 1LL, &v21);
        v4 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
      }
      if ( v4 < 0 )
      {
        v20 = 127;
        v17 = v4;
        goto LABEL_16;
      }
LABEL_25:
      v12 = v21;
      v11 = *(_QWORD *)v21;
      goto LABEL_7;
    }
    v20 = 123;
  }
  v17 = v14;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v20);
  v18 = v21;
  if ( v21 )
  {
    if ( v5 )
    {
      CD2DResource::RemoveResourceNotifier((CD2DPrimitiveProperties *)((char *)v21 + 16), this);
      v18 = v21;
    }
    if ( v18 )
      (*(void (__fastcall **)(CD2DPrimitiveProperties *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v4;
}
