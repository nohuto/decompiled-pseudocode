/*
 * XREFs of ?OnProcessCommitWarning@ResourceManager@ExecutionModel@@UEAAJK_K@Z @ 0x18003D370
 * Callers:
 *     <none>
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x180009178 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     RmpActivityHostComputeCommitEstimate @ 0x180040CBC (RmpActivityHostComputeCommitEstimate.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 *     ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180045C50 (-TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::OnProcessCommitWarning(
        ExecutionModel::ResourceManager *this,
        int a2,
        unsigned __int64 a3)
{
  ExecutionModel::ResourceSet *v3; // r14
  int v5; // eax
  volatile signed __int32 *v6; // r15
  __int64 v7; // rbx
  void **v8; // rdi
  unsigned __int64 v9; // r12
  PVOID v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  PVOID v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  PVOID v17; // r8
  bool v18; // si
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned int v22; // ebx
  bool v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  ExecutionModel::ResourceManager *v29; // [rsp+50h] [rbp-B0h]
  _OWORD v30[5]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR v31[280]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v33; // [rsp+300h] [rbp+200h]
  const struct _TlgProvider_t *v34; // [rsp+308h] [rbp+208h]
  PVOID *p_P; // [rsp+310h] [rbp+210h]
  const struct _TlgProvider_t *v36; // [rsp+318h] [rbp+218h]
  unsigned __int64 *v37; // [rsp+320h] [rbp+220h]
  __int64 v38; // [rsp+328h] [rbp+228h]

  v29 = this;
  v25 = 0;
  Block = 0LL;
  v3 = 0LL;
  P = 0LL;
  v28 = a3;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v31, 0, 0x228uLL);
  *(_DWORD *)v31 = a2;
  v5 = RmpActivityHostFindByTypeAndIdentifier(1, v31, (volatile signed __int32 **)&P);
  v6 = (volatile signed __int32 *)P;
  if ( v5 >= 0 )
  {
    v3 = (ExecutionModel::ResourceSet *)*((_QWORD *)P + 75);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 8LL))(v3);
    v7 = *((_QWORD *)v3 + 171);
    v8 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
    v25 = (*(__int64 (__fastcall **)(__int64, void **))(v7 + 56))((__int64)v3 + 1368, v8);
    if ( v25 >= 0 )
    {
      v30[0] = *((_OWORD *)v6 + 39);
      v30[1] = *((_OWORD *)v6 + 40);
      v30[2] = *((_OWORD *)v6 + 41);
      v30[3] = *((_OWORD *)v6 + 42);
      v30[4] = *((_OWORD *)v6 + 43);
      v9 = *((_QWORD *)Block + 6);
      v10 = (PVOID)*((_QWORD *)Block + 13);
      v11 = *((_QWORD *)Block + 7);
      v12 = v28;
      if ( v28 >= v9 )
      {
        v13 = (PVOID)(v28 + 0x100000);
        if ( v11 < v28 + 0x100000 )
          v13 = (PVOID)*((_QWORD *)Block + 7);
      }
      else
      {
        v13 = (PVOID)*((_QWORD *)Block + 6);
      }
      if ( v28 < (unsigned __int64)v10 )
        goto LABEL_14;
      if ( v28 < v11 )
      {
        v24 = 0;
        RmpActivityHostComputeCommitEstimate(v28, v11, 0LL, &P);
        ExecutionModel::_ResourceSetInfo::SetAmount((__int64)Block, 0, v14);
        ExecutionModel::_ResourceSetInfo::SetAmount((__int64)Block, v15 + 2, v15);
        v16 = v28;
        v17 = P;
        *((_QWORD *)v3 + 28) = v28;
        ExecutionModel::_ResourceSetInfo::SetAmount((__int64)Block, 1, (__int64)v17 - v16);
        v25 = ExecutionModel::ResourceSet::AcquireAdditionalResources(
                v3,
                (const struct ExecutionModel::_ResourceSetInfo *)Block,
                &v24);
        if ( v25 < 0 )
        {
          ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)v3, 9u);
          v12 = v28;
        }
        else
        {
          v12 = v28;
          if ( !v24 )
            v10 = P;
        }
      }
      if ( v12 < (unsigned __int64)v10 )
      {
LABEL_14:
        if ( v10 < v13 )
          v13 = v10;
      }
      v18 = v12 >= v9;
      if ( v13 != *((PVOID *)&v30[0] + 1) )
      {
        *((_QWORD *)&v30[0] + 1) = v13;
        v25 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *, _OWORD *))(**((_QWORD **)v29 + 12) + 40LL))(
                *((_QWORD *)v29 + 12),
                v6,
                v30);
      }
      if ( v18 )
        ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(v3);
    }
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v6 )
    RmpObjectRelease(v6);
  if ( v3 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v34 = v19;
    v33 = &v25;
    p_P = &P;
    v37 = &v28;
    LODWORD(P) = a2;
    v36 = v19;
    v38 = 8LL;
    TlgWrite(v19, &unk_180062536, v20, v21, 5u, &pData);
  }
  v22 = v25;
  if ( Block )
    operator delete(Block);
  return v22;
}
