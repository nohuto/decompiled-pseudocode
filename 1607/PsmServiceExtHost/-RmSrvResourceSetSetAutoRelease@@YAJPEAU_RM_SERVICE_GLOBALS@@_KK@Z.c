/*
 * XREFs of ?RmSrvResourceSetSetAutoRelease@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800172E4
 * Callers:
 *     ?SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z @ 0x180016210 (-SetAutoRelease@RmpRpExtResourceSetThunk@@UEAAX_N@Z.c)
 *     RmtSrv_RS_SetAutoRelease @ 0x180028F90 (RmtSrv_RS_SetAutoRelease.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z @ 0x180012310 (-SetAutoRelease@ResourceSet@ExecutionModel@@UEAAX_N@Z.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetSetAutoRelease(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, int a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int EmSetById; // eax
  __int64 v9; // rdx
  ExecutionModel::ResourceSet *v10; // rbx
  ExecutionModel::ResourceSet *v11; // rcx
  void (__fastcall *v12)(ExecutionModel::ResourceSet *, char); // rax
  const struct _TlgProvider_t *v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  __int64 (__fastcall *v17)(ExecutionModel::ResourceSet *); // rax
  unsigned int v19; // [rsp+30h] [rbp-49h] BYREF
  ExecutionModel::ResourceSet *v20; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  __int64 *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]
  ExecutionModel::ResourceSet **v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+9Ch] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+27h] BYREF

  v21 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_1800400D0, v6, v7, 2u, &pData);
  v20 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((__int64)a1 + 1864, v21, &v20);
  v10 = v20;
  if ( EmSetById < 0 )
  {
    v19 = EmSetById | 0x10000000;
  }
  else
  {
    v11 = (ExecutionModel::ResourceSet *)((char *)v20 + 1368);
    LOBYTE(v9) = a3 != 0;
    v12 = *(void (__fastcall **)(ExecutionModel::ResourceSet *, char))(*((_QWORD *)v20 + 171) + 128LL);
    if ( v12 == ExecutionModel::ResourceSet::SetAutoRelease )
      ExecutionModel::ResourceSet::SetAutoRelease(v11, v9);
    else
      v12(v11, v9);
    v19 = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v13, 9uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v23 = &v19;
    v26 = &v21;
    v29 = &v20;
    v24 = 4;
    v27 = 8;
    LODWORD(v20) = a3;
    v30 = 4;
    TlgWrite(v14, &unk_1800401DD, v15, v16, 5u, &v22);
  }
  if ( v10 )
  {
    v17 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v10 + 16LL);
    if ( v17 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v10);
    else
      v17(v10);
  }
  return v19;
}
