/*
 * XREFs of xxxQueryInformationThread @ 0x1401535CC
 * Callers:
 *     NtUserQueryInformationThread @ 0x1401533A0 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     xxxSetCsrssThreadDesktop @ 0x140056850 (xxxSetCsrssThreadDesktop.c)
 *     W32GetThreadWin32Thread @ 0x1400574EC (W32GetThreadWin32Thread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140057630 (xxxRestoreCsrssThreadDesktop.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?IsProcessUserService@@YA_NPEAU_EPROCESS@@PEAX@Z @ 0x140153B18 (-IsProcessUserService@@YA_NPEAU_EPROCESS@@PEAX@Z.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140153F80 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x140264778 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x14028D0C4 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     GetTaskName @ 0x1402A6E4C (GetTaskName.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned __int64 v4; // r13
  NTSTATUS result; // eax
  NTSTATUS v8; // r14d
  PEPROCESS ThreadProcess; // rax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rbx
  int v13; // edi
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  int v16; // r13d
  PEPROCESS v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 ProcessWin32Process; // rax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  PACCESS_TOKEN v32; // r14
  unsigned int v33; // r15d
  int v34; // eax
  unsigned __int64 v35; // rcx
  __int64 i; // rbx
  int v37; // r15d
  int v38; // r15d
  int v39; // r15d
  struct tagTHREADINFO *v40; // r15
  PVOID *v41; // rsi
  HANDLE ThreadId; // rax
  __int64 v43; // rcx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  PETHREAD Thread; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v48[16]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v49; // [rsp+70h] [rbp-10h]
  int v50; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a4;
  Object = 0LL;
  Thread = 0LL;
  if ( a2 == 11 )
  {
    result = ObReferenceObjectByHandleWithTag(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, 0x47727355u, &Object, 0LL);
    v13 = result;
    if ( result < 0 )
      return result;
    ProcessSessionId = PsGetProcessSessionIdEx(Object);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId(v26) )
    {
      v50 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4584LL);
    }
    goto LABEL_30;
  }
  result = ObReferenceObjectByHandleWithTag(
             a1,
             0x40u,
             (POBJECT_TYPE)PsThreadType,
             1,
             0x47727355u,
             (PVOID *)&Thread,
             0LL);
  v8 = result;
  if ( result < 0 )
    return result;
  ThreadProcess = PsGetThreadProcess(Thread);
  v10 = PsGetProcessSessionIdEx(ThreadProcess);
  if ( v10 != (unsigned int)W32GetCurrentWin32kSessionId(v11) )
  {
    v50 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4600LL);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
  v13 = v8;
  v14 = 0;
  if ( a2 )
  {
    v37 = a2 - 1;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 2;
        if ( v39 )
        {
          if ( v39 != 7 )
          {
            v13 = -1073741821;
            goto LABEL_19;
          }
LABEL_30:
          v27 = 0LL;
          ProcessWin32Process = PsGetProcessWin32Process(Object);
          v29 = ProcessWin32Process;
          if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
          {
            v30 = *(_DWORD *)(ProcessWin32Process + 276);
            if ( (v30 & 0xC0) == 0 )
            {
              *(_DWORD *)(v29 + 276) = v30 & 0xFFFFFF3F | 0x40;
              v32 = PsReferencePrimaryToken((PEPROCESS)Object);
              if ( v32 )
              {
                v50 = 0;
                v46 = 0LL;
                v47 = 0LL;
                if ( (int)AppModelPolicy_GetPolicy_Internal(v32, v31, &v50, &v47, &v46) >= 0 && v50 == 65537 )
                {
                  *(_DWORD *)(v29 + 276) = *(_DWORD *)(v29 + 276) & 0xFFFFFF3F | 0x80;
                }
                else if ( IsProcessUserService((struct _EPROCESS *)Object, v32) )
                {
                  *(_DWORD *)(v29 + 276) |= 0xC0u;
                }
                ObfDereferenceObject(v32);
              }
            }
            v27 = v29;
          }
          v33 = 0;
          if ( (unsigned int)v4 < 8 )
          {
            v13 = -1073741811;
          }
          else if ( v27 && (v34 = *(_DWORD *)(v27 + 376)) != 0 )
          {
            v35 = 8LL * (unsigned int)(v34 + 1);
            if ( v35 > v4 )
            {
              *(_QWORD *)a3 = v35;
              v13 = -1073741801;
            }
            else
            {
              for ( i = *(_QWORD *)(v27 + 328); i; i = *(_QWORD *)(i + 696) )
              {
                ThreadId = PsGetThreadId(*(PETHREAD *)i);
                v43 = v33++;
                *(_QWORD *)&a3[2 * v43] = ThreadId;
              }
              *(_QWORD *)&a3[2 * v33] = 0LL;
            }
          }
          else
          {
            *(_QWORD *)a3 = 0LL;
          }
          goto LABEL_19;
        }
        if ( ThreadWin32Thread )
          v14 = IsThreadHungTimeCheck((const struct tagTHREADINFO *)ThreadWin32Thread, *a3);
LABEL_75:
        *a3 = v14;
        goto LABEL_19;
      }
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, (unsigned int)v4);
        goto LABEL_19;
      }
    }
    else if ( ThreadWin32Thread )
    {
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(ThreadWin32Thread + 520), 0, 0);
      goto LABEL_75;
    }
    v13 = -1073741816;
    goto LABEL_19;
  }
  v15 = Thread;
  v16 = a3[3] & 0x800;
  *(_OWORD *)a3 = 0LL;
  v17 = PsGetThreadProcess(v15);
  v18 = PsGetProcessWin32Process(v17);
  v19 = v18;
  if ( v18 && *(_QWORD *)v18 )
  {
    if ( (*(_DWORD *)(v18 + 276) & 0xC0) == 0 )
    {
      v50 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4735LL);
    }
    v20 = *(_DWORD *)(v19 + 276) & 0xC0;
    if ( v20 == 192 || v20 == 128 && !v16 )
    {
      a3[2] = 1;
      goto LABEL_26;
    }
    if ( ThreadWin32Thread )
    {
      v21 = *(_QWORD *)(ThreadWin32Thread + 488);
      if ( v21 )
      {
        v22 = *(unsigned int *)(*(_QWORD *)(v21 + 40) + 32LL);
        if ( (v22 & 4) == 0 )
        {
          v23 = *(__int64 **)(*(_QWORD *)(v21 + 8) + 24LL);
          if ( v23 )
            v24 = *v23;
          else
            v24 = 0LL;
          *(_QWORD *)a3 = v24;
        }
        v13 = v8;
        if ( *(_DWORD *)(ThreadWin32Thread + 932) )
        {
          a3[3] |= 1u;
          v40 = PtiCurrent(v22);
          if ( *((_QWORD *)v40 + 61) != *(_QWORD *)(ThreadWin32Thread + 488) )
          {
            Win32RawLockedW32Thread::Win32RawLockedW32Thread(
              (Win32RawLockedW32Thread *)v48,
              (struct _W32THREAD *)ThreadWin32Thread);
            v41 = (PVOID *)(a3 + 4);
            if ( !*((_QWORD *)v40 + 61) || (v13 = xxxRestoreCsrssThreadDesktop(v41, 0), v13 >= 0) )
              v13 = xxxSetCsrssThreadDesktop(*(_DWORD **)(ThreadWin32Thread + 488), v41);
            if ( v49 != -1 )
              PopAndFreeW32ThreadLock((__int64)v48);
          }
        }
        goto LABEL_19;
      }
    }
  }
  a3[2] = 2;
LABEL_26:
  v13 = v8;
LABEL_19:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x47727355u);
  if ( Thread )
    ObfDereferenceObjectWithTag(Thread, 0x47727355u);
  return v13;
}
