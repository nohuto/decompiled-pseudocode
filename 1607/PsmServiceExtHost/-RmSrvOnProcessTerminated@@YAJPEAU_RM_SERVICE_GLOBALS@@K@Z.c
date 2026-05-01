/*
 * XREFs of ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002DD64
 * Callers:
 *     RmtSrv_RM_OnProcessTerminated @ 0x180028EE0 (RmtSrv_RM_OnProcessTerminated.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x18002CCC0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
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
  int v12; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    TlgWrite(v4, &unk_180040567, v5, v6, 2u, &pData);
  ExecutionModel::ResourceManager::OnProcessTerminated(a1[418], a2);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v7, 9uLL) )
  {
    v16 = 0;
    v14 = &v12;
    v12 = a2;
    v15 = 4;
    TlgWrite(v8, &unk_18004011B, v9, v10, 3u, &pData);
  }
  return 0LL;
}
