/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     UnredirectDCEs @ 0x14012E3C8 (UnredirectDCEs.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rbp
  struct tagWND *v5; // rbx
  __int64 StyleWindow; // rax
  BOOL v7; // esi
  struct tagQ **v8; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = PtiCurrent((__int64)a1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = v2;
  if ( (*(_DWORD *)(v3 + 1360) & 0x40000) != 0 && *(struct tagWND **)(v3 + 1584) == a1 && *(_QWORD *)(v3 + 1592) )
    xxxSetModernAppWindow(a1);
  while ( 1 )
  {
    v5 = (struct tagWND *)*((_QWORD *)a1 + 14);
    if ( !v5 )
      break;
    Win32HM_LockIntoThread<0>((__int64)v4, *((_QWORD *)a1 + 14), BugCheckParameter3);
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
      SetVisible((__int64)v5, 0);
    StyleWindow = GetStyleWindow(v5, 2848LL);
    v7 = StyleWindow && (struct tagWND *)StyleWindow != v5;
    UnlinkWindow(v5);
    if ( v7 )
      UnredirectDCEs(v5);
    SetOrClrWF(1LL, v5, 1152LL, 1LL);
    SetOrClrWF(1LL, v5, 896LL, 1LL);
    v8 = (struct tagQ **)*((_QWORD *)v5 + 2);
    if ( v8 == (struct tagQ **)v4 )
      xxxFreeWindow(v4, v5);
    else
      PostEventMessageEx((struct tagTHREADINFO *)v8, v8[58], 8u, 0LL, 0, *(_QWORD *)v5, 0LL, 0LL);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  }
}
