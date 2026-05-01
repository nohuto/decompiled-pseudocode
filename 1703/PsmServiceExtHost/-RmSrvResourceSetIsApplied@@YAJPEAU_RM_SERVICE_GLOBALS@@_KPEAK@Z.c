/*
 * XREFs of ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x18002D2BC
 * Callers:
 *     ?IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ @ 0x180029B80 (-IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18000F080 (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetIsApplied(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2, unsigned int *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v9; // rbx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-69h] BYREF
  struct ExecutionModel::ResourceSet *v16; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  unsigned __int64 *v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+8Ch] [rbp-Dh]
  struct ExecutionModel::ResourceSet **v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+17h] BYREF

  v17 = a2;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_1800403DC, v6, v7, 2u, &pData);
  v16 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), v17, &v16);
  v9 = v16;
  if ( EmSetById >= 0 )
  {
    *a3 = *((unsigned __int8 *)v16 + 12);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v15 = 0;
  }
  else
  {
    v15 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 9uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v15;
    v22 = &v17;
    LODWORD(v16) = *a3;
    v25 = &v16;
    v20 = 4;
    v23 = 8;
    v26 = 4;
    TlgWrite(v11, &unk_1800400FC, v12, v13, 5u, &v18);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
  return v15;
}
