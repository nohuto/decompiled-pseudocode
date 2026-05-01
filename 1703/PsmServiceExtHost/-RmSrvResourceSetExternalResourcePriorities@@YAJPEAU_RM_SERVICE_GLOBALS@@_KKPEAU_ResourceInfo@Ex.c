/*
 * XREFs of ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180004544
 * Callers:
 *     ?SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800145C0 (-SetExternalResourcePriorities@RmpRpExtResourceSetThunk@@UEAAJKQEAU_ResourceInfo@ExecutionModel@.c)
 *     RmtSrv_RS_SetExternalResourcePriorities @ 0x180029B50 (RmtSrv_RS_SetExternalResourcePriorities.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18000FE9C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetExternalResourcePriorities(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4)
{
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v11; // rbx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int (__fastcall *v16)(ExecutionModel::ResourceSet *__hidden); // rax
  int v18; // [rsp+30h] [rbp-69h] BYREF
  struct ExecutionModel::ResourceSet *v19; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-49h] BYREF
  int *v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+78h] [rbp-21h]
  int v24; // [rsp+7Ch] [rbp-1Dh]
  unsigned __int64 *v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  int v27; // [rsp+8Ch] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+7h] BYREF

  v20 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v7, &unk_18004074D, v8, v9, 2u, &pData);
  v19 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v20, &v19);
  v11 = v19;
  if ( EmSetById < 0 )
  {
    v18 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v18 = ExecutionModel::ResourceSet::SetExternalResourcePriorities(v11, a3, a4);
    if ( v18 >= 0 )
      v18 = 0;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v12, 9uLL) )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v18;
    v25 = &v20;
    v23 = 4;
    v26 = 8;
    TlgWrite(v13, &unk_180040E2B, v14, v15, 4u, &v21);
  }
  if ( v11 )
  {
    v16 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v11 + 16LL);
    if ( v16 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v11);
    else
      v16(v11);
  }
  return (unsigned int)v18;
}
