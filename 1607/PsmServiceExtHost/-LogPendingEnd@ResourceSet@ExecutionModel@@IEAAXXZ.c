/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180012328
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180012580 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180003658 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  unsigned __int64 *v3; // r8
  int v4; // edi
  const struct _TlgProvider_t *v5; // rcx
  DWORD v6; // esi
  int v7; // edi
  __int64 (*v8)(void); // rax
  __int64 Id; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // [rsp+38h] [rbp-69h] BYREF
  int v13; // [rsp+3Ch] [rbp-65h] BYREF
  DWORD v14; // [rsp+40h] [rbp-61h] BYREF
  __int64 v15; // [rsp+48h] [rbp-59h] BYREF
  char v16[8]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 v17[2]; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+88h] [rbp-19h]
  int v20; // [rsp+90h] [rbp-11h]
  int v21; // [rsp+94h] [rbp-Dh]
  int *v22; // [rsp+98h] [rbp-9h]
  int v23; // [rsp+A0h] [rbp-1h]
  int v24; // [rsp+A4h] [rbp+3h]
  char *v25; // [rsp+A8h] [rbp+7h]
  int v26; // [rsp+B0h] [rbp+Fh]
  int v27; // [rsp+B4h] [rbp+13h]
  unsigned __int64 *v28; // [rsp+B8h] [rbp+17h]
  int v29; // [rsp+C0h] [rbp+1Fh]
  int v30; // [rsp+C4h] [rbp+23h]
  int *v31; // [rsp+C8h] [rbp+27h]
  int v32; // [rsp+D0h] [rbp+2Fh]
  int v33; // [rsp+D4h] [rbp+33h]
  DWORD *v34; // [rsp+D8h] [rbp+37h]
  int v35; // [rsp+E0h] [rbp+3Fh]
  int v36; // [rsp+E4h] [rbp+43h]

  if ( TraceLoggingProviderEnabled(this, a2, 0LL) )
  {
    ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v16, v17, v3);
    v4 = *((_DWORD *)this + 481);
    v6 = GetTickCount() - v4;
    v7 = v4 - *((_DWORD *)this + 480);
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      if ( TlgKeywordOn(v5, 0x400000000001uLL) )
      {
        v8 = *(__int64 (**)(void))(*((_QWORD *)this + 171) + 64LL);
        if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::GetId )
          Id = ExecutionModel::ResourceSet::GetId((ExecutionModel::ResourceSet *)((char *)this + 1368));
        else
          Id = v8();
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v15 = Id;
        v19 = &v15;
        v12 = *((_DWORD *)this + 354);
        v22 = &v12;
        v25 = v16;
        v28 = v17;
        v31 = &v13;
        v34 = &v14;
        v20 = 8;
        v23 = 4;
        v26 = 8;
        v29 = 8;
        v13 = v7;
        v32 = 4;
        v14 = v6;
        v35 = 4;
        TlgWrite((TraceLoggingHProvider)8, &unk_180042C50, v10, v11, 8u, &pData);
      }
    }
  }
}
