/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxActiveWindowTracking @ 0x14008DA14 (xxxActiveWindowTracking.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1402A06E8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, __int64 a2, const struct tagQMSG *a3, unsigned int a4)
{
  const struct tagWND *v4; // r14
  __int64 v5; // rbx
  __int64 v7; // r13
  int v8; // r12d
  int v9; // ebp
  unsigned int active; // edi
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ebx
  const struct tagWND *v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v18; // rcx
  ULONG_PTR *v19; // rdx
  ULONG_PTR v20; // rcx
  int v22; // ecx
  unsigned int v23; // ebx
  __int64 v24; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  __int64 v27; // [rsp+50h] [rbp-68h]
  ULONG_PTR BugCheckParameter3[10]; // [rsp+68h] [rbp-50h] BYREF
  char v29; // [rsp+C0h] [rbp+8h]

  v4 = (const struct tagWND *)a2;
  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v27 = *((_QWORD *)a3 + 4);
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 58) + 112LL) )
    return 0LL;
  active = 0;
  if ( !__CFSHR__(*((_DWORD *)a3 + 25), 20) && (unsigned int)IsIndependentInputWindow((const struct tagWND *)a2) )
  {
    if ( (unsigned int)(v7 - 513) <= 0xA )
    {
      v22 = 1097;
      if ( _bittest(&v22, v7 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v4);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(struct tagQ **)(*(_QWORD *)(TopLevelWindow + 16) + 464LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v11 = (__int64)v4;
  BugCheckParameter3[0] = *((_QWORD *)a1 + 56);
  *((_QWORD *)a1 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)v4;
  if ( v4 )
    HMLockObject(v4);
  v12 = *((_QWORD *)v4 + 5);
  LOBYTE(a2) = *(_BYTE *)(v12 + 24) & 4;
  v29 = a2;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (*(_BYTE *)(v12 + 31) & 0xC0) == 0x40 )
    {
      do
      {
        v11 = *(_QWORD *)(v11 + 104);
        v24 = v11 + 40;
        if ( !(_BYTE)a2 )
        {
          Win32HM_ExchangeThreadLock<1>(v11, (__int64)BugCheckParameter3);
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)v11,
            528LL,
            v27 | v7,
            (unsigned __int16)(v5 - *(_WORD *)(*(_QWORD *)(v11 + 40) + 104LL)) | ((unsigned __int64)(unsigned __int16)(WORD2(v5) - *(_WORD *)(*(_QWORD *)(v11 + 40) + 108LL)) << 16),
            0,
            0,
            0LL,
            1u,
            0);
          LOBYTE(a2) = v29;
          v24 = v11 + 40;
        }
      }
      while ( (*(_BYTE *)(*(_QWORD *)v24 + 31LL) & 0xC0) == 0x40 );
      active = 0;
    }
    if ( (_BYTE)a2 )
      Win32HM_ExchangeThreadLock<1>(v11, (__int64)BugCheckParameter3);
  }
  v13 = 0;
  v14 = *(const struct tagWND **)(*((_QWORD *)a1 + 58) + 128LL);
  if ( v9 )
    v15 = v14 == (const struct tagWND *)v11;
  else
    v15 = v14 == v4;
  LOBYTE(v13) = !v15;
  if ( !v8 )
  {
    v14 = (const struct tagWND *)*(unsigned int *)(W32GetUserSessionState(v14, a2) + 66796);
    if ( ((unsigned __int8)v14 & 1) != 0 )
    {
      a2 = 512LL;
      if ( (_DWORD)v7 == 512 )
      {
        active = xxxActiveWindowTracking(v4, 512LL, a4);
        goto LABEL_22;
      }
    }
  }
  if ( !v13 && (*(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) & 0x8000) == 0 )
    goto LABEL_37;
  v14 = *(const struct tagWND **)(v11 + 24);
  v16 = 0LL;
  if ( v14 )
  {
    a2 = *((_QWORD *)v14 + 1);
    if ( a2 )
      v16 = *(_QWORD *)(a2 + 24);
  }
  if ( v11 == v16 )
  {
LABEL_37:
    v23 = a4;
    goto LABEL_38;
  }
  if ( (_DWORD)v7 != 513 && (_DWORD)v7 != 516 && (_DWORD)v7 != 519 && (_DWORD)v7 != 523 )
    goto LABEL_22;
  v23 = a4;
  if ( v8 )
  {
    active = (v9 != 0) + 3;
  }
  else
  {
    if ( v9 )
    {
      active = 2;
LABEL_59:
      v14 = (const struct tagWND *)*((_QWORD *)a1 + 58);
      if ( (v11 != *((_QWORD *)v14 + 16) || (*((_DWORD *)v14 + 109) & 0x8000) != 0)
        && !(unsigned __int8)xxxActivateWindowWithOptions(v11, 3LL, 49LL, *((_DWORD *)v14 + 39) != 0, 0)
        || (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 8) != 0
        || active == 2 )
      {
LABEL_51:
        active = 1;
        goto LABEL_22;
      }
      active = 0;
LABEL_38:
      v14 = (const struct tagWND *)*(unsigned int *)(W32GetUserSessionState(v14, a2) + 66796);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        if ( CheckOnTop(a1, (struct tagWND *)v11, v7) )
        {
          if ( v23 == 1 )
          {
            v14 = *(const struct tagWND **)(v11 + 16);
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)v14 + 130, 0, 0) & 8) != 0
              && (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 24LL) & 8) == 0 )
            {
              active = 1;
            }
          }
        }
      }
      goto LABEL_22;
    }
    active = xxxSendMessage(v4, 0x21u);
  }
  if ( active <= 2 )
    goto LABEL_59;
  if ( active == 3 )
  {
    active = 0;
    goto LABEL_22;
  }
  if ( active == 4 )
    goto LABEL_51;
LABEL_22:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 58) + 112LL) )
    xxxSendMessage(v4, 0x20u);
  CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v14);
  if ( CurrentThreadWin32Thread )
    v18 = *CurrentThreadWin32Thread;
  else
    v18 = 0LL;
  v19 = *(ULONG_PTR **)(v18 + 448);
  if ( v19 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, v18, (ULONG_PTR)BugCheckParameter3, 0LL);
  *(_QWORD *)(v18 + 448) = *v19;
  v20 = v19[1];
  if ( v20 )
    HMUnlockObject(v20);
  return active;
}
