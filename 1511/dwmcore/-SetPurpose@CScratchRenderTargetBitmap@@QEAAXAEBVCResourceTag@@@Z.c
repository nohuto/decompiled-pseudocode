/*
 * XREFs of ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@@Z @ 0x1800115F0
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CScratchRenderTargetBitmap::SetPurpose(CScratchRenderTargetBitmap *this, const struct CResourceTag *a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, const GUID *, _QWORD, _QWORD))(**(_QWORD **)(v2 + 128) + 40LL))(
      *(_QWORD *)(v2 + 128),
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 2),
      *(_QWORD *)a2);
}
