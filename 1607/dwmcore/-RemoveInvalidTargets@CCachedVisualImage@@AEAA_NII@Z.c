/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18003366C
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18003322C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x180032130 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180034114 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180034248 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1801326CC (-GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILS.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, int a2, int a3)
{
  __int64 v3; // rbx
  char v4; // si
  __int64 *v7; // rbp
  CCachedVisualImage::RenderTargetBitmapInfo *v8; // rdi
  _DWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v3) = *((_DWORD *)this + 64);
  v4 = 0;
  if ( (int)v3 > 0 )
  {
    v7 = (__int64 *)((char *)this + 232);
    do
    {
      v3 = (unsigned int)(v3 - 1);
      v8 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v7 + 48 * v3);
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v8) )
      {
        CRenderTargetBitmap::GetRenderBounds(*((_QWORD *)v8 + 1), v10);
        if ( v10[2] - v10[0] == a2 && v10[3] - v10[1] == a3 )
          continue;
      }
      CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v8);
      DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v7, v3);
      v4 = 1;
    }
    while ( (int)v3 > 0 );
  }
  return v4;
}
