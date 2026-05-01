/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180014D90
 * Callers:
 *     ?Apply@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x1800146C0 (-Apply@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     RmCoreRpcSrvApplyResourceSet @ 0x180018310 (RmCoreRpcSrvApplyResourceSet.c)
 *     RmtSrv_RS_Apply @ 0x180029B00 (RmtSrv_RS_Apply.c)
 * Callees:
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x18000FF88 (-Apply@ResourceSet@ExecutionModel@@QEAAJK@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, unsigned int a3)
{
  int EmSetById; // eax
  ExecutionModel::ResourceManager **v6; // rbx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rax
  unsigned int v10; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-95h] BYREF
  struct ExecutionModel::ResourceSet *v12; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR v15; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-61h] BYREF
  void *v17; // [rsp+78h] [rbp-51h]
  int v18; // [rsp+80h] [rbp-49h]
  int v19; // [rsp+84h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-39h] BYREF
  void *v21; // [rsp+A0h] [rbp-29h]
  int v22; // [rsp+A8h] [rbp-21h]
  int v23; // [rsp+ACh] [rbp-1Dh]
  unsigned int *v24; // [rsp+B0h] [rbp-19h]
  __int64 v25; // [rsp+B8h] [rbp-11h]
  unsigned __int64 *v26; // [rsp+C0h] [rbp-9h]
  __int64 v27; // [rsp+C8h] [rbp-1h]
  unsigned int *v28; // [rsp+D0h] [rbp+7h]
  __int64 v29; // [rsp+D8h] [rbp+Fh]

  v13 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800401BF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v17 = &unk_1800401CA;
    UserData.Reserved = 2;
    v18 = 21;
    v19 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v12 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v13, &v12);
  v6 = (ExecutionModel::ResourceManager **)v12;
  if ( EmSetById < 0 )
  {
    v10 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v7 = v10;
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v10 = ExecutionModel::ResourceSet::Apply(v6, a3);
    v7 = v10;
    if ( (v10 & 0x80000000) == 0 )
    {
      v7 = 0LL;
      v10 = 0;
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
  {
    v25 = 4LL;
    v24 = &v10;
    v26 = &v13;
    v28 = &v11;
    v27 = 8LL;
    v11 = a3;
    v29 = 4LL;
    *(_DWORD *)&v15.Level = 516;
    v20.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&v15.Id = ((unsigned int)&unk_180040FCE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v15.Keyword = 9LL;
    v20.Size = *(unsigned __int16 *)off_18004D038;
    v21 = &unk_180040FD9;
    v20.Reserved = 2;
    v22 = 45;
    v23 = 1;
    EventWriteTransfer(RegHandle, &v15, 0LL, 0LL, 5u, &v20);
    v7 = v10;
    v6 = (ExecutionModel::ResourceManager **)v12;
  }
  if ( !v6 )
    return (unsigned int)v7;
  v8 = (__int64 (__fastcall *)(ExecutionModel::ResourceSet *))*((_QWORD *)*v6 + 2);
  if ( v8 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v6);
  else
    ((void (__fastcall *)(ExecutionModel::ResourceManager **, __int64))v8)(v6, v7);
  return v10;
}
