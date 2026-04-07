/*
 * XREFs of ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F234
 * Callers:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F0E0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 * Callees:
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x1800041B0 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     ?GetStoryboardInfo@CAppArrangementImmediate@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000BDE0 (-GetStoryboardInfo@CAppArrangementImmediate@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000BE00 (-GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000EBF0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x18000F9D0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CStoryboard::_InvokeWindowEnumCallback(CLauncherDismiss *a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // ebp
  char v9; // di
  __int64 i; // rsi
  const struct StoryboardInfo *(__fastcall *v12)(CAppArrangementDelayed *); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax
  const struct StoryboardInfo *(__fastcall *v14)(CAppArrangementImmediate *); // rax
  const struct StoryboardInfo *v15; // rax

  *a4 = 0;
  v5 = *(_DWORD *)(a2 + 584) & 0xFFF;
  v9 = 1;
  if ( v5 != 4095 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v12 = *(const struct StoryboardInfo *(__fastcall **)(CAppArrangementDelayed *))(*(_QWORD *)a1 + 16LL);
      if ( v12 == CLauncherDismiss::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a1);
      }
      else if ( v12 == CLauncherLaunch::GetStoryboardInfo )
      {
        StoryboardInfo = CLauncherLaunch::GetStoryboardInfo(a1);
      }
      else if ( v12 == CAppArrangementImmediate::GetStoryboardInfo )
      {
        StoryboardInfo = CAppArrangementImmediate::GetStoryboardInfo(a1);
      }
      else
      {
        StoryboardInfo = v12 == CAppArrangementDelayed::GetStoryboardInfo
                       ? CAppArrangementDelayed::GetStoryboardInfo(a1)
                       : (const struct StoryboardInfo *)((__int64 (__fastcall *)(CLauncherDismiss *, const struct StoryboardInfo *(__fastcall *)(CAppArrangementDelayed *)))v12)(
                                                          a1,
                                                          CAppArrangementDelayed::GetStoryboardInfo);
      }
      if ( (unsigned int)i >= *((_DWORD *)StoryboardInfo + 1) )
        break;
      v14 = *(const struct StoryboardInfo *(__fastcall **)(CAppArrangementImmediate *))(*(_QWORD *)a1 + 16LL);
      if ( v14 == CLauncherDismiss::GetStoryboardInfo )
      {
        v15 = CLauncherDismiss::GetStoryboardInfo(a1);
      }
      else if ( v14 == CLauncherLaunch::GetStoryboardInfo )
      {
        v15 = CLauncherLaunch::GetStoryboardInfo(a1);
      }
      else if ( v14 == CAppArrangementImmediate::GetStoryboardInfo )
      {
        v15 = CAppArrangementImmediate::GetStoryboardInfo(a1);
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
