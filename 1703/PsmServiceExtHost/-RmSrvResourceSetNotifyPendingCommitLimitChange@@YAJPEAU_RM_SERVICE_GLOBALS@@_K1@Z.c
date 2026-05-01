/*
 * XREFs of ?RmSrvResourceSetNotifyPendingCommitLimitChange@@YAJPEAU_RM_SERVICE_GLOBALS@@_K1@Z @ 0x18002D410
 * Callers:
 *     RmtSrv_RS_NotifyPendingCommitLimitChange @ 0x180029B20 (RmtSrv_RS_NotifyPendingCommitLimitChange.c)
 *     ?NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180029BB0 (-NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@Executio.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18000E370 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetNotifyPendingCommitLimitChange(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v9; // rbx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // edx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  struct ExecutionModel::ResourceSet *v16; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR v21; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v22; // [rsp+1F0h] [rbp+F0h]
  int v23; // [rsp+1F8h] [rbp+F8h]
  int v24; // [rsp+1FCh] [rbp+FCh]
  unsigned __int64 *v25; // [rsp+200h] [rbp+100h]
  int v26; // [rsp+208h] [rbp+108h]
  int v27; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v28; // [rsp+210h] [rbp+110h]
  int v29; // [rsp+218h] [rbp+118h]
  int v30; // [rsp+21Ch] [rbp+11Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+230h] [rbp+130h] BYREF

  v17 = a2;
  v18 = a3;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v19);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v4, 1uLL) )
    TlgWrite(v5, &unk_180040D9B, v6, v7, 2u, &pData);
  v16 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v17, &v16);
  v9 = v16;
  if ( EmSetById >= 0 )
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v20 = v18;
    v15 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *, _BYTE *))(*(_QWORD *)v9 + 88LL))(v9, v19);
    if ( v15 >= 0 )
      v15 = 0;
  }
  else
  {
    v15 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 9uLL) )
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
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v11 - 1), &unk_18004091E, v12, v13, 5u, &v21);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v15;
}
