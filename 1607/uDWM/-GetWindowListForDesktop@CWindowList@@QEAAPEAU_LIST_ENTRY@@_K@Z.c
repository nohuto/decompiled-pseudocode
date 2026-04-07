/*
 * XREFs of ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360
 * Callers:
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x180003834 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180007700 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18000B6F0 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000CC30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000F0E0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800304F8 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x180030C94 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800376B8 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004767C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E8FC (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800739D8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180073B90 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180092938 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x180093080 (-ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18009805C (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CWindowList::GetWindowListForDesktop(CWindowList *this, __int64 a2)
{
  char *v2; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v5; // [rsp+30h] [rbp-48h]
  __int128 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  char v8; // [rsp+58h] [rbp-20h]

  v4[1] = 0LL;
  v7 = -1LL;
  v4[0] = a2;
  v5 = 0LL;
  v6 = 0LL;
  v8 = 0;
  v2 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v4);
  if ( v2 )
    return (struct _LIST_ENTRY *)(v2 + 64);
  else
    return (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
}
