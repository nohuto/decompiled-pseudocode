/*
 * XREFs of ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180016F80
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180016250 (-UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@P.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011F20 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetUpdateProperties(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        union _RM_ACTIVITY_IMPORTANCE *a3,
        struct _RM_RESOURCE_LIMITS *a4)
{
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v8; // rbx
  ExecutionModel::ResourceSet *v9; // rcx
  __int64 (__fastcall *v10)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *); // rax
  int updated; // eax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  bool v15; // [rsp+30h] [rbp-D0h] BYREF
  bool v16; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  ExecutionModel::ResourceSet *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-98h] BYREF
  void *v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+84h] [rbp-7Ch]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+90h] [rbp-70h] BYREF
  void *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  unsigned int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  bool *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  bool *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]

  v19 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800406AC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v23 = &unk_1800406B7;
    UserData.Reserved = 2;
    v24 = 32;
    v25 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v18 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((__int64)a1 + 1864, v19, &v18);
  v8 = v18;
  if ( EmSetById < 0 )
  {
    v17 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v12 = v17;
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v9 = (ExecutionModel::ResourceSet *)((char *)v8 + 1368);
    v10 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, union _RM_ACTIVITY_IMPORTANCE *, struct _RM_RESOURCE_LIMITS *))(*((_QWORD *)v8 + 171) + 136LL);
    if ( v10 == ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits )
      updated = ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(v9, a3, a4);
    else
      updated = v10(v9, a3, a4);
    v17 = updated;
    v12 = (unsigned int)updated;
    if ( updated >= 0 )
    {
      v12 = 0LL;
      v17 = 0;
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
  {
    v31 = 4LL;
    v30 = &v17;
    v32 = &v19;
    v33 = 8LL;
    v15 = a3 != 0LL;
    v35 = 1LL;
    v34 = &v15;
    v16 = a4 != 0LL;
    v37 = 1LL;
    v36 = &v16;
    *(_DWORD *)&v21.Level = 516;
    v26.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&v21.Id = ((unsigned int)&unk_18004037B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v21.Keyword = 9LL;
    v26.Size = *(unsigned __int16 *)off_18004C038;
    v27 = &unk_180040386;
    v26.Reserved = 2;
    v28 = 88;
    v29 = 1;
    EventWriteTransfer(RegHandle, &v21, 0LL, 0LL, 6u, &v26);
    v12 = v17;
    v8 = v18;
  }
  if ( !v8 )
    return (unsigned int)v12;
  v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL);
  if ( v13 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v8);
  else
    ((void (__fastcall *)(ExecutionModel::ResourceSet *, __int64))v13)(v8, v12);
  return v17;
}
