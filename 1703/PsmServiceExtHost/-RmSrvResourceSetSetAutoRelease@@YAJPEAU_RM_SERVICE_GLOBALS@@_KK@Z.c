/*
 * XREFs of ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800050D0
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180004030 (RmCoreRpcSrvAcquireResourceSet.c)
 *     ?SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z @ 0x1800145A0 (-SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z.c)
 *     RmtSrv_RS_SetAutoRelease @ 0x180029B40 (RmtSrv_RS_SetAutoRelease.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetSetAutoRelease(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, int a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v9; // rbx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int (__fastcall *v14)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int v16; // [rsp+30h] [rbp-59h] BYREF
  struct ExecutionModel::ResourceSet *v17; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  unsigned __int64 *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  struct ExecutionModel::ResourceSet **v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+27h] BYREF

  v18 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_18004016D, v6, v7, 2u, &pData);
  v17 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v18, &v17);
  v9 = v17;
  if ( EmSetById < 0 )
  {
    v16 = EmSetById | 0x10000000;
  }
  else
  {
    *((_DWORD *)v17 + 351) &= ~4u;
    *((_DWORD *)v9 + 351) |= a3 != 0 ? 4 : 0;
    v16 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 9uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v16;
    v23 = &v18;
    v26 = &v17;
    v21 = 4;
    v24 = 8;
    LODWORD(v17) = a3;
    v27 = 4;
    TlgWrite(v11, &unk_1800405C8, v12, v13, 5u, &v19);
  }
  if ( v9 )
  {
    v14 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v14 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v9);
    else
      v14(v9);
  }
  return v16;
}
