/*
 * XREFs of RmpEnforcementInfoInitializeCommon @ 0x180009C18
 * Callers:
 *     RmpActivityHostAllocateAndInitialize @ 0x180009B58 (RmpActivityHostAllocateAndInitialize.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180039FF0 (-RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpEmptyWorkerCleanup @ 0x18003AD34 (RmpEmptyWorkerCleanup.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeCommon(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // edi
  char *v3; // rbx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  memset_0(v8, 0, sizeof(v8));
  v2 = TpAllocWork(&v9, RmpEnforcementWorkCallback, a1, (char *)RmSvcGlobals + 1864);
  if ( v2 < 0 || (v2 = RmpEmptyWorkerStart((struct _RM_EMPTY_WORKER_CONTEXT *)v8, a1), v2 < 0) )
  {
    v4 = v9;
  }
  else
  {
    v3 = (char *)a1 + 624;
    v2 = 0;
    memset_0(v3, 0, 0xC8uLL);
    RtlInitializeConditionVariable(v3 + 128);
    RtlInitializeConditionVariable(v3 + 136);
    v4 = 0LL;
    v5 = v8[0];
    *((_QWORD *)v3 + 15) = v9;
    v6 = v8[1];
    v9 = 0LL;
    *(_OWORD *)(v3 + 168) = v5;
    *(_OWORD *)(v3 + 184) = v6;
  }
  if ( v4 )
    TpReleaseWork();
  if ( v2 < 0 )
    RmpEmptyWorkerCleanup(v8);
  return (unsigned int)v2;
}
