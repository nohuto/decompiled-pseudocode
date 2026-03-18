/*
 * XREFs of ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x18005F0E8
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180145F30 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
