/*
 * XREFs of ?CreateVideoProcessor@CD3DDeviceLevel1@@QEAAJIIIIPEAPEAUID3D11VideoProcessorEnumerator@@PEAPEAUID3D11VideoProcessor@@@Z @ 0x1801455B8
 * Callers:
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z @ 0x180160594 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateVideoProcessor(
        CD3DDeviceLevel1 *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        struct ID3D11VideoProcessorEnumerator **a6,
        struct ID3D11VideoProcessor **a7)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  struct ID3D11VideoProcessorEnumerator *v15; // rax
  struct ID3D11VideoProcessor *v16; // rax
  struct ID3D11VideoProcessorEnumerator *v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  struct ID3D11VideoProcessor *v20; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v21[10]; // [rsp+48h] [rbp-39h] BYREF

  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 69);
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v11 = (**v7)(v7, &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333, &v19);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v21[0] = 0;
    v21[9] = 0;
    v21[1] = 1;
    v21[2] = 1;
    v21[5] = 1;
    v21[6] = 1;
    v21[8] = a5;
    v21[3] = a2;
    v21[4] = a3;
    v21[7] = a4;
    v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct ID3D11VideoProcessorEnumerator **))(*(_QWORD *)v19 + 80LL))(
            v19,
            v21,
            &v18);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, struct ID3D11VideoProcessorEnumerator *, _QWORD, struct ID3D11VideoProcessor **))(*(_QWORD *)v19 + 32LL))(
              v19,
              v18,
              0LL,
              &v20);
      v12 = v14;
      if ( v14 >= 0 )
      {
        v15 = v18;
        v18 = 0LL;
        *a6 = v15;
        v16 = v20;
        v20 = 0LL;
        *a7 = v16;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA3Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA38u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA2Au);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    ((void (__fastcall *)(struct ID3D11VideoProcessorEnumerator *))v18->lpVtbl->Release)(v18);
  if ( v20 )
    ((void (__fastcall *)(struct ID3D11VideoProcessor *))v20->lpVtbl->Release)(v20);
  return v12;
}
