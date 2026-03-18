/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115220
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1800FF6A0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115178 (-CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180133220 (-GetFirstAvailableD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  int v3; // esi
  struct CD3DDeviceLevel1 *v4; // r14
  char v5; // r13
  __int64 v6; // r9
  struct CD3DPixelShader *v9; // r8
  int FirstAvailableD3DDevice; // eax
  struct CD3DPixelShader *v11; // rdi
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // ebx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-10h]
  struct CD3DPixelShader *v20; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DDeviceLevel1 *v21; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v21 = 0LL;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( a2
         && *(struct CD3DDeviceLevel1 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v6) + 16LL) + 120LL) != a2 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_7;
    }
    v9 = *(struct CD3DPixelShader **)(*(_QWORD *)(a1 + 16) + 8 * v6);
    v20 = v9;
    if ( v9 )
      goto LABEL_21;
  }
LABEL_7:
  if ( a2 )
  {
LABEL_11:
    v12 = CCompiledEffectTemplate::CreateResource(*(CCompiledEffectTemplate **)(a1 + 8), a2, &v20);
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
    v12 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)v20 + 3) + 24LL))((char *)v20 + 24, a1);
    v3 = v12;
    if ( v12 < 0 )
    {
      v19 = 92;
      goto LABEL_15;
    }
    v14 = *(_DWORD *)(a1 + 40);
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
    if ( v15 > *(_DWORD *)(a1 + 36) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 16, 8u, 1, &v20);
      v16 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      v3 = v16;
      if ( v16 < 0 )
        goto LABEL_34;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 40)) = v20;
      *(_DWORD *)(a1 + 40) = v15;
    }
    v9 = v20;
LABEL_21:
    v11 = 0LL;
    *a3 = v9;
    v20 = 0LL;
    goto LABEL_22;
  }
  FirstAvailableD3DDevice = CD3DDeviceManager::GetFirstAvailableD3DDevice(
                              (CD3DDeviceManager *)&g_D3DDeviceManager,
                              (const struct _GUID *)(a1 + 64),
                              &v21);
  v3 = FirstAvailableD3DDevice;
  if ( FirstAvailableD3DDevice >= 0 )
  {
    v4 = v21;
    a2 = v21;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD3DDevice, 0x56u);
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
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v11 + 3) + 32LL))((__int64)v11 + 24, a1);
      v11 = v20;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_28:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 392));
  return (unsigned int)v3;
}
