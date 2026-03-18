/*
 * XREFs of NtUserKillTimer @ 0x1C0076520
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00766E8 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00ECF9C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // ebp
  _QWORD *v8; // rdi
  _QWORD *i; // r14
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  char v18; // [rsp+40h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v18 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v18);
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
    {
      v7 = 0;
      goto LABEL_21;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = 0;
  v8 = (_QWORD *)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v6)) & 0x3F));
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = i - 14;
    if ( *(i - 3) == v6 && v10[12] == a2 )
    {
      v11 = *((_DWORD *)v10 + 12);
      if ( (v11 & 6) == 0 )
      {
        if ( (v11 & 0x40) != 0
          || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4),
              v5 = v10[3],
              CurrentProcessWin32Process == *(_QWORD *)(v5 + 376))
          || !v6 && (v10[6] & 4) == 0 )
        {
          if ( (unsigned int)HMMarkObjectDestroy(i - 14) )
          {
            if ( (v10[6] & 1) != 0 )
              DecTimerCount((struct tagTIMER *)(i - 14));
            v13 = v10[9];
            v14 = (_QWORD *)v10[10];
            if ( *(_QWORD **)(v13 + 8) != v10 + 9 || (_QWORD *)*v14 != v10 + 9 )
              __fastfail(3u);
            *v14 = v13;
            *(_QWORD *)(v13 + 8) = v14;
            v15 = (_QWORD *)*i;
            v16 = (_QWORD *)v10[15];
            if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v16 != i )
              __fastfail(3u);
            *v16 = v15;
            v15[1] = v16;
            if ( !v10[11] )
              _bittestandreset(gTimerId, *((_DWORD *)v10 + 24) - 256);
            EtwTraceKillTimer(i - 14);
            HMAssignmentUnlock(v10 + 11);
            HMFreeObject(i - 14);
          }
          v7 = 1;
          break;
        }
      }
    }
  }
LABEL_21:
  if ( !v18 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v18);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
