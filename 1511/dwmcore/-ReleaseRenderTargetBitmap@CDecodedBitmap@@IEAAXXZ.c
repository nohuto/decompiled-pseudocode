/*
 * XREFs of ?ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ @ 0x18015FE8C
 * Callers:
 *     ?InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z @ 0x18015FDD4 (-InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z @ 0x180160594 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDecodedBitmap::ReleaseRenderTargetBitmap(CDecodedBitmap *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = -1;
}
