/*
 * XREFs of ?RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18002D728
 * Callers:
 *     RmtSrv_RM_ApplyTerminalResourceSet @ 0x180028E10 (RmtSrv_RM_ApplyTerminalResourceSet.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002BEE8 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 */

__int64 __fastcall RmSrvApplyTerminalResourceSet(ExecutionModel::ResourceManager **a1, unsigned int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  unsigned int *v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+2Fh]

  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    TlgWrite(v4, &unk_180040228, v5, v6, 2u, &pData);
  v7 = ExecutionModel::ResourceManager::ApplyTerminalResourceSet(a1[418], a2);
  v8 = (const struct _TlgProvider_t *)(unsigned int)v7;
  if ( v7 >= 0 )
    v8 = 0LL;
  v12 = (int)v8;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v8, 9uLL) )
  {
    v16 = 4LL;
    v15 = &v12;
    v17 = &v13;
    v13 = a2;
    v18 = 4LL;
    TlgWrite(v8, &unk_18004046D, v9, v10, 4u, &pData);
    LODWORD(v8) = v12;
  }
  return (unsigned int)v8;
}
