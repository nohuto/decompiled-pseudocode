/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B9DC
 * Callers:
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18013BBCC (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009EFE0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009F020 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B738 (-CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801728B8 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct CD3DDeviceLevel1 *a2,
        CMILPoolResource **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rdi
  char v6; // r15
  __int64 v7; // rdx
  CMILPoolResource *v10; // rdx
  int FirstAvailableD3DDevice; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-10h]
  CMILPoolResource *v18; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v19; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v19 = 0LL;
  v7 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( a2
         && *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v7) + 16LL) + 128LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v10 = *(CMILPoolResource **)(*((_QWORD *)a1 + 2) + 8 * v7);
    v18 = v10;
    if ( v10 )
      goto LABEL_18;
  }
LABEL_7:
  if ( a2 )
  {
LABEL_10:
    v12 = CEffectBrush::CreateResource(*((CEffectBrush **)a1 + 1), a2, &v18);
    v3 = v12;
    if ( v12 < 0 )
    {
      v17 = 90;
    }
    else
    {
      v12 = CD3DResource::AddResourceNotifier((CMILPoolResource *)((char *)v18 + 24), a1);
      v3 = v12;
      if ( v12 >= 0 )
      {
        v13 = *((_DWORD *)a1 + 10);
        v6 = 1;
        v14 = v13 + 1;
        if ( v13 + 1 >= v13 )
        {
          v3 = 0;
          if ( v14 <= *((_DWORD *)a1 + 9) )
          {
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * *((unsigned int *)a1 + 10)) = v18;
            *((_DWORD *)a1 + 10) = v14;
LABEL_17:
            v10 = v18;
LABEL_18:
            v18 = 0LL;
            *a3 = v10;
            goto LABEL_26;
          }
          v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v18);
          v3 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
        }
        else
        {
          v3 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Fu);
          goto LABEL_26;
        }
        goto LABEL_17;
      }
      v17 = 92;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v17);
    goto LABEL_26;
  }
  FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                              (CD3DDeviceManager *)&g_D3DDeviceManager,
                              (const struct _GUID *)a1 + 4,
                              &v19);
  v3 = FirstAvailableD3DDevice;
  if ( FirstAvailableD3DDevice >= 0 )
  {
    v4 = v19;
    a2 = v19;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x56u);
  v4 = v19;
LABEL_26:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !v18 )
        goto LABEL_32;
      CD3DResource::RemoveResourceNotifier((CMILPoolResource *)((char *)v18 + 24), a1);
    }
  }
  if ( v18 )
    CMILPoolResource::Release(v18);
LABEL_32:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 408));
  return (unsigned int)v3;
}
