/*
 * XREFs of ?UpdateConstantBuffers@CCompiledEffect@@AEAAJXZ @ 0x180113A44
 * Callers:
 *     ?GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180112884 (-GetConstantBuffer@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CCompiledEffect::UpdateConstantBuffers(CCompiledEffect *this)
{
  unsigned int v2; // eax
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  size_t v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // ebx
  void *v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h]

  if ( !*((_BYTE *)this + 160) )
    return 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 48LL) + 72LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 48LL));
  v3 = *((_DWORD *)this + 30);
  v4 = 0;
  v5 = v2;
  if ( !v3 )
  {
LABEL_6:
    *((_BYTE *)this + 160) = 0;
    return 0;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + *((_QWORD *)this + 12));
    v13 = *(_QWORD *)(v7 + 128);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 120LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(v8 + 552) + 112LL))(
           *(_QWORD *)(v8 + 552),
           v13,
           0LL,
           4LL,
           0,
           &v12);
    v10 = v9;
    if ( v9 < 0 )
      break;
    memcpy_0(v12, *((const void **)this + 9), v5);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v8 + 552) + 120LL))(*(_QWORD *)(v8 + 552), v13, 0LL);
    ++v4;
    v6 += 8LL;
    if ( v4 >= v3 )
      goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2CAu);
  return v10;
}
