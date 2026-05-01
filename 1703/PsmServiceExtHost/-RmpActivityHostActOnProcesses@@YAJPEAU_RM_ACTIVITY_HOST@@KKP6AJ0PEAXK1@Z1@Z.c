/*
 * XREFs of ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800071B0
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180002994 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180006FF0 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B920 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BA78 (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18002E330 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002EB64 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800323E0 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180002CC0 (-RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180004CA0 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800074C0 (-RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        __int64 (__fastcall *a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        _QWORD *a5)
{
  unsigned int *v6; // rsi
  bool v7; // zf
  unsigned int *Heap; // r14
  char *v11; // rdx
  char *v12; // r10
  int v13; // eax
  NTSTATUS v14; // edi
  unsigned int v15; // r13d
  ACCESS_MASK v16; // r15d
  unsigned int v17; // r14d
  unsigned int *v18; // r12
  int v19; // ecx
  int OfferedMemoryDxgCallback; // eax
  PVOID ProcessHeap; // rcx
  unsigned int *v23; // rax
  unsigned int v24; // [rsp+48h] [rbp-41h] BYREF
  void *ProcessHandle; // [rsp+50h] [rbp-39h] BYREF
  char v26; // [rsp+58h] [rbp-31h] BYREF
  _CLIENT_ID ClientId; // [rsp+60h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v29; // [rsp+E8h] [rbp+5Fh]
  unsigned int v30; // [rsp+E8h] [rbp+5Fh]

  v6 = 0LL;
  v7 = *((_DWORD *)a1 + 14) == 1;
  ProcessHandle = 0LL;
  if ( v7 )
  {
    v14 = a4(a1, *((void **)a1 + 91), *((_DWORD *)a1 + 16), a5);
    if ( (a3 & 1) != 0 )
      v14 = 0;
  }
  else
  {
    v24 = 1;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( Heap )
    {
      v11 = (char *)a1 + 64;
      v12 = (char *)a1 + 528;
      while ( 1 )
      {
        v13 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 152LL))(
                v12,
                *((unsigned int *)a1 + 149),
                v11,
                *((unsigned int *)a1 + 150),
                *((_QWORD *)a1 + 3),
                Heap,
                &v24);
        v14 = v13;
        if ( v13 >= 0 )
        {
          v15 = v24;
          v6 = Heap;
          goto LABEL_6;
        }
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( v13 != -2147483643 )
          break;
        RtlFreeHeap(ProcessHeap, 0, Heap);
        v23 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v24);
        v11 = (char *)a1 + 64;
        Heap = v23;
        v12 = (char *)a1 + 528;
        if ( !v23 )
        {
          v15 = v29;
          v14 = -1073741801;
          goto LABEL_6;
        }
      }
      RtlFreeHeap(ProcessHeap, 0, Heap);
      v15 = v29;
LABEL_6:
      if ( v14 >= 0 )
      {
        v14 = 0;
        v16 = a2 | 0x1000;
        v17 = 0;
        if ( v15 )
        {
          v18 = v6;
          do
          {
            if ( ProcessHandle )
            {
              NtClose(ProcessHandle);
              ProcessHandle = 0LL;
            }
            v30 = *v18;
            ClientId.UniqueProcess = (HANDLE)*v18;
            ClientId.UniqueThread = 0LL;
            ObjectAttributes.Length = 48;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            memset(&ObjectAttributes.RootDirectory, 0, 20);
            v14 = NtOpenProcess(&ProcessHandle, v16, &ObjectAttributes, &ClientId);
            if ( v14 < 0 )
            {
              if ( (a3 & 1) == 0 )
                break;
            }
            else
            {
              v19 = *((_DWORD *)a1 + 14);
              if ( v19 )
              {
                if ( v19 != 1 || NtIsProcessInJob(ProcessHandle, *((HANDLE *)a1 + 92)) != 292 )
                  goto LABEL_17;
              }
              else if ( !(*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 160LL))(
                           (char *)a1 + 528,
                           *((unsigned int *)a1 + 149),
                           (char *)a1 + 64,
                           *((unsigned int *)a1 + 150),
                           *((_QWORD *)a1 + 3),
                           ProcessHandle) )
              {
                goto LABEL_17;
              }
              if ( a4 == RmpActivityHostQueryOfferedMemoryDxgCallback )
              {
                OfferedMemoryDxgCallback = RmpActivityHostQueryOfferedMemoryDxgCallback(a1, ProcessHandle, v30, a5);
              }
              else if ( (char *)a4 == (char *)RmpActivityHostCommitDebtCallback )
              {
                OfferedMemoryDxgCallback = RmpActivityHostCommitDebtCallback(a1, ProcessHandle, v30, a5);
              }
              else if ( (char *)a4 == (char *)RmpEnforcementApplyForegroundBoost )
              {
                OfferedMemoryDxgCallback = RmpEnforcementApplyForegroundBoost(a1, ProcessHandle, v30, a5);
              }
              else
              {
                OfferedMemoryDxgCallback = a4(a1, ProcessHandle, v30, a5);
              }
              v14 = OfferedMemoryDxgCallback;
              if ( OfferedMemoryDxgCallback < 0 && (a3 & 1) == 0 )
                break;
            }
LABEL_17:
            ++v17;
            v18 += 2;
            v14 = 0;
          }
          while ( v17 < v15 );
        }
      }
      if ( v6 && v6 != (unsigned int *)&v26 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v14 = -1073741801;
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v14;
}
