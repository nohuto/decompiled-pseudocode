/*
 * XREFs of xxxPaintMenuBar @ 0x14020C128
 * Callers:
 *     NtUserPaintMenuBar @ 0x14020C030 (NtUserPaintMenuBar.c)
 * Callees:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x14000AC68 (xxxMenuBarCompute.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxSendUAHMenuMessage @ 0x14020C3E0 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x14020C434 (xxxSendUAHInitMenuMessage.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, Gre::Base *a2, int a3, int a4, int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rsi
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct tagMENU *v21; // rcx
  __int64 v22; // rdx
  struct tagMENU *v23; // rdx
  struct tagMENU *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rsi
  struct tagMENU *v28; // rdx
  ULONG_PTR v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32[2]; // [rsp+50h] [rbp-20h] BYREF
  struct tagMENU *v33; // [rsp+60h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v32);
  v10 = *(_QWORD *)(a1 + 168);
  v11 = 0;
  v33 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v32, v10);
  v13 = (__int64)v33;
  if ( !v33 )
  {
    if ( !*(_QWORD *)v32[0] )
      goto LABEL_17;
    v13 = *(_QWORD *)v32[0];
  }
  v14 = PtiCurrent(v12);
  Win32HM_LockIntoThread<0>((__int64)v14, v13, &v29);
  *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
  v15 = *(_QWORD *)(*(_QWORD *)v32[0] + 40LL);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(v15 + 40) &= ~0x10u;
  else
    *(_DWORD *)(v15 + 40) |= 0x10u;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
  v17 = *(_QWORD *)(*(_QWORD *)v32[0] + 80LL);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v17);
  if ( a1 != *(_QWORD *)(*(_QWORD *)v32[0] + 80LL)
    || !*(_DWORD *)(*(_QWORD *)v32[0] + 64LL)
    || (v19 = *(_QWORD *)v32[0], !*(_DWORD *)(*(_QWORD *)v32[0] + 68LL)) )
  {
    xxxMenuBarCompute((__int64)v32, a1, a5, a3, v16);
  }
  if ( IsInsideUserApiHook(v19, v18) && v17 && (unsigned int)xxxSendUAHInitMenuMessage(v17, v32, a2) )
  {
    v25 = v33;
    if ( !v33 )
      v25 = *(struct tagMENU **)v32[0];
    xxxSendUAHMenuMessage(v17, 145LL, v25, a2);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v21 = v33;
  if ( !v33 )
    v21 = *(struct tagMENU **)v32[0];
  if ( (unsigned int)MNIsUAHMenu(v21, v20) )
  {
    v23 = v33;
    if ( !v33 )
      v23 = *(struct tagMENU **)v32[0];
    xxxMenuDraw((HDC)a2, v23, 0LL);
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL) )
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32[0] + 40LL) + 24LL);
    else
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v32[0], v22) + 19904) + 4936LL);
    v27 = GreSelectBrush(a2, v26);
    GrePatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v32[0] + 64LL), *(_DWORD *)(*(_QWORD *)v32[0] + 68LL), 15728673);
    v28 = v33;
    if ( !v33 )
      v28 = *(struct tagMENU **)v32[0];
    xxxMenuDraw((HDC)a2, v28, 0LL);
    GreSelectBrush(a2, v27);
  }
  v11 = *(_DWORD *)(*(_QWORD *)v32[0] + 68LL);
  *(_DWORD *)(*(_QWORD *)(v30 + 40) + 40LL) &= ~0x200u;
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(&v29);
LABEL_17:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v32);
  return v11;
}
