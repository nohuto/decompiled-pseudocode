/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x1800023F0
 * Callers:
 *     RmgrSrv_RmRegisterResource @ 0x180001550 (RmgrSrv_RmRegisterResource.c)
 * Callees:
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18000CC78 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rsi
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v12; // [rsp+30h] [rbp-49h] BYREF
  int v13; // [rsp+34h] [rbp-45h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-39h] BYREF
  __int64 v16; // [rsp+48h] [rbp-31h]
  int v17; // [rsp+50h] [rbp-29h]
  bool v18; // [rsp+54h] [rbp-25h]
  char v19; // [rsp+55h] [rbp-24h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  unsigned int *v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]
  int *v27; // [rsp+A0h] [rbp+27h]
  int v28; // [rsp+A8h] [rbp+2Fh]
  int v29; // [rsp+ACh] [rbp+33h]

  v5 = a3;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v12 = 0;
  v15 = a2;
  v16 = v5;
  v17 = 101;
  v18 = a4 == 0;
  v19 = 0;
  if ( ((_DWORD)v5 || a4) && a2 <= 0x2F )
    v12 = ExecutionModel::BaseResourceSet::InitializeResource(
            *(ExecutionModel::BaseResourceSet **)(a1 + 176),
            (const struct ExecutionModel::_ResourceInfo *)&v15);
  else
    v12 = -2147467259;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v21 = &v12;
    v24 = &v14;
    v27 = &v13;
    v22 = (int)v8;
    v14 = a2;
    v25 = (int)v8;
    v13 = v5;
    v28 = (int)v8;
    TlgWrite(v8, &unk_180061D07, v9, v10, 5u, &pData);
  }
  return v12;
}
