/*
 * XREFs of RmpActivityHostRevokeResourceSets @ 0x18002F600
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180032AA8 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     RmpPolicyReclaimHostList @ 0x180034270 (RmpPolicyReclaimHostList.c)
 * Callees:
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivityHostQueryEffectivePriority @ 0x18002F2D0 (RmpActivityHostQueryEffectivePriority.c)
 *     RmpPolicyTryGetRevokeAction @ 0x1800343D0 (RmpPolicyTryGetRevokeAction.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostRevokeResourceSets(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  UCHAR v6; // dl
  TraceLoggingHProvider v7; // rcx
  BOOLEAN v8; // al
  int v9; // r8d
  unsigned int v10; // ebx
  int EffectivePriority; // eax
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v16; // rax
  struct ExecutionModel::ResourceSet *result; // rax
  struct ExecutionModel::ResourceSet *v18; // rbx
  char v19; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-59h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-29h]
  unsigned int v26; // [rsp+78h] [rbp-21h]
  int v27; // [rsp+7Ch] [rbp-1Dh]
  char *v28; // [rsp+80h] [rbp-19h]
  unsigned int v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+8Ch] [rbp-Dh]
  unsigned int *v31; // [rsp+90h] [rbp-9h]
  int v32; // [rsp+98h] [rbp-1h]
  int v33; // [rsp+9Ch] [rbp+3h]
  unsigned __int64 *v34; // [rsp+A0h] [rbp+7h]
  unsigned int v35; // [rsp+A8h] [rbp+Fh]
  int v36; // [rsp+ACh] [rbp+13h]
  unsigned int *v37; // [rsp+B0h] [rbp+17h]
  int v38; // [rsp+B8h] [rbp+1Fh]
  int v39; // [rsp+BCh] [rbp+23h]

  v22 = 0LL;
  RmpActivityHostQueryCommit(a1, 0LL, &v22);
  v8 = TraceLoggingProviderEnabled(v7, v6, 0LL);
  v10 = v9 + 1;
  if ( v8 )
  {
    EffectivePriority = RmpActivityHostQueryEffectivePriority(a1, v22, (int *)&v20);
    v12 = (const struct _TlgProvider_t *)v20;
    if ( EffectivePriority < 0 )
      v12 = (const struct _TlgProvider_t *)(v10 + 100);
    if ( dword_18004C030 > v10 + 3 && TlgKeywordOn(v12, v10) )
    {
      v16 = *(_QWORD *)(a1 + 24);
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v23 = v16;
      v25 = &v23;
      v28 = &v19;
      v31 = &v20;
      v34 = &v22;
      v37 = &v21;
      v26 = v10 + 7;
      v19 = a2;
      v29 = v10;
      v20 = a3;
      v32 = (int)v14;
      v35 = v10 + 7;
      v21 = (unsigned int)v13;
      v38 = (int)v14;
      TlgWrite(v13, &unk_180040DCF, v14, v15, 7u, &pData);
    }
  }
  for ( result = (struct ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(a1, v10);
        ;
        result = RmpActivityHostGetNextResourceSetInList(v18) )
  {
    v18 = result;
    if ( !result )
      break;
    if ( (unsigned int)RmpPolicyTryGetRevokeAction(result, a2, &v21)
      && (a2 != 2 || !v21 || (*(_BYTE *)(a1 + 666) & 0x10) == 0) )
    {
      ExecutionModel::ResourceSet::Revoke(v18, v21, a3);
    }
  }
  return result;
}
