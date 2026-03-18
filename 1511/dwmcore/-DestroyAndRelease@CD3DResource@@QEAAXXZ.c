/*
 * XREFs of ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180027C58
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002A398 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180027B5C (-Invalidate@CD3DResource@@IEAAXXZ.c)
 */

void __fastcall CD3DResource::DestroyAndRelease(CD3DResource *this)
{
  CD3DResource::Invalidate(this);
  (*(void (__fastcall **)(_QWORD, CD3DResource *))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2), this);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(CD3DResource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
}
