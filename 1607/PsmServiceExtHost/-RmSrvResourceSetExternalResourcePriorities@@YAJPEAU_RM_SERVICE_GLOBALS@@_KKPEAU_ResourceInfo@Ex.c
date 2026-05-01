/*
 * XREFs of ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800181FC
 * Callers:
 *     ?SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180016230 (-SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@.c)
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x180028FB0 (RmtSrv_RS_SetExternalResourcePriorities.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124A0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetExternalResourcePriorities(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v11; // rbx
  struct _RM_ACTIVITY_HOST **v12; // rcx
  __int64 (__fastcall *v13)(struct _RM_ACTIVITY_HOST **, unsigned int, struct ExecutionModel::_ResourceInfo *const); // rax
  int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 (__fastcall *v19)(ExecutionModel::ResourceSet *); // rax
  unsigned int v21; // [rsp+30h] [rbp-39h] BYREF
  ExecutionModel::ResourceSet *v22; // [rsp+38h] [rbp-31h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  unsigned int *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+7Ch] [rbp+13h]
  __int64 *v28; // [rsp+80h] [rbp+17h]
  int v29; // [rsp+88h] [rbp+1Fh]
  int v30; // [rsp+8Ch] [rbp+23h]

  v23 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v7, &unk_180040342, v8, v9, 2u, &pData);
  v22 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((__int64)a1 + 1864, v23, &v22);
  v11 = v22;
  if ( EmSetById < 0 )
  {
    v21 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v12 = (struct _RM_ACTIVITY_HOST **)((char *)v11 + 1368);
    v13 = *(__int64 (__fastcall **)(struct _RM_ACTIVITY_HOST **, unsigned int, struct ExecutionModel::_ResourceInfo *const))(*((_QWORD *)v11 + 171) + 112LL);
    if ( v13 == ExecutionModel::ResourceSet::SetExternalResourcePriorities )
      v14 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(v12, a3, a4);
    else
      v14 = v13(v12, a3, a4);
    v21 = v14;
    if ( v14 >= 0 )
      v21 = 0;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v15, 9uLL) )
  {
    v27 = 0;
    v30 = 0;
    v25 = &v21;
    v28 = &v23;
    v26 = 4;
    v29 = 8;
    TlgWrite(v16, &unk_180040712, v17, v18, 4u, &pData);
  }
  if ( v11 )
  {
    v19 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 16LL);
    if ( v19 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v11);
    else
      v19(v11);
  }
  return v21;
}
