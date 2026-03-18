/*
 * XREFs of xxxQueryInformationThread @ 0x1C0096AA8
 * Callers:
 *     NtUserQueryInformationThread @ 0x1C0096910 (NtUserQueryInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C0096E40 (-IsProcessUserService@@YAHQEAU_EPROCESS@@@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 *     GetTaskName @ 0x1C01CAF74 (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  struct _KTHREAD *v7; // rbp
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessWin32Process; // r15
  NTSTATUS result; // eax
  NTSTATUS v11; // esi
  PEPROCESS ThreadProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // rdx
  _QWORD *v18; // rax
  PEPROCESS v19; // rax
  struct _KPROCESS *v20; // rax
  __int64 v21; // rax
  struct _KTHREAD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbp
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 i; // rdi
  int v30; // eax
  struct _KTHREAD *v31; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PETHREAD Thread; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v34[24]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a4;
  v31 = 0LL;
  v7 = 0LL;
  ThreadWin32Thread = 0LL;
  ProcessWin32Process = 0LL;
  if ( a2 == 11 )
  {
    v11 = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v31 = (struct _KTHREAD *)Object;
    if ( v11 < 0 )
      return v11;
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
      ProcessWin32Process = PsGetProcessWin32Process(v31);
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
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v7, v13, v14, v15);
  }
  switch ( a2 )
  {
    case 0:
      v16 = *(_DWORD *)(a3 + 12);
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      if ( ThreadWin32Thread )
      {
        v17 = *(_QWORD *)(ThreadWin32Thread + 408);
        if ( v17 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v17 + 24) + 32LL) & 4) == 0 )
          {
            v18 = *(_QWORD **)(*(_QWORD *)(v17 + 8) + 16LL);
            if ( v18 )
              v18 = (_QWORD *)*v18;
            *(_QWORD *)a3 = v18;
          }
        }
      }
      if ( PsGetThreadProcessId(v7) != (HANDLE)gpidLogon && PsGetThreadProcessId(v7) != (HANDLE)gpidLogonUI )
      {
        v19 = PsGetThreadProcess(v7);
        if ( !(unsigned int)IsProcessDwm(v19) )
        {
          v20 = PsGetThreadProcess(v7);
          if ( !(unsigned int)IsProcessUserService(v20) )
          {
            if ( !ThreadWin32Thread || !*(_QWORD *)(ThreadWin32Thread + 408) )
            {
              *(_DWORD *)(a3 + 8) = 2;
LABEL_20:
              if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 780) )
                *(_DWORD *)(a3 + 12) |= 1u;
              if ( (*(_DWORD *)(a3 + 12) & 1) != 0
                && !*(_DWORD *)(a3 + 8)
                && *(_QWORD *)(gptiCurrent + 408LL) != *(_QWORD *)(ThreadWin32Thread + 408) )
              {
                LockW32Thread(ThreadWin32Thread, v34);
                if ( *(_QWORD *)(gptiCurrent + 408LL) )
                  v11 = xxxRestoreCsrssThreadDesktop(a3 + 16, 0LL);
                if ( v11 >= 0 )
                  v11 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 408));
                PopAndFreeW32ThreadLock((__int64)v34, v23, v24, v25);
              }
              goto LABEL_24;
            }
            v21 = *(_QWORD *)(ThreadWin32Thread + 376);
            if ( !v21 || (*(_DWORD *)(v21 + 768) & 0x80u) == 0 || (v16 & 0x800) != 0 )
              goto LABEL_20;
          }
        }
      }
      *(_DWORD *)(a3 + 8) = 1;
      goto LABEL_20;
    case 1:
      if ( ThreadWin32Thread )
      {
        v30 = *(_DWORD *)(ThreadWin32Thread + 440);
LABEL_58:
        *(_DWORD *)a3 = v30;
        goto LABEL_24;
      }
LABEL_65:
      v11 = -1073741816;
      goto LABEL_24;
    case 2:
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v5);
        goto LABEL_24;
      }
      goto LABEL_65;
    case 3:
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      goto LABEL_24;
    case 4:
      if ( !ThreadWin32Thread )
      {
        *(_DWORD *)a3 = 0;
        goto LABEL_24;
      }
      v30 = IsThreadHung((_QWORD *)ThreadWin32Thread, *(_DWORD *)a3);
      goto LABEL_58;
    case 11:
      v26 = 0LL;
      if ( (unsigned int)v5 < 8 )
      {
        v11 = -1073741811;
      }
      else if ( ProcessWin32Process && (v27 = *(_DWORD *)(ProcessWin32Process + 352)) != 0 )
      {
        v28 = 8LL * (unsigned int)(v27 + 1);
        if ( v28 > v5 )
        {
          *(_QWORD *)a3 = v28;
          v11 = -1073741801;
        }
        else
        {
          for ( i = *(_QWORD *)(ProcessWin32Process + 288); i; i = *(_QWORD *)(i + 584) )
          {
            *(_QWORD *)(a3 + 8 * v26) = PsGetThreadId(*(PETHREAD *)i);
            v26 = (unsigned int)(v26 + 1);
          }
          *(_QWORD *)(a3 + 8 * v26) = 0LL;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
      v22 = v31;
      goto LABEL_25;
  }
  v11 = -1073741821;
LABEL_24:
  v22 = v7;
LABEL_25:
  ObfDereferenceObject(v22);
  return v11;
}
