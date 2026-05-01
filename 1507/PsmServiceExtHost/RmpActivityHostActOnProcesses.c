/*
 * XREFs of RmpActivityHostActOnProcesses @ 0x18000AE60
 * Callers:
 *     RmpActivityHostQueryCommitDebt @ 0x1800059EC (RmpActivityHostQueryCommitDebt.c)
 *     RmpActivityHostOnImportanceChange @ 0x18000D0E0 (RmpActivityHostOnImportanceChange.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x180023A0C (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039DE0 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpActivityHostSetCommitSavings @ 0x18004242C (RmpActivityHostSetCommitSavings.c)
 * Callees:
 *     ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180001110 (-RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18000A0C0 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?IsProcessInApplication@ModernResourceEnforcer@@UEAAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18000B130 (-IsProcessInApplication@ModernResourceEnforcer@@UEAAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x18000C010 (-QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800238A0 (-RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        _QWORD *a5)
{
  unsigned __int64 *v5; // rsi
  bool v6; // zf
  ModernResourceEnforcer *v9; // r15
  unsigned __int64 *Heap; // rdi
  __int64 (__fastcall *v11)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *); // rbx
  int v12; // eax
  int v13; // ebx
  ACCESS_MASK v14; // r12d
  unsigned __int64 *v15; // rbx
  __int64 v16; // r13
  __int64 (__fastcall *v17)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // rsi
  struct _UNICODE_STRING *v18; // rcx
  void *v19; // rax
  unsigned __int8 (__fastcall *v20)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, void *); // rdi
  void *ProcessHandle; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 *v24; // [rsp+30h] [rbp-39h]
  char v25; // [rsp+38h] [rbp-31h] BYREF
  _CLIENT_ID ClientId; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+5Fh]
  unsigned int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 (__fastcall *v30)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // [rsp+E0h] [rbp+77h]

  v30 = a4;
  v29 = a3;
  v5 = 0LL;
  v6 = *((_DWORD *)a1 + 10) == 1;
  v9 = (ModernResourceEnforcer *)*((_QWORD *)RmSvcGlobals + 10);
  v24 = 0LL;
  ProcessHandle = 0LL;
  if ( v6 )
  {
    a4(a1, *((void **)a1 + 87), *((_DWORD *)a1 + 12), a5);
    v13 = 0;
  }
  else
  {
    v29 = 1;
    Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( Heap && RmSvcGlobals )
      _InterlockedIncrement64((volatile signed __int64 *)RmSvcGlobals + 261);
    if ( Heap )
    {
      do
      {
        v11 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *))(*(_QWORD *)v9 + 72LL);
        if ( v11 == ModernResourceEnforcer::QueryProcessList )
          v12 = ModernResourceEnforcer::QueryProcessList(v9, a1, Heap, &v29);
        else
          v12 = v11(v9, a1, Heap, &v29);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v5 = Heap;
          v24 = Heap;
          goto LABEL_10;
        }
        RmpFreeHeap(Heap);
        if ( v13 != -2147483643 )
          goto LABEL_10;
        Heap = (unsigned __int64 *)RmpAllocateHeap(8LL * v29);
      }
      while ( Heap );
      v13 = -1073741801;
LABEL_10:
      if ( v13 >= 0 )
      {
        v14 = a2 | 0x1000;
        if ( v29 )
        {
          v15 = v5;
          v16 = v29;
          v17 = v30;
          do
          {
            v18 = (struct _UNICODE_STRING *)ProcessHandle;
            if ( ProcessHandle )
            {
              NtClose(ProcessHandle);
              v18 = 0LL;
              ProcessHandle = 0LL;
            }
            v19 = (void *)*(unsigned int *)v15;
            ClientId.UniqueThread = v18;
            ObjectAttributes.RootDirectory = v18;
            ObjectAttributes.Attributes = (unsigned int)v18;
            ObjectAttributes.ObjectName = v18;
            v28 = (unsigned int)v19;
            ClientId.UniqueProcess = v19;
            ObjectAttributes.Length = 48;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenProcess(&ProcessHandle, v14, &ObjectAttributes, &ClientId) >= 0 )
            {
              v20 = *(unsigned __int8 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, void *))(*(_QWORD *)v9 + 80LL);
              if ( v20 == ModernResourceEnforcer::IsProcessInApplication
                 ? ModernResourceEnforcer::IsProcessInApplication(v9, a1, ProcessHandle)
                 : ((__int64 (__fastcall *)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, void *))v20)(
                     v9,
                     a1,
                     ProcessHandle) )
              {
                if ( (char *)v17 == (char *)RmpActivityHostCommitDebtCallback )
                {
                  RmpActivityHostCommitDebtCallback(a1, ProcessHandle, v28, a5);
                }
                else if ( (char *)v17 == (char *)RmpEnforcementApplyForegroundBoost )
                {
                  RmpEnforcementApplyForegroundBoost(a1, ProcessHandle, v28, a5);
                }
                else if ( v17 == RmpActivityHostSetStoreHighMemoryPriorityProcessCallback )
                {
                  RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(a1, ProcessHandle, v28, a5);
                }
                else
                {
                  v17(a1, ProcessHandle, v28, a5);
                }
              }
            }
            ++v15;
            --v16;
          }
          while ( v16 );
          v5 = v24;
        }
        v13 = 0;
      }
      if ( v5 )
      {
        if ( v5 != (unsigned __int64 *)&v25 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
          if ( RmSvcGlobals )
            _InterlockedDecrement64((volatile signed __int64 *)RmSvcGlobals + 261);
        }
      }
    }
    else
    {
      v13 = -1073741801;
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v13;
}
