/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140667284
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406671DC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140667F30 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     PsResumeThread @ 0x1404209F4 (PsResumeThread.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsSuspendThread @ 0x1404F399C (PsSuspendThread.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140669708 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1406BF7F4 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(__int64 a1, struct _KEVENT *a2, void *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rbx
  void *v6; // r14
  void *v7; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // r15d
  char v10; // r13
  _QWORD *NextProcessThread; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rtt
  char v15; // si
  char v16; // r13
  __int64 v17; // rcx
  PIMAGE_NT_HEADERS v18; // rax
  unsigned __int64 v19; // rtt
  char v21; // [rsp+30h] [rbp-1F8h]
  struct _KTHREAD *v25; // [rsp+60h] [rbp-1C8h]
  HANDLE v26[34]; // [rsp+A0h] [rbp-188h] BYREF
  _BYTE v27[48]; // [rsp+1B0h] [rbp-78h] BYREF

  v5 = (__int64)a3;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  v9 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL, 0LL, (__int64)a4);
    v10 = 1;
    v21 = 1;
    goto LABEL_4;
  }
  v10 = 0;
  v21 = 0;
  v6 = a3;
  ObfReferenceObjectWithTag(a3, 0x4F676244u);
  while ( v5 )
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    v7 = (void *)v5;
    ObfReferenceObjectWithTag((PVOID)v5, 0x4F676244u);
    if ( (*(_DWORD *)(v5 + 116) & 0x400) == 0 )
    {
      if ( (*(_DWORD *)(v5 + 1724) & 2) != 0
        || (PsSynchronizeWithThreadInsertion(v5, CurrentThread), (*(_DWORD *)(v5 + 1724) & 2) != 0) )
      {
        _m_prefetchw((const void *)(v5 + 1696));
        v14 = *(_QWORD *)(v5 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v14 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1696), v14 + 2, v14)
          || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v5 + 1696)) )
        {
          v15 = 10;
          if ( (int)PsSuspendThread(v5, 0LL) >= 0 )
            v15 = 42;
        }
        else
        {
          v15 = 18;
        }
        memset(v26, 0, sizeof(v26));
        if ( !v10 || (v15 & 0x10) != 0 )
        {
          v16 = 0;
          LODWORD(v26[5]) = 1;
          v26[7] = *(HANDLE *)(v5 + 1664);
        }
        else
        {
          v16 = 1;
          LODWORD(v26[5]) = 2;
          v17 = *(_QWORD *)(a1 + 952);
          if ( v17 )
            v26[7] = (HANDLE)DbgkpSectionToFileHandle(v17);
          else
            v26[7] = 0LL;
          v26[8] = *(HANDLE *)(a1 + 960);
          KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v27);
          v18 = RtlImageNtHeader(*(PVOID *)(a1 + 960));
          if ( v18 )
          {
            v26[11] = 0LL;
            v26[9] = *(HANDLE *)&v18->FileHeader.PointerToSymbolTable;
          }
          KiUnstackDetachProcess((struct _KTHREAD *)v27, 0);
        }
        v9 = DbgkpQueueMessage((PVOID)a1, (PVOID)v5, a2);
        if ( v9 < 0 )
        {
          if ( (v15 & 0x20) != 0 )
            PsResumeThread(v5, 0LL);
          if ( (v15 & 8) != 0 )
          {
            _m_prefetchw((const void *)(v5 + 1696));
            v19 = *(_QWORD *)(v5 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1696), v19 - 2, v19) )
              ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v5 + 1696));
          }
          if ( LODWORD(v26[5]) == 2 && v26[7] )
            ObCloseHandle(v26[7], 0);
          ObfDereferenceObjectWithTag((PVOID)v5, 0x6E457350u);
          break;
        }
        if ( v16 )
        {
          v10 = 0;
          v21 = 0;
          ObfReferenceObjectWithTag((PVOID)v5, 0x4F676244u);
          v6 = (void *)v5;
          DbgkSendSystemDllMessages((_QWORD *)v5, a2, v26);
        }
        else
        {
          v10 = v21;
        }
        CurrentThread = v25;
      }
    }
    NextProcessThread = PsGetNextProcessThread(a1, (_QWORD *)v5, v12, v13);
LABEL_4:
    v5 = (__int64)NextProcessThread;
  }
  if ( v9 >= 0 )
  {
    if ( v6 )
    {
      *a4 = v6;
      *a5 = v7;
    }
    else
    {
      if ( v7 )
        ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  }
  return (unsigned int)v9;
}
