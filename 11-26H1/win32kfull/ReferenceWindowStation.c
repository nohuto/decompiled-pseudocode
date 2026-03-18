/*
 * XREFs of ReferenceWindowStation @ 0x140173AB0
 * Callers:
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

NTSTATUS __fastcall ReferenceWindowStation(struct _KTHREAD *a1, void *a2, ACCESS_MASK a3, _QWORD *a4, int a5)
{
  PEPROCESS ThreadProcess; // rax
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  PVOID v15; // rsi
  __int64 v16; // rsi
  NTSTATUS result; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  ThreadProcess = PsGetThreadProcess(a1);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(ThreadProcess);
  v11 = ProcessWin32Process;
  if ( ProcessWin32Process && !*ProcessWin32Process )
    v11 = 0LL;
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( !v11 )
    goto LABEL_16;
  if ( !a5 || !v12 || (v14 = *(_QWORD *)(v12 + 488)) == 0 || v11[82] == *(_QWORD *)(v14 + 40) )
  {
    v15 = (PVOID)v11[82];
    if ( v15 )
    {
      if ( RtlAreAllAccessesGranted(*((_DWORD *)v11 + 168), a3) )
        goto LABEL_20;
      UserSetLastError(5);
      return -1073741790;
    }
    if ( !v12 )
      goto LABEL_16;
  }
  v16 = *(_QWORD *)(v12 + 488);
  if ( !v16 )
    goto LABEL_16;
  v15 = *(PVOID *)(v16 + 40);
  if ( !(unsigned int)AccessCheckObject(v15, a3, 0LL, WinStaMapping) )
    return -1073741790;
  if ( v15 )
  {
LABEL_20:
    *a4 = v15;
    return 0;
  }
LABEL_16:
  if ( !a2 )
    return -1073741275;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, a3, ExWindowStationObjectType, 0, &Object, 0LL);
  v15 = Object;
  if ( result >= 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_20;
  }
  return result;
}
