/*
 * XREFs of ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180036410
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(ExecutionModel::ResourceSet *this)
{
  unsigned int v2; // r8d
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  unsigned int v10; // [rsp+30h] [rbp-9h] BYREF
  __int64 v11; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned int *v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  __int64 *v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]

  v2 = -2147467259;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)this + 224);
  v10 = -2147467259;
  if ( v3 )
  {
    v2 = (*(__int64 (__fastcall **)(const struct _TlgProvider_t *, _QWORD))(*(_QWORD *)v3 + 40LL))(
           v3,
           *((_QWORD *)this + 225));
    v10 = v2;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v3, 1uLL) )
  {
    v15 = 0;
    v13 = &v10;
    v4 = *((_QWORD *)this + 171);
    v14 = 4;
    v5 = (*(__int64 (__fastcall **)(char *))(v4 + 64))((char *)this + 1368);
    v18 = 0;
    v11 = v5;
    v16 = &v11;
    v17 = 8;
    TlgWrite(v6, &unk_18004262A, v7, v8, 4u, &pData);
    return v10;
  }
  return v2;
}
