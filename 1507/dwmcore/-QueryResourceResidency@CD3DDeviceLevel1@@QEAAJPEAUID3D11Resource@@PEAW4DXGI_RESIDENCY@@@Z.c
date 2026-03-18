/*
 * XREFs of ?QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z @ 0x180019170
 * Callers:
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x1800846C0 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::QueryResourceResidency(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        enum DXGI_RESIDENCY *a3)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 68);
  v12 = 0LL;
  v13 = 0LL;
  v11[0] = 0LL;
  v6 = (**v3)(v3, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x104Eu);
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1054u);
    }
    else
    {
      v11[0] = v13;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *, enum DXGI_RESIDENCY *, __int64))(*(_QWORD *)v12 + 72LL))(
             v12,
             v11,
             a3,
             1LL);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x105Au);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v7;
}
