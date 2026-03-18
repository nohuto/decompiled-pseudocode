/*
 * XREFs of ?AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z @ 0x180188EC0
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??$sprintf_s@$0BE@@@YAHAEAY0BE@DPEBDZZ @ 0x180188E3C (--$sprintf_s@$0BE@@@YAHAEAY0BE@DPEBDZZ.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180188E6C (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z @ 0x180189894 (-Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z.c)
 */

__int64 __fastcall D3DShaderLinker::AppendLights(D3DShaderLinker *this, const struct CLightsMask *a2)
{
  __int64 *v2; // r12
  unsigned int v3; // esi
  __int64 v4; // rbx
  _QWORD *v7; // r15
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64, __int64, __int64, __int64, int); // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v33; // [rsp+30h] [rbp-40h] BYREF
  __int64 v34; // [rsp+38h] [rbp-38h] BYREF
  struct D3DCompilerHelper *v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  char v37[24]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (__int64 *)((char *)this + 48);
  v3 = 0;
  v4 = *((_QWORD *)this + 6);
  v36 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v7 = (_QWORD *)((char *)this + 16);
  v34 = 0LL;
  v33 = 0LL;
  if ( *((_QWORD *)this + 2) )
    goto LABEL_10;
  v35 = 0LL;
  v8 = D3DCompilerHelper::Get(&v35);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA8u);
    goto LABEL_47;
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 2);
  v10 = (*((__int64 (__fastcall **)(void *, __int64, char *))v35 + 5))(&unk_1801C84D0, 21714LL, (char *)this + 16);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xADu);
    goto LABEL_47;
  }
  v11 = *v7;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 3);
  v12 = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v11 + 24LL))(
          v11,
          &unk_1801B8EE5,
          (char *)this + 24);
  v3 = 0;
  v9 = v12;
  if ( v12 >= 0 )
  {
LABEL_10:
    v13 = *((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v33);
    v14 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, const char *, __int64 *))(*(_QWORD *)v13 + 48LL))(
            v13,
            &unk_1801B8EE5,
            *v7,
            "PreLightingLib",
            &v33);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB7u);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD))(**((_QWORD **)this + 4) + 56LL))(
              *((_QWORD *)this + 4),
              v4,
              0xFFFFFFFFLL,
              v33,
              0);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xBCu);
      }
      else
      {
        Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v2, &v33);
        Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v34, v2);
        do
        {
          v16 = (*(_DWORD *)a2 >> (4 * v3)) & 0xF;
          if ( v16 != 15 )
          {
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                if ( v17 == 1 )
                  sprintf_s<20>(v37, "PointLightingLib%d", v3);
                else
                  sprintf_s<20>(v37, "SpotLightingLib%d", v3);
              }
              else
              {
                sprintf_s<20>(v37, "DistantLightingLib%d", v3);
              }
            }
            else
            {
              sprintf_s<20>(v37, "AmbientLightingLib0");
            }
            v18 = *((_QWORD *)this + 4);
            Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v33);
            v19 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, char *, __int64 *))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    &unk_1801B8EE5,
                    *v7,
                    v37,
                    &v33);
            v9 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xE0u);
              goto LABEL_47;
            }
            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _DWORD))(**((_QWORD **)this + 4) + 56LL))(
                    *((_QWORD *)this + 4),
                    *((_QWORD *)this + 5),
                    4LL,
                    v33,
                    0);
            v9 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xE5u);
              goto LABEL_47;
            }
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**((_QWORD **)this + 4) + 56LL))(
                    *((_QWORD *)this + 4),
                    *((_QWORD *)this + 5),
                    5LL,
                    v33,
                    1);
            v9 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xEAu);
              goto LABEL_47;
            }
            v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int))(**((_QWORD **)this + 4) + 56LL))(
                    *((_QWORD *)this + 4),
                    v34,
                    1LL,
                    v33,
                    2);
            v9 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xEFu);
              goto LABEL_47;
            }
            v23 = *((_QWORD *)this + 4);
            v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)v23 + 56LL);
            if ( v3 )
            {
              v26 = v24(v23, *v2, 3LL, v33, 3);
              v9 = v26;
              if ( v26 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xFEu);
                goto LABEL_47;
              }
            }
            else
            {
              v25 = v24(v23, v34, 2LL, v33, 3);
              v9 = v25;
              if ( v25 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xF6u);
                goto LABEL_47;
              }
            }
            Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v2, &v33);
          }
          ++v3;
        }
        while ( v3 < 3 );
        v27 = *((_QWORD *)this + 4);
        Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v33);
        v28 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, const char *, __int64 *))(*(_QWORD *)v27 + 48LL))(
                v27,
                &unk_1801B8EE5,
                *v7,
                "PostLightingLib",
                &v33);
        v9 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x109u);
        }
        else
        {
          v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD))(**((_QWORD **)this + 4) + 56LL))(
                  *((_QWORD *)this + 4),
                  *v2,
                  3LL,
                  v33,
                  0);
          v9 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x10Eu);
          }
          else
          {
            v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int))(**((_QWORD **)this + 4) + 56LL))(
                    *((_QWORD *)this + 4),
                    v4,
                    0xFFFFFFFFLL,
                    v33,
                    1);
            v9 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x113u);
            }
            else
            {
              Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v2, &v33);
              v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
                      *((_QWORD *)this + 3),
                      1LL,
                      1LL,
                      0LL);
              v9 = v31;
              if ( v31 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x117u);
            }
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xAFu);
  }
LABEL_47:
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v36);
  return v9;
}
