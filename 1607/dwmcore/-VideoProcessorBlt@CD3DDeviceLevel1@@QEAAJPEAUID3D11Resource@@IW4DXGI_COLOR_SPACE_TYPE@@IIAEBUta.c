/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@0II2@Z @ 0x180175630
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2@Z @ 0x18017BF90 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x180173D50 (-EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        const struct tagRECT *a7,
        struct ID3D11Resource *a8,
        unsigned int a9,
        unsigned int a10,
        const struct tagRECT *a11)
{
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v27; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v28; // [rsp+48h] [rbp-A9h] BYREF
  const struct tagRECT *v29; // [rsp+50h] [rbp-A1h]
  _QWORD v30[3]; // [rsp+58h] [rbp-99h] BYREF
  _DWORD v31[8]; // [rsp+70h] [rbp-81h] BYREF
  __int64 v32; // [rsp+90h] [rbp-61h]
  __int64 v33; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-29h]
  __int64 v35; // [rsp+D0h] [rbp-21h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp-19h]
  unsigned int v37; // [rsp+DCh] [rbp-15h]

  v29 = a11;
  v28 = 0LL;
  v27 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v30[0] = 0LL;
  v30[1] = 0LL;
  memset_0(v31, 0, 0x48uLL);
  v36 = a9;
  v37 = a10;
  v35 = 0LL;
  v15 = CD3DDeviceLevel1::EnsureVideoProcessor(this, a5, a6, a9, a10);
  v16 = v15;
  if ( v15 < 0 )
  {
    if ( IsOOM(v15) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xAF6u);
  }
  else
  {
    v17 = *((_QWORD *)this + 73);
    v18 = *((_QWORD *)this + 75);
    HIDWORD(v33) = 1;
    HIDWORD(v34) = a3;
    v19 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, __int64, __int64 *, __int64 *))(*(_QWORD *)v17 + 64LL))(
            v17,
            a2,
            v18,
            &v33,
            &v28);
    v16 = v19;
    if ( v19 < 0 )
    {
      if ( IsOOM(v19) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xAFEu);
    }
    else
    {
      v20 = *((_QWORD *)this + 73);
      v21 = *((_QWORD *)this + 75);
      LODWORD(v30[0]) = 1;
      v22 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, __int64, _QWORD *, __int64 *))(*(_QWORD *)v20 + 72LL))(
              v20,
              a8,
              v21,
              v30,
              &v27);
      v16 = v22;
      if ( v22 < 0 )
      {
        if ( IsOOM(v22) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB05u);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 74)
                                                                                        + 240LL))(
          *((_QWORD *)this + 74),
          *((_QWORD *)this + 76),
          0LL,
          1LL,
          a7);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 74)
                                                                                        + 248LL))(
          *((_QWORD *)this + 74),
          *((_QWORD *)this + 76),
          0LL,
          1LL,
          v29);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 74) + 104LL))(
          *((_QWORD *)this + 74),
          *((_QWORD *)this + 76),
          1LL,
          &v35);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 74) + 592LL))(
          *((_QWORD *)this + 74),
          *((_QWORD *)this + 76),
          0LL,
          a4);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 74) + 296LL))(
          *((_QWORD *)this + 74),
          *((_QWORD *)this + 76),
          0LL,
          0LL);
        v23 = *((_QWORD *)this + 74);
        v32 = v28;
        v24 = *((_QWORD *)this + 76);
        v31[0] = 1;
        v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v23 + 424LL))(
                v23,
                v24,
                v27,
                0LL,
                1,
                v31);
        v16 = v25;
        if ( v25 < 0 )
        {
          if ( IsOOM(v25) && IsCompBuild() )
            NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB24u);
        }
      }
    }
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v16;
}
