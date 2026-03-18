/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x180138D04
 * Callers:
 *     ?CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115178 (-CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@XZ @ 0x180015E04 (--0CD3DResource@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180138E94 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDeviceLevel1 *a1,
        const void *a2,
        __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rsi
  unsigned int v10; // edi
  int v11; // r9d
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  struct ID3D11Buffer *v15; // [rsp+30h] [rbp-28h] BYREF

  v15 = 0LL;
  v8 = (CD3DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         144LL);
  v9 = v8;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8);
    *((_QWORD *)v9 + 16) = 0LL;
    *((_QWORD *)v9 + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v10 = -2147024882;
    v14 = 39;
    v11 = -2147024882;
LABEL_6:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v14);
    goto LABEL_13;
  }
  (**(void (__fastcall ***)(CD3DResource *))v9)(v9);
  v12 = (*(__int64 (__fastcall **)(_QWORD, const void *, __int64, _QWORD, struct ID3D11Buffer **))(**((_QWORD **)a1 + 68)
                                                                                                 + 120LL))(
          *((_QWORD *)a1 + 68),
          a2,
          a3,
          0LL,
          &v15);
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 44;
LABEL_9:
    v11 = v12;
    goto LABEL_6;
  }
  v12 = CD3DConstantBuffer::Initialize(v9, (struct CD3DDeviceLevel1 *)((char *)a1 + 896), a3, v15);
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 46;
    goto LABEL_9;
  }
  *a4 = v9;
  v9 = 0LL;
LABEL_13:
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v15->lpVtbl->Release)(v15);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *, __int64))(*(_QWORD *)v9 + 16LL))(v9, 1LL);
  return v10;
}
