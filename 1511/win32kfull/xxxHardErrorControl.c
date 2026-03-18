/*
 * XREFs of xxxHardErrorControl @ 0x1C02268E8
 * Callers:
 *     NtUserHardErrorControl @ 0x1C021C830 (NtUserHardErrorControl.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     CanForceForeground @ 0x1C008B4E0 (CanForceForeground.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  PVOID v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v11; // rbx
  _DWORD *v12; // rbx
  NTSTATUS v13; // ebx
  int v14; // ebx
  NTSTATUS v15; // eax
  PVOID v16; // rsi
  __int64 ThreadWin32Thread; // rax
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
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
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL);
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
      PushW32ThreadLock((__int64)v12, v18, (__int64)UserDereferenceObject);
      if ( v12 )
        ObfReferenceObject(v12);
      v13 = xxxSetCsrssThreadDesktop(v12, a3);
      PopAndFreeW32ThreadLock((__int64)v18);
      if ( v13 < 0 )
      {
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL);
        }
        return 1LL;
      }
      v14 = 0;
      if ( !a2 )
        goto LABEL_53;
      v15 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
      v16 = Object;
      if ( v15 < 0 )
        goto LABEL_53;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
      if ( !ThreadWin32Thread
        || (unsigned int)CanForceForeground(*(const struct tagPROCESSINFO **)(ThreadWin32Thread + 376)) )
      {
        v14 = 1;
      }
      ObfDereferenceObject(v16);
      if ( v14 )
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
            v6 = gspdeskShouldBeForeground;
LABEL_25:
            v11 = ObQueryNameInfo(v6) + 8;
LABEL_27:
            if ( v11
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v11 + 8))) )
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
        v11 = 0LL;
        goto LABEL_27;
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 340LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v7 = gHardErrorHandler;
      v8 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 384LL) != v8 )
      {
        AllocQueue(0LL, v8);
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
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v9 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
