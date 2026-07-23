/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140618800
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x140618758 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsResumeThread @ 0x1404B2870 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1404EAC24 (PsSuspendThread.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14061AD68 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14067D3B4 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(__int64 a1, struct _KEVENT *a2, void *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rbx
  void *v6; // r14
  void *v7; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // r12d
  char v10; // r13
  _QWORD *NextProcessThread; // rax
  char v12; // si
  char v13; // r13
  __int64 v14; // rcx
  PIMAGE_NT_HEADERS v15; // rax
  char v17; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *v20; // [rsp+50h] [rbp-1C8h]
  HANDLE v22[34]; // [rsp+90h] [rbp-188h] BYREF
  _BYTE v23[48]; // [rsp+1A0h] [rbp-78h] BYREF

  v5 = (__int64)a3;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v20 = CurrentThread;
  v9 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v10 = 1;
    v17 = 1;
    goto LABEL_4;
  }
  v10 = 0;
  v17 = 0;
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
      if ( (*(_DWORD *)(v5 + 1728) & 2) != 0
        || (PsSynchronizeWithThreadInsertion(v5, CurrentThread), (*(_DWORD *)(v5 + 1728) & 2) != 0) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v5 + 1704)) )
        {
          v12 = 10;
          if ( (int)PsSuspendThread(v5, 0LL) >= 0 )
            v12 = 42;
        }
        else
        {
          v12 = 18;
        }
        memset(v22, 0, sizeof(v22));
        if ( !v10 || (v12 & 0x10) != 0 )
        {
          v13 = 0;
          LODWORD(v22[5]) = 1;
          v22[7] = *(HANDLE *)(v5 + 1672);
        }
        else
        {
          v13 = 1;
          LODWORD(v22[5]) = 2;
          v14 = *(_QWORD *)(a1 + 952);
          if ( v14 )
            v22[7] = (HANDLE)DbgkpSectionToFileHandle(v14);
          else
            v22[7] = 0LL;
          v22[8] = *(HANDLE *)(a1 + 960);
          KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v23);
          v15 = RtlImageNtHeader(*(PVOID *)(a1 + 960));
          if ( v15 )
          {
            v22[11] = 0LL;
            v22[9] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
          }
          KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
        }
        v9 = DbgkpQueueMessage((PVOID)a1, (PVOID)v5, a2);
        if ( v9 < 0 )
        {
          if ( (v12 & 0x20) != 0 )
            PsResumeThread(v5, 0LL);
          if ( (v12 & 8) != 0 )
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v5 + 1704));
          if ( LODWORD(v22[5]) == 2 && v22[7] )
            ObCloseHandle(v22[7], 0);
          ObfDereferenceObjectWithTag((PVOID)v5, 0x6E457350u);
          break;
        }
        if ( v13 )
        {
          v10 = 0;
          v17 = 0;
          ObfReferenceObjectWithTag((PVOID)v5, 0x4F676244u);
          v6 = (void *)v5;
          DbgkSendSystemDllMessages((_QWORD *)v5, a2, v22);
        }
        else
        {
          v10 = v17;
        }
        CurrentThread = v20;
      }
    }
    NextProcessThread = PsGetNextProcessThread(a1, (_QWORD *)v5);
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
