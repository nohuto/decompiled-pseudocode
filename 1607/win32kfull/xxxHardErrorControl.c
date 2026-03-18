/*
 * XREFs of xxxHardErrorControl @ 0x1C0226628
 * Callers:
 *     NtUserHardErrorControl @ 0x1C02159F0 (NtUserHardErrorControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     CanForceForeground @ 0x1C009AF60 (CanForceForeground.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3, __int64 a4)
{
  PVOID v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rbx
  _DWORD *v12; // rbx
  NTSTATUS v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD v24[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( !grpdeskRitInput || gHardErrorHandler )
        return 1LL;
      MEMORY[0] = gptiCurrent;
LABEL_60:
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x40000000u;
      return 0LL;
    case 1:
      if ( gHardErrorHandler != gptiCurrent )
        return 1LL;
      gHardErrorHandler = 0LL;
      return 0LL;
    case 2:
LABEL_33:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 384LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 348LL);
LABEL_34:
      if ( !grpdeskRitInput )
        return 1LL;
      v12 = gspdeskShouldBeForeground;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect
        && (!gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect) )
      {
        return 1LL;
      }
      gbDisconnectHardErrorAttach = 0;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        gbDisconnectHardErrorAttach = 1;
      else
        v12 = (_DWORD *)grpdeskRitInput;
      PushW32ThreadLock((__int64)v12, v24, UserDereferenceObject, a4);
      if ( v12 )
        ObfReferenceObject(v12);
      v13 = xxxSetCsrssThreadDesktop(v12, a3);
      PopAndFreeW32ThreadLock((__int64)v24, v14, v15, v16);
      if ( v13 < 0 )
      {
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 348LL);
        }
        return 1LL;
      }
      v17 = 0;
      if ( !a2 )
        goto LABEL_53;
      v18 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
      v22 = Object;
      if ( v18 < 0 )
        goto LABEL_53;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v19, v20, v21);
      if ( !ThreadWin32Thread || (unsigned int)CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 376)) )
        v17 = 1;
      ObfDereferenceObject(v22);
      if ( v17 )
        *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
      else
LABEL_53:
        *(_DWORD *)(gptiCurrent + 440LL) &= ~0x20u;
      return 0LL;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          if ( !gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect )
            return 1LL;
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v7 = gspdeskShouldBeForeground;
LABEL_25:
            v11 = ObQueryNameInfo(v7) + 8;
LABEL_27:
            if ( v11
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v11 + 8))) )
            {
              UserSetLastError(5LL);
              return 2LL;
            }
            if ( a1 != 8 )
              goto LABEL_33;
            goto LABEL_60;
          }
        }
        else if ( ObQueryNameInfo(grpdeskRitInput) )
        {
          v7 = (PVOID)grpdeskRitInput;
          goto LABEL_25;
        }
        v11 = 0LL;
        goto LABEL_27;
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 348LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v8 = gHardErrorHandler;
      if ( *(_QWORD *)(gptiCurrent + 384LL) != *((_QWORD *)&gHardErrorHandler + 1) )
      {
        AllocQueue(0LL);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 344LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
        v8 = gHardErrorHandler;
      }
      *(_QWORD *)(v8 + 8) = 0LL;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
      if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
        xxxFlushDeferredWindowEvents();
      break;
    case 5:
      goto LABEL_34;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  xxxRestoreCsrssThreadDesktop((__int64 *)a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v9 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
