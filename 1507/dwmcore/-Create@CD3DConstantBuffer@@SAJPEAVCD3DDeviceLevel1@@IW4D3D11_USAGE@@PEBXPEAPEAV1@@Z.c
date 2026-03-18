/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180138B68
 * Callers:
 *     ?CreateResource@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1801124D8 (-CreateResource@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@XZ @ 0x180015E04 (--0CD3DResource@@IEAA@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180138E94 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        __int64 a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // edi
  int v12; // r9d
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-50h]
  struct ID3D11Buffer *v17; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v19[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]

  v17 = 0LL;
  v8 = (CD3DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                         WPF::g_pProcessHeap,
                         144LL,
                         a3);
  v9 = v8;
  v10 = 0LL;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8);
    *((_QWORD *)v9 + 16) = v10;
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
    v16 = 40;
    v12 = -2147024882;
LABEL_6:
    MilInstrumentationCheckHR(0x14u, 0LL, v10, v12, v16);
    goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
  v13 = *((_QWORD *)a1 + 68);
  v20 = v10;
  v18[1] = v10;
  v19[2] = 4;
  v19[0] = a2;
  v19[1] = 2;
  v19[3] = 0x10000;
  v18[0] = a4;
  v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *, struct ID3D11Buffer **))(*(_QWORD *)v13 + 24LL))(
          v13,
          v19,
          v18,
          &v17);
  v11 = v14;
  if ( v14 < 0 )
  {
    v16 = 58;
LABEL_9:
    v12 = v14;
    LODWORD(v10) = 0;
    goto LABEL_6;
  }
  v14 = CD3DConstantBuffer::Initialize(v9, (struct CD3DDeviceLevel1 *)((char *)a1 + 896), a2, v17);
  v11 = v14;
  if ( v14 < 0 )
  {
    v16 = 60;
    goto LABEL_9;
  }
  *a5 = v9;
  v9 = 0LL;
LABEL_13:
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v17->lpVtbl->Release)(v17);
  if ( v9 )
    CMILPoolResource::Release(v9);
  return v11;
}
