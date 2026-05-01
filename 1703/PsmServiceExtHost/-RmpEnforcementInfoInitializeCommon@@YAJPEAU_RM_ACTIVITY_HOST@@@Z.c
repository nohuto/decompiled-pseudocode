/*
 * XREFs of ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016DD4
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_TYPE@@PEA_KKPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BE4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@W4_RM_ACTI.c)
 * Callees:
 *     ?RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016EC0 (-RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18001AFF4 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeCommon(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // edi
  char *v3; // rbx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  memset_0(v8, 0, sizeof(v8));
  v2 = TpAllocWork(&v9, RmpEnforcementWorkCallback, a1, *((_QWORD *)a1 + 5) + 1224LL);
  if ( v2 < 0 || (v2 = RmpEmptyWorkerStart((struct _RM_EMPTY_WORKER_CONTEXT *)v8, a1), v2 < 0) )
  {
    v4 = v9;
  }
  else
  {
    v3 = (char *)a1 + 672;
    v2 = 0;
    memset_0(v3, 0, 0xF0uLL);
    *((_DWORD *)v3 + 10) = 1;
    *((_DWORD *)v3 + 12) = 100;
    RtlInitializeConditionVariable(v3 + 128);
    RtlInitializeConditionVariable(v3 + 136);
    v4 = 0LL;
    v5 = v8[0];
    *((_QWORD *)v3 + 15) = v9;
    v6 = v8[1];
    v9 = 0LL;
    *((_OWORD *)v3 + 13) = v5;
    *((_OWORD *)v3 + 14) = v6;
  }
  if ( v4 )
    TpReleaseWork();
  if ( v2 < 0 )
    RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)v8);
  return (unsigned int)v2;
}
