/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x18015D0F0
 * Callers:
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18015CB00 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x18015CD50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180032D90 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(CDxHandleStereoBitmapRealization *this)
{
  __int64 v2; // rsi
  __int64 v3; // rax

  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 59));
    v3 = *((_QWORD *)this + 62);
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(char *, _QWORD))(v3 + 24))((char *)this + 496, 0LL);
  }
}
