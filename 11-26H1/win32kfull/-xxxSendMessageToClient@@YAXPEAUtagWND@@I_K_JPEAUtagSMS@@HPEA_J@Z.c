/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     SfnDWORD @ 0x140039C80 (SfnDWORD.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     PrepareSentPointerMessageForClient @ 0x140137300 (PrepareSentPointerMessageForClient.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // esi
  int v11; // ecx
  char *v12; // r15
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(int, int, int, int, __int64, __int64); // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdi
  __int64 UserSessionState; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v36; // rdi
  __int64 CurrentProcessWow64Process; // rax
  ULONG v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  signed __int32 v42[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+20h] [rbp-98h]
  __int64 v44; // [rsp+28h] [rbp-90h]
  unsigned int v45; // [rsp+30h] [rbp-88h]
  struct tagSMS *v46; // [rsp+38h] [rbp-80h]
  unsigned int v47; // [rsp+50h] [rbp-68h]
  volatile void *Address; // [rsp+58h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[11]; // [rsp+60h] [rbp-58h] BYREF
  int v50; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v51; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v52; // [rsp+D8h] [rbp+20h] BYREF

  v52 = a4;
  v51 = a3;
  v50 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( (unsigned int)(a2 - 577) <= 0x16 && (v11 = 8122367, _bittest(&v11, a2 - 577)) || a2 == 528 && (_WORD)a3 == 582 )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v50, &v51, &v52, 0LL) )
      {
        v21 = 0LL;
        goto LABEL_10;
      }
      v7 = v52;
      v8 = v51;
      v9 = v50;
    }
  }
  v12 = (char *)a1 + 40;
  BugCheckParameter3[0] = (ULONG_PTR)a1 + 40;
  v13 = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 18LL) >> 3) & 1;
  v47 = v13;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v15);
    v15 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    v36 = *(_QWORD *)(v15 + 512);
    Address = *(volatile void **)(v36 + 248);
    _InterlockedOr(v42, 0);
    if ( Address )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      v38 = 1;
      if ( !CurrentProcessWow64Process )
        v38 = 4;
      ProbeForRead(Address, 0x20uLL, v38);
      if ( *(_QWORD *)Address )
      {
        *(_QWORD *)(v36 + 224) |= 0x100uLL;
LABEL_6:
        if ( (v9 & 0x1FFFF) < 0x400 )
        {
          v16 = (unsigned __int8)word_14035E242[(unsigned __int16)v9 - 577];
          v17 = gapfnScSendMessage[v16];
          v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v14) + 19904) + 752LL);
          v19 = *(_QWORD *)v12;
          v46 = a5;
          v45 = v13;
          v44 = v18;
          v43 = *(_QWORD *)(v19 + 120);
LABEL_8:
          v20 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, __int64, __int64, unsigned int, struct tagSMS *))v17)(
                  a1,
                  v9,
                  v8,
                  v7,
                  v43,
                  v44,
                  v45,
                  v46);
LABEL_9:
          v21 = v20;
LABEL_10:
          *a7 = v21;
          return;
        }
        v22 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904) + 752LL);
        v23 = *(_QWORD *)v12;
        v46 = a5;
        v45 = v13;
        v44 = v22;
        v43 = *(_QWORD *)(v23 + 120);
        goto LABEL_12;
      }
    }
  }
  if ( *(int *)(W32GetUserSessionState(v15, v14) + 64208) >= 0 || v9 == 90 )
    goto LABEL_6;
  v24 = *(_QWORD *)v12;
  v25 = *(_WORD *)(*(_QWORD *)v12 + 42LL) & 0x2FFF;
  v50 = v25;
  LOWORD(v47) = v25;
  if ( (unsigned __int16)v25 < 0x2A1u || (v15 = 682LL, (unsigned __int16)v25 > 0x2AAu) )
  {
    v15 = 666LL;
    if ( (_WORD)v25 != 666 )
      goto LABEL_6;
  }
  v26 = *(_QWORD *)(v24 + 120);
  Address = (volatile void *)(unsigned __int16)v25;
  v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904);
  if ( v26 != *(_QWORD *)(v15 + 8LL * (_QWORD)Address - 4744) )
  {
    v34 = *(_QWORD *)(*(_QWORD *)v12 + 120LL);
    v15 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19904);
    if ( v34 != *(_QWORD *)(v15 + 8LL * (_QWORD)Address - 4936) )
      goto LABEL_6;
  }
  UserSessionState = W32GetUserSessionState(v15, v14);
  v29 = 2LL * ((_QWORD)Address + 581);
  v30 = *(_QWORD *)(UserSessionState + 16LL * ((_QWORD)Address + 581) + 8);
  if ( !v30
    || v9 <= *(_DWORD *)(UserSessionState + 16LL * ((_QWORD)Address + 581))
    && (v29 = v9 & 7,
        v28 = (unsigned int)(1 << v29),
        ((unsigned __int8)v28 & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v30)) != 0)
    || (*(_BYTE *)(*(_QWORD *)v12 + 18LL) & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
    {
      v39 = (unsigned __int8)MessageTable[(unsigned __int16)v9];
      v17 = gapfnScSendMessage[v39];
      if ( (_WORD)v50 == 666 )
      {
        v41 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v39, v28) + 19904) + 7592LL);
      }
      else
      {
        v40 = W32GetUserSessionState(v39, v28);
        v41 = *(_QWORD *)(*(_QWORD *)(v40 + 19904) + 8LL * (unsigned __int16)v47 - 4608);
      }
      v46 = a5;
      v45 = v13;
      v44 = v41;
      v43 = v13;
      goto LABEL_8;
    }
    if ( (_WORD)v50 == 666 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28) + 19904) + 7592LL);
    }
    else
    {
      v32 = W32GetUserSessionState(v29, v28);
      v33 = *(_QWORD *)(*(_QWORD *)(v32 + 19904) + 8LL * (unsigned __int16)v47 - 4608);
    }
    v46 = a5;
    v45 = v13;
    v44 = v33;
    v43 = v13;
LABEL_12:
    v20 = SfnDWORD((_DWORD)a1, v9, v8, v7, v43, v44);
    goto LABEL_9;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  if ( a6 )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, a1);
  v31 = xxxDefWindowProc(a1);
  *a7 = v31;
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
}
