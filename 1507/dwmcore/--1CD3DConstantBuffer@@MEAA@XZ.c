/*
 * XREFs of ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180138AD8
 * Callers:
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180138B10 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x180138F90 (-ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ.c)
 */

void __fastcall CD3DConstantBuffer::~CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  *(_QWORD *)this = &CD3DPixelShader::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  CD3DPixelShader::ReleaseD3DResources(this);
  CD3DResource::~CD3DResource(this);
}
