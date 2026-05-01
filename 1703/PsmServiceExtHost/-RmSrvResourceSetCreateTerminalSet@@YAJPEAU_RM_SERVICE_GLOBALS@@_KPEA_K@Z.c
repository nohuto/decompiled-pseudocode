/*
 * XREFs of ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001EE0
 * Callers:
 *     ?CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x180014600 (-CreateTerminalResourceSet@RmpRpExtResourceSetThunk@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 *     RmtSrv_RS_CreateTerminalResourceSet @ 0x180029B10 (RmtSrv_RS_CreateTerminalResourceSet.c)
 * Callees:
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x180001504 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetCreateTerminalSet(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  struct ExecutionModel::ResourceSet *v8; // rbx
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v10; // rdi
  const struct _TlgProvider_t *v11; // rcx
  int v12; // edx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // [rsp+30h] [rbp-69h] BYREF
  struct ExecutionModel::ResourceSet *v20; // [rsp+38h] [rbp-61h] BYREF
  struct ExecutionModel::ResourceSet *v21; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  unsigned __int64 *v27; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  unsigned __int64 *v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+98h] [rbp-1h]
  int v32; // [rsp+9Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+17h] BYREF

  v22 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_18004097E, v6, v7, 2u, &pData);
  v21 = 0LL;
  v8 = 0LL;
  v20 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v22, &v21);
  v10 = v21;
  if ( EmSetById >= 0 )
  {
    v17 = ExecutionModel::ResourceSet::CreateTerminalResourceSet(v21, &v20);
    v8 = v20;
    v19 = v17;
    if ( v17 >= 0 )
    {
      v18 = *((_QWORD *)v20 + 230);
      v19 = 0;
      *a3 = v18;
    }
  }
  else
  {
    v19 = EmSetById | 0x10000000;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 9uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v24 = &v19;
    v27 = &v22;
    v28 = v12 - 1;
    v31 = v12 - 1;
    v25 = 4;
    v30 = a3;
    TlgWrite(v13, &unk_180040A4E, v14, v15, 5u, &v23);
  }
  if ( v10 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v8 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL))(v8);
  return v19;
}
