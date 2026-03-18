/*
 * XREFs of ?ReleaseRenderTargetBitmap@CDecodedBitmap@@IEAAXXZ @ 0x18015295C
 * Callers:
 *     ?InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z @ 0x1801528A4 (-InvalidateDecodeBitmap@CDxHandleDecodeBitmapRealization@@IEAAX_N@Z.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z @ 0x1801536C8 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
