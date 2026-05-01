/*
 * XREFs of ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001864
 * Callers:
 *     ?CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x1800017B0 (-CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 *     RmtSrv_RS_CreateTerminalResourceSet @ 0x180028F30 (RmtSrv_RS_CreateTerminalResourceSet.c)
 * Callees:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180001AE0 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetCreateTerminalSet(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned __int64 *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v9; // rbx
  ExecutionModel::ResourceSet *v10; // rcx
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::IResourceSet **); // rax
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  struct ExecutionModel::IResourceSet *v14; // rcx
  ExecutionModel::ResourceSet *v15; // rcx
  __int64 (*v16)(void); // rax
  unsigned __int64 Id; // rax
  int v18; // edx
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned int (__fastcall *v22)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int v24; // [rsp+30h] [rbp-59h] BYREF
  struct ExecutionModel::IResourceSet *v25; // [rsp+38h] [rbp-51h] BYREF
  ExecutionModel::ResourceSet *v26; // [rsp+40h] [rbp-49h] BYREF
  __int64 v27; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v29; // [rsp+70h] [rbp-19h]
  int v30; // [rsp+78h] [rbp-11h]
  int v31; // [rsp+7Ch] [rbp-Dh]
  __int64 *v32; // [rsp+80h] [rbp-9h]
  int v33; // [rsp+88h] [rbp-1h]
  int v34; // [rsp+8Ch] [rbp+3h]
  unsigned __int64 *v35; // [rsp+90h] [rbp+7h]
  int v36; // [rsp+98h] [rbp+Fh]
  int v37; // [rsp+9Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+17h] BYREF

  v27 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_180040500, v6, v7, 2u, &pData);
  v26 = 0LL;
  v25 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((char *)a1 + 1864, v27, &v26);
  v9 = v26;
  if ( EmSetById < 0 )
  {
    v24 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v10 = (ExecutionModel::ResourceSet *)((char *)v9 + 1368);
    v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::IResourceSet **))(*((_QWORD *)v9 + 171) + 40LL);
    if ( v11 == ExecutionModel::ResourceSet::CreateTerminalResourceSet )
      v12 = ExecutionModel::ResourceSet::CreateTerminalResourceSet(v10, &v25);
    else
      v12 = v11(v10, &v25);
    v24 = v12;
    if ( v12 >= 0 )
    {
      v14 = v25;
      if ( v25 )
        v14 = (struct ExecutionModel::IResourceSet *)((char *)v25 - 1368);
      v15 = (struct ExecutionModel::IResourceSet *)((char *)v14 + 1368);
      v16 = *(__int64 (**)(void))(*(_QWORD *)v15 + 64LL);
      if ( (char *)v16 == (char *)ExecutionModel::ResourceSet::GetId )
        Id = ExecutionModel::ResourceSet::GetId(v15);
      else
        Id = v16();
      v24 = 0;
      *a3 = Id;
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v13, 9uLL) )
  {
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v29 = &v24;
    v32 = &v27;
    v33 = v18 - 1;
    v36 = v18 - 1;
    v30 = 4;
    v35 = a3;
    TlgWrite(v19, &unk_18004029D, v20, v21, 5u, &v28);
  }
  if ( v9 )
  {
    v22 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v22 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v9);
    else
      v22(v9);
  }
  if ( v25 )
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v25 + 16LL))(v25);
  return v24;
}
