/*
 * XREFs of ?AppendMinBlend@D3DShaderLinker@@QEAAJXZ @ 0x180189364
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z @ 0x1801894FC (-InsertFragment@D3DShaderLinker@@QEAAJPEBDPEBW4LinkingArgument@@I@Z.c)
 */

__int64 __fastcall D3DShaderLinker::AppendMinBlend(D3DShaderLinker *this)
{
  int inserted; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = -1;
  inserted = D3DShaderLinker::InsertFragment(this, "MinBlend", (const enum LinkingArgument *)&v4, 1u);
  v2 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x126u);
  return v2;
}
