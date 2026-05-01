/*
 * XREFs of RmpEnforcementInfoInitializeCommon @ 0x1800079B4
 * Callers:
 *     RmpActivityHostAllocateAndInitialize @ 0x1800078F4 (RmpActivityHostAllocateAndInitialize.c)
 * Callees:
 *     ?RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007A9C (-RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpEmptyWorkerCleanup @ 0x18001BC5C (RmpEmptyWorkerCleanup.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
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
  v2 = TpAllocWork(&v9, &RmpEnforcementWorkCallback, a1, (char *)RmSvcGlobals + 1792);
  if ( v2 < 0 || (v2 = RmpEmptyWorkerStart((struct _RM_EMPTY_WORKER_CONTEXT *)v8, a1), v2 < 0) )
  {
    v4 = v9;
  }
  else
  {
    v3 = (char *)a1 + 624;
    v2 = 0;
    memset_0(v3, 0, 0xD0uLL);
    RtlInitializeConditionVariable(v3 + 136);
    RtlInitializeConditionVariable(v3 + 144);
    v4 = 0LL;
    v5 = v8[0];
    *((_QWORD *)v3 + 16) = v9;
    v6 = v8[1];
    v9 = 0LL;
    *((_OWORD *)v3 + 11) = v5;
    *((_OWORD *)v3 + 12) = v6;
  }
  if ( v4 )
    TpReleaseWork();
  if ( v2 < 0 )
    RmpEmptyWorkerCleanup(v8);
  return (unsigned int)v2;
}
