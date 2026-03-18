/*
 * XREFs of xxxQueryInformationThread @ 0x1C00CE3F8
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C00CE260 (NtUserQueryInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     GetTaskName @ 0x1C01D31D0 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // ebp
  unsigned __int64 v5; // r12
  struct _KTHREAD *v7; // r13
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessWin32Process; // r15
  NTSTATUS result; // eax
  NTSTATUS v11; // esi
  PEPROCESS ThreadProcess; // rax
  int v13; // ebp
  __int64 v14; // rdx
  _QWORD *v15; // rax
  PEPROCESS v16; // rax
  __int64 v17; // rax
  struct _KTHREAD *v18; // rcx
  __int64 v19; // rbp
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 i; // rdi
  int v23; // eax
  struct _KTHREAD *v24; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PETHREAD Thread; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a4;
  v24 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 == 11 )
  {
    v11 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v24 = (struct _KTHREAD *)Object;
    if ( v11 < 0 )
      return v11;
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v24);
  }
  else
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, (PVOID *)&Thread, 0LL);
    v7 = Thread;
    v11 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess(Thread);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v7);
  }
  switch ( v4 )
  {
    case 0:
      v13 = *(_DWORD *)(a3 + 12);
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      if ( ThreadWin32Thread )
      {
        v14 = *(_QWORD *)(ThreadWin32Thread + 408);
        if ( v14 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 24) + 32LL) & 4) == 0 )
          {
            v15 = *(_QWORD **)(*(_QWORD *)(v14 + 8) + 16LL);
            if ( v15 )
              v15 = (_QWORD *)*v15;
            *(_QWORD *)a3 = v15;
          }
        }
      }
      if ( PsGetThreadProcessId(v7) != (HANDLE)gpidLogon && PsGetThreadProcessId(v7) != (HANDLE)gpidLogonUI )
      {
        v16 = PsGetThreadProcess(v7);
        if ( !(unsigned int)IsProcessDwm(v16) )
        {
          if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 408) )
          {
            *(_DWORD *)(a3 + 8) = 2;
LABEL_19:
            if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 772) )
              *(_DWORD *)(a3 + 12) |= 1u;
            if ( (*(_DWORD *)(a3 + 12) & 1) == 0
              || *(_DWORD *)(a3 + 8)
              || *(_QWORD *)(gptiCurrent + 408LL) == *(_QWORD *)(ThreadWin32Thread + 408) )
            {
              goto LABEL_23;
            }
            LockW32Thread(ThreadWin32Thread, v27);
            if ( *(_QWORD *)(gptiCurrent + 408LL) )
              v11 = xxxRestoreCsrssThreadDesktop(a3 + 16, 0LL);
            if ( v11 >= 0 )
              v11 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 408));
            PopAndFreeW32ThreadLock((__int64)v27);
            v4 = a2;
            goto LABEL_34;
          }
          v17 = *(_QWORD *)(ThreadWin32Thread + 376);
          if ( !v17 || (*(_DWORD *)(v17 + 776) & 0x80u) == 0 || (v13 & 0x800) != 0 )
            goto LABEL_19;
        }
      }
      *(_DWORD *)(a3 + 8) = 1;
      goto LABEL_19;
    case 1:
      if ( ThreadWin32Thread )
      {
        v23 = *(_DWORD *)(ThreadWin32Thread + 440);
LABEL_61:
        *(_DWORD *)a3 = v23;
        goto LABEL_23;
      }
LABEL_66:
      v11 = -1073741816;
      goto LABEL_23;
    case 2:
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
        goto LABEL_23;
      }
      goto LABEL_66;
    case 3:
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      goto LABEL_23;
    case 4:
      if ( !ThreadWin32Thread )
      {
        *(_DWORD *)a3 = 0;
        goto LABEL_23;
      }
      v23 = IsThreadHung((_QWORD *)ThreadWin32Thread, *(_DWORD *)a3);
      goto LABEL_61;
    case 11:
      v19 = 0LL;
      if ( (unsigned int)v5 < 8 )
      {
        v11 = -1073741811;
      }
      else if ( ProcessWin32Process && (v20 = *(_DWORD *)(ProcessWin32Process + 360)) != 0 )
      {
        v21 = 8LL * (unsigned int)(v20 + 1);
        if ( v21 > v5 )
        {
          *(_QWORD *)a3 = v21;
          v11 = -1073741801;
        }
        else
        {
          for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 584) )
          {
            *(_QWORD *)(a3 + 8 * v19) = PsGetThreadId(*(PETHREAD *)i);
            v19 = (unsigned int)(v19 + 1);
          }
          *(_QWORD *)(a3 + 8 * v19) = 0LL;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
      goto LABEL_52;
  }
  v11 = -1073741821;
LABEL_34:
  if ( v4 == 11 )
  {
LABEL_52:
    v18 = v24;
    goto LABEL_24;
  }
LABEL_23:
  v18 = v7;
LABEL_24:
  ObfDereferenceObject(v18);
  return v11;
}
