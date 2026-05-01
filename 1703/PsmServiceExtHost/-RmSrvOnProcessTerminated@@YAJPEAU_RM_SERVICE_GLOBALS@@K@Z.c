/*
 * XREFs of ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002D1E8
 * Callers:
 *     RmtSrv_RM_OnProcessTerminated @ 0x180029AE0 (RmtSrv_RM_OnProcessTerminated.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002B61C (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 */

__int64 __fastcall RmSrvOnProcessTerminated(ExecutionModel::ResourceManager **a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+64h] [rbp-24h]

  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    TlgWrite(v4, &unk_180040BAC, v5, v6, 2u, &pData);
  ExecutionModel::ResourceManager::OnProcessTerminated(a1[191], a2);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v7, 9uLL) )
  {
    v16 = 0;
    v14 = &v12;
    v12 = a2;
    v15 = 4;
    TlgWrite(v8, &unk_18004020A, v9, v10, 3u, &pData);
  }
  return 0LL;
}
