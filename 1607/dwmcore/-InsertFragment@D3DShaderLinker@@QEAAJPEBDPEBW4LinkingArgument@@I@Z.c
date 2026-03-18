/*
 * XREFs of ?InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z @ 0x1801894FC
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 *     ?AppendMinBlend@D3DShaderLinker@@QEAAJXZ @ 0x180189364 (-AppendMinBlend@D3DShaderLinker@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180188E6C (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall D3DShaderLinker::InsertFragment(
        D3DShaderLinker *this,
        const char *a2,
        const enum LinkingArgument *a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v15);
  v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, const char *, __int64 *))(*(_QWORD *)v4 + 48LL))(
         v4,
         &unk_1801B8EE5,
         *(_QWORD *)this,
         a2,
         &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x73u);
  }
  else
  {
    v11 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)a3 == -1 ? *((_QWORD *)this + 6) : *((_QWORD *)this + 5);
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, unsigned int))(**((_QWORD **)this + 4) + 56LL))(
                *((_QWORD *)this + 4),
                v12,
                *(unsigned int *)a3,
                v15,
                v11);
        v10 = v13;
        if ( v13 < 0 )
          break;
        ++v11;
        a3 = (const enum LinkingArgument *)((char *)a3 + 4);
        if ( v11 >= a4 )
          goto LABEL_8;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7Fu);
    }
    else
    {
LABEL_8:
      Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=((__int64 *)this + 6, &v15);
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v15);
  return v10;
}
