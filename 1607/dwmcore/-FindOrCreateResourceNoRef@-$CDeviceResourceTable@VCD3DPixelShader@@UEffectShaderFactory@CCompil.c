/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E180
 * Callers:
 *     ?GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAUID3D11VertexShader@@PEAPEAUID3D11PixelShader@@@Z @ 0x18014E3F8 (-GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E054 (-CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLigh.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801728B8 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  int v3; // ebx
  struct CD3DDeviceLevel1 *v4; // rdi
  char v6; // r15
  __int64 v7; // rdx
  struct CD3DPixelShader *v10; // rdx
  int FirstAvailableD3DDevice; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  struct CD3DPixelShader *v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-10h]
  struct CD3DPixelShader *v19; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v20; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v20 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( a2
         && *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7) + 16LL) + 128LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_7;
    }
    v10 = *(struct CD3DPixelShader **)(*(_QWORD *)(a1 + 16) + 8 * v7);
    v19 = v10;
    if ( v10 )
      goto LABEL_18;
  }
LABEL_7:
  if ( !a2 )
  {
    FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                                (CD3DDeviceManager *)&g_D3DDeviceManager,
                                (const struct _GUID *)(a1 + 64),
                                &v20);
    v3 = FirstAvailableD3DDevice;
    if ( FirstAvailableD3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x56u);
      v4 = v20;
LABEL_26:
      v15 = v19;
      goto LABEL_27;
    }
    v4 = v20;
    a2 = v20;
  }
  v12 = CCompiledEffectTemplate::CreateResource(
          *(CCompiledEffectTemplate **)(*(_QWORD *)(a1 + 8) + 16LL),
          a2,
          **(_DWORD **)(a1 + 8),
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL),
          *(_QWORD *)(a1 + 8) + 8LL,
          &v19);
  v3 = v12;
  if ( v12 < 0 )
  {
    v18 = 90;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v19 + 3) + 24LL))((char *)v19 + 24, a1);
  v3 = v12;
  if ( v12 < 0 )
  {
    v18 = 92;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v18);
    goto LABEL_26;
  }
  v13 = *(_DWORD *)(a1 + 40);
  v6 = 1;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_21;
  }
  v3 = 0;
  if ( v14 > *(_DWORD *)(a1 + 36) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 16, 8u, 1, &v19);
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
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 40)) = v19;
  *(_DWORD *)(a1 + 40) = v14;
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
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v15 + 3) + 32LL))((__int64)v15 + 24, a1);
      v15 = v19;
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v15 + 8LL))(v15);
LABEL_33:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 408));
  return (unsigned int)v3;
}
