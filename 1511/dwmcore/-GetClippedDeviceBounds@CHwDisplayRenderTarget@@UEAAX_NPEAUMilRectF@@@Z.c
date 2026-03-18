/*
 * XREFs of ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAX_NPEAUMilRectF@@@Z @ 0x180081A90
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CHwDisplayRenderTarget::GetClippedDeviceBounds(
        CHwDisplayRenderTarget *this,
        char a2,
        struct MilRectF *a3)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 v5; // rcx
  signed __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( a2 )
    v4 = *(_OWORD *)(v3 + 104);
  else
    v4 = *(_OWORD *)(v3 + 88);
  v5 = 4LL;
  v6 = (char *)&v7 - (char *)a3;
  v7 = v4;
  do
  {
    *(float *)a3 = (float)*(int *)((char *)a3 + v6);
    a3 = (struct MilRectF *)((char *)a3 + 4);
    --v5;
  }
  while ( v5 );
}
