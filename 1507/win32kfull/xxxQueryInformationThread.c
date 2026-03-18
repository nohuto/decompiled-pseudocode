/*
 * XREFs of xxxQueryInformationThread @ 0x1C012B334
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C012B1A0 (NtUserQueryInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007C660 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0 (xxxRestoreCsrssThreadDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     GetTaskName @ 0x1C01D159C (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // ebp
  unsigned __int64 v5; // r12
  struct _KTHREAD *v7; // r13
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessWin32Process; // r15
  int v10; // esi
  NTSTATUS result; // eax
  PEPROCESS ThreadProcess; // rax
  __int64 v13; // rbp
  int v14; // eax
  unsigned __int64 v15; // rcx
  __int64 i; // rdi
  int v17; // eax
  struct _KTHREAD *v18; // rcx
  int v19; // ebp
  __int64 v20; // rdx
  _QWORD *v21; // rax
  PEPROCESS v22; // rax
  __int64 v23; // rax
  struct _KTHREAD *v24; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v26; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a4;
  v24 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 != 11 )
  {
    result = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v26, 0LL);
    v7 = (struct _KTHREAD *)v26;
    v10 = result;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess((PETHREAD)v26);
    if ( (unsigned int)PsGetProcessSessionId(ThreadProcess) == gSessionId )
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v7);
LABEL_8:
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1:
          if ( ThreadWin32Thread )
          {
            v17 = *(_DWORD *)(ThreadWin32Thread + 448);
            goto LABEL_28;
          }
          break;
        case 2:
          if ( ThreadWin32Thread )
          {
            GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
            goto LABEL_29;
          }
          break;
        case 3:
          *(_QWORD *)a3 = 0LL;
          *(_QWORD *)(a3 + 8) = 0LL;
          goto LABEL_29;
        case 4:
          if ( !ThreadWin32Thread )
          {
            *(_DWORD *)a3 = 0;
            goto LABEL_29;
          }
          v17 = IsThreadHung((_QWORD *)ThreadWin32Thread, *(_DWORD *)a3);
LABEL_28:
          *(_DWORD *)a3 = v17;
          goto LABEL_29;
        case 11:
          v13 = 0LL;
          if ( (unsigned int)v5 >= 8 )
          {
            if ( ProcessWin32Process && (v14 = *(_DWORD *)(ProcessWin32Process + 360)) != 0 )
            {
              v15 = 8LL * (unsigned int)(v14 + 1);
              if ( v15 <= v5 )
              {
                for ( i = *(_QWORD *)(ProcessWin32Process + 296); i; i = *(_QWORD *)(i + 592) )
                {
                  *(_QWORD *)(a3 + 8 * v13) = PsGetThreadId(*(PETHREAD *)i);
                  v13 = (unsigned int)(v13 + 1);
                }
                *(_QWORD *)(a3 + 8 * v13) = 0LL;
              }
              else
              {
                *(_QWORD *)a3 = v15;
                v10 = -1073741801;
              }
            }
            else
            {
              *(_QWORD *)a3 = 0LL;
            }
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_67;
        default:
          v10 = -1073741821;
LABEL_66:
          if ( v4 == 11 )
          {
LABEL_67:
            v18 = v24;
            goto LABEL_30;
          }
LABEL_29:
          v18 = v7;
LABEL_30:
          ObfDereferenceObject(v18);
          return v10;
      }
      v10 = -1073741816;
      goto LABEL_29;
    }
    v19 = *(_DWORD *)(a3 + 12);
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    if ( ThreadWin32Thread )
    {
      v20 = *(_QWORD *)(ThreadWin32Thread + 416);
      if ( v20 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v20 + 24) + 32LL) & 4) == 0 )
        {
          v21 = *(_QWORD **)(*(_QWORD *)(v20 + 8) + 16LL);
          if ( v21 )
            v21 = (_QWORD *)*v21;
          *(_QWORD *)a3 = v21;
        }
      }
    }
    if ( PsGetThreadProcessId(v7) != (HANDLE)gpidLogon && PsGetThreadProcessId(v7) != (HANDLE)gpidLogonUI )
    {
      v22 = PsGetThreadProcess(v7);
      if ( !(unsigned int)IsProcessDwm(v22) )
      {
        if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 416) )
        {
          *(_DWORD *)(a3 + 8) = 2;
LABEL_55:
          if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 780) )
            *(_DWORD *)(a3 + 12) |= 1u;
          if ( (*(_DWORD *)(a3 + 12) & 1) == 0
            || *(_DWORD *)(a3 + 8)
            || *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(ThreadWin32Thread + 416) )
          {
            goto LABEL_29;
          }
          LockW32Thread(ThreadWin32Thread, (__int64)v27);
          if ( *(_QWORD *)(gptiCurrent + 416LL) )
            v10 = xxxRestoreCsrssThreadDesktop((_QWORD *)(a3 + 16), 0);
          if ( v10 >= 0 )
            v10 = xxxSetCsrssThreadDesktop(*(_DWORD **)(ThreadWin32Thread + 416), (PVOID *)(a3 + 16));
          PopAndFreeW32ThreadLock((__int64)v27);
          v4 = a2;
          goto LABEL_66;
        }
        v23 = *(_QWORD *)(ThreadWin32Thread + 384);
        if ( !v23 || (*(_DWORD *)(v23 + 776) & 0x80u) == 0 || (v19 & 0x800) != 0 )
          goto LABEL_55;
      }
    }
    *(_DWORD *)(a3 + 8) = 1;
    goto LABEL_55;
  }
  v10 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Object, 0LL);
  v24 = Object;
  if ( v10 >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v24);
    goto LABEL_8;
  }
  return v10;
}
