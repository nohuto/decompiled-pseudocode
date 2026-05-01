/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x180002BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z @ 0x18000218C (-RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18000C1BC (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(void *a1, union _LARGE_INTEGER *a2, union _LARGE_INTEGER *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  NTSTATUS RpcClientInformation; // ebx
  unsigned int v7; // edi
  const GUID *v8; // r8
  const GUID *v9; // r9
  ULONG v10; // eax
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v16[3]; // [rsp+34h] [rbp-65h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-9h] BYREF
  unsigned int *v19; // [rsp+B0h] [rbp+17h]
  int v20; // [rsp+B8h] [rbp+1Fh]
  int v21; // [rsp+BCh] [rbp+23h]

  v15 = 0;
  RpcClientInformation = RmpQueryRpcClientInformation(a1, DestinationSid, (unsigned int *)a3, v16, 0LL);
  v7 = v16[0];
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 2uLL) )
  {
    v21 = 0;
    v19 = v16;
    v16[0] = v7;
    v20 = 4;
    TlgWrite(v5, &unk_18003F0D1, v8, v9, 3u, &pData);
  }
  if ( RpcClientInformation < 0 )
  {
    v10 = RtlNtStatusToDosError(RpcClientInformation);
    v11 = (const struct _TlgProvider_t *)v10;
    if ( (int)v10 > 0 )
    {
      v11 = (const struct _TlgProvider_t *)((unsigned __int16)v10 | 0x80070000);
      v15 = (unsigned __int16)v10 | 0x80070000;
      goto LABEL_7;
    }
  }
  else
  {
    v10 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(v5, v7, DestinationSid, a2, a3);
    v11 = (const struct _TlgProvider_t *)v10;
  }
  v15 = v10;
LABEL_7:
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 2uLL) )
  {
    v21 = 0;
    v19 = &v15;
    v20 = 4;
    TlgWrite(v11, &unk_18003F3C1, v12, v13, 3u, &pData);
    LODWORD(v11) = v15;
  }
  return (unsigned int)v11;
}
