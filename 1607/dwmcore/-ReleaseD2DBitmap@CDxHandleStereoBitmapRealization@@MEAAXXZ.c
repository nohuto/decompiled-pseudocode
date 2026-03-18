/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180190500
 * Callers:
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18018FFD8 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801901E0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180054FD0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(CDxHandleStereoBitmapRealization *this)
{
  __int64 v2; // rcx

  CDxHandleBitmapRealization::ReleaseD2DBitmap(this);
  v2 = *((_QWORD *)this + 54);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 57) + 24LL))((char *)this + 456, 0LL);
  }
}
