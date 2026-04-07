/*
 * XREFs of ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18000EC00
 * Callers:
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18000F5E0 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     ?GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000BA30 (-GetStoryboardInfo@CFadeIn@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000EBF0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000F9D0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000F9E0 (-GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000FB60 (-GetStoryboardInfo@CSlideInCharm@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStoryboard::_EnsurePriority(CStoryboard *this)
{
  __int64 v1; // rdi
  _DWORD *i; // rsi
  const struct StoryboardInfo *(__fastcall *v4)(CFadeIn *); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax

  v1 = 0LL;
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800A46C0; ; i += 2 )
    {
      v4 = *(const struct StoryboardInfo *(__fastcall **)(CFadeIn *))(*(_QWORD *)this + 16LL);
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
      else if ( v4 == CLauncherDismiss::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(this);
      }
      else
      {
        StoryboardInfo = v4 == CFadeIn::GetStoryboardInfo ? CFadeIn::GetStoryboardInfo(this) : v4(this);
      }
      if ( *i == *(_DWORD *)StoryboardInfo )
        break;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= 0x22 )
        return;
    }
    *((_DWORD *)this + 16) = dword_1800A46C0[2 * v1 + 1];
  }
}
