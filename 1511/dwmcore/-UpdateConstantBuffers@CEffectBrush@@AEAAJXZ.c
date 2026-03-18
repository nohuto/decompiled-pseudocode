/*
 * XREFs of ?UpdateConstantBuffers@CEffectBrush@@AEAAJXZ @ 0x180123410
 * Callers:
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180122C80 (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CEffectBrush::UpdateConstantBuffers(CEffectBrush *this)
{
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rdi
  unsigned int v3; // eax
  unsigned int v4; // r15d
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // ebx
  const void *v11; // rax
  void *v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+80h] [rbp+8h]
  __int64 v15; // [rsp+88h] [rbp+10h]

  if ( !*((_BYTE *)this + 176) )
    return 0;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 9));
  v3 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)CompiledEffectNoRef
                                                                                           + 40LL))(CompiledEffectNoRef);
  v4 = *((_DWORD *)this + 34);
  v5 = 0;
  Size = v3;
  if ( !v4 )
  {
LABEL_6:
    *((_BYTE *)this + 176) = 0;
    return 0;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 14));
    v15 = *(_QWORD *)(v7 + 128);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 120LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(v8 + 560) + 112LL))(
           *(_QWORD *)(v8 + 560),
           v15,
           0LL,
           4LL,
           0,
           &v13);
    v10 = v9;
    if ( v9 < 0 )
      break;
    v11 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 64LL))(*((_QWORD *)this + 11));
    memcpy_0(v13, v11, Size);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v8 + 560) + 120LL))(*(_QWORD *)(v8 + 560), v15, 0LL);
    ++v5;
    v6 += 8LL;
    if ( v5 >= v4 )
      goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x29Eu);
  return v10;
}
