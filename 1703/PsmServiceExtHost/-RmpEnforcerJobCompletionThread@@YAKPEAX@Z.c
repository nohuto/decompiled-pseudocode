/*
 * XREFs of ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180020820
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B61C (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EC0C (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032F18 (-RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpEnforcerJobCompletionThread(void **Parameter)
{
  void *v1; // rsi
  const struct _TlgProvider_t *v2; // rcx
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  struct _RM_OBJECT_HEADER *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned __int64 v15; // rbx
  void *v16; // rcx
  __int64 v17; // rax
  DWORD NumberOfBytesTransferred; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 CompletionKey; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  DWORD v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v23; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD JobInformation[2]; // [rsp+68h] [rbp-98h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  unsigned int *v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  DWORD *v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  int *v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+F0h] [rbp-10h] BYREF
  DWORD *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  unsigned int *v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+12Ch] [rbp+2Ch]

  v1 = *Parameter;
  do
  {
    while ( GetQueuedCompletionStatus(v1, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0xFFFFFFFF) )
    {
      v4 = CompletionKey;
      v5 = *(_DWORD *)(CompletionKey + 64);
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v2, 1uLL) )
      {
        v9 = *(_QWORD *)(v4 + 24);
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v25 = v9;
        v30 = &v25;
        v33 = &v20;
        v21 = NumberOfBytesTransferred;
        v36 = &v21;
        v31 = 8;
        v20 = v5;
        v34 = 4;
        v37 = 4;
        LODWORD(v9) = *(_DWORD *)(v4 + 20);
        v41 = 0;
        v22 = v9;
        v39 = &v22;
        v40 = 4;
        TlgWrite(v6, &unk_180042709, v7, v8, 6u, &pData);
        v4 = CompletionKey;
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      ++*(_QWORD *)(v4 + 752);
      if ( (*(_BYTE *)(v4 + 760) & 1) != 0 )
      {
        if ( *(_QWORD *)(v4 + 744) != *(_QWORD *)(v4 + 752) )
          goto LABEL_20;
        v10 = (struct _RM_OBJECT_HEADER *)CompletionKey;
LABEL_19:
        RmpObjectRelease(v10);
        goto LABEL_20;
      }
      if ( NumberOfBytesTransferred == 4 )
      {
        ExecutionModel::ResourceManager::OnProcessTerminated(
          *(ExecutionModel::ResourceManager **)(*(_QWORD *)(CompletionKey + 40) + 1528LL),
          v5);
        v15 = CompletionKey;
        JobInformation[0] = 0LL;
        JobInformation[1] = 0LL;
        v16 = *(void **)(CompletionKey + 736);
        *(_DWORD *)(CompletionKey + 760) |= 1u;
        NtSetInformationJobObject(v16, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
        NtQueryInformationJobObject(*(HANDLE *)(v15 + 736), (JOBOBJECTINFOCLASS)17, &v26, 8u, 0LL);
        v17 = v26;
        *(_QWORD *)(v15 + 744) = v26;
        if ( v17 != *(_QWORD *)(v15 + 752) )
          goto LABEL_20;
        v10 = (struct _RM_OBJECT_HEADER *)v15;
        goto LABEL_19;
      }
      if ( NumberOfBytesTransferred == 11 && *(int *)(CompletionKey + 20) >= 0 )
      {
        RmpHandleMemoryWarning((struct _RM_ACTIVITY_HOST *)CompletionKey);
        RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)CompletionKey);
        RtlLeaveCriticalSection(&RmpGlobalLock);
        if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 1uLL) )
        {
          v45 = 0;
          v48 = 0;
          v23 = NumberOfBytesTransferred;
          v43 = &v23;
          v46 = &v24;
          v44 = 4;
          v24 = v5;
          v47 = 4;
          TlgWrite(v12, &unk_1800426C8, v13, v14, 4u, &v42);
        }
      }
      else
      {
LABEL_20:
        RtlLeaveCriticalSection(&RmpGlobalLock);
      }
    }
  }
  while ( GetLastError() == 1460 );
  return 0LL;
}
