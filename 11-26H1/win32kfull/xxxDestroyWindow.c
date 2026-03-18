/*
 * XREFs of xxxDestroyWindow @ 0x140084380
 * Callers:
 *     xxxDW_DestroyOwnedWindows @ 0x140011E90 (xxxDW_DestroyOwnedWindows.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     xxxRemoveShadow @ 0x140084278 (xxxRemoveShadow.c)
 *     NtUserDestroyWindow @ 0x140084320 (NtUserDestroyWindow.c)
 *     NtUserDisableThreadIme @ 0x140086250 (NtUserDisableThreadIme.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140179A14 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14017AF60 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x14023AA84 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxDestroyThreadDDEObject @ 0x140253250 (xxxDestroyThreadDDEObject.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14025CD50 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     xxxDW_DestroyOwnedWindows @ 0x140011E90 (xxxDW_DestroyOwnedWindows.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14012D750 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ??_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z @ 0x1401E18E4 (--_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z.c)
 *     ??S@YA?AW4_TIFLAGS@@W40@@Z @ 0x14023E788 (--S@YA-AW4_TIFLAGS@@W40@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14027BDC8 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 */

__int64 __fastcall xxxDestroyWindow(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // rsi
  unsigned int v5; // eax
  unsigned int v7; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-10h] BYREF
  bool v9; // [rsp+58h] [rbp+28h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF

  v2 = PtiCurrent((__int64)a1);
  v3 = 0;
  v10 = 0;
  v9 = 0;
  v4 = v2;
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v2, a1);
  if ( (unsigned int)xxxDestroyWindow_Prologue(a1, v4, &v10, &v9) )
  {
    xxxDestroyWindow_Phase1(a1, v4, v10);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
      xxxDW_DestroyOwnedWindows((__int64)a1);
    xxxDestroyWindow_Phase2(a1, v4, v10);
    xxxDestroyWindow_Phase3(a1, v4, v10);
    xxxFreeWindow(v4, a1);
    if ( v10 && v9 )
    {
      v7 = operator~(0x10000000LL);
      INTERLOCKEDTIFLAGS::operator&=((char *)v4 + 520, v7);
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    return 1LL;
  }
  else
  {
    if ( v10 )
    {
      if ( v9 )
      {
        v5 = operator~(0x10000000LL);
        INTERLOCKEDTIFLAGS::operator&=((char *)v4 + 520, v5);
      }
    }
    LOBYTE(v3) = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3) == 0;
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    return v3;
  }
}
