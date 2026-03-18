/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C004FBC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     ImeCheckTopmost @ 0x1C004FE88 (ImeCheckTopmost.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     zzzImeSetOwnerWindow @ 0x1C0081158 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C0081268 (zzzImeSetFutureOwner.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  bool v11; // zf
  __int64 v13; // r9
  __int64 v14; // r10

  EnterCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    v9 = gpsi;
    v6 = (unsigned int)*gpsi;
    if ( (v6 & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_14;
    }
    if ( (*(_WORD *)(v4 + 66) & 0x3FFF) == 0x2A9 )
    {
      if ( a2 )
      {
        v10 = ValidateHwnd(a2);
        if ( !v10 )
          goto LABEL_14;
        v9 = gpsi;
      }
      else
      {
        v10 = 0LL;
      }
      v6 = gdwDeferWinEvent;
      ++gdwDeferWinEvent;
      if ( v10 )
        goto LABEL_8;
      v13 = *(_QWORD *)(v8 + 16);
      v5 = *(_QWORD *)(*(_QWORD *)(v13 + 392) + 80LL);
      if ( !v5 )
        goto LABEL_21;
      if ( v5 == *(_QWORD *)(v8 + 104) )
      {
LABEL_10:
        v11 = (*(_DWORD *)v6)-- == 1;
        if ( v11 && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        v7 = 1;
        goto LABEL_14;
      }
      v14 = *(_QWORD *)(v5 + 152);
      if ( *(_WORD *)(v14 + 8) != *(_WORD *)(*(_QWORD *)v9 + 882LL)
        && (*(_BYTE *)(v14 + 86) & 1) == 0
        && v13 == *(_QWORD *)(v5 + 16) )
      {
LABEL_8:
        zzzImeSetOwnerWindow((struct tagWND *)v8);
      }
      else
      {
LABEL_21:
        zzzImeSetFutureOwner((struct tagWND *)v8);
      }
      ImeCheckTopmost(v8);
      v6 = gdwDeferWinEvent;
      goto LABEL_10;
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
