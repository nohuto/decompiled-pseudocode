/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x18000EA70
 * Callers:
 *     RmgrSrv_RmRegisterResource @ 0x18001A640 (RmgrSrv_RmRegisterResource.c)
 * Callees:
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18001109C (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-41h] BYREF
  __int128 v14; // [rsp+48h] [rbp-39h]
  __int64 v15; // [rsp+58h] [rbp-29h]
  __int128 v16; // [rsp+60h] [rbp-21h] BYREF
  __int64 v17; // [rsp+70h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  int *v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A4h] [rbp+23h]
  unsigned int *v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]
  int *v25; // [rsp+B8h] [rbp+37h]
  int v26; // [rsp+C0h] [rbp+3Fh]
  int v27; // [rsp+C4h] [rbp+43h]

  if ( a3 || a4 )
  {
    if ( a2 > 0x2F )
    {
      v11 = -805306129;
    }
    else
    {
      LODWORD(v14) = a2;
      *((_QWORD *)&v14 + 1) = a3;
      LODWORD(v15) = 101;
      BYTE4(v15) = a4 == 0;
      BYTE5(v15) = 0;
      v17 = v15;
      v16 = v14;
      RtlEnterCriticalSection(&RmpGlobalLock);
      v11 = ExecutionModel::BaseResourceSet::InitializeResource(
              *(ExecutionModel::BaseResourceSet **)(a1 + 112),
              (const struct ExecutionModel::_ResourceInfo *)&v16);
      if ( v11 >= 0 )
        v11 = 0;
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
  }
  else
  {
    v11 = -805306128;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v11;
    v22 = &v12;
    v25 = (int *)&v13;
    v20 = (int)v7;
    v12 = a2;
    v23 = (int)v7;
    v13 = a3;
    v26 = (int)v7;
    TlgWrite(v7, &unk_18003FF2E, v8, v9, 5u, &pData);
  }
  return (unsigned int)v11;
}
