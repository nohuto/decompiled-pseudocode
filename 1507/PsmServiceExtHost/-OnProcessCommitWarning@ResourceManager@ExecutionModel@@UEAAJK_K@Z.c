/*
 * XREFs of ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x180037090
 * Callers:
 *     <none>
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800011B4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000ADDC (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000AE04 (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18003FFB0 (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 *     ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180041020 (-TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::OnProcessCommitWarning(
        ExecutionModel::ResourceManager *this,
        int a2,
        unsigned __int64 a3)
{
  ExecutionModel::ResourceSet *v3; // r15
  int v4; // edi
  int v5; // eax
  _OWORD *v6; // r13
  __int64 v7; // rbx
  void **v8; // rdi
  __int64 Amount; // rax
  char v10; // dl
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  PVOID v15; // rcx
  PVOID v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  int v20; // edx
  char v21; // di
  char v22; // r12
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // r9
  unsigned int v26; // ebx
  bool v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  ExecutionModel::ResourceManager *v34; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h]
  _OWORD v36[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  WCHAR v38[280]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v40; // [rsp+310h] [rbp+210h]
  const struct _TlgProvider_t *v41; // [rsp+318h] [rbp+218h]
  int *v42; // [rsp+320h] [rbp+220h]
  const struct _TlgProvider_t *v43; // [rsp+328h] [rbp+228h]
  unsigned __int64 *v44; // [rsp+330h] [rbp+230h]
  __int64 v45; // [rsp+338h] [rbp+238h]

  v34 = this;
  v29 = 0;
  Block = 0LL;
  v3 = 0LL;
  P = 0LL;
  v4 = a2;
  v30 = a2;
  v33 = a3;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v38, 0, 0x228uLL);
  *(_DWORD *)v38 = v4;
  v5 = RmpActivityHostFindByTypeAndIdentifier(1, v38, (volatile signed __int32 **)&P);
  v6 = P;
  if ( v5 >= 0 )
  {
    v3 = (ExecutionModel::ResourceSet *)*((_QWORD *)P + 75);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 8LL))(v3);
    v7 = *((_QWORD *)v3 + 171);
    v8 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
    v29 = (*(__int64 (__fastcall **)(__int64, void **))(v7 + 56))((__int64)v3 + 1368, v8);
    if ( v29 < 0 )
    {
LABEL_25:
      v4 = v30;
      goto LABEL_26;
    }
    v36[0] = v6[39];
    v36[1] = v6[40];
    v36[2] = v6[41];
    v36[3] = v6[42];
    v37 = *((_QWORD *)v6 + 86);
    Amount = ExecutionModel::_ResourceSetInfo::GetAmount((__int64)Block, 1);
    v11 = v33;
    v12 = Amount;
    v14 = *(_QWORD *)(v13 + 48);
    v15 = *(PVOID *)(v13 + 40);
    v35 = v14;
    P = v15;
    if ( v33 >= (unsigned __int64)v15 )
    {
      v16 = (PVOID)(v33 + 0x100000);
      if ( v14 < v33 + 0x100000 )
        v16 = (PVOID)v14;
    }
    else
    {
      v16 = v15;
    }
    if ( v33 < v12 )
    {
      v21 = v10;
    }
    else
    {
      if ( v33 >= v14 )
      {
        v21 = 1;
      }
      else
      {
        v28 = 0;
        v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*((_QWORD *)v34 - 1) + 32LL))(
                (__int64)v34 - 8,
                v33,
                v35);
        ExecutionModel::_ResourceSetInfo::SetAmount((__int64)Block, 0, 0LL);
        ExecutionModel::_ResourceSetInfo::SetAmount((__int64)Block, v18 + 2, v18);
        v19 = v33;
        v21 = v20 - 1;
        *((_QWORD *)v3 + 28) = v33;
        ExecutionModel::_ResourceSetInfo::SetAmount((__int64)Block, v20 - 1, v17 - v19);
        v29 = ExecutionModel::ResourceSet::AcquireAdditionalResources(
                v3,
                (const struct ExecutionModel::_ResourceSetInfo *)Block,
                &v28);
        if ( v29 < 0 )
        {
          ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)v3, 9u);
          v15 = P;
          v11 = v33;
        }
        else
        {
          v15 = P;
          v11 = v33;
          if ( !v28 )
            v12 = v17;
        }
      }
      if ( v11 >= v12 )
        goto LABEL_19;
    }
    if ( v12 < (unsigned __int64)v16 )
      v16 = (PVOID)v12;
LABEL_19:
    v22 = 0;
    if ( v11 >= (unsigned __int64)v15 )
      v22 = v21;
    if ( v16 != *((PVOID *)&v36[0] + 1) )
    {
      *((_QWORD *)&v36[0] + 1) = v16;
      v29 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, _OWORD *))(**((_QWORD **)v34 + 12) + 40LL))(
              *((_QWORD *)v34 + 12),
              v6,
              v36);
    }
    if ( v22 )
      ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(v3);
    goto LABEL_25;
  }
LABEL_26:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v6 )
    RmpObjectRelease((volatile signed __int32 *)v6);
  if ( v3 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v41 = v23;
    v40 = &v29;
    v42 = &v30;
    v44 = &v33;
    v30 = v4;
    v43 = v23;
    v45 = 8LL;
    TlgWrite(v23, &unk_18005AD2F, v24, v25, 5u, &pData);
  }
  v26 = v29;
  if ( Block )
    operator delete(Block);
  return v26;
}
