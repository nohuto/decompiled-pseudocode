/*
 * XREFs of xxxHardErrorControl @ 0x1C0226550
 * Callers:
 *     NtUserHardErrorControl @ 0x1C021CA30 (NtUserHardErrorControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     zzzAttachToQueue @ 0x1C0043EE8 (zzzAttachToQueue.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007C660 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0 (xxxRestoreCsrssThreadDesktop.c)
 *     CanForceForeground @ 0x1C0080A70 (CanForceForeground.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  PVOID v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rbx
  _DWORD *v11; // rbx
  NTSTATUS v12; // ebx
  int v13; // ebx
  NTSTATUS v14; // eax
  PVOID v15; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( !grpdeskRitInput || gHardErrorHandler )
        return 1LL;
      MEMORY[0] = gptiCurrent;
LABEL_60:
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x40000000u;
      return 0LL;
    case 1:
      if ( gHardErrorHandler != gptiCurrent )
        return 1LL;
      gHardErrorHandler = 0LL;
      return 0LL;
    case 2:
LABEL_33:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 392LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 340LL);
LABEL_34:
      if ( !grpdeskRitInput )
        return 1LL;
      v11 = gspdeskShouldBeForeground;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect
        && (!gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect) )
      {
        return 1LL;
      }
      gbDisconnectHardErrorAttach = 0;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        gbDisconnectHardErrorAttach = 1;
      else
        v11 = (_DWORD *)grpdeskRitInput;
      PushW32ThreadLock((__int64)v11, v17, (__int64)UserDereferenceObject);
      if ( v11 )
        ObfReferenceObject(v11);
      v12 = xxxSetCsrssThreadDesktop(v11, a3);
      PopAndFreeW32ThreadLock((__int64)v17);
      if ( v12 < 0 )
      {
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 340LL);
        }
        return 1LL;
      }
      v13 = 0;
      if ( !a2 )
        goto LABEL_53;
      v14 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
      v15 = Object;
      if ( v14 < 0 )
        goto LABEL_53;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
      if ( !ThreadWin32Thread
        || (unsigned int)CanForceForeground(*(const struct tagPROCESSINFO **)(ThreadWin32Thread + 384)) )
      {
        v13 = 1;
      }
      ObfDereferenceObject(v15);
      if ( v13 )
        *(_DWORD *)(gptiCurrent + 448LL) |= 0x20u;
      else
LABEL_53:
        *(_DWORD *)(gptiCurrent + 448LL) &= ~0x20u;
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
            v6 = gspdeskShouldBeForeground;
LABEL_25:
            v10 = ObQueryNameInfo(v6) + 8;
LABEL_27:
            if ( v10
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v10 + 8))) )
            {
              UserSetLastError(5);
              return 2LL;
            }
            if ( a1 != 8 )
              goto LABEL_33;
            goto LABEL_60;
          }
        }
        else if ( ObQueryNameInfo(grpdeskRitInput) )
        {
          v6 = (PVOID)grpdeskRitInput;
          goto LABEL_25;
        }
        v10 = 0LL;
        goto LABEL_27;
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 340LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v7 = gHardErrorHandler;
      if ( *(_QWORD *)(gptiCurrent + 392LL) != *((_QWORD *)&gHardErrorHandler + 1) )
      {
        AllocQueue(0LL);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 336LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
        v7 = gHardErrorHandler;
      }
      *(_QWORD *)(v7 + 8) = 0LL;
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
  v8 = *(_QWORD *)(gptiCurrent + 416LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v8 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
