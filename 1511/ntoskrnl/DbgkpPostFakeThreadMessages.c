/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x1405EEB1C
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x1405EEA74 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     PsResumeThread @ 0x1404A7714 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1404B09A0 (PsSuspendThread.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1405F0A88 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14063EC60 (PsSynchronizeWithThreadInsertion.c)
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
  __int64 v16; // r8
  char v18; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *v22; // [rsp+60h] [rbp-1B8h]
  HANDLE v23[34]; // [rsp+90h] [rbp-188h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v24; // [rsp+1A0h] [rbp-78h] BYREF

  v5 = (__int64)a3;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v22 = CurrentThread;
  v9 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v10 = 1;
    v18 = 1;
    goto LABEL_4;
  }
  v10 = 0;
  v18 = 0;
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
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v5 + 1696)) )
        {
          v12 = 10;
          if ( (int)PsSuspendThread(v5, 0LL) >= 0 )
            v12 = 42;
        }
        else
        {
          v12 = 18;
        }
        memset(v23, 0, sizeof(v23));
        if ( !v10 || (v12 & 0x10) != 0 )
        {
          v13 = 0;
          LODWORD(v23[5]) = 1;
          v23[7] = *(HANDLE *)(v5 + 1664);
        }
        else
        {
          v13 = 1;
          LODWORD(v23[5]) = 2;
          v14 = *(_QWORD *)(a1 + 952);
          if ( v14 )
            v23[7] = (HANDLE)DbgkpSectionToFileHandle(v14);
          else
            v23[7] = 0LL;
          v23[8] = *(HANDLE *)(a1 + 960);
          KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v24);
          v15 = RtlImageNtHeader(*(PVOID *)(a1 + 960));
          if ( v15 )
          {
            v23[11] = 0LL;
            v23[9] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
          }
          KiUnstackDetachProcess(&v24, 0LL);
        }
        v9 = DbgkpQueueMessage((PVOID)a1, (PVOID)v5, a2);
        if ( v9 < 0 )
        {
          if ( (v12 & 0x20) != 0 )
            PsResumeThread(v5, 0LL, v16);
          if ( (v12 & 8) != 0 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1696));
          if ( LODWORD(v23[5]) == 2 && v23[7] )
            ObCloseHandle(v23[7], 0);
          ObfDereferenceObjectWithTag((PVOID)v5, 0x6E457350u);
          break;
        }
        if ( v13 )
        {
          v10 = 0;
          v18 = 0;
          ObfReferenceObjectWithTag((PVOID)v5, 0x4F676244u);
          v6 = (void *)v5;
          DbgkSendSystemDllMessages((_QWORD *)v5, a2, v23);
        }
        else
        {
          v10 = v18;
        }
        CurrentThread = v22;
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
