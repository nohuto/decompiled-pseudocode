/*
 * XREFs of ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0
 * Callers:
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800174E4 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017518 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x180018B6C (-RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z @ 0x180018C9C (--$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x18002D83C (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x18002D920 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x180033904 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180033F14 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

void __fastcall RmpResourceSetRemoveRecipient(struct _RM_RESOURCE_SET *a1, struct _RM_RESOURCE_SET *a2, char a3)
{
  int v6; // r12d
  int v7; // esi
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 HostId; // rax
  int v11; // edx
  unsigned __int64 v12; // rax
  UINT32 cData; // edx
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  __int64 v17; // r11
  int IsEligibleForCustomTarget; // eax
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // [rsp+30h] [rbp-99h] BYREF
  __int64 v26; // [rsp+38h] [rbp-91h] BYREF
  __int64 v27; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-49h]
  int v32; // [rsp+88h] [rbp-41h]
  int v33; // [rsp+8Ch] [rbp-3Dh]
  int *v34; // [rsp+90h] [rbp-39h]
  int v35; // [rsp+98h] [rbp-31h]
  int v36; // [rsp+9Ch] [rbp-2Dh]
  unsigned __int64 *v37; // [rsp+A0h] [rbp-29h]
  int v38; // [rsp+A8h] [rbp-21h]
  int v39; // [rsp+ACh] [rbp-1Dh]
  unsigned __int64 *v40; // [rsp+B0h] [rbp-19h]
  UINT32 v41; // [rsp+B8h] [rbp-11h]
  int v42; // [rsp+BCh] [rbp-Dh]
  char *v43; // [rsp+C0h] [rbp-9h]
  UINT32 v44; // [rsp+C8h] [rbp-1h]
  int v45; // [rsp+CCh] [rbp+3h]
  char *v46; // [rsp+D0h] [rbp+7h]
  UINT32 v47; // [rsp+D8h] [rbp+Fh]
  int v48; // [rsp+DCh] [rbp+13h]

  v6 = RmpArrayRemoveElement<_RM_RESOURCE_SET *>(*((_QWORD *)a1 + 9), (char *)a1 + 80, a2);
  v7 = RmpArrayRemoveElement<_RM_RESOURCE_SET *>(*((_QWORD *)a2 + 12), (char *)a2 + 104, a1);
  if ( (a3 & 8) != 0 )
  {
    if ( !*((_DWORD *)a2 + 26) && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 1450LL) & 7) != 3 )
    {
      RmpPolicyTryGetRevokeAction(*((_QWORD *)a2 + 5), 2LL, &v26);
      ExecutionModel::ResourceSet::Revoke(v17, (unsigned int)v26, 0LL, 0LL, 0LL);
    }
    if ( v7 )
    {
      if ( *((_QWORD *)a2 + 19) )
      {
        IsEligibleForCustomTarget = RmpResourceSetIsEligibleForCustomTarget(a2, 0LL);
        v25 = IsEligibleForCustomTarget;
        if ( IsEligibleForCustomTarget < 0 )
        {
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
          {
            v22 = *((_QWORD *)a2 + 3);
            v33 = 0;
            v36 = 0;
            v26 = v22;
            v31 = &v26;
            v34 = &v25;
            v32 = 8;
            v35 = (int)v19;
            TlgWrite(v19, &unk_1800412BD, v20, v21, (UINT32)v19, &pData);
          }
          v23 = RmpResourceSetTrySetPpleTarget(a2, 0LL, 1u);
          v24 = *((_QWORD *)a2 + 5);
          v25 = v23;
          RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(v24 + 1392));
        }
      }
    }
  }
  RmpResourceSetUpdateDonatedCommmit(a1, a3);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v9 = *((_QWORD *)a1 + 3);
    v33 = 0;
    v36 = 0;
    v26 = v9;
    v31 = &v26;
    v27 = *((_QWORD *)a2 + 3);
    v34 = (int *)&v27;
    v32 = 8;
    v35 = 8;
    HostId = RmpResourceSetGetHostId(a1);
    v39 = 0;
    v28 = HostId;
    v37 = &v28;
    v38 = v11;
    v12 = RmpResourceSetGetHostId(a2);
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v29 = v12;
    v40 = &v29;
    v43 = (char *)a1 + 56;
    v46 = (char *)a1 + 64;
    v41 = cData;
    v44 = cData;
    v47 = cData;
    TlgWrite(v14, &unk_180041308, v15, v16, cData, &pData);
  }
  if ( v7 )
    RmpObjectRelease(a1);
  if ( v6 )
    RmpObjectRelease(a2);
}
