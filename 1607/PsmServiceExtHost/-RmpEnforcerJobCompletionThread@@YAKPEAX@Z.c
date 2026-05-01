/*
 * XREFs of ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x18001F990
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z @ 0x18002A948 (-RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 */

__int64 __fastcall RmpEnforcerJobCompletionThread(void **Parameter)
{
  void *v1; // r14
  const struct _TlgProvider_t *v3; // rcx
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  void (__fastcall *v16)(void *, __int64 *); // rax
  unsigned __int64 v17; // rbx
  void *v18; // rcx
  __int64 v19; // rax
  DWORD NumberOfBytesTransferred[2]; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 CompletionKey; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-79h] BYREF
  DWORD v23; // [rsp+4Ch] [rbp-75h] BYREF
  int v24; // [rsp+50h] [rbp-71h] BYREF
  DWORD v25; // [rsp+54h] [rbp-6Dh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-61h] BYREF
  __int64 v28; // [rsp+68h] [rbp-59h] BYREF
  _QWORD JobInformation[2]; // [rsp+70h] [rbp-51h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+80h] [rbp-41h] BYREF
  __int64 v31; // [rsp+88h] [rbp-39h] BYREF
  int v32; // [rsp+90h] [rbp-31h]
  unsigned int v33; // [rsp+94h] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-29h] BYREF
  DWORD *v35; // [rsp+B8h] [rbp-9h]
  int v36; // [rsp+C0h] [rbp-1h]
  int v37; // [rsp+C4h] [rbp+3h]
  unsigned int *v38; // [rsp+C8h] [rbp+7h]
  int v39; // [rsp+D0h] [rbp+Fh]
  int v40; // [rsp+D4h] [rbp+13h]
  DWORD *v41; // [rsp+D8h] [rbp+17h]
  int v42; // [rsp+E0h] [rbp+1Fh]
  int v43; // [rsp+E4h] [rbp+23h]
  int *v44; // [rsp+E8h] [rbp+27h]
  int v45; // [rsp+F0h] [rbp+2Fh]
  int v46; // [rsp+F4h] [rbp+33h]

  v1 = *Parameter;
  do
  {
    while ( GetQueuedCompletionStatus(v1, NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0xFFFFFFFF) )
    {
      v5 = CompletionKey;
      v6 = *(_DWORD *)(CompletionKey + 56);
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v3, 1uLL) )
      {
        v10 = *(_QWORD *)(v5 + 24);
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v27 = v10;
        v35 = (DWORD *)&v27;
        v38 = &v22;
        v23 = NumberOfBytesTransferred[0];
        v41 = &v23;
        v36 = 8;
        v22 = v6;
        v39 = 4;
        v42 = 4;
        LODWORD(v10) = *(_DWORD *)(v5 + 20);
        v46 = 0;
        v24 = v10;
        v44 = &v24;
        v45 = 4;
        TlgWrite(v7, &unk_18003F544, v8, v9, 6u, &pData);
        v5 = CompletionKey;
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      ++*(_QWORD *)(v5 + 752);
      if ( (*(_BYTE *)(v5 + 760) & 1) != 0 )
      {
        if ( *(_QWORD *)(v5 + 744) != *(_QWORD *)(v5 + 752) )
          goto LABEL_22;
        v11 = (volatile signed __int32 *)CompletionKey;
LABEL_21:
        RmpObjectRelease(v11);
        goto LABEL_22;
      }
      if ( NumberOfBytesTransferred[0] == 4 )
      {
        ExecutionModel::ResourceManager::OnProcessTerminated(
          *(ExecutionModel::ResourceManager **)(*(_QWORD *)(CompletionKey + 40) + 3344LL),
          v6);
        v17 = CompletionKey;
        JobInformation[0] = 0LL;
        JobInformation[1] = 0LL;
        v18 = *(void **)(CompletionKey + 736);
        *(_DWORD *)(CompletionKey + 760) |= 1u;
        NtSetInformationJobObject(v18, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
        NtQueryInformationJobObject(*(HANDLE *)(v17 + 736), (JOBOBJECTINFOCLASS)17, &v28, 8u, 0LL);
        v19 = v28;
        *(_QWORD *)(v17 + 744) = v28;
        if ( v19 != *(_QWORD *)(v17 + 752) )
          goto LABEL_22;
        v11 = (volatile signed __int32 *)v17;
        goto LABEL_21;
      }
      if ( NumberOfBytesTransferred[0] == 11 && *(int *)(CompletionKey + 20) >= 0 )
      {
        v32 = 0;
        v33 = v6;
        v31 = 0LL;
        RmpHandleMemoryWarning((struct _RM_ACTIVITY_HOST *)CompletionKey, (struct _RESOURCE_MSG *)&v31);
        RtlLeaveCriticalSection(&RmpGlobalLock);
        if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v12, 1uLL) )
        {
          v37 = 0;
          v40 = 0;
          v43 = 0;
          v25 = NumberOfBytesTransferred[0];
          v35 = &v25;
          v38 = &v26;
          v41 = (DWORD *)&v31;
          v36 = 4;
          v26 = v6;
          v39 = 4;
          v42 = 8;
          TlgWrite(v13, &unk_18003F4BA, v14, v15, 5u, &pData);
        }
        v16 = (void (__fastcall *)(void *, __int64 *))Parameter[2];
        if ( v16 )
          v16(Parameter[3], &v31);
      }
      else
      {
LABEL_22:
        RtlLeaveCriticalSection(&RmpGlobalLock);
      }
    }
  }
  while ( GetLastError() == 1460 );
  return 0LL;
}
