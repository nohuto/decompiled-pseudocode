/*
 * XREFs of ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z @ 0x1801740E4
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetEmptyLightConstantBufferNoRef(
        CD3DDeviceLevel1 *this,
        struct ID3D11Buffer **a2,
        enum D3D11_USAGE a3)
{
  unsigned int v3; // edi
  CMILPoolResource *v4; // rbx
  int v7; // eax
  __int64 v8; // rcx
  struct CD3DConstantBuffer *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  *a2 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 241) )
    goto LABEL_4;
  v7 = CD3DConstantBuffer::Create(this, 0xC0u, a3, &unk_1801B9C90, &v10);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v4 = v10;
    v8 = *((_QWORD *)v10 + 16);
    *((_QWORD *)this + 241) = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
LABEL_4:
    *a2 = (struct ID3D11Buffer *)*((_QWORD *)this + 241);
    goto LABEL_5;
  }
  if ( IsOOM(v7) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x63Au);
  v4 = v10;
LABEL_5:
  if ( v4 )
    CMILPoolResource::Release(v4);
  return v3;
}
