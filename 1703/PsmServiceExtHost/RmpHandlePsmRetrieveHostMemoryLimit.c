/*
 * XREFs of RmpHandlePsmRetrieveHostMemoryLimit @ 0x180015204
 * Callers:
 *     PsmRetrieveHostMemoryLimit @ 0x180015020 (PsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180004898 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005DE0 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006120 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006300 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x180015680 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpHandlePsmRetrieveHostMemoryLimit(
        void *Src,
        unsigned int a2,
        wchar_t *Source,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  wchar_t *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  int v19; // eax
  struct _RM_ACTIVITY_HOST *v20; // rbx
  unsigned int v21; // edi
  unsigned __int64 v22; // rax
  bool v23; // zf
  struct _RM_ACTIVITY_HOST *v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+68h] [rbp-98h]
  wchar_t Destination[280]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[560]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v25 = 0LL;
  RmpPsmAppInstanceIdInitialize(Destination, Source, Src, a2, a4, a5);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = 4LL;
  v7 = v32;
  v8 = Destination;
  do
  {
    v9 = *((_OWORD *)v8 + 1);
    *v7 = *(_OWORD *)v8;
    v10 = *((_OWORD *)v8 + 2);
    v7[1] = v9;
    v11 = *((_OWORD *)v8 + 3);
    v7[2] = v10;
    v12 = *((_OWORD *)v8 + 4);
    v7[3] = v11;
    v13 = *((_OWORD *)v8 + 5);
    v7[4] = v12;
    v14 = *((_OWORD *)v8 + 6);
    v7[5] = v13;
    v15 = *((_OWORD *)v8 + 7);
    v8 += 64;
    v7[6] = v14;
    v7 += 8;
    *(v7 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = *(_OWORD *)v8;
  v17 = *((_OWORD *)v8 + 1);
  v18 = *((_QWORD *)v8 + 4);
  *v7 = v16;
  v7[1] = v17;
  *((_QWORD *)v7 + 4) = v18;
  v19 = RmpActivityHostFindByTypeAndIdentifier(RmSvcGlobals, 0LL, v32, &v25);
  v20 = v25;
  v21 = v19;
  if ( v19 >= 0 )
  {
    RmpActivityHostAggregateCommitValues(v25);
    memset_0(&v26, 0, 0x38uLL);
    v29 = 1;
    v30 = 100;
    v28 = RmpActivityHostComputeCommitLimit(v20);
    RmpActivityHostGetCommitThresholds(v20, 0LL, &v26, &v27, (unsigned __int64 *)&v25);
    RmpActivityHostPopulateRunnabilitySettings(v20, (struct _RM_ENFORCEMENT_SETTINGS *)&v26);
    v22 = v28;
    v23 = v28 == -1LL;
    *((_QWORD *)v20 + 86) = v28;
    if ( v23 )
      v22 = 0LL;
    *a6 = v22;
    v21 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v20 )
    RmpObjectRelease(v20);
  return v21;
}
