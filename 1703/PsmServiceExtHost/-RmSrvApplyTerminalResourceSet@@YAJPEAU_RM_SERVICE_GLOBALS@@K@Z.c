/*
 * XREFs of ?RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002BDF4
 * Callers:
 *     RmtSrv_RM_ApplyTerminalResourceSet @ 0x180029A40 (RmtSrv_RM_ApplyTerminalResourceSet.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002B19C (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 */

__int64 __fastcall RmSrvApplyTerminalResourceSet(struct _RM_SERVICE_GLOBALS ***a1, unsigned int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp-11h]
  unsigned int *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+17h] BYREF

  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    TlgWrite(v4, &unk_180040613, v5, v6, 2u, &pData);
  v7 = ExecutionModel::ResourceManager::ApplyTerminalResourceSet(a1[191], a2);
  v8 = (const struct _TlgProvider_t *)(unsigned int)v7;
  if ( v7 >= 0 )
    v8 = 0LL;
  v12 = (int)v8;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v16 = 4LL;
    v15 = &v12;
    v17 = &v13;
    v13 = a2;
    v18 = 4LL;
    TlgWrite(v8, &unk_1800408EB, v9, v10, 4u, &v14);
    LODWORD(v8) = v12;
  }
  return (unsigned int)v8;
}
