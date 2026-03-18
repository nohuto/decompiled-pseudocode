/*
 * XREFs of NtUserKillTimer @ 0x1C004A440
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AB74 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     FreeTimer @ 0x1C004AC90 (FreeTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // ebp
  _QWORD **v8; // rbx
  _QWORD *i; // r14
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v13 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v13);
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
    {
      v7 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = 0;
  v8 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v6)) & 0x3F));
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( *(i - 3) == v6 && *(i - 2) == a2 )
    {
      v10 = *((_DWORD *)i - 16);
      if ( (v10 & 6) == 0 )
      {
        if ( (v10 & 0x40) != 0
          || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5),
              v5 = *(i - 11),
              CurrentProcessWin32Process == *(_QWORD *)(v5 + 376))
          || !v6 && (*(_BYTE *)(i - 8) & 4) == 0 )
        {
          FreeTimer((struct tagTIMER *)(i - 14));
          v7 = 1;
          break;
        }
      }
    }
  }
LABEL_11:
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
