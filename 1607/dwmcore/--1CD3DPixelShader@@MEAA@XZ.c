/*
 * XREFs of ??1CD3DPixelShader@@MEAA@XZ @ 0x18017A134
 * Callers:
 *     ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x18017A170 (--_ECD3DPixelShader@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1801791E0 (-ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ.c)
 */

void __fastcall CD3DPixelShader::~CD3DPixelShader(CD3DPixelShader *this)
{
  *(_QWORD *)this = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  CD3DPixelShader::ReleaseD3DResources(this);
  CD3DResource::~CD3DResource(this);
}
