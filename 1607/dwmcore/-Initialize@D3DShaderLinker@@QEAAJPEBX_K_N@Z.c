/*
 * XREFs of ?Initialize@D3DShaderLinker@@QEAAJPEBX_K_N@Z @ 0x1801893B4
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z @ 0x180189894 (-Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z.c)
 */

__int64 __fastcall D3DShaderLinker::Initialize(D3DShaderLinker *this, const void *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct D3DCompilerHelper *v8; // rbp
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  struct D3DCompilerHelper *v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v6 = D3DCompilerHelper::Get(&v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x38u);
  }
  else
  {
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this);
    v8 = v16;
    v9 = (*((__int64 (__fastcall **)(const void *, __int64, D3DShaderLinker *))v16 + 5))(a2, a3, this);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3Du);
    }
    else
    {
      v10 = *(_QWORD *)this;
      Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 1);
      v11 = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v10 + 24LL))(
              v10,
              &unk_1801B8EE5,
              (char *)this + 8);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3Fu);
      }
      else
      {
        Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 4);
        v12 = (*((__int64 (__fastcall **)(_QWORD, char *))v8 + 3))(0LL, (char *)this + 32);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x41u);
        }
        else
        {
          v13 = *((_QWORD *)this + 4);
          Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 5);
          v14 = (*(__int64 (__fastcall **)(__int64, char **, __int64, char *))(*(_QWORD *)v13 + 32LL))(
                  v13,
                  off_1801A95D0,
                  6LL,
                  (char *)this + 40);
          v7 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Bu);
        }
      }
    }
  }
  return v7;
}
