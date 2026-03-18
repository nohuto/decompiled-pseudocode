/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140050A90
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  __int64 v1; // r12
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct tagBWL *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r14
  __int64 v18; // rcx
  struct tagWND *v19; // r13
  __int16 *v20; // rcx
  __int16 v21; // di
  ULONG64 *v22; // rax
  __int64 v23; // rdx
  struct tagBWL *v24; // rcx
  struct tagBWL *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  signed __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  ULONG64 v44; // rcx
  _QWORD *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 UserSessionState; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdi
  _QWORD **v53; // rcx
  __int16 v54; // ax
  __int64 v55; // rax
  int v56; // ecx
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD **v59; // [rsp+20h] [rbp-98h]
  struct tagBWL *v60; // [rsp+30h] [rbp-88h]
  ULONG_PTR v61; // [rsp+38h] [rbp-80h] BYREF
  _QWORD *v62; // [rsp+40h] [rbp-78h]
  __int64 v63; // [rsp+48h] [rbp-70h]
  __int64 v64; // [rsp+50h] [rbp-68h]
  struct tagBWL *v65; // [rsp+58h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[11]; // [rsp+60h] [rbp-58h] BYREF
  int v68; // [rsp+D0h] [rbp+18h]
  _QWORD *v69; // [rsp+D0h] [rbp+18h]
  __int64 v70; // [rsp+D8h] [rbp+20h]

  v1 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  if ( v4 )
  {
    v3 = *(_QWORD *)(v4 + 496);
    if ( v3 )
      v1 = *(_QWORD *)(v3 + 24);
  }
  v63 = v1;
  v5 = (__int64 *)PsGetCurrentThreadWin32Thread(v3);
  if ( v5 )
    v8 = *v5;
  else
    v8 = 0LL;
  v64 = v8;
  if ( !v1 )
    return;
  v9 = *(struct tagWND **)(v1 + 112);
  v12 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 63424);
  if ( v12 )
  {
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 63424) = 0LL;
    goto LABEL_11;
  }
  v58 = Win32AllocPoolZInit(296LL, 1819767637LL);
  v12 = v58;
  if ( v58 )
  {
    *(_QWORD *)(v58 + 16) = v58 + 280;
LABEL_11:
    *(_QWORD *)(v12 + 8) = v12 + 32;
    *(_QWORD *)(v12 + 24) = v8;
    v14 = InternalBuildHwndList((struct tagBWL *)v12, v9, 2u);
    v15 = (_QWORD *)*((_QWORD *)v14 + 1);
    if ( (unsigned __int64)v15 < *((_QWORD *)v14 + 2) )
    {
      *v15 = 1LL;
      v28 = (__int64 *)PsGetCurrentThreadWin32Thread(v13);
      if ( v28 )
        v29 = *v28;
      else
        v29 = 0LL;
      *((_QWORD *)v14 + 3) = v29;
      v30 = (__int64 *)PsGetCurrentThreadWin32Thread(v29);
      if ( v30 )
        v32 = *v30;
      else
        v32 = 0LL;
      *((_QWORD *)v14 + 3) = v32;
      v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 63232);
      *(_QWORD *)v14 = v33;
      *(_QWORD *)(W32GetUserSessionState(v33, v34) + 63232) = v14;
    }
    else
    {
      Win32FreePool(v14);
      v14 = 0LL;
    }
    goto LABEL_13;
  }
  v14 = 0LL;
LABEL_13:
  v65 = v14;
  v60 = v14;
  if ( !v14 )
    return;
  v17 = (__int64 *)((char *)v14 + 32);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == 1 )
      break;
    v19 = (struct tagWND *)ValidateHwnd(v18);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 520), 0, 0) & 1) != 0 )
      break;
    if ( !v19 || *((_QWORD *)v19 + 2) != v8 )
      goto LABEL_26;
    if ( (*(_WORD *)(*((_QWORD *)v19 + 5) + 42LL) & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 912LL);
    if ( (*(_WORD *)(*((_QWORD *)v19 + 5) + 42LL) & 0x1000) == 0
      && (v20 = *(__int16 **)(*((_QWORD *)v19 + 17) + 8LL),
          v21 = *v20,
          v21 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v16) + 19904) + 898LL)) )
    {
      v43 = *((_QWORD *)v19 + 5);
      v22 = *(_DWORD *)(v43 + 248) ? (ULONG64 *)*((_QWORD *)v19 + 35) : *(ULONG64 **)(v43 + 296);
    }
    else
    {
      v22 = 0LL;
    }
    if ( v22 )
    {
      v44 = MmUserProbeAddress;
      if ( *v22 < MmUserProbeAddress )
        v44 = *v22;
      v70 = *(_QWORD *)(v44 + 16);
      v45 = 0LL;
      PsGetCurrentThreadWin32Thread(v44);
      v48 = *(_QWORD *)(W32GetUserSessionState(v47, v46) + 19904);
      if ( (unsigned __int64)(unsigned __int16)v70 < *(_QWORD *)(v48 + 8) )
      {
        UserSessionState = W32GetUserSessionState(v48, v16);
        v52 = *(_DWORD *)(W32GetUserSessionState(v51, v50) + 19928) * (unsigned int)(unsigned __int16)v70
            + *(_QWORD *)(UserSessionState + 19920);
        v53 = (_QWORD **)HMPkheFromPhe(v52);
        v59 = v53;
        v16 = 0x7FFFLL;
        v54 = WORD1(v70) & 0x7FFF;
        if ( (WORD1(v70) & 0x7FFF) != *(_WORD *)(v52 + 26) && v54 != 0x7FFF )
        {
          if ( v54 || !PsGetCurrentProcessWow64Process(v53, 0x7FFFLL) )
          {
LABEL_72:
            v45 = 0LL;
            goto LABEL_51;
          }
          v53 = v59;
        }
        if ( (*(_BYTE *)(v52 + 25) & 1) == 0 && *(_BYTE *)(v52 + 24) == 1 )
        {
          v45 = *v53;
          goto LABEL_51;
        }
        goto LABEL_72;
      }
LABEL_51:
      if ( !v45 )
        goto LABEL_26;
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v19);
      Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(&v61, v8, (__int64)v45);
      do
      {
        if ( v45 == (_QWORD *)v1 )
          break;
        v55 = *((_QWORD *)a1 + 5);
        v56 = *((_DWORD *)a1 + 7);
        while ( 1 )
        {
          v68 = --v56;
          if ( v56 < 0 )
            break;
          if ( *v45 == *(_QWORD *)v55 )
          {
            if ( (~*(_BYTE *)(v55 + 32) & 3) != 0 )
            {
              xxxSendMessage(v19, 0x287u);
              v56 = v68;
            }
            break;
          }
          v55 += 168LL;
        }
        if ( v56 >= 0 )
          break;
        v45 = (_QWORD *)v45[13];
        v57 = v62;
        v69 = v62;
        v62 = v45;
        if ( v45 )
        {
          HMLockObject(v45);
          v57 = v69;
        }
        if ( v57 )
          HMUnlockObject(v57);
      }
      while ( v45 );
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&v61);
      Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&v61);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
      ++v17;
    }
    else
    {
LABEL_26:
      ++v17;
    }
  }
  if ( *(_QWORD *)v14 == 3LL )
  {
    v25 = v14;
LABEL_39:
    Win32FreePool(v25);
  }
  else
  {
    v24 = (struct tagBWL *)(W32GetUserSessionState(v18, v16) + 63232);
    v25 = v14;
    while ( *(_QWORD *)v24 )
    {
      if ( *(struct tagBWL **)v24 == v14 )
      {
        *(_QWORD *)v24 = *(_QWORD *)v14;
        if ( !*(_QWORD *)(W32GetUserSessionState(v24, v23) + 63424) )
        {
          *(_QWORD *)(W32GetUserSessionState(v27, v26) + 63424) = v14;
          return;
        }
        v35 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 63424);
        v38 = (*(_QWORD *)(v35 + 16) - *(_QWORD *)(W32GetUserSessionState(v37, v36) + 63424) - 32LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (__int64)((*((_QWORD *)v60 + 2) - (_QWORD)v60 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > v38 )
        {
          v40 = *(void **)(W32GetUserSessionState(v39, v38) + 63424);
          *(_QWORD *)(W32GetUserSessionState(v42, v41) + 63424) = v60;
          Win32FreePool(v40);
          return;
        }
        goto LABEL_39;
      }
      v24 = *(struct tagBWL **)v24;
    }
  }
}
