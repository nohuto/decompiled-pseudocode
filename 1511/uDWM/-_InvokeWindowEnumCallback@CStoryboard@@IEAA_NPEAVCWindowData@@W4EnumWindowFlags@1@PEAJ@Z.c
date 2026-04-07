/*
 * XREFs of ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x1800071AC
 * Callers:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180007050 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 * Callees:
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180006BC0 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9A0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003F9B0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ @ 0x18003FCF0 (-GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CStoryboard::_InvokeWindowEnumCallback(CLauncherDismiss *a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // r15d
  char v9; // si
  __int64 i; // rbp
  const struct StoryboardInfo *(__fastcall *v12)(CAppArrangementDelayed *__hidden); // rbx
  const struct StoryboardInfo *StoryboardInfo; // rax
  const struct StoryboardInfo *(__fastcall *v14)(CAppArrangementDelayed *__hidden); // rbx
  const struct StoryboardInfo *v15; // rax

  *a4 = 0;
  v5 = *(_DWORD *)(a2 + 576) & 0xFFF;
  v9 = 1;
  if ( v5 != 4095 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v12 = *(const struct StoryboardInfo *(__fastcall **)(CAppArrangementDelayed *__hidden))(*(_QWORD *)a1 + 16LL);
      if ( v12 == CLauncherDismiss::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a1);
      }
      else if ( v12 == CLauncherLaunch::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a1);
      }
      else
      {
        StoryboardInfo = v12 == CAppArrangementDelayed::GetStoryboardInfo
                       ? CAppArrangementDelayed::GetStoryboardInfo(a1)
                       : (const struct StoryboardInfo *)((__int64 (__fastcall *)(CLauncherDismiss *, const struct StoryboardInfo *(__fastcall *)(CAppArrangementDelayed *__hidden)))v12)(
                                                          a1,
                                                          CAppArrangementDelayed::GetStoryboardInfo);
      }
      if ( (unsigned int)i >= *((_DWORD *)StoryboardInfo + 1) )
        break;
      v14 = *(const struct StoryboardInfo *(__fastcall **)(CAppArrangementDelayed *__hidden))(*(_QWORD *)a1 + 16LL);
      if ( v14 == CLauncherDismiss::GetStoryboardInfo )
      {
        v15 = CLauncherDismiss::GetStoryboardInfo(a1);
      }
      else if ( v14 == CLauncherLaunch::GetStoryboardInfo )
      {
        v15 = CLauncherLaunch::GetStoryboardInfo(a1);
      }
      else if ( v14 == CAppArrangementDelayed::GetStoryboardInfo )
      {
        v15 = CAppArrangementDelayed::GetStoryboardInfo(a1);
      }
      else
      {
        v15 = v14(a1);
      }
      if ( v5 == *(_DWORD *)(*((_QWORD *)v15 + 1) + 4 * i)
        || (*(unsigned __int8 (__fastcall **)(CLauncherDismiss *))(*(_QWORD *)a1 + 48LL))(a1)
        && CStoryboard::_HasUsableBitmapResource(a1, *(HWND *)(a2 + 40)) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CLauncherDismiss *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 112LL))(
                a1,
                a2,
                a3,
                a4)
          || *a4 < 0 )
        {
          return 0;
        }
        return v9;
      }
    }
  }
  return v9;
}
