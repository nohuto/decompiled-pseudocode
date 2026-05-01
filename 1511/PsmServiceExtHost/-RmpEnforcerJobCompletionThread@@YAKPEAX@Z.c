/*
 * XREFs of ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x18002A8A0
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z @ 0x18003F844 (-RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RESOURCE_MSG@@@Z.c)
 */

__int64 __fastcall RmpEnforcerJobCompletionThread(void **Parameter)
{
  void *v1; // r15
  const struct _TlgProvider_t *v3; // rcx
  unsigned __int64 v5; // rbx
  unsigned int v6; // esi
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  void (__fastcall *v16)(void *, __int64 *); // rbx
  unsigned __int64 v17; // rbx
  void *v18; // rcx
  __int64 v19; // rax
  DWORD NumberOfBytesTransferred; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 CompletionKey; // [rsp+38h] [rbp-91h] BYREF
  DWORD v22; // [rsp+40h] [rbp-89h] BYREF
  DWORD v23; // [rsp+44h] [rbp-85h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-81h] BYREF
  int v25; // [rsp+4Ch] [rbp-7Dh] BYREF
  unsigned int v26; // [rsp+50h] [rbp-79h] BYREF
  __int64 v27; // [rsp+58h] [rbp-71h] BYREF
  __int64 v28; // [rsp+60h] [rbp-69h] BYREF
  _QWORD JobInformation[2]; // [rsp+68h] [rbp-61h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+78h] [rbp-51h] BYREF
  __int64 v31; // [rsp+80h] [rbp-49h] BYREF
  int v32; // [rsp+88h] [rbp-41h]
  unsigned int v33; // [rsp+8Ch] [rbp-3Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  DWORD *v35; // [rsp+B0h] [rbp-19h]
  int v36; // [rsp+B8h] [rbp-11h]
  int v37; // [rsp+BCh] [rbp-Dh]
  int *v38; // [rsp+C0h] [rbp-9h]
  int v39; // [rsp+C8h] [rbp-1h]
  int v40; // [rsp+CCh] [rbp+3h]
  DWORD *v41; // [rsp+D0h] [rbp+7h]
  int v42; // [rsp+D8h] [rbp+Fh]
  int v43; // [rsp+DCh] [rbp+13h]
  int *v44; // [rsp+E0h] [rbp+17h]
  int v45; // [rsp+E8h] [rbp+1Fh]
  int v46; // [rsp+ECh] [rbp+23h]

  v1 = *Parameter;
  do
  {
    while ( GetQueuedCompletionStatus(v1, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0xFFFFFFFF) )
    {
      v5 = CompletionKey;
      v6 = *(_DWORD *)(CompletionKey + 48);
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v3, 1uLL) )
      {
        v10 = *(_QWORD *)(v5 + 24);
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v27 = v10;
        v35 = (DWORD *)&v27;
        v38 = (int *)&v26;
        v23 = NumberOfBytesTransferred;
        v41 = &v23;
        v36 = 8;
        v26 = v6;
        v39 = 4;
        v42 = 4;
        LODWORD(v10) = *(_DWORD *)(v5 + 20);
        v46 = 0;
        v25 = v10;
        v44 = &v25;
        v45 = 4;
        TlgWrite(v7, &unk_180062CB7, v8, v9, 6u, &pData);
        v5 = CompletionKey;
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      ++*(_QWORD *)(v5 + 728);
      if ( (*(_BYTE *)(v5 + 736) & 1) != 0 )
      {
        if ( *(_QWORD *)(v5 + 720) != *(_QWORD *)(v5 + 728) )
          goto LABEL_22;
        v11 = (volatile signed __int32 *)CompletionKey;
LABEL_21:
        RmpObjectRelease(v11);
        goto LABEL_22;
      }
      if ( NumberOfBytesTransferred == 4 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)RmSvcGlobals + 262) + 200LL))(
          *((_QWORD *)RmSvcGlobals + 262),
          v6);
        v17 = CompletionKey;
        JobInformation[0] = 0LL;
        JobInformation[1] = 0LL;
        v18 = *(void **)(CompletionKey + 712);
        *(_DWORD *)(CompletionKey + 736) |= 1u;
        NtSetInformationJobObject(v18, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
        NtQueryInformationJobObject(*(HANDLE *)(v17 + 712), (JOBOBJECTINFOCLASS)17, &v28, 8u, 0LL);
        v19 = v28;
        *(_QWORD *)(v17 + 720) = v28;
        if ( v19 != *(_QWORD *)(v17 + 728) )
          goto LABEL_22;
        v11 = (volatile signed __int32 *)v17;
        goto LABEL_21;
      }
      if ( NumberOfBytesTransferred == 11 && *(int *)(CompletionKey + 20) >= 0 )
      {
        v32 = 0;
        v33 = v6;
        v31 = 0LL;
        RmpHandleMemoryWarning((struct _RM_ACTIVITY_HOST *)CompletionKey, (struct _RESOURCE_MSG *)&v31);
        RtlLeaveCriticalSection(&RmpGlobalLock);
        if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v12, 1uLL) )
        {
          v37 = 0;
          v40 = 0;
          v43 = 0;
          v22 = NumberOfBytesTransferred;
          v35 = &v22;
          v38 = (int *)&v24;
          v41 = (DWORD *)&v31;
          v36 = 4;
          v24 = v6;
          v39 = 4;
          v42 = 8;
          TlgWrite(v13, &unk_180062636, v14, v15, 5u, &pData);
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
