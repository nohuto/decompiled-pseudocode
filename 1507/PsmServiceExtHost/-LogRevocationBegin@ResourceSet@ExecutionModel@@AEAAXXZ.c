/*
 * XREFs of ?LogRevocationBegin@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800405AC
 * Callers:
 *     ?OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x180040960 (-OnRelease@ResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z.c)
 * Callees:
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180001C58 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogRevocationBegin(ExecutionModel::ResourceSet *this)
{
  UCHAR v2; // dl
  TraceLoggingHProvider v3; // rcx
  unsigned __int64 *v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  ExecutionModel::ResourceSet *v11; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  ExecutionModel::ResourceSet **v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  int *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  _BYTE *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]
  unsigned __int64 *v22; // [rsp+A0h] [rbp+37h]
  int v23; // [rsp+A8h] [rbp+3Fh]
  int v24; // [rsp+ACh] [rbp+43h]

  *((_DWORD *)this + 477) = GetTickCount();
  if ( TraceLoggingProviderEnabled(v3, v2, 0LL) )
  {
    ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v9, &v10, v4);
    if ( (unsigned int)dword_1800690A0 > 4 )
    {
      if ( TlgKeywordOn(v5, 0x200000000001uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v13 = &v11;
        v8 = *((_DWORD *)this + 352);
        v16 = &v8;
        v19 = v9;
        v22 = &v10;
        v11 = this;
        v14 = 8;
        v17 = 4;
        v20 = 8;
        v23 = 8;
        TlgWrite((TraceLoggingHProvider)8, &unk_18005C838, v6, v7, 6u, &pData);
      }
    }
  }
}
