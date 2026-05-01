/*
 * XREFs of ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x18002DFAC
 * Callers:
 *     RmtSrv_RS_NotifyPendingCommitLimitChange @ 0x180028F50 (RmtSrv_RS_NotifyPendingCommitLimitChange.c)
 *     ?NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180029030 (-NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@Executio.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800107B0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetNotifyPendingCommitLimitChange(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v9; // rbx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // edx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  ExecutionModel::ResourceSet *v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR v21; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v22; // [rsp+1F0h] [rbp+F0h]
  int v23; // [rsp+1F8h] [rbp+F8h]
  int v24; // [rsp+1FCh] [rbp+FCh]
  __int64 *v25; // [rsp+200h] [rbp+100h]
  int v26; // [rsp+208h] [rbp+108h]
  int v27; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v28; // [rsp+210h] [rbp+110h]
  int v29; // [rsp+218h] [rbp+118h]
  int v30; // [rsp+21Ch] [rbp+11Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF

  v17 = a2;
  v18 = a3;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v19);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v4, 1uLL) )
    TlgWrite(v5, &unk_1800406D8, v6, v7, 2u, &pData);
  v16 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((__int64)a1 + 1864, v17, &v16);
  v9 = v16;
  if ( EmSetById >= 0 )
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v20 = v18;
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)v9 + 171) + 144LL))((__int64)v9 + 1368, v19);
    if ( v15 >= 0 )
      v15 = 0;
  }
  else
  {
    v15 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 9uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = &v15;
    v25 = &v17;
    v28 = &v18;
    v23 = 4;
    v26 = v11 - 1;
    v29 = v11 - 1;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v11 - 1), &unk_1800404A0, v12, v13, 5u, &v21);
  }
  if ( v9 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v15;
}
