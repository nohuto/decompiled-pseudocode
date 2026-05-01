/*
 * XREFs of ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAX_K@Z @ 0x180035CA8
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E00 (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2)
{
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]
  unsigned __int64 v15; // [rsp+A8h] [rbp+10h] BYREF

  v15 = a2;
  RmpCommitValuesSubtract(*((_QWORD *)this + 231), a2, (_QWORD *)this + 231);
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368) )
    RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 175));
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v3, 1uLL) )
    {
      v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 64LL))((char *)this + 1368);
      v11 = 0;
      v14 = 0;
      v7 = v4;
      v9 = &v7;
      v12 = &v15;
      v10 = 8;
      v13 = 8;
      TlgWrite((TraceLoggingHProvider)8, &unk_1800425D6, v5, v6, 4u, &pData);
    }
  }
}
