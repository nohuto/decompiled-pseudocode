/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@III0IIAEBUtagRECT@@1W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801348A8
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IAEBUtagRECT@@1W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18013B540 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IAEBUtagRECT@@1W4DXGI_COLOR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        int a4,
        unsigned int a5,
        struct ID3D11Resource *a6,
        unsigned int a7,
        unsigned int a8,
        const struct tagRECT *a9,
        const struct tagRECT *a10,
        enum DXGI_COLOR_SPACE_TYPE a11)
{
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  const struct tagRECT *v31; // [rsp+60h] [rbp-A0h]
  const struct tagRECT *v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+84h] [rbp-7Ch]
  __int64 v36; // [rsp+8Ch] [rbp-74h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int128 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v43; // [rsp+D4h] [rbp-2Ch]
  int v44; // [rsp+DCh] [rbp-24h]
  _DWORD v45[10]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 68);
  v32 = a9;
  v31 = a10;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v16 = (**v11)(v11, &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333, &v26);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 69))(
            *((_QWORD *)this + 69),
            &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
            &v27);
    v17 = v18;
    if ( v18 >= 0 )
    {
      v45[0] = 0;
      v45[4] = a5;
      v45[7] = a7;
      v45[3] = a4;
      v45[8] = a8;
      v45[1] = 1;
      v45[2] = 1;
      v45[5] = 1;
      v45[6] = 1;
      v45[9] = 0;
      v19 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v26 + 80LL))(v26, v45, &v28);
      v17 = v19;
      if ( v19 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 32LL))(
                v26,
                v28,
                0LL,
                &v25);
        v17 = v20;
        if ( v20 >= 0 )
        {
          v42 = 0;
          v43 = 1LL;
          v44 = a3;
          v21 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, __int64, int *, __int64 *))(*(_QWORD *)v26 + 64LL))(
                  v26,
                  a2,
                  v28,
                  &v42,
                  &v29);
          v17 = v21;
          if ( v21 >= 0 )
          {
            v33 = 1LL;
            v22 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, __int64, __int64 *, __int64 *))(*(_QWORD *)v26 + 72LL))(
                    v26,
                    a6,
                    v28,
                    &v33,
                    &v30);
            v17 = v22;
            if ( v22 >= 0 )
            {
              (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, const struct tagRECT *))(*(_QWORD *)v27 + 240LL))(
                v27,
                v25,
                0LL,
                1LL,
                v32);
              (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, const struct tagRECT *))(*(_QWORD *)v27 + 248LL))(
                v27,
                v25,
                0LL,
                1LL,
                v31);
              (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v27 + 592LL))(
                v27,
                v25,
                0LL,
                (unsigned int)a11);
              v38 = v29;
              v40 = 0LL;
              v34 = 1;
              v35 = 0LL;
              v36 = 0LL;
              v37 = 0LL;
              v39 = 0LL;
              v41 = 0LL;
              v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int *))(*(_QWORD *)v27 + 424LL))(
                      v27,
                      v25,
                      v30,
                      0LL,
                      1,
                      &v34);
              v17 = v23;
              if ( v23 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xA9Cu);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xA7Cu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xA74u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xA6Au);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xA66u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA58u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA57u);
  }
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v26 = 0LL;
  }
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v27 = 0LL;
  }
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v28 = 0LL;
  }
  if ( v25 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v25 = 0LL;
  }
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v29 = 0LL;
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return v17;
}
