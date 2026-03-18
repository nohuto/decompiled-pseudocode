/*
 * XREFs of ?Link@D3DShaderLinker@@QEAAJPEAPEAUID3D10Blob@@@Z @ 0x1801895F4
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z @ 0x180189894 (-Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z.c)
 */

__int64 __fastcall D3DShaderLinker::Link(D3DShaderLinker *this, struct ID3D10Blob **a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  struct ID3D10Blob *v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  struct D3DCompilerHelper *v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF
  struct ID3D10Blob *v22; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+98h] [rbp+38h] BYREF

  v2 = *((_QWORD *)this + 4);
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v18);
  v5 = (*(__int64 (__fastcall **)(__int64, char **, __int64, __int64 *))(*(_QWORD *)v2 + 40LL))(
         v2,
         off_1801A9590,
         1LL,
         &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x13Du);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD))(**((_QWORD **)this + 4) + 56LL))(
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 6),
           0xFFFFFFFFLL,
           v18,
           0);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x140u);
    }
    else
    {
      v8 = *((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v23);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, &v23, 0LL);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x142u);
      }
      else
      {
        v10 = D3DCompilerHelper::Get(&v20);
        v6 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x145u);
        }
        else
        {
          Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v21);
          v11 = (*((__int64 (__fastcall **)(__int64 *))v20 + 4))(&v21);
          v6 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x146u);
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 32LL))(v21, *((_QWORD *)this + 1));
            v6 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x148u);
            }
            else if ( *((_QWORD *)this + 3)
                   && (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 32LL))(v21), v6 = v13, v13 < 0) )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x14Cu);
            }
            else
            {
              v14 = v21;
              Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v19);
              Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v22);
              v15 = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *))(*(_QWORD *)v14 + 24LL))(
                      v14,
                      v23,
                      "main",
                      "ps_4_0_level_9_3",
                      0,
                      &v22,
                      &v19);
              v6 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x155u);
              }
              else
              {
                v16 = v22;
                if ( v22 )
                {
                  ((void (__fastcall *)(struct ID3D10Blob *))v22->lpVtbl->AddRef)(v22);
                  v16 = v22;
                }
                *a2 = v16;
                v6 = 0;
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v19);
  return v6;
}
