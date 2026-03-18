/*
 * XREFs of xxxTranslateAccelerator @ 0x1401BA998
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1402C0630 (NtUserTranslateAccelerator.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     SystoChar @ 0x1401BAD70 (SystoChar.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1401BAD98 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxTranslateAccelerator(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 v5; // r14
  __int64 v8; // r13
  unsigned int v9; // r12d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rcx
  int v17; // ebx
  __int16 KeyState; // ax
  unsigned __int8 v19; // di
  __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  char v23; // di
  unsigned int v25; // r15d
  BOOL v26; // r12d
  int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 SysDesktopMenu; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // r15d
  __int64 *v35; // rcx
  unsigned __int8 v36; // [rsp+54h] [rbp-35h]
  int v37; // [rsp+58h] [rbp-31h]
  __int64 v38; // [rsp+60h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v40; // [rsp+78h] [rbp-11h]
  __int64 v41[3]; // [rsp+80h] [rbp-9h] BYREF
  ULONG_PTR v42[9]; // [rsp+98h] [rbp+Fh] BYREF
  unsigned __int16 v44; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v5 = 0LL;
  v38 = 0LL;
  if ( (*(_BYTE *)(W32GetUserSessionState(a1, a2) + 14696) & 2) != 0 )
    return 0LL;
  v8 = a2 + 28;
  v9 = 0;
  v10 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v10 )
    goto LABEL_5;
  v12 = v10 - 2;
  if ( !v12 )
    goto LABEL_6;
  v13 = v12 - 2;
  if ( !v13 )
  {
LABEL_5:
    v3 = 1;
    goto LABEL_6;
  }
  if ( v13 != 2 )
    return 0LL;
LABEL_6:
  v37 = v3;
  if ( *((_QWORD *)PtiCurrent(v11) + 59)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v14) + 59) + 48LL) + 32LL) + 80LL) & 1) != 0
    && (_GetKeyState(165LL) & 0x8000u) != 0LL )
  {
    v16 = 163LL;
    v15 = 164;
  }
  else
  {
    v15 = 18;
    v16 = 17LL;
  }
  v17 = ((__int16)_GetKeyState(v16) >> 31) & 8;
  KeyState = _GetKeyState(v15);
  v19 = v17 | 0x10;
  if ( KeyState >= 0 )
    v19 = v17;
  v20 = _GetKeyState(16LL);
  v21 = a3;
  v22 = v19 | 4;
  if ( v20 >= 0 )
    v22 = v19;
  v36 = v22;
  do
  {
    v23 = *(_BYTE *)v8;
    if ( *(unsigned __int16 *)(v8 + 2) == *(_QWORD *)(v21 + 16)
      && v3 == (v23 & 1)
      && (!v3 || (((unsigned __int8)v23 ^ v22) & 0xC) == 0)
      && (((unsigned __int8)v23 ^ v22) & 0x10) == 0 )
    {
      v25 = *(unsigned __int16 *)(v8 + 4);
      v26 = 0;
      v27 = 0;
      v44 = v25;
      if ( (_WORD)v25 )
      {
        v28 = *((_QWORD *)a1 + 5);
        v29 = *((_QWORD *)a1 + 21);
        v40 = v29;
        if ( (*(_BYTE *)(v28 + 31) & 0x40) == 0 )
        {
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v42, v29);
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v41, v40);
          v27 = xxxTA_AccelerateMenu(a1, v41, v25, &v38);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v41);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v42);
          v5 = v38;
        }
        v30 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v30 + 31) & 0x40) != 0 || !v27 )
        {
          SysDesktopMenu = *((_QWORD *)a1 + 20);
          BugCheckParameter3[1] = 0LL;
          BugCheckParameter3[0] = -1LL;
          if ( SysDesktopMenu || (*(_BYTE *)(v30 + 30) & 8) == 0 )
          {
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, SysDesktopMenu);
          }
          else
          {
            v35 = (__int64 *)(*((_QWORD *)a1 + 3) + 56LL);
            SysDesktopMenu = *v35;
            if ( !*v35 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v35, 16LL);
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, SysDesktopMenu);
            xxxSetSysMenu(a1);
          }
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v41, SysDesktopMenu);
          v27 = xxxTA_AccelerateMenu(a1, v41, v25, &v38);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v41);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
          v5 = v38;
          v26 = v27 != 0;
        }
      }
      v32 = *((_QWORD *)a1 + 5);
      v33 = *(unsigned __int8 *)(v32 + 31);
      v34 = *(_BYTE *)(v32 + 31) & 8;
      if ( (v27 & 1) == 0
        && (!v27 || ((v33 & 0x20) == 0 || v26) && !*(_QWORD *)(*((_QWORD *)PtiCurrent(v33) + 58) + 112LL) && !v34) )
      {
        if ( v26 )
          xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 274LL, v44, 0x10000LL, 0, 0, 0LL, 1u, 0);
        else
          xxxSendMessage(a1, 0x111u);
        v23 = 0x80;
      }
      if ( v5 )
      {
        xxxSendMessage(a1, 0x125u);
        v5 = 0LL;
        v38 = 0LL;
      }
      v22 = v36;
      v21 = a3;
      v9 = 1;
    }
    v8 += 6LL;
    if ( v23 < 0 )
      break;
    v3 = v37;
  }
  while ( !v9 );
  return v9;
}
