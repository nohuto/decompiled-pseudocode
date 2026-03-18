/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D70
 * Callers:
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A9CA0 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AA860 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02AAB60 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02AB110 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB850 (NtGdiEngEraseSurface.c)
 *     NtGdiEngLineTo @ 0x1C02ABEF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02AC1B0 (NtGdiEngPaint.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AD820 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0019BF0 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // rdx
  int v7; // eax
  int v8; // eax
  HDEV hdev; // [rsp+20h] [rbp-20h] BYREF
  __int128 v11; // [rsp+28h] [rbp-18h] BYREF

  v5 = 1;
  if ( a1 )
  {
    if ( a3 && a3->iDComplexity )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v5 = 0;
      v11 = (__int128)*p_rclBounds;
      if ( *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0 )
      {
        hdev = a1->hdev;
        if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)&hdev) && (v6[14] & 0x20000) != 0 )
        {
          v7 = v6[652];
          p_rclBounds = (struct _RECTL *)&v11;
          LODWORD(v11) = v11 - v7;
          DWORD2(v11) -= v7;
          v8 = v6[653];
          DWORD1(v11) -= v8;
          HIDWORD(v11) -= v8;
        }
      }
      if ( v5
        && (p_rclBounds->right > a1->sizlBitmap.cx
         || p_rclBounds->left < 0
         || p_rclBounds->bottom > a1->sizlBitmap.cy
         || p_rclBounds->top < 0) )
      {
        return 0;
      }
    }
  }
  return v5;
}
