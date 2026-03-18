/*
 * XREFs of ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180178EF4
 * Callers:
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180178F30 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1801791E0 (-ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ.c)
 */

void __fastcall CD3DConstantBuffer::~CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  *(_QWORD *)this = &CD3DConstantBuffer::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  CD3DPixelShader::ReleaseD3DResources(this);
  CD3DResource::~CD3DResource(this);
}
