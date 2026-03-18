/*
 * XREFs of ?Release@CSwRenderTargetGetBounds@@UEAAKXZ @ 0x18008FC60
 * Callers:
 *     ?Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ @ 0x1800C13F0 (-Release@CSwRenderTargetGetBounds@@WBA@EAAKXZ.c)
 *     ?Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ @ 0x1800C1400 (-Release@CSwRenderTargetGetBounds@@WBI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ @ 0x1800C1520 (-Release@CBitmapOfDeviceBitmaps@@WBAA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ @ 0x1800C1530 (-Release@CBitmapOfDeviceBitmaps@@WCA@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ @ 0x1800C1540 (-Release@CBitmapOfDeviceBitmaps@@WCI@EAAKXZ.c)
 *     ?Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ @ 0x1800C1550 (-Release@CBitmapOfDeviceBitmaps@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::Release(CSwRenderTargetGetBounds *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CSwRenderTargetGetBounds *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
