/*
 * XREFs of ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800343DC
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(ExecutionModel::ResourceSet *this)
{
  const GUID *v2; // r8
  __int64 v3; // rcx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v5; // r9
  int v7; // [rsp+30h] [rbp-19h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]

  LODWORD(v2) = -2147467259;
  v3 = *((_QWORD *)this + 223);
  v7 = -2147467259;
  if ( v3 )
  {
    LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((_QWORD *)this + 224));
    v7 = (int)v2;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    v8 = *((_QWORD *)this + 230);
    v13 = &v8;
    v11 = (int)cData;
    v14 = 8;
    TlgWrite(cData, &unk_180042EBD, v2, v5, (UINT32)cData, &pData);
    LODWORD(v2) = v7;
  }
  return (unsigned int)v2;
}
