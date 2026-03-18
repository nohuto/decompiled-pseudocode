/*
 * XREFs of ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1800B1658
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180154110 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall ReleaseDecoderCopyBuffers(struct IUnknown *a1)
{
  struct IUnknownVtbl *lpVtbl; // rax
  bool v2; // si
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  lpVtbl = a1->lpVtbl;
  v2 = 0;
  v4 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a1,
    &IID_IWICDecoderBitmapSource,
    &v4);
  if ( v4 )
  {
    v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) == 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v2;
}
