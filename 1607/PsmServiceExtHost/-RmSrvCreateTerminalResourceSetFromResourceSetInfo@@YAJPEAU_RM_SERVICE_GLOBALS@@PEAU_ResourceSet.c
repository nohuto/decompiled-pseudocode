/*
 * XREFs of ?RmSrvCreateTerminalResourceSetFromResourceSetInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEA_K@Z @ 0x18002D81C
 * Callers:
 *     RmtSrv_RM_CreateTerminalResourceSet @ 0x180028E30 (RmtSrv_RM_CreateTerminalResourceSet.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?CreateTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAPEAUIResourceSet@2@@Z @ 0x18002C000 (-CreateTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAPEAUIR.c)
 */

__int64 __fastcall RmSrvCreateTerminalResourceSetFromResourceSetInfo(
        ExecutionModel::ResourceManager **a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        unsigned __int64 *a3)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // eax
  struct ExecutionModel::IResourceSet *v10; // rbx
  unsigned __int64 v11; // rcx
  char *v12; // rcx
  unsigned __int64 v13; // rax
  const GUID *v14; // r8
  const GUID *v15; // r9
  TraceLoggingHProvider hProvider; // [rsp+30h] [rbp-29h] BYREF
  struct ExecutionModel::IResourceSet *v18; // [rsp+38h] [rbp-21h] BYREF
  __int64 v19; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  TraceLoggingHProvider *p_hProvider; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  __int64 *v24; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]

  v18 = 0LL;
  v19 = -1LL;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    TlgWrite(v6, &unk_18004052A, v7, v8, 2u, &pData);
  v9 = ExecutionModel::ResourceManager::CreateTerminalResourceSet(a1[418], a2, &v18);
  v10 = v18;
  v11 = (unsigned int)v9;
  LODWORD(hProvider) = v9;
  if ( v9 >= 0 )
  {
    if ( v18 )
      v12 = (char *)v18 - 1368;
    else
      v12 = 0LL;
    v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)v12 + 171) + 64LL))(v12 + 1368);
    v11 = 0LL;
    v19 = v13;
    LODWORD(hProvider) = 0;
    *a3 = v13;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = (unsigned int)hProvider;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v11, 9uLL) )
  {
    v23 = 0;
    v26 = 0;
    p_hProvider = &hProvider;
    v24 = &v19;
    v22 = 4;
    v25 = 8;
    TlgWrite((TraceLoggingHProvider)v11, &unk_1800402F3, v14, v15, 4u, &pData);
    LODWORD(v11) = (_DWORD)hProvider;
  }
  return (unsigned int)v11;
}
