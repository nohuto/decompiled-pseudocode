/*
 * XREFs of ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x18000CF94
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpEmPriorityCompare @ 0x180007394 (RmpEmPriorityCompare.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpPolicyGenerateRevokeListForCommit @ 0x18003C2BC (RmpPolicyGenerateRevokeListForCommit.c)
 */

__int64 __fastcall RmpPolicyGenerateRevokeListForQueryableResources(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4,
        _QWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned int v7; // ebx
  int v8; // r12d
  unsigned int v9; // r13d
  unsigned __int64 v12; // r8
  int v14; // eax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  void *v21; // rbx
  unsigned int v22; // [rsp+38h] [rbp-61h] BYREF
  __int64 v23; // [rsp+40h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-29h]
  _QWORD *v27; // [rsp+78h] [rbp-21h]
  __int64 v28; // [rsp+80h] [rbp-19h]
  _QWORD *v29; // [rsp+88h] [rbp-11h]
  __int64 v30; // [rsp+90h] [rbp-9h]
  _QWORD *v31; // [rsp+98h] [rbp-1h]
  __int64 v32; // [rsp+A0h] [rbp+7h]

  v7 = 0;
  v8 = (int)a4;
  v9 = (unsigned int)a3;
  v23 = a6;
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 9) != 0 && (qword_1800690B8 & 9) == qword_1800690B8 )
  {
    v26 = 8LL;
    v25 = (_QWORD *)((char *)a1 + 1168);
    v27 = (_QWORD *)((char *)a1 + 1240);
    v29 = a5 + 2;
    v31 = a5 + 1;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 8LL;
    TlgWrite(a1, &unk_18005B676, a3, a4, 6u, &pData);
  }
  v12 = *((_QWORD *)a1 + 146) + *((_QWORD *)a1 + 155);
  if ( !v12 )
    goto LABEL_4;
  if ( v12 + a5[2] < v12 )
    goto LABEL_16;
  v14 = RmpEmPriorityCompare(v9, *(_DWORD *)(a2 + 168));
  v17 = 1;
  if ( v14 > 0 )
    v17 = 3;
  v18 = *(_QWORD *)(a2 + 16LL * v17);
  if ( v16 >= v18 )
  {
    if ( *a5 - *(_QWORD *)(a2 + 160) < v15 )
      return (unsigned int)-1073741670;
    if ( v8 != 2 )
    {
      v19 = *a5 - v18;
      v20 = v19 + v15 + 1;
      if ( v20 >= v19 )
      {
        v21 = (void *)*((_QWORD *)RmSvcGlobals + 204);
        v22 = *((_DWORD *)RmSvcGlobals + 412);
        RmpPolicyPopulateActivityHostMetricsTable(
          v9,
          &v22,
          v21,
          1LL,
          (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, __int64))RmpPolicyFilterActivityHostWithFlags,
          3LL);
        RmpPolicyGenerateRevokeListForCommit(v21, v22, v20, a5[1], v23, a7);
        return 259;
      }
    }
LABEL_16:
    *a7 = 0;
    return (unsigned int)-1073741670;
  }
LABEL_4:
  *a7 = 0;
  return v7;
}
