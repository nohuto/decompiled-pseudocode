/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x18001D460
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x1800124E0 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@UEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpQueryRpcClientInformation @ 0x18001EC88 (RmpQueryRpcClientInformation.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(void *a1, union _LARGE_INTEGER *a2, union _LARGE_INTEGER *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  NTSTATUS RpcClientInformation; // ebx
  DWORD v7; // esi
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  int v12; // eax
  unsigned __int64 v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-65h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-9h] BYREF
  unsigned int *v21; // [rsp+B0h] [rbp+17h]
  int v22; // [rsp+B8h] [rbp+1Fh]
  int v23; // [rsp+BCh] [rbp+23h]

  v17 = 0;
  RpcClientInformation = RmpQueryRpcClientInformation(a1, DestinationSid);
  v7 = v18;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v5, 2uLL) )
  {
    v23 = 0;
    v21 = &v18;
    v22 = 4;
    TlgWrite(v8, &unk_18006158C, v9, v10, 3u, &pData);
  }
  if ( RpcClientInformation < 0 )
  {
    v12 = RtlNtStatusToDosError(RpcClientInformation);
    v13 = (unsigned int)v12;
    if ( v12 > 0 )
    {
      v13 = (unsigned __int16)v12 | 0x80070000;
      v17 = (unsigned __int16)v12 | 0x80070000;
      goto LABEL_9;
    }
  }
  else
  {
    AddRef = g_pResourceManager->lpVtbl[1].AddRef;
    if ( (char *)AddRef == (char *)ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates )
      v12 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(
              (ExecutionModel::ResourceManager *)g_pResourceManager,
              v7,
              DestinationSid,
              a2,
              a3);
    else
      v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _BYTE *, union _LARGE_INTEGER *, union _LARGE_INTEGER *))AddRef)(
              g_pResourceManager,
              v7,
              DestinationSid,
              a2,
              a3);
    v13 = (unsigned int)v12;
  }
  v17 = v12;
LABEL_9:
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v13, 2uLL) )
  {
    v23 = 0;
    v21 = &v17;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)v13, &unk_1800614A0, v14, v15, 3u, &pData);
    LODWORD(v13) = v17;
  }
  return (unsigned int)v13;
}
