/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800162B0
 * Callers:
 *     ?ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180016270 (-ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     RmtSrv_RS_ReleaseResources @ 0x180028F70 (RmtSrv_RS_ReleaseResources.c)
 *     ?ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180028FD0 (-ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpObjectTableFindObjectByHandleWithLock @ 0x180016640 (RmpObjectTableFindObjectByHandleWithLock.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned int a3)
{
  ExecutionModel::ResourceSet *v5; // rbx
  volatile signed __int32 *v6; // r15
  int ObjectByHandleWithLock; // eax
  char *v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v14)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v15)(ExecutionModel::ResourceSet *, unsigned int); // rax
  int v16; // eax
  __int64 (__fastcall *v17)(ExecutionModel::ResourceSet *); // rax
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+98h] [rbp-70h] BYREF
  void *v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B4h] [rbp-54h]
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]

  v19 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800407BC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v25 = &unk_1800407C7;
    UserData.Reserved = 2;
    v26 = 32;
    v27 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v20 = v19;
    v6 = 0LL;
    RtlAcquireSRWLockShared((char *)a1 + 1880);
    ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock((char *)a1 + 1864, &v20, &v21);
    v8 = (char *)a1 + 1880;
    v9 = ObjectByHandleWithLock;
    RtlReleaseSRWLockShared(v8, v10, v11, v12);
    if ( v9 >= 0 )
    {
      v6 = (volatile signed __int32 *)v21;
      v5 = *(ExecutionModel::ResourceSet **)(v21 + 40);
      v14 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 8LL);
      if ( v14 == ExecutionModel::ResourceSet::AddRef )
        ExecutionModel::ResourceSet::AddRef(v5);
      else
        v14(v5);
      v9 = 0;
    }
    if ( v6 )
      RmpObjectRelease(v6);
    if ( v9 == -1073741275 )
    {
      LODWORD(v18) = 1;
    }
    else if ( v9 < 0 )
    {
      LODWORD(v18) = v9 | 0x10000000;
    }
    else
    {
      v15 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, unsigned int))(*(_QWORD *)v5 + 32LL);
      if ( v15 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
        v16 = ExecutionModel::ResourceSet::ReleaseResourcesInternal(v5, a3);
      else
        v16 = v15(v5, a3);
      LODWORD(v18) = v16;
      if ( v16 >= 0 )
        LODWORD(v18) = 0;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    LODWORD(v18) = -805306127;
  }
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
  {
    v33 = 4LL;
    v32 = &v18;
    v34 = &v19;
    v35 = 8LL;
    *(_DWORD *)&v23.Level = 516;
    v28.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&v23.Id = ((unsigned int)&unk_1800403DF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v23.Keyword = 9LL;
    v28.Size = *(unsigned __int16 *)off_18004C038;
    v29 = &unk_1800403EA;
    v28.Reserved = 2;
    v30 = 50;
    v31 = 1;
    EventWriteTransfer(RegHandle, &v23, 0LL, 0LL, 4u, &v28);
  }
  if ( v5 )
  {
    v17 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL);
    if ( v17 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v5);
    else
      v17(v5);
  }
  return (unsigned int)v18;
}
