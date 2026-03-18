/*
 * XREFs of ?UpdateConstantBuffers@CEffectBrush@@AEAAJXZ @ 0x18013E040
 * Callers:
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18013BBCC (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CEffectBrush::UpdateConstantBuffers(CEffectBrush *this)
{
  int v2; // esi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  int v11; // eax
  unsigned int v12; // ebx
  const void *v13; // rax
  void *v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned int Size; // [rsp+80h] [rbp+8h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 88LL))(*((_QWORD *)this + 19));
  if ( *((_DWORD *)this + 60) == v2 )
    return 0;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 17));
  v4 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)CompiledEffectNoRef
                                                                                           + 64LL))(CompiledEffectNoRef);
  v5 = *((_DWORD *)this + 50);
  v6 = 0;
  Size = v4;
  if ( !v5 )
  {
LABEL_6:
    *((_DWORD *)this + 60) = v2;
    return 0;
  }
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + *((_QWORD *)this + 22));
    v9 = *(_QWORD *)(v8 + 128);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 128LL);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(v10 + 576) + 112LL))(
            *(_QWORD *)(v10 + 576),
            v9,
            0LL,
            4LL,
            0,
            &v15);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v13 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 80LL))(*((_QWORD *)this + 19));
    memcpy_0(v15, v13, Size);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v10 + 576) + 120LL))(
      *(_QWORD *)(v10 + 576),
      v9,
      0LL);
    ++v6;
    v7 += 8LL;
    if ( v6 >= v5 )
      goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x6E3u);
  return v12;
}
