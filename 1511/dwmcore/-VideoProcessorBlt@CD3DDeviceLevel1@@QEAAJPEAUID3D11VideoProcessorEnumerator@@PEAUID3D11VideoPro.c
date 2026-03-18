/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11VideoProcessor@@PEAUID3D11Resource@@I2AEBUtagRECT@@3W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180145CBC
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11VideoProcessor@@PEAUID3D11Texture2D@@IAEBUtagRECT@@3W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014B6E0 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11Vi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        CD3DDeviceLevel1 *this,
        struct ID3D11VideoProcessorEnumerator *a2,
        struct ID3D11VideoProcessor *a3,
        struct ID3D11Resource *a4,
        unsigned int a5,
        struct ID3D11Resource *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum DXGI_COLOR_SPACE_TYPE a9)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v22; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v23; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+48h] [rbp-99h] BYREF
  const struct tagRECT *v25; // [rsp+50h] [rbp-91h]
  const struct tagRECT *v26; // [rsp+58h] [rbp-89h]
  __int64 v27; // [rsp+60h] [rbp-81h] BYREF
  int v28; // [rsp+70h] [rbp-71h] BYREF
  __int64 v29; // [rsp+74h] [rbp-6Dh]
  __int64 v30; // [rsp+7Ch] [rbp-65h]
  __int64 v31; // [rsp+88h] [rbp-59h]
  __int64 v32; // [rsp+90h] [rbp-51h]
  __int64 v33; // [rsp+98h] [rbp-49h]
  __int128 v34; // [rsp+A0h] [rbp-41h]
  __int64 v35; // [rsp+B0h] [rbp-31h]
  int v36; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v37; // [rsp+C4h] [rbp-1Dh]
  unsigned int v38; // [rsp+CCh] [rbp-15h]

  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 69);
  v25 = a7;
  v26 = a8;
  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v14 = (**v9)(v9, &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333, &v22);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 70))(
            *((_QWORD *)this + 70),
            &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
            &v21);
    v15 = v16;
    if ( v16 >= 0 )
    {
      v38 = a5;
      v36 = 0;
      v37 = 1LL;
      v17 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, struct ID3D11VideoProcessorEnumerator *, int *, __int64 *))(*(_QWORD *)v22 + 64LL))(
              v22,
              a4,
              a2,
              &v36,
              &v23);
      v15 = v17;
      if ( v17 >= 0 )
      {
        v27 = 1LL;
        v18 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, struct ID3D11VideoProcessorEnumerator *, __int64 *, __int64 *))(*(_QWORD *)v22 + 72LL))(
                v22,
                a6,
                a2,
                &v27,
                &v24);
        v15 = v18;
        if ( v18 >= 0 )
        {
          (*(void (__fastcall **)(__int64, struct ID3D11VideoProcessor *, _QWORD, __int64, const struct tagRECT *))(*(_QWORD *)v21 + 240LL))(
            v21,
            a3,
            0LL,
            1LL,
            v25);
          (*(void (__fastcall **)(__int64, struct ID3D11VideoProcessor *, _QWORD, __int64, const struct tagRECT *))(*(_QWORD *)v21 + 248LL))(
            v21,
            a3,
            0LL,
            1LL,
            v26);
          (*(void (__fastcall **)(__int64, struct ID3D11VideoProcessor *, _QWORD, _QWORD))(*(_QWORD *)v21 + 592LL))(
            v21,
            a3,
            0LL,
            (unsigned int)a9);
          (*(void (__fastcall **)(__int64, struct ID3D11VideoProcessor *, _QWORD, _QWORD))(*(_QWORD *)v21 + 296LL))(
            v21,
            a3,
            0LL,
            0LL);
          v32 = v23;
          v34 = 0LL;
          v28 = 1;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v33 = 0LL;
          v35 = 0LL;
          v19 = (*(__int64 (__fastcall **)(__int64, struct ID3D11VideoProcessor *, __int64, _QWORD, int, int *))(*(_QWORD *)v21 + 424LL))(
                  v21,
                  a3,
                  v24,
                  0LL,
                  1,
                  &v28);
          v15 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xAA2u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA7Eu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xA76u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA6Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA6Bu);
  }
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v22 = 0LL;
  }
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v23 = 0LL;
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return v15;
}
