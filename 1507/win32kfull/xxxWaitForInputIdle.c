/*
 * XREFs of xxxWaitForInputIdle @ 0x1C00E00DC
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C00E0090 (NtUserWaitForInputIdle.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     LockProcessByClientId @ 0x1C008077C (LockProcessByClientId.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E02A8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C00E04DC (WaitOnPseudoEvent.c)
 *     ReferenceW32Process @ 0x1C00E07F0 (ReferenceW32Process.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  __int64 *v5; // rbx
  unsigned int result; // eax
  char ProcessExitProcessCalled; // al
  PVOID v8; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 i; // rax
  unsigned int v13; // edi
  __int64 j; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    v5 = (__int64 *)gpwtiFirst;
    if ( gpwtiFirst )
    {
      do
      {
        if ( *((_DWORD *)v5 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v5[2] == a1 )
          break;
        v5 = (__int64 *)*v5;
      }
      while ( v5 );
      if ( v5 )
      {
        result = WaitOnPseudoEvent(v5 + 4, a2);
        if ( result == 128 )
          return xxxPollAndWaitForSingleObject((PVOID)v5[4], 0LL, a2);
        return result;
      }
    }
    return -1;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == a1
    && gptiCurrent == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 304LL)
    || (int)LockProcessByClientId((__int64)a1, &Object) < 0 )
  {
    return -1;
  }
  ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
  v8 = Object;
  if ( ProcessExitProcessCalled )
  {
LABEL_25:
    ObfDereferenceObject(v8);
    return -1;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v10 = ProcessWin32Process;
  if ( !ProcessWin32Process || (v11 = *(_DWORD *)(ProcessWin32Process + 12), (v11 & 0x21) != 0x20) )
  {
    UserSetLastError(1471);
    v8 = Object;
    goto LABEL_25;
  }
  *(_DWORD *)(v10 + 12) = v11 | 0x20000;
  for ( i = *(_QWORD *)(v10 + 296); i; i = *(_QWORD *)(i + 592) )
    *(_DWORD *)(i + 448) |= 0x4000u;
  PushW32ThreadLock(v10, v15, (__int64)DereferenceW32Process);
  ReferenceW32Process(v10);
  ObfDereferenceObject(Object);
  v13 = WaitOnPseudoEvent(v10 + 16, a2);
  if ( v13 == 128 )
    v13 = xxxPollAndWaitForSingleObject(*(PVOID *)(v10 + 16), Object, a2);
  *(_DWORD *)(v10 + 12) &= ~0x20000u;
  for ( j = *(_QWORD *)(v10 + 296); j; j = *(_QWORD *)(j + 592) )
    *(_DWORD *)(j + 448) &= ~0x4000u;
  PopAndFreeW32ThreadLock((__int64)v15);
  return v13;
}
