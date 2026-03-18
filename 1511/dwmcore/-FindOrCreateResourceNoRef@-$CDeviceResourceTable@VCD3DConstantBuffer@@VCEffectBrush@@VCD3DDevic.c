/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180122A6C
 * Callers:
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180122C80 (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027D70 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180027DB0 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180122868 (-CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180144A60 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct CD3DDeviceLevel1 *a2,
        CMILPoolResource **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rsi
  char v6; // r12
  __int64 v7; // rdx
  CMILPoolResource *v10; // rdx
  int FirstAvailableD3DDevice; // eax
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // edi
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-10h]
  CMILPoolResource *v20; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v21; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v6 = 0;
  v21 = 0LL;
  v7 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( a2
         && *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v7) + 16LL) + 120LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v10 = *(CMILPoolResource **)(*((_QWORD *)a1 + 2) + 8 * v7);
    v20 = v10;
    if ( v10 )
      goto LABEL_21;
  }
LABEL_7:
  if ( a2 )
  {
LABEL_11:
    v12 = CEffectBrush::CreateResource(*((CEffectBrush **)a1 + 1), a2, &v20);
    v3 = v12;
    if ( v12 < 0 )
    {
      v19 = 90;
LABEL_15:
      v13 = v12;
LABEL_35:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v19);
      goto LABEL_22;
    }
    v12 = CD3DResource::AddResourceNotifier((CMILPoolResource *)((char *)v20 + 24), a1);
    v3 = v12;
    if ( v12 < 0 )
    {
      v19 = 92;
      goto LABEL_15;
    }
    v14 = *((_DWORD *)a1 + 10);
    v6 = 1;
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
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8, 1, &v20);
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
    v10 = v20;
LABEL_21:
    v20 = 0LL;
    *a3 = v10;
    goto LABEL_22;
  }
  FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                              (CD3DDeviceManager *)&g_D3DDeviceManager,
                              (const struct _GUID *)a1 + 4,
                              &v21);
  v3 = FirstAvailableD3DDevice;
  if ( FirstAvailableD3DDevice >= 0 )
  {
    v4 = v21;
    a2 = v21;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x56u);
  v4 = v21;
LABEL_22:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !v20 )
        goto LABEL_28;
      CD3DResource::RemoveResourceNotifier((CMILPoolResource *)((char *)v20 + 24), a1);
    }
  }
  if ( v20 )
    CMILPoolResource::Release(v20);
LABEL_28:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 384));
  return (unsigned int)v3;
}
