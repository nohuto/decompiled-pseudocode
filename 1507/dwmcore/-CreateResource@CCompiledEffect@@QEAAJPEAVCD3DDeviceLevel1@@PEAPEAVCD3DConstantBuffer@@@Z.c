/*
 * XREFs of ?CreateResource@CCompiledEffect@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1801124D8
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180112670 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180138B68 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompiledEffect::CreateResource(
        CCompiledEffect *this,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DConstantBuffer **a3)
{
  const void *v4; // rsi
  __int64 v6; // rdi
  unsigned int v7; // eax
  enum D3D11_USAGE v8; // r8d
  int v9; // eax
  unsigned int v10; // ebx

  v4 = (const void *)*((_QWORD *)this + 9);
  v6 = *(_QWORD *)(*((_QWORD *)this + 7) + 48LL);
  if ( !v4 )
    v4 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6);
  if ( (v7 & 0xF) != 0 )
    v7 += 16 - (v7 & 0xF);
  v9 = CD3DConstantBuffer::Create(a2, v7, v8, v4, a3);
  v10 = v9;
  if ( v9 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x176u);
  return v10;
}
