/*
 * XREFs of ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180133058
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800123B0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800AEC84 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(__int64 a1, _DWORD *a2, __int64 *a3, _QWORD *a4)
{
  struct IBitmapSource *v4; // rsi
  __int64 v6; // rax
  void (__fastcall *v9)(__int64 *, int *, int *); // rax
  struct IBitmapSource *v10; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v30; // [rsp+40h] [rbp-69h] BYREF
  struct IWICBitmapSource *v31; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-55h] BYREF
  struct IBitmapSource *v34; // [rsp+58h] [rbp-51h] BYREF
  struct IBitmapSource *v35; // [rsp+60h] [rbp-49h] BYREF
  __int64 v36; // [rsp+68h] [rbp-41h] BYREF
  __int64 v37; // [rsp+70h] [rbp-39h] BYREF
  __int64 v38; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int8 *v39; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v40[4]; // [rsp+88h] [rbp-21h] BYREF
  int v41; // [rsp+8Ch] [rbp-1Dh]
  int v42; // [rsp+90h] [rbp-19h]
  __int64 v43; // [rsp+98h] [rbp-11h]
  int v44; // [rsp+A0h] [rbp-9h] BYREF
  int v45; // [rsp+A4h] [rbp-5h]
  int v46; // [rsp+A8h] [rbp-1h] BYREF
  int v47; // [rsp+ACh] [rbp+3h] BYREF
  _DWORD v48[4]; // [rsp+B0h] [rbp+7h] BYREF

  v30 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  v6 = *a3;
  v38 = 0LL;
  v37 = 0LL;
  v31 = 0LL;
  v9 = *(void (__fastcall **)(__int64 *, int *, int *))(v6 + 24);
  v10 = 0LL;
  v36 = 0LL;
  v44 = 0;
  v45 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v9(a3, &v46, &v47);
  v12 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64 *))(*a3 + 72))(a3, &v44, &v30);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x138u);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 24LL))(v30, v40);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x13Au);
    }
    else
    {
      v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
      v43 = 0LL;
      v42 = v15;
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 64LL))(v30, &v33);
      v13 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x13Fu);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v30 + 72LL))(
                v30,
                &v32,
                &v39);
        v13 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x140u);
        }
        else
        {
          v18 = HrCreateBitmapFromMemoryEx(
                  v46 - v44,
                  v47 - v45,
                  (const struct PixelFormatInfo *)v40,
                  v33,
                  v32,
                  v39,
                  0LL,
                  &v35);
          v13 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x14Cu);
            v4 = v35;
          }
          else
          {
            v4 = v35;
            v19 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v35)(
                    v35,
                    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                    &v38);
            v13 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x14Eu);
            }
            else
            {
              v20 = WICCreateImagingFactory_Proxy(567LL, &v37);
              v13 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x154u);
              }
              else
              {
                v21 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v37 + 88LL))(
                        v37,
                        &v31);
                v13 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x156u);
                }
                else
                {
                  v22 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v31->lpVtbl[1].QueryInterface)(
                          v31,
                          v38,
                          *(unsigned int *)(a1 + 168),
                          *(unsigned int *)(a1 + 172),
                          3);
                  v13 = v22;
                  if ( v22 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x15Eu);
                  }
                  else
                  {
                    v23 = HrCreateBitmapFromWICBitmapSource(v31, &v34);
                    v13 = v23;
                    if ( v23 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x163u);
                      v10 = v34;
                    }
                    else
                    {
                      v10 = v34;
                      v24 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v34)(
                              v34,
                              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                              &v36);
                      v13 = v24;
                      if ( v24 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x165u);
                      }
                      else
                      {
                        v25 = a2[1];
                        v26 = a2[2] - *a2;
                        v48[0] = *a2;
                        v48[2] = v26;
                        v27 = a2[3] - v25;
                        v48[1] = v25;
                        v48[3] = v27;
                        v28 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v36 + 24LL))(
                                v36,
                                v48,
                                1LL,
                                a4);
                        v13 = v28;
                        if ( v28 < 0 )
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x16Cu);
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
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v10 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v31 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v31->lpVtbl->Release)(v31);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v4 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return v13;
}
