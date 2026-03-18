/*
 * XREFs of ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVIRenderTargetBitmap@@@Z @ 0x1800542F0
 * Callers:
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180052C28 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Construct(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        const struct MilRectF *a2,
        struct CCachedVisualImage *a3,
        struct IRenderTargetBitmap *a4)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]

  v8 = 0LL;
  *(_QWORD *)this = a3;
  *((_QWORD *)this + 1) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 1))(
         *((_QWORD *)this + 1),
         &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
         &v8) < 0
    || (!*(_QWORD *)this ? (v6 = 0LL) : (v6 = *(_QWORD *)this + 56LL),
        (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v6) < 0) )
  {
    *((_QWORD *)this + 2) = 0LL;
    v7 = v8;
  }
  else
  {
    v7 = 0LL;
    *((_QWORD *)this + 2) = v8;
    v8 = 0LL;
  }
  *((_WORD *)this + 20) = 1;
  v9 = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = v9;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
