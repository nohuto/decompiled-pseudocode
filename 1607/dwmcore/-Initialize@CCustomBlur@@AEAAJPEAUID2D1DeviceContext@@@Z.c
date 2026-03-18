/*
 * XREFs of ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x180169EB4
 * Callers:
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x180169CFC (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18014CCFC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 */

__int64 __fastcall CCustomBlur::Initialize(CCustomBlur *this, struct ID2D1DeviceContext *a2)
{
  __int64 *v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  struct ID2D1Effect **v9; // r15
  int v10; // eax
  struct ID2D1Effect *v11; // rcx
  int v12; // eax
  ID2D1Effect **v13; // r14
  int v14; // eax
  ID2D1Effect *v15; // rcx
  int v16; // eax
  ID2D1Effect *v17; // rcx
  int v18; // eax
  ID2D1Effect **v19; // r15
  int v20; // eax
  ID2D1Effect *v21; // rcx
  int v22; // eax
  ID2D1Effect **v23; // r14
  int v24; // eax
  ID2D1Effect *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v29; // [rsp+60h] [rbp+30h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 5);
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, __int64 *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1Scale,
         v2);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x38u);
  }
  else
  {
    v7 = *v2;
    v29 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v7 + 72LL))(v7, 3LL, 0LL, &v29, 4);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x39u);
    }
    else
    {
      v9 = (struct ID2D1Effect **)((char *)this + 24);
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 3);
      v10 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
              a2,
              &CLSID_D2D1Crop,
              (char *)this + 24);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Bu);
      }
      else
      {
        v11 = *v9;
        v29 = 1;
        v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v11 + 72LL))(
                v11,
                1LL,
                0LL,
                &v29,
                4);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x3Cu);
        }
        else
        {
          v13 = (ID2D1Effect **)((char *)this + 32);
          Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 4);
          v14 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
                  a2,
                  &CLSID_D2D1Border,
                  (char *)this + 32);
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x3Eu);
          }
          else
          {
            ID2D1Effect::SetInputEffect(*v13, 0, *v9);
            v15 = *v13;
            v29 = 0;
            v16 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, int *, int))(*(_QWORD *)v15 + 72LL))(
                    v15,
                    0LL,
                    0LL,
                    &v29,
                    4);
            v6 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x40u);
            }
            else
            {
              v17 = *v13;
              v29 = 0;
              v18 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v17 + 72LL))(
                      v17,
                      1LL,
                      0LL,
                      &v29,
                      4);
              v6 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x41u);
              }
              else
              {
                v19 = (ID2D1Effect **)((char *)this + 48);
                Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 6);
                v20 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
                        a2,
                        &CLSID_D2D1DirectionalBlurKernel,
                        (char *)this + 48);
                v6 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x43u);
                }
                else
                {
                  ID2D1Effect::SetInputEffect(*v19, 0, *v13);
                  v21 = *v19;
                  v29 = 0;
                  v22 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v21 + 72LL))(
                          v21,
                          1LL,
                          0LL,
                          &v29,
                          4);
                  v6 = v22;
                  if ( v22 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x47u);
                  }
                  else
                  {
                    v23 = (ID2D1Effect **)((char *)this + 56);
                    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 7);
                    v24 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
                            a2,
                            &CLSID_D2D1DirectionalBlurKernel,
                            (char *)this + 56);
                    v6 = v24;
                    if ( v24 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x49u);
                    }
                    else
                    {
                      ID2D1Effect::SetInputEffect(*v23, 0, *v19);
                      v25 = *v23;
                      v29 = 1;
                      v26 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v25 + 72LL))(
                              v25,
                              1LL,
                              0LL,
                              &v29,
                              4);
                      v6 = v26;
                      if ( v26 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4Du);
                      }
                      else if ( *((struct ID2D1DeviceContext **)this + 2) != a2 )
                      {
                        (*(void (__fastcall **)(struct ID2D1DeviceContext *))(*(_QWORD *)a2 + 8LL))(a2);
                        v27 = *((_QWORD *)this + 2);
                        *((_QWORD *)this + 2) = a2;
                        if ( v27 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
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
  return v6;
}
