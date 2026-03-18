/*
 * XREFs of NtUserDelegateInput @ 0x140204730
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rdi
  __int64 v15; // rax
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO *v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  int v22; // ecx

  EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a4);
  v11 = 0LL;
  v12 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_21;
    if ( a1 )
    {
      v14 = (struct tagTHREADINFO *)PtiFromThreadId(a1);
      if ( !v14 )
        goto LABEL_21;
    }
    else
    {
      v14 = PtiCurrent(v10);
    }
    v15 = *(_QWORD *)(v12 + 40);
    if ( *(char *)(v15 + 19) >= 0 && *(char *)(v15 + 20) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v17 = *(struct tagTHREADINFO **)(v12 + 16);
      v18 = *((_QWORD *)v17 + 57);
      if ( v18 == CurrentProcessWin32Process )
      {
        v19 = *(_DWORD *)(v12 + 260);
        if ( v19 )
        {
          if ( !a3
            && *(struct tagTHREADINFO **)(v12 + 264) == v14
            && *((_QWORD *)v14 + 183) == a2
            && !*((_QWORD *)v14 + 184)
            && v19 == a5 )
          {
            v22 = 1242;
            goto LABEL_20;
          }
        }
        else if ( v17 != v14
               && v18 == *((_QWORD *)v14 + 57)
               && !tagQ::AreMultipleThreadsAttached(*((tagQ **)v14 + 58))
               && *(_QWORD *)(v20 + 488) == *((_QWORD *)v14 + 61)
               && !*(_QWORD *)(v20 + 1464) )
        {
          *(_QWORD *)(v12 + 264) = v14;
          *(_DWORD *)(v12 + 260) = a5;
          *((_QWORD *)v14 + 170) |= 0x2000uLL;
          _InterlockedOr((volatile signed __int32 *)v14 + 130, 0x40u);
          v11 = 1LL;
          *((_QWORD *)v14 + 183) = a2;
          ++*((_DWORD *)v14 + 376);
          *((_QWORD *)v14 + 184) = a3;
          ++*(_DWORD *)(v20 + 1504);
          goto LABEL_18;
        }
      }
      v22 = 5;
LABEL_20:
      UserSetLastError(v22);
      goto LABEL_18;
    }
LABEL_21:
    v22 = 87;
    goto LABEL_20;
  }
LABEL_18:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
