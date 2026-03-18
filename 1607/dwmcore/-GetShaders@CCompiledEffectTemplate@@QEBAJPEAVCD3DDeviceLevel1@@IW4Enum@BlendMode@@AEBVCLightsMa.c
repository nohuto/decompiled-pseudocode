/*
 * XREFs of ?GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAUID3D11VertexShader@@PEAPEAUID3D11PixelShader@@@Z @ 0x18014E3F8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x18014C6B0 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18014DF20 (--1-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DD.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E180 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompil.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CCompiledEffectTemplate::GetShaders(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        unsigned int a3,
        int a4,
        int *a5,
        struct CD3DPixelShader *a6,
        _QWORD *a7)
{
  struct CD3DPixelShader *v7; // r12
  _QWORD *v9; // r13
  int v12; // ebx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rsi
  unsigned int v14; // ebx
  char v15; // al
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  int v26; // r9d
  _QWORD *v27; // rbx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v31; // [rsp+20h] [rbp-38h]

  v7 = a6;
  v9 = a7;
  *(_QWORD *)a6 = 0LL;
  *v9 = 0LL;
  v12 = *a5;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef((CCompiledEffectTemplate *)a1);
  if ( CompiledEffectNoRef )
  {
    if ( a3 < (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 56LL))(*(_QWORD *)(a1 + 128)) - 1 )
    {
      a4 = 0;
      v12 = -1;
    }
    if ( a4 == 21 )
      a4 = 0;
    v15 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)CompiledEffectNoRef + 40LL))(
            CompiledEffectNoRef,
            a3);
    if ( v12 != -1 || (v16 = (v15 & 0x14) == 0, v17 = 2LL, !v16) )
      v17 = 3LL;
    v18 = *((_QWORD *)a2 + v17 + 137);
    *(_QWORD *)v7 = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v20 = (a3 << 21) + (unsigned __int16)v12 + (a4 << 16);
    v21 = 0;
    LODWORD(a6) = (a3 << 21) + (unsigned __int16)v12 + (a4 << 16);
    if ( *(int *)(a1 + 160) <= 0 )
    {
LABEL_14:
      v21 = -1;
    }
    else
    {
      v19 = *(int *)(a1 + 160);
      v22 = 0LL;
      v23 = *(_DWORD **)(a1 + 144);
      while ( *v23 != (_DWORD)v20 )
      {
        ++v21;
        ++v22;
        ++v23;
        if ( v22 >= v19 )
          goto LABEL_14;
      }
    }
    if ( v21 == -1 || (v24 = *(_QWORD **)(*(_QWORD *)(a1 + 152) + 8LL * v21)) == 0LL )
    {
      v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
              WPF::g_pProcessHeap,
              104LL,
              v20,
              v19);
      if ( v25 )
      {
        *(_DWORD *)v25 = a3;
        *(_DWORD *)(v25 + 4) = a4;
        *(_DWORD *)(v25 + 8) = v12;
        *(_QWORD *)(v25 + 16) = a1;
        *(_QWORD *)(v25 + 24) = &CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::`vftable';
        *(_QWORD *)(v25 + 32) = v25;
        *(_QWORD *)(v25 + 40) = v25 + 72;
        *(_QWORD *)(v25 + 48) = v25 + 72;
        *(_DWORD *)(v25 + 56) = 2;
        *(_QWORD *)(v25 + 60) = 2LL;
        *(GUID *)(v25 + 88) = GUID_NULL;
      }
      else
      {
        v25 = 0LL;
      }
      a7 = (_QWORD *)v25;
      if ( !v25 )
      {
        v26 = -2147024882;
        v31 = 211;
        v14 = -2147024882;
        goto LABEL_30;
      }
      if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                            a1 + 144,
                            &a6,
                            &a7) )
      {
        v27 = a7;
        if ( a7 )
        {
          CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>(a7 + 3);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v27);
        }
        v26 = -2147024882;
        v31 = 216;
        v14 = -2147024882;
        goto LABEL_30;
      }
      v24 = a7;
    }
    a6 = 0LL;
    v28 = CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
            (__int64)(v24 + 3),
            a2,
            &a6);
    v14 = v28;
    if ( v28 >= 0 )
    {
      v29 = *((_QWORD *)a6 + 16);
      *v9 = v29;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      return v14;
    }
    v31 = 221;
    v26 = v28;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v31);
    return v14;
  }
  v14 = -2147019873;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147019873, 0xA9u);
  return v14;
}
