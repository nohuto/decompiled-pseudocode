/*
 * XREFs of ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C010F804
 * Callers:
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsPrivileged @ 0x1C01017AC (IsPrivileged.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C010FA74 (-NotifyLogon@@YAHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitiateShutdownW(PETHREAD Thread, unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  HANDLE ThreadProcessId; // rax
  void **v11; // rcx
  int v12; // ebx
  int v13; // ecx
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rdi
  char v16; // di
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  GetProcessLuid(Thread, &v17);
  v4 = *a2;
  if ( v17 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v8 = ProcessWin32Process;
  if ( !ProcessWin32Process )
    return 3221225480LL;
  v9 = *(_QWORD *)(ProcessWin32Process + 640);
  ThreadProcessId = PsGetThreadProcessId(Thread);
  v11 = (void **)gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
    goto LABEL_5;
  v5 &= ~0x200u;
  *a2 = v5;
  if ( !v9 )
    return 3221225480LL;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v8 + 656), 0x40u) )
    return 3221225506LL;
  if ( (v5 & 1) != 0 )
  {
    if ( !(unsigned int)IsPrivileged(&RequiredPrivileges) )
      return 3221225569LL;
  }
  else if ( (*(_DWORD *)(v9 + 32) & 4) != 0 )
  {
    return 3221225488LL;
  }
  v11 = (void **)gpidLogon;
LABEL_5:
  if ( gdwThreadEndSession )
  {
    if ( v17 == *(_QWORD *)(grpwinstaLogoff + 144LL) || gpidEndSession == *v11 )
    {
      v16 = v5 & ~(_BYTE)gdwShutdownFlags & 7;
      if ( !v16 || (unsigned int)PsGetCurrentThreadId() == gdwThreadEndSession )
        return 259LL;
      if ( (v5 & 1) != 0 || v9 == grpwinstaLogoff )
        return (v16 & 4) != 0 ? -1073741267 : 259;
      else
        return 2147483665LL;
    }
    else
    {
      return 3221226029LL;
    }
  }
  else
  {
    if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    {
      PoUserShutdownInitiated();
LABEL_8:
      v12 = v5 | 0x200;
      *a2 = v12;
      gdwShutdownFlags = v12;
      gdwThreadEndSession = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpsi + 2220LL) |= 1u;
      gpidEndSession = (void *)PsGetCurrentThreadProcessId();
      LockObjectAssignment(grpwinstaLogoff, v9);
      v13 = *(_DWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 144) = v17;
      gdwLocks = v13 & 3;
      result = 0LL;
      *(_DWORD *)(v9 + 32) = v13 | 0xA;
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    if ( (v5 & 0x8000) != 0 )
    {
      v5 &= ~0x8000u;
      *a2 = v5;
    }
    if ( (unsigned int)NotifyLogon(v5) )
      return 259LL;
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 772) )
      goto LABEL_8;
    return 3221225688LL;
  }
}
