/*
 * XREFs of ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180010B7C
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x18002D83C (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180004C50 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006120 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18001003C (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800102AC (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18001BCCC (-RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::HasMemoryForFGSharing(
        struct _RM_ACTIVITY_HOST **this,
        unsigned __int64 a2)
{
  unsigned __int64 EnforcedMemoryCap; // rax
  char v4; // r11
  unsigned __int64 v5; // r10
  unsigned int v6; // ebx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned __int64 ReportedMemoryCap; // rax
  unsigned __int64 *v12; // rcx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  unsigned __int64 v15; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 *v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+80h] [rbp-11h]
  int v22; // [rsp+84h] [rbp-Dh]
  unsigned __int64 *v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+90h] [rbp-1h]
  int v25; // [rsp+94h] [rbp+3h]
  unsigned __int64 *v26; // [rsp+98h] [rbp+7h]
  int v27; // [rsp+A0h] [rbp+Fh]
  int v28; // [rsp+A4h] [rbp+13h]
  unsigned __int64 *v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+B0h] [rbp+1Fh]
  int v31; // [rsp+B4h] [rbp+23h]
  unsigned __int64 *v32; // [rsp+B8h] [rbp+27h]
  int v33; // [rsp+C0h] [rbp+2Fh]
  int v34; // [rsp+C4h] [rbp+33h]
  unsigned __int64 v35; // [rsp+100h] [rbp+6Fh] BYREF

  v35 = a2;
  if ( *((_DWORD *)this + 338) )
  {
    EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap((ExecutionModel::ResourceSet *)this);
    if ( EnforcedMemoryCap < v5 )
    {
      if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)this, 9uLL) )
      {
        ReportedMemoryCap = ExecutionModel::ResourceSet::GetReportedMemoryCap((ExecutionModel::ResourceSet *)this);
        v12 = (unsigned __int64 *)this[173];
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v17 = ReportedMemoryCap;
        v20 = &v17;
        v23 = v12 + 7;
        v26 = v12 + 8;
        v21 = 8;
        v24 = 8;
        v27 = 8;
        LODWORD(ReportedMemoryCap) = *((_DWORD *)v12 + 20);
        v31 = 0;
        v34 = 0;
        LODWORD(v15) = ReportedMemoryCap;
        v29 = &v15;
        v32 = &v35;
        v30 = 4;
        v33 = 8;
        TlgWrite((TraceLoggingHProvider)v12, &unk_180042AE2, v13, v14, 7u, &pData);
      }
    }
    else
    {
      if ( !v4 )
        return 0;
      if ( (int)RmpActivityHostQueryRawTypeSpecificCommit(this[174], &v16) < 0 )
        return 0;
      v18 = RmpActivityHostComputeCommitLimit(this[174]);
      if ( (int)RmpCommitValuesSubtract(v18, v16, &v15) >= 0 && (int)RmpCommitValuesSubtract(v15, v35, &v15) >= 0 )
        return 0;
    }
    v6 = -2147220992;
  }
  else
  {
    v6 = -2147220216;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)this, 9uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v18;
    v23 = &v16;
    v26 = &v35;
    v21 = 8;
    v24 = 8;
    v27 = 8;
    TlgWrite(v8, &unk_180043279, v9, v10, 5u, &pData);
  }
  return v6;
}
