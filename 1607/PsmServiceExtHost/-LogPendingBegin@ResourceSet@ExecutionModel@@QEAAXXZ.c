/*
 * XREFs of ?LogPendingBegin@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180011D28
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180003658 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     ?GetId@ResourceSet@ExecutionModel@@UEBA_KXZ @ 0x180012490 (-GetId@ResourceSet@ExecutionModel@@UEBA_KXZ.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingBegin(ExecutionModel::ResourceSet *this)
{
  DWORD TickCount; // eax
  UCHAR v3; // dl
  const struct _TlgProvider_t *v4; // rcx
  bool v5; // zf
  unsigned __int64 *v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  __int64 (*v8)(void); // rax
  __int64 Id; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  bool v12; // [rsp+30h] [rbp-49h] BYREF
  int v13; // [rsp+34h] [rbp-45h] BYREF
  __int64 v14; // [rsp+38h] [rbp-41h] BYREF
  char v15[8]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+3h]
  int *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  char *v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 *v27; // [rsp+A0h] [rbp+27h]
  int v28; // [rsp+A8h] [rbp+2Fh]
  int v29; // [rsp+ACh] [rbp+33h]
  bool *v30; // [rsp+B0h] [rbp+37h]
  int v31; // [rsp+B8h] [rbp+3Fh]
  int v32; // [rsp+BCh] [rbp+43h]

  TickCount = GetTickCount();
  v5 = (*((_BYTE *)this + 1412) & 0x10) == 0;
  *((_DWORD *)this + 480) = TickCount;
  if ( !v5 )
    *((_DWORD *)this + 481) = TickCount;
  if ( TraceLoggingProviderEnabled(v4, v3, 0LL) )
  {
    ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v15, &v16, v6);
    v12 = *((_QWORD *)this + 229) != 0LL;
    if ( (unsigned int)dword_18004C030 > 4 )
    {
      if ( TlgKeywordOn(v7, 0x400000000001uLL) )
      {
        v8 = *(__int64 (**)(void))(*((_QWORD *)this + 171) + 64LL);
        if ( (char *)v8 == (char *)ExecutionModel::ResourceSet::GetId )
          Id = ExecutionModel::ResourceSet::GetId((ExecutionModel::ResourceSet *)((char *)this + 1368));
        else
          Id = v8();
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v14 = Id;
        v18 = &v14;
        v13 = *((_DWORD *)this + 354);
        v21 = &v13;
        v24 = v15;
        v27 = &v16;
        v30 = &v12;
        v19 = 8;
        v22 = 4;
        v25 = 8;
        v28 = 8;
        v31 = 1;
        TlgWrite((TraceLoggingHProvider)8, &unk_180042709, v10, v11, 7u, &pData);
      }
    }
  }
}
