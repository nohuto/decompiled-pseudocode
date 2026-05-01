/*
 * XREFs of ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E298
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800162F4 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_TYPE@@PEA_KKPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BE4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTI.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800182B4 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCreateHostProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PROCESS_INFO *a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  int v6; // ebx
  struct _RM_ACTIVITY_HOST *v7; // rbx
  struct _RM_ACTIVITY_HOST *v8; // rcx
  struct _RM_ACTIVITY_HOST *v9; // rcx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  v6 = RmpActivityHostAllocateAndInitialize((__int64)a1, (volatile signed __int64 *)a2, 1, 0LL, 0, P);
  if ( v6 < 0 )
  {
    v9 = (struct _RM_ACTIVITY_HOST *)P[0];
  }
  else
  {
    v7 = (struct _RM_ACTIVITY_HOST *)P[0];
    v8 = (struct _RM_ACTIVITY_HOST *)P[0];
    *((_DWORD *)P[0] + 16) = a3->Process.dwProcessId;
    RmpActivityHostCompleteInitialization(v8);
    v9 = 0LL;
    *a4 = v7;
    P[0] = 0LL;
    v6 = 0;
  }
  if ( v9 )
  {
    RmpActivityHostCleanupCommonState(v9);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  }
  return (unsigned int)v6;
}
