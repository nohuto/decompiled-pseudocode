/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18008F470
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18009039C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x18008F33C (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x18009129C (-Create@CD2DBitmapBrushWrapper@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x180091560 (-CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x180091618 (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(struct CD2DResourceManager **this, struct IDXGIDeviceDWM *a2)
{
  int v4; // eax
  CD3DDeviceManager *v5; // rcx
  int v6; // esi
  int D2DFactoryNoRef; // eax
  int v8; // eax
  _QWORD *v9; // r12
  int Device; // eax
  int v11; // eax
  int v12; // eax
  struct ID2D1DeviceContext **v13; // r15
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct ID2D1DeviceContext *v17; // rsi
  int v18; // eax
  int v19; // eax
  struct CD2DResourceManager *v20; // rdi
  unsigned int v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-18h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v4 = CD2DResourceManager::Create((struct CD2DContext *)this, this + 1);
  v22 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x24u);
  }
  else
  {
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v5, this + 2);
    v22 = D2DFactoryNoRef;
    v6 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x26u);
    }
    else
    {
      v8 = (**(__int64 (__fastcall ***)(struct IDXGIDeviceDWM *, GUID *, __int64 *))a2)(
             a2,
             &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
             &v24);
      v22 = v8;
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x28u);
      }
      else
      {
        v9 = this + 3;
        Device = CD2DFactory::CreateDevice(this[2], a2, this + 3);
        v22 = Device;
        v6 = Device;
        if ( Device < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Device, 0x2Du);
        }
        else
        {
          v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v9)(
                  *v9,
                  &GUID_a8b627dd_f27e_4605_966e_2f60a4e671df,
                  (char *)this + 32);
          v22 = v11;
          v6 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2Fu);
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v9 + 32LL))(*v9, 0LL, &v23);
            v22 = v12;
            v6 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x32u);
            }
            else
            {
              v13 = this + 5;
              v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v23)(
                      v23,
                      &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                      (char *)this + 40);
              v22 = v14;
              v6 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x34u);
              }
              else
              {
                v15 = (**(__int64 (__fastcall ***)(struct ID2D1DeviceContext *, GUID *, char *))*v13)(
                        *v13,
                        &GUID_61d1b67a_5331_4a41_aa7e_fcfd71b112a0,
                        (char *)this + 48);
                v22 = v15;
                v6 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x36u);
                }
                else
                {
                  v16 = CD2DBitmapBrushWrapper::Create(*v13, this + 19);
                  v22 = v16;
                  v6 = v16;
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3Du);
                  }
                  else
                  {
                    v17 = *v13;
                    v25[0] = 0LL;
                    v25[1] = 0LL;
                    v18 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, _QWORD *, _QWORD, char *))(*(_QWORD *)v17 + 64LL))(
                            v17,
                            v25,
                            0LL,
                            (char *)this + 160);
                    v22 = v18;
                    v6 = v18;
                    if ( v18 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x40u);
                    }
                    else
                    {
                      v19 = CD2DContext::PopulateEffectTable((CD2DContext *)this);
                      v22 = v19;
                      v6 = v19;
                      if ( v19 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x42u);
                      }
                      else
                      {
                        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 48LL))(*v9, 0x40000000LL);
                        v20 = this[6];
                        *((_BYTE *)this + 245) = 1;
                        (*(void (__fastcall **)(struct CD2DResourceManager *, _QWORD, __int64))(*(_QWORD *)v20 + 80LL))(
                          v20,
                          0LL,
                          1LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  TranslateDXGIorD3DErrorInContext(v6, 0, &v22);
  return v22;
}
