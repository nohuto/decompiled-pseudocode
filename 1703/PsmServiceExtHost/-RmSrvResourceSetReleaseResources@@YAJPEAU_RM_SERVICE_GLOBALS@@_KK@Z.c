/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800146D0
 * Callers:
 *     ?ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x1800146B0 (-ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x18001B810 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x180029B30 (RmtSrv_RS_ReleaseResources.c)
 *     ?ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180029B60 (-ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 * Callees:
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  ExecutionModel::ResourceSet *v5; // rdi
  int EmSetById; // eax
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *, unsigned int); // rax
  int v9; // eax
  __int64 (__fastcall *v10)(ExecutionModel::ResourceSet *); // rax
  unsigned int v11; // [rsp+30h] [rbp-89h] BYREF
  struct ExecutionModel::ResourceSet *v12; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR v15; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-51h] BYREF
  void *v17; // [rsp+78h] [rbp-41h]
  int v18; // [rsp+80h] [rbp-39h]
  int v19; // [rsp+84h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-29h] BYREF
  void *v21; // [rsp+A0h] [rbp-19h]
  int v22; // [rsp+A8h] [rbp-11h]
  int v23; // [rsp+ACh] [rbp-Dh]
  unsigned int *v24; // [rsp+B0h] [rbp-9h]
  __int64 v25; // [rsp+B8h] [rbp-1h]
  unsigned __int64 *v26; // [rsp+C0h] [rbp+7h]
  __int64 v27; // [rsp+C8h] [rbp+Fh]

  v13 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18004103E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v17 = &unk_180041049;
    UserData.Reserved = 2;
    v18 = 32;
    v19 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v12 = 0LL;
  v5 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v13, &v12);
    v5 = v12;
    if ( EmSetById == -1073741275 )
    {
      v11 = 1;
    }
    else if ( EmSetById < 0 )
    {
      v11 = EmSetById | 0x10000000;
    }
    else
    {
      v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, unsigned int))(*(_QWORD *)v12 + 32LL);
      if ( v8 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
        v9 = ExecutionModel::ResourceSet::ReleaseResourcesInternal(v12, a3);
      else
        v9 = v8(v12, a3);
      v11 = v9;
      if ( v9 >= 0 )
        v11 = 0;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    v11 = -805306127;
  }
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
  {
    v25 = 4LL;
    v24 = &v11;
    v26 = &v13;
    v27 = 8LL;
    *(_DWORD *)&v15.Level = 516;
    v20.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&v15.Id = ((unsigned int)&unk_1800408AD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v15.Keyword = 9LL;
    v20.Size = *(unsigned __int16 *)off_18004D038;
    v21 = &unk_1800408B8;
    v20.Reserved = 2;
    v22 = 50;
    v23 = 1;
    EventWriteTransfer(RegHandle, &v15, 0LL, 0LL, 4u, &v20);
    v5 = v12;
  }
  if ( v5 )
  {
    v10 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL);
    if ( v10 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v5);
    else
      v10(v5);
  }
  return v11;
}
