/*
 * XREFs of ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180001A2C
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180001C58 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingBegin(ExecutionModel::ResourceSet *this)
{
  UCHAR v2; // dl
  TraceLoggingHProvider v3; // rcx
  unsigned __int64 *v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  bool v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+34h] [rbp-45h] BYREF
  ExecutionModel::ResourceSet *v10; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  ExecutionModel::ResourceSet **v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  int *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  _BYTE *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]
  bool *v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B8h] [rbp+3Fh]
  int v28; // [rsp+BCh] [rbp+43h]

  *((_DWORD *)this + 476) = GetTickCount();
  if ( TraceLoggingProviderEnabled(v3, v2, 0LL) )
  {
    ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v12, &v11, v4);
    v8 = *((_QWORD *)this + 225) != 0LL;
    if ( (unsigned int)dword_1800690A0 > 4 )
    {
      if ( TlgKeywordOn(v5, 0x200000000001uLL) )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v14 = &v10;
        v9 = *((_DWORD *)this + 352);
        v17 = &v9;
        v20 = v12;
        v23 = &v11;
        v26 = &v8;
        v10 = this;
        v15 = 8;
        v18 = 4;
        v21 = 8;
        v24 = 8;
        v27 = 1;
        TlgWrite((TraceLoggingHProvider)8, &unk_18005C4F0, v6, v7, 7u, &pData);
      }
    }
  }
}
