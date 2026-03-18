/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C001E940
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01491D0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0149510 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0149900 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(COREOVERLAYACCESS *this)
{
  COREACCESS::AcquireShared((COREOVERLAYACCESS *)((char *)this + 8));
  if ( *(_DWORD *)(*((_QWORD *)this + 4) + 28LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREOVERLAYACCESS *)((char *)this + 8));
  return 3221226166LL;
}
