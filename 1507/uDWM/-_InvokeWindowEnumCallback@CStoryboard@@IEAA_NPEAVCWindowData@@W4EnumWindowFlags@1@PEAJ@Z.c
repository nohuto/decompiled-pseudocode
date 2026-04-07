/*
 * XREFs of ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F7BC
 * Callers:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F670 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 * Callees:
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x180010180 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180093538 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CStoryboard::_InvokeWindowEnumCallback(CLauncherDismiss *a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // r15d
  char v9; // di
  __int64 i; // rbp
  const struct StoryboardInfo *(__fastcall *v12)(CLauncherDismiss *__hidden); // rbx
  const struct StoryboardInfo *v13; // rax
  const struct StoryboardInfo *(__fastcall *v14)(CLauncherDismiss *__hidden); // rbx
  const struct StoryboardInfo *StoryboardInfo; // rax

  *a4 = 0;
  v5 = *(_DWORD *)(a2 + 568) & 0xFFF;
  v9 = 1;
  if ( v5 != 4095 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v12 = *(const struct StoryboardInfo *(__fastcall **)(CLauncherDismiss *__hidden))(*(_QWORD *)a1 + 16LL);
      v13 = v12 == CLauncherDismiss::GetStoryboardInfo ? CLauncherDismiss::GetStoryboardInfo(a1) : v12(a1);
      if ( (unsigned int)i >= *((_DWORD *)v13 + 1) )
        break;
      v14 = *(const struct StoryboardInfo *(__fastcall **)(CLauncherDismiss *__hidden))(*(_QWORD *)a1 + 16LL);
      if ( v14 == CLauncherDismiss::GetStoryboardInfo )
        StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a1);
      else
        StoryboardInfo = v14(a1);
      if ( v5 == *(_DWORD *)(*((_QWORD *)StoryboardInfo + 1) + 4 * i)
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
