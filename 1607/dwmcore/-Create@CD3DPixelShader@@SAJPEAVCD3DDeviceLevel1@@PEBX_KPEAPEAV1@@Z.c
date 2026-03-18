/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18017A1B4
 * Callers:
 *     ?CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E054 (-CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLigh.c)
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18009F06C (--0CD3DResource@@IEAA@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180179118 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 *a1,
        const void *a2,
        __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct ID3D11Buffer *v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v8 = (CD3DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         144LL);
  v9 = v8;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8, 0);
    *((_QWORD *)v9 + 16) &= v10;
    *((_QWORD *)v9 + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v11 = -2147024882;
    v15 = 39;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v15);
    goto LABEL_15;
  }
  (**(void (__fastcall ***)(CD3DResource *))v9)(v9);
  v12 = (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, _QWORD, struct ID3D11Buffer **))(**((_QWORD **)a1 + 71)
                                                                                                 + 120LL))(
          *((_QWORD *)a1 + 71),
          a2,
          a3,
          0LL,
          &v16);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( IsOOM(v12) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v15 = 44;
    goto LABEL_14;
  }
  v13 = CD3DConstantBuffer::Initialize(v9, (struct CD3DDeviceLevel1 *)((char *)a1 + 880), a3, v16);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2Eu);
  }
  else
  {
    *a4 = v9;
    v9 = 0LL;
  }
LABEL_15:
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v16->lpVtbl->Release)(v16);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *, __int64))(*(_QWORD *)v9 + 16LL))(v9, 1LL);
  return v11;
}
