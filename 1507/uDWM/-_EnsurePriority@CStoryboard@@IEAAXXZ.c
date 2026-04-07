/*
 * XREFs of ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000F1D4
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18000FB00 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FEE0 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FF80 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CStoryboard::_EnsurePriority(CStoryboard *this)
{
  __int64 v1; // rdi
  _DWORD *i; // rsi
  const struct StoryboardInfo *(__fastcall *v4)(CSlideInCharm *__hidden); // rbp
  const struct StoryboardInfo *StoryboardInfo; // rax

  v1 = 0LL;
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800A3F30; ; i += 2 )
    {
      v4 = *(const struct StoryboardInfo *(__fastcall **)(CSlideInCharm *__hidden))(*(_QWORD *)this + 16LL);
      if ( v4 == CSlideOutCharm::GetStoryboardInfo )
        StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(this);
      else
        StoryboardInfo = v4 == CSlideInCharm::GetStoryboardInfo ? CSlideInCharm::GetStoryboardInfo(this) : v4(this);
      if ( *i == *(_DWORD *)StoryboardInfo )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= 0x22 )
        return;
    }
    *((_DWORD *)this + 16) = dword_1800A3F30[2 * v1 + 1];
  }
}
