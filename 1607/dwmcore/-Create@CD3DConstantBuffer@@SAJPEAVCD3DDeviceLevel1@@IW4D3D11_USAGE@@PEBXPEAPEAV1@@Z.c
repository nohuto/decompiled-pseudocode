/*
 * XREFs of ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74
 * Callers:
 *     ?CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B738 (-CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z @ 0x1801740E4 (-GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z.c)
 *     ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@@Z @ 0x180177FCC (-CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConst.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18009F06C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x180179118 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 */

__int64 __fastcall CD3DConstantBuffer::Create(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        __int64 a3,
        const void *a4,
        struct CD3DConstantBuffer **a5)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-50h]
  struct ID3D11Buffer *v17; // [rsp+30h] [rbp-40h] BYREF
  const void *v18; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-30h]
  int v20; // [rsp+44h] [rbp-2Ch]
  _DWORD v21[6]; // [rsp+48h] [rbp-28h] BYREF

  v17 = 0LL;
  v8 = (CD3DResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                         WPF::g_pProcessHeap,
                         144LL,
                         a3);
  v9 = v8;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8, 0);
    *((_QWORD *)v9 + 16) &= v10;
    *((_QWORD *)v9 + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v9 = &CD3DConstantBuffer::`vftable'{for `CMILPoolResource'};
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v11 = -2147024882;
    v16 = 40;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v16);
    goto LABEL_15;
  }
  _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
  v12 = *((_QWORD *)a1 + 71);
  v21[4] = 0;
  v21[5] = 0;
  v19 = 0;
  v20 = 0;
  v21[2] = 4;
  v21[0] = a2;
  v21[1] = 2;
  v21[3] = 0x10000;
  v18 = a4;
  v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, const void **, struct ID3D11Buffer **))(*(_QWORD *)v12 + 24LL))(
          v12,
          v21,
          &v18,
          &v17);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( IsOOM(v13) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v16 = 58;
    goto LABEL_14;
  }
  v14 = CD3DConstantBuffer::Initialize(v9, (struct CD3DDeviceLevel1 *)((char *)a1 + 880), a2, v17);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x3Cu);
  }
  else
  {
    *a5 = v9;
    v9 = 0LL;
  }
LABEL_15:
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v17->lpVtbl->Release)(v17);
  if ( v9 )
    CMILPoolResource::Release(v9);
  return v11;
}
