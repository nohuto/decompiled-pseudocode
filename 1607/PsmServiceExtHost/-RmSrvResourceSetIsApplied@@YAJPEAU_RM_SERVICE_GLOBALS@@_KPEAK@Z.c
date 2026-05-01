/*
 * XREFs of ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x18002DE38
 * Callers:
 *     ?IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ @ 0x180028FF0 (-IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ.c)
 * Callees:
 *     RmpResourceSetTableFindEmSetById @ 0x180014060 (RmpResourceSetTableFindEmSetById.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetIsApplied(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned int *a3)
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
  unsigned int v15; // [rsp+30h] [rbp-59h] BYREF
  ExecutionModel::ResourceSet *v16; // [rsp+38h] [rbp-51h] BYREF
  __int64 v17; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp-19h]
  int v20; // [rsp+78h] [rbp-11h]
  int v21; // [rsp+7Ch] [rbp-Dh]
  __int64 *v22; // [rsp+80h] [rbp-9h]
  int v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+8Ch] [rbp+3h]
  ExecutionModel::ResourceSet **v25; // [rsp+90h] [rbp+7h]
  int v26; // [rsp+98h] [rbp+Fh]
  int v27; // [rsp+9Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+17h] BYREF

  v17 = a2;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_180040195, v6, v7, 2u, &pData);
  v16 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  EmSetById = RmpResourceSetTableFindEmSetById((__int64)a1 + 1864, v17, &v16);
  v9 = v16;
  if ( EmSetById >= 0 )
  {
    *a3 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)v16 + 171) + 88LL))((char *)v16 + 1368);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    v15 = 0;
  }
  else
  {
    v15 = EmSetById | 0x10000000;
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 9uLL) )
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
    TlgWrite(v11, &unk_18004008E, v12, v13, 5u, &v18);
  }
  if ( v9 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
  return v15;
}
