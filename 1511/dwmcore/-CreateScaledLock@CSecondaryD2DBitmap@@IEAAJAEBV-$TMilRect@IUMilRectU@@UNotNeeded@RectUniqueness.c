/*
 * XREFs of ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18015EC88
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180012180 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A342C (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800A365C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  struct IBitmapSource *v5; // r14
  struct IBitmapSource *v6; // rsi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  __int64 v28; // [rsp+40h] [rbp-79h] BYREF
  struct IWICBitmapSource *v29; // [rsp+48h] [rbp-71h] BYREF
  __int64 v30; // [rsp+50h] [rbp-69h] BYREF
  __int64 v31; // [rsp+58h] [rbp-61h] BYREF
  __int64 v32; // [rsp+60h] [rbp-59h] BYREF
  struct IBitmapSource *v33; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-45h] BYREF
  struct IBitmapSource *v36; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int8 *v37; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v38[4]; // [rsp+88h] [rbp-31h] BYREF
  int v39; // [rsp+8Ch] [rbp-2Dh]
  int v40; // [rsp+90h] [rbp-29h]
  __int64 v41; // [rsp+98h] [rbp-21h]
  __int64 v42; // [rsp+A0h] [rbp-19h] BYREF
  int v43; // [rsp+A8h] [rbp-11h] BYREF
  int v44; // [rsp+ACh] [rbp-Dh] BYREF
  _DWORD v45[4]; // [rsp+B0h] [rbp-9h] BYREF

  v28 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v36 = 0LL;
  v30 = 0LL;
  *a4 = 0LL;
  v42 = 0LL;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a3 + 24LL))(a3, &v43, &v44);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v42, &v28);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 24LL))(v28, v38);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
      v41 = 0LL;
      v40 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 64LL))(v28, &v34);
      v11 = v14;
      if ( v14 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v28 + 72LL))(
                v28,
                &v35,
                &v37);
        v11 = v15;
        if ( v15 >= 0 )
        {
          v16 = HrCreateBitmapFromMemoryEx(
                  v43 - (int)v42,
                  v44 - HIDWORD(v42),
                  (const struct PixelFormatInfo *)v38,
                  v34,
                  v35,
                  v37,
                  0LL,
                  &v33);
          v11 = v16;
          if ( v16 >= 0 )
          {
            v5 = v33;
            v17 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v33)(
                    v33,
                    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                    &v32);
            v11 = v17;
            if ( v17 >= 0 )
            {
              v18 = WICCreateImagingFactory_Proxy(567LL, &v31);
              v11 = v18;
              if ( v18 >= 0 )
              {
                v19 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v31 + 88LL))(
                        v31,
                        &v29);
                v11 = v19;
                if ( v19 >= 0 )
                {
                  v20 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v29->lpVtbl[1].QueryInterface)(
                          v29,
                          v32,
                          *(unsigned int *)(a1 + 168),
                          *(unsigned int *)(a1 + 172),
                          3);
                  v11 = v20;
                  if ( v20 >= 0 )
                  {
                    v21 = HrCreateBitmapFromWICBitmapSource(v29, &v36);
                    v11 = v21;
                    if ( v21 >= 0 )
                    {
                      v6 = v36;
                      v22 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v36)(
                              v36,
                              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                              &v30);
                      v11 = v22;
                      if ( v22 >= 0 )
                      {
                        v23 = *a2;
                        v24 = a2[1];
                        v45[2] = a2[2] - *a2;
                        v25 = a2[3] - v24;
                        v45[0] = v23;
                        v45[3] = v25;
                        v45[1] = v24;
                        v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v30 + 24LL))(
                                v30,
                                v45,
                                1LL,
                                a4);
                        v11 = v26;
                        if ( v26 < 0 )
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x16Cu);
                      }
                      else
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x165u);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x163u);
                      v6 = v36;
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x15Eu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x156u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x154u);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x14Eu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x14Cu);
            v5 = v33;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x140u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x13Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x13Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x138u);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v29 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v29->lpVtbl->Release)(v29);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v11;
}
