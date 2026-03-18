/*
 * XREFs of ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x14019CCF0 (-xxxGetArrangeRectFromHitTarget@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindow.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x14019D930 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 *     ?SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ @ 0x14019DA2C (-SHData_ResetRuntimeState@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x14019DB1C (-ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14019DC18 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1401A0704 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1401A07E8 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z @ 0x1401D6724 (-ResetArrangement@NotifyShell@@YAXPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x14028D610 (-SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateArrangeDataForMove(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // rax
  char ArrangeRectFromHitTarget; // bl
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+40h] [rbp-28h] BYREF

  if ( (a3 != 4) != (a4 != 4) && *(_BYTE *)(a1 + 392) )
    NotifyShell::ResetArrangement(a1, a3 != 4);
  MOVESIZEDATA::SHData_ResetRuntimeState((MOVESIZEDATA *)a1, a2);
  *(_DWORD *)(a1 + 200) &= ~0x10000000u;
  v12 = 0LL;
  if ( a3 == 4 && !MOVESIZEDATA::SHData_GetCustomDockTargetWindow((MOVESIZEDATA *)a1) )
  {
    DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(a1 + 400), 0, (const struct MOVESIZEDATA *)a1);
    DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((DWM_ARRANGEMENT_DATA *)(a1 + 400), (const struct MOVESIZEDATA *)a1);
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(
      (DWM_ARRANGEMENT_DATA *)(a1 + 400),
      0LL,
      (const struct MOVESIZEDATA *)a1);
LABEL_5:
    MOVESIZEDATA::ClearPreviewRect((MOVESIZEDATA *)a1, v8);
    goto LABEL_6;
  }
  v9 = PtiCurrent(v7);
  Win32HM_LockIntoThread<1>((__int64)v9, a2, (__int64 *)BugCheckParameter3);
  ArrangeRectFromHitTarget = xxxGetArrangeRectFromHitTarget(a1, a2, a3 == 4, a3, &v12.left);
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3);
  if ( !ArrangeRectFromHitTarget )
    goto LABEL_5;
  MOVESIZEDATA::SetPreviewRect((MOVESIZEDATA *)a1, &v12);
LABEL_6:
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
}
