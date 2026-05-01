/*
 * XREFs of RmpActivityHostActOnProcesses @ 0x1800077F4
 * Callers:
 *     RmpActivityHostNewProcessNotification @ 0x180003578 (RmpActivityHostNewProcessNotification.c)
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x180003804 (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     RmpActivityHostApplyExecutionSpeed @ 0x180007320 (RmpActivityHostApplyExecutionSpeed.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180007494 (RmpActivityHostQueryCommitDebt.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002A430 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpActivityHostDecommitOfferedMemory @ 0x18002EE78 (RmpActivityHostDecommitOfferedMemory.c)
 *     RmpActivityHostQueryOfferedMemory @ 0x18002F36C (RmpActivityHostQueryOfferedMemory.c)
 *     RmpActivityHostSetCommitSavings @ 0x18002F790 (RmpActivityHostSetCommitSavings.c)
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180004B80 (-RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800072A0 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     RmpSystemIsProcessInApplication @ 0x180007440 (RmpSystemIsProcessInApplication.c)
 *     RmpActivityHostGetPsmProcessList @ 0x1800079A4 (RmpActivityHostGetPsmProcessList.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, _QWORD, _QWORD),
        _QWORD *a5)
{
  unsigned int *v9; // r14
  NTSTATUS PsmProcessList; // ebx
  ACCESS_MASK v11; // r12d
  __int64 v12; // rsi
  void *v13; // rax
  int v14; // eax
  unsigned int v16; // [rsp+38h] [rbp-31h]
  void *ProcessHandle; // [rsp+40h] [rbp-29h] BYREF
  PVOID P; // [rsp+48h] [rbp-21h]
  _CLIENT_ID ClientId; // [rsp+58h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+5Fh]

  P = 0LL;
  ProcessHandle = 0LL;
  if ( *((_DWORD *)a1 + 12) == 1 )
  {
    PsmProcessList = a4(a1, *((_QWORD *)a1 + 91), *((unsigned int *)a1 + 14), a5);
    if ( (a3 & 1) != 0 )
      PsmProcessList = 0;
  }
  else
  {
    v9 = (unsigned int *)P;
    PsmProcessList = RmpActivityHostGetPsmProcessList(a1);
    if ( PsmProcessList >= 0 )
    {
      v11 = a2 | 0x1000;
      v12 = 0LL;
      if ( v16 )
      {
        while ( 1 )
        {
          if ( ProcessHandle )
          {
            NtClose(ProcessHandle);
            ProcessHandle = 0LL;
          }
          v13 = (void *)v9[2 * v12];
          ClientId.UniqueThread = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          v21 = (unsigned int)v13;
          ClientId.UniqueProcess = v13;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          PsmProcessList = NtOpenProcess(&ProcessHandle, v11, &ObjectAttributes, &ClientId);
          if ( PsmProcessList < 0
            || RmpSystemIsProcessInApplication(a1, ProcessHandle)
            && ((char *)a4 != (char *)RmpActivityHostCommitDebtCallback
              ? ((char *)a4 != (char *)RmpEnforcementApplyForegroundBoost
               ? (v14 = a4(a1, ProcessHandle, v21, a5))
               : (v14 = RmpEnforcementApplyForegroundBoost(a1, ProcessHandle, v21, a5)))
              : (v14 = RmpActivityHostCommitDebtCallback(a1, ProcessHandle, v21, a5)),
                PsmProcessList = v14,
                v14 < 0) )
          {
            if ( (a3 & 1) == 0 )
              break;
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v16 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        PsmProcessList = 0;
      }
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)PsmProcessList;
}
