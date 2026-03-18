/*
 * XREFs of ?InternalAddRef@?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180132B34
 * Callers:
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18013289C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180132A1C (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ??4?$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148B24 (--4-$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpression@@@Z @ 0x180148B74 (--4-$ComPtr@VCExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpression@@@Z.c)
 *     ??$?4VCScrollPositionAnimation@@@?$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScrollPositionAnimation@@@12@@Z @ 0x1801495F0 (--$-4VCScrollPositionAnimation@@@-$ComPtr@VCScrollAnimation@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$C.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18014AC9C (-HasImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x180173394 (-Add@-$CMap@IV-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@UID3D11.c)
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
