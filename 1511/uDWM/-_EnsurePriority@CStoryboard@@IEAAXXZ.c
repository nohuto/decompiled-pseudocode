/*
 * XREFs of ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x180006A44
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x180007540 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9A0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9B0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FA00 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FA10 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CStoryboard::_EnsurePriority(CStoryboard *this)
{
  __int64 v1; // rdi
  _DWORD *i; // rbp
  const struct StoryboardInfo *(__fastcall *v4)(CLauncherDismiss *__hidden); // rsi
  const struct StoryboardInfo *StoryboardInfo; // rax

  v1 = 0LL;
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800A5FD0; ; i += 2 )
    {
      v4 = *(const struct StoryboardInfo *(__fastcall **)(CLauncherDismiss *__hidden))(*(_QWORD *)this + 16LL);
      if ( v4 == CSlideOutCharm::GetStoryboardInfo )
      {
        StoryboardInfo = CSlideOutCharm::GetStoryboardInfo(this);
      }
      else if ( v4 == CSlideInCharm::GetStoryboardInfo )
      {
        StoryboardInfo = CSlideInCharm::GetStoryboardInfo(this);
      }
      else if ( v4 == CLauncherLaunch::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(this);
      }
      else
      {
        StoryboardInfo = v4 == CLauncherDismiss::GetStoryboardInfo
                       ? CLauncherDismiss::GetStoryboardInfo(this)
                       : v4(this);
      }
      if ( *i == *(_DWORD *)StoryboardInfo )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= 0x25 )
        return;
    }
    *((_DWORD *)this + 16) = dword_1800A5FD0[2 * v1 + 1];
  }
}
