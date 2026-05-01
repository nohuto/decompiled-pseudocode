/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ @ 0x180003D00
 * Callers:
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x18000332C (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 * Callees:
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180004260 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180004330 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  unsigned __int64 *v3; // r8
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  __int64 v10; // [rsp+48h] [rbp-41h] BYREF
  ExecutionModel::ResourceSet *v11; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  ExecutionModel::ResourceSet **v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+8Ch] [rbp+3h]
  int *v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  _BYTE *v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  unsigned __int64 *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  __int64 *v25; // [rsp+C0h] [rbp+37h]
  int v26; // [rsp+C8h] [rbp+3Fh]
  int v27; // [rsp+CCh] [rbp+43h]

  if ( TraceLoggingProviderEnabled(this, a2, 0LL) )
  {
    ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v8, &v9, v3);
    GetTickCount();
    if ( (unsigned int)dword_180071060 > 4 )
    {
      if ( TlgKeywordOn(v4, 0x200000000001uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v13 = &v11;
        v7 = *((_DWORD *)this + 352);
        v16 = &v7;
        v19 = v8;
        v22 = &v9;
        v10 = (unsigned int)v6;
        v25 = &v10;
        v11 = this;
        v14 = 8;
        v17 = 4;
        v20 = 8;
        v23 = 8;
        v26 = 8;
        TlgWrite((TraceLoggingHProvider)8, &unk_1800642BB, v5, v6, 7u, &pData);
      }
    }
  }
}
