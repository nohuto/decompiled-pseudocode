/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800167D0
 * Callers:
 *     ?Apply@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180016290 (-Apply@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     RmtSrv_RS_Apply @ 0x180028F10 (RmtSrv_RS_Apply.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012750 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpObjectTableFindObjectByHandleWithLock @ 0x180016640 (RmpObjectTableFindObjectByHandleWithLock.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned int a3)
{
  __int64 ***v5; // rbx
  volatile signed __int32 *v6; // r14
  int ObjectByHandleWithLock; // eax
  char *v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  __int64 ***v14; // rcx
  __int64 (__fastcall *v15)(__int64 ***, unsigned int); // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(ExecutionModel::ResourceSet *); // rax
  unsigned int v20; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-95h] BYREF
  __int64 v22; // [rsp+38h] [rbp-91h] BYREF
  __int64 v23; // [rsp+40h] [rbp-89h] BYREF
  __int64 v24; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR v26; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-59h] BYREF
  void *v28; // [rsp+80h] [rbp-49h]
  int v29; // [rsp+88h] [rbp-41h]
  int v30; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+90h] [rbp-39h] BYREF
  void *v32; // [rsp+A0h] [rbp-29h]
  int v33; // [rsp+A8h] [rbp-21h]
  int v34; // [rsp+ACh] [rbp-1Dh]
  unsigned int *v35; // [rsp+B0h] [rbp-19h]
  __int64 v36; // [rsp+B8h] [rbp-11h]
  __int64 *v37; // [rsp+C0h] [rbp-9h]
  __int64 v38; // [rsp+C8h] [rbp-1h]
  unsigned int *v39; // [rsp+D0h] [rbp+7h]
  __int64 v40; // [rsp+D8h] [rbp+Fh]

  v22 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800400FA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v28 = &unk_180040105;
    UserData.Reserved = 2;
    v29 = 21;
    v30 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v23 = v22;
  v6 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 + 1880);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock((__int64)a1 + 1864, (unsigned __int8 *)&v23, &v24);
  v8 = (char *)a1 + 1880;
  v9 = ObjectByHandleWithLock;
  RtlReleaseSRWLockShared(v8, v10, v11, v12);
  if ( v9 >= 0 )
  {
    v6 = (volatile signed __int32 *)v24;
    v5 = *(__int64 ****)(v24 + 40);
    v13 = (__int64 (__fastcall *)(ExecutionModel::ResourceSet *))(*v5)[1];
    if ( v13 == ExecutionModel::ResourceSet::AddRef )
      ExecutionModel::ResourceSet::AddRef((ExecutionModel::ResourceSet *)v5);
    else
      v13((ExecutionModel::ResourceSet *)v5);
    v9 = 0;
  }
  if ( v6 )
    RmpObjectRelease(v6);
  if ( v9 < 0 )
  {
    v20 = v9 | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v17 = v9 | 0x10000000u;
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v14 = v5 + 171;
    v15 = (__int64 (__fastcall *)(__int64 ***, unsigned int))v5[171][4];
    if ( v15 == ExecutionModel::ResourceSet::Apply )
      v16 = ExecutionModel::ResourceSet::Apply(v14, a3);
    else
      v16 = v15(v14, a3);
    v20 = v16;
    v17 = (unsigned int)v16;
    if ( v16 >= 0 )
    {
      v17 = 0LL;
      v20 = 0;
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
  {
    v36 = 4LL;
    v35 = &v20;
    v37 = &v22;
    v39 = &v21;
    v38 = 8LL;
    v21 = a3;
    v40 = 4LL;
    *(_DWORD *)&v26.Level = 516;
    v31.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&v26.Id = ((unsigned int)&unk_18004075D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v26.Keyword = 9LL;
    v31.Size = *(unsigned __int16 *)off_18004C038;
    v32 = &unk_180040768;
    v31.Reserved = 2;
    v33 = 45;
    v34 = 1;
    EventWriteTransfer(RegHandle, &v26, 0LL, 0LL, 5u, &v31);
    v17 = v20;
  }
  if ( !v5 )
    return (unsigned int)v17;
  v18 = (__int64 (__fastcall *)(ExecutionModel::ResourceSet *))(*v5)[2];
  if ( v18 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v5);
  else
    ((void (__fastcall *)(__int64 ***, __int64))v18)(v5, v17);
  return v20;
}
