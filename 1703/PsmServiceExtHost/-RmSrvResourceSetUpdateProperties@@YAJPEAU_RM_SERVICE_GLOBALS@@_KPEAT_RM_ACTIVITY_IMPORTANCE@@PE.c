/*
 * XREFs of ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180014990
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800145E0 (-UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@P.c)
 * Callees:
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000F300 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetUpdateProperties(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        union _RM_ACTIVITY_IMPORTANCE *a3,
        struct _RM_RESOURCE_LIMITS *a4)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v8; // rbx
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rax
  int updated; // eax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(ExecutionModel::ResourceSet *); // rax
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  bool v15; // [rsp+34h] [rbp-CCh] BYREF
  bool v16; // [rsp+35h] [rbp-CBh] BYREF
  struct ExecutionModel::ResourceSet *v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-98h] BYREF
  void *v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+84h] [rbp-7Ch]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+90h] [rbp-70h] BYREF
  void *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  unsigned int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  bool *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  bool *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]

  v18 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040D6F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v22 = &unk_180040D7A;
    UserData.Reserved = 2;
    v23 = 32;
    v24 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v17 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v18, &v17);
  v8 = v17;
  if ( EmSetById < 0 )
  {
    v14 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v11 = v14;
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*(_QWORD *)v8 + 80LL);
    if ( v9 == ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits )
      updated = ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(v8, a3, a4);
    else
      updated = v9(v8, a3, a4);
    v14 = updated;
    v11 = (unsigned int)updated;
    if ( updated >= 0 )
    {
      v11 = 0LL;
      v14 = 0;
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
  {
    v30 = 4LL;
    v29 = &v14;
    v32 = 8LL;
    v31 = &v18;
    v15 = a3 != 0LL;
    v34 = 1LL;
    v33 = &v15;
    v36 = 1LL;
    v35 = &v16;
    v16 = a4 != 0LL;
    *(_DWORD *)&v20.Level = 516;
    v25.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&v20.Id = ((unsigned int)&unk_180040786 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v20.Keyword = 9LL;
    v25.Size = *(unsigned __int16 *)off_18004D038;
    v26 = &unk_180040791;
    v25.Reserved = 2;
    v27 = 88;
    v28 = 1;
    EventWriteTransfer(RegHandle, &v20, 0LL, 0LL, 6u, &v25);
    v11 = v14;
    v8 = v17;
  }
  if ( !v8 )
    return (unsigned int)v11;
  v12 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL);
  if ( v12 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v8);
  else
    ((void (__fastcall *)(ExecutionModel::ResourceSet *, __int64))v12)(v8, v11);
  return v14;
}
