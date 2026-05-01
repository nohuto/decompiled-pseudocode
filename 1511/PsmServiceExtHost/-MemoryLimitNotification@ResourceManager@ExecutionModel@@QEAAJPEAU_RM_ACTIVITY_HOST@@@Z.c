/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C
 * Callers:
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000FAD4 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18003D120 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     RmpActivityHostQueryCommit @ 0x180015DC0 (RmpActivityHostQueryCommit.c)
 *     RmpEnforcementSettingsUpdateLimit @ 0x180019220 (RmpEnforcementSettingsUpdateLimit.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostComputeCommitThresholds @ 0x1800204F8 (RmpActivityHostComputeCommitThresholds.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z @ 0x18003B2E4 (-AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_N@Z.c)
 *     ?SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x18003E228 (-SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     RmpEnforcementApplyLimits @ 0x1800400B4 (RmpEnforcementApplyLimits.c)
 *     RmpActivityHostComputeCommitEstimate @ 0x180040CBC (RmpActivityHostComputeCommitEstimate.c)
 *     ?TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180045D40 (-TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  bool v2; // zf
  const WCHAR *v3; // r13
  const SID *v4; // r12
  int v5; // ebx
  int v7; // r10d
  ExecutionModel::ModernActivationResourceInfo *v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  int v11; // edx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // r10d
  TraceLoggingHProvider v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  ExecutionModel::ResourceSet **i; // rbx
  const struct _TlgProvider_t *v22; // rcx
  int v23; // r14d
  __int64 v24; // r10
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int v27; // eax
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  int v30; // [rsp+40h] [rbp-C0h]
  bool v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  ExecutionModel::ResourceManager *v40; // [rsp+88h] [rbp-78h]
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-60h]
  _OWORD v43[3]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v50; // [rsp+140h] [rbp+40h]
  unsigned __int64 v51; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v52; // [rsp+150h] [rbp+50h]
  unsigned __int64 v53; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  __int128 *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  char *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]

  v2 = *((_DWORD *)a2 + 5) >= 0;
  v3 = (const WCHAR *)((char *)a2 + 48);
  v4 = (const SID *)((char *)a2 + 512);
  v5 = *((_DWORD *)a2 + 145);
  v7 = *((_DWORD *)a2 + 146);
  v36 = *((_QWORD *)a2 + 3);
  v40 = this;
  v34 = v5;
  v30 = v7;
  if ( v2 )
  {
    RmpActivityHostQueryCommit(a2, 0LL, &v33);
    v8 = (ExecutionModel::ModernActivationResourceInfo *)*((_QWORD *)a2 + 75);
    v9 = v33;
    v10 = v33;
    v11 = v33;
    if ( *((_QWORD *)v8 + 7) > v33 )
      v10 = *((_QWORD *)v8 + 7);
    *((_QWORD *)v8 + 7) = v10;
    v12 = *((_OWORD *)a2 + 40);
    v41 = *((_OWORD *)a2 + 39);
    v13 = *((_OWORD *)a2 + 41);
    v42 = v12;
    v14 = *((_OWORD *)a2 + 42);
    v43[0] = v13;
    v15 = *((_OWORD *)a2 + 43);
    v43[1] = v14;
    v43[2] = v15;
    RmpActivityHostComputeCommitThresholds(
      (_DWORD)a2,
      v11,
      (unsigned int)&v41,
      (unsigned int)&v41 + 8,
      (__int64)v43,
      (__int64)&v33,
      (__int64)&v39);
    RmpEnforcementSettingsUpdateLimit(a2, &v41);
    v37 = v42;
    if ( (_QWORD)v42 )
    {
      if ( v9 > (unsigned __int64)v42 )
      {
        for ( i = (ExecutionModel::ResourceSet **)*((_QWORD *)v8 + 3);
              i != (ExecutionModel::ResourceSet **)((char *)v8 + 24)
           && (int)ExecutionModel::ResourceSet::TriggerOnOutOfMemoryCallback(i[2]) >= 0;
              i = (ExecutionModel::ResourceSet **)*i )
        {
          ;
        }
        v5 = v34;
        v4 = (const SID *)((char *)a2 + 512);
      }
      ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v8, 0LL, &v35, 0LL, 0LL, 0LL);
      RmpActivityHostComputeCommitEstimate(v9, v37, 0LL, &v39);
      if ( v37 <= v9
        || v9 < v35
        || (v31 = 0,
            v32 = ExecutionModel::ModernActivationResourceInfo::AcquireAdditionalMemoryResources(v8, v39, v9, &v31),
            v32 >= 0) )
      {
        v23 = v30;
      }
      else
      {
        if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v22, 1uLL) )
        {
          TlgCreateWsz(&v45, v3);
          TlgCreateSid(&pDesc, v4);
          v23 = v30;
          v47.Ptr = (ULONGLONG)&v38;
          v38 = v5;
          v48 = &v35;
          v50 = (unsigned __int64 *)&v36;
          v52 = &v39;
          *(_QWORD *)&v47.Size = v24;
          LODWORD(v35) = v30;
          v49 = v24;
          v51 = (unsigned int)(v24 + 4);
          v53 = v51;
          TlgWrite((TraceLoggingHProvider)v51, &unk_1800621D1, v25, v26, v24 + 4, &pData);
        }
        else
        {
          v23 = v30;
        }
        ExecutionModel::ModernActivationResourceInfo::SendReleaseRequests(v8);
      }
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *, struct _RM_ACTIVITY_HOST *, _QWORD))(*(_QWORD *)v40 + 376LL))(
        v40,
        a2,
        (unsigned int)v33);
      v27 = RmpEnforcementApplyLimits(a2, &v41);
      v32 = v27 | 0x10000000;
      if ( v27 < 0 )
      {
        if ( (unsigned int)dword_180071060 <= 4 )
          return (unsigned int)v32;
        if ( TlgKeywordOn(this, 1uLL) )
        {
          *(_QWORD *)&v45.Size = 4LL;
          v45.Ptr = (ULONGLONG)&v32;
          TlgCreateWsz(&pDesc, v3);
          TlgCreateSid(&v47, v4);
          v48 = &v33;
          v50 = &v35;
          LODWORD(v33) = v34;
          v52 = (unsigned __int64 *)&v36;
          v49 = 4LL;
          LODWORD(v35) = v23;
          v51 = 4LL;
          v53 = 8LL;
          TlgWrite((TraceLoggingHProvider)8, &unk_1800624D7, v28, v29, 8u, &pData);
        }
      }
      v5 = v34;
    }
    else
    {
      v32 = 0;
    }
  }
  else
  {
    v32 = 0;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(this, 1uLL) )
  {
    *(_QWORD *)&v45.Size = 4LL;
    v45.Ptr = (ULONGLONG)&v32;
    TlgCreateWsz(&pDesc, v3);
    TlgCreateSid(&v47, v4);
    LODWORD(v33) = v5;
    v48 = &v33;
    v50 = &v35;
    v52 = (unsigned __int64 *)&v36;
    v54 = &v37;
    v56 = &v41;
    v58 = (char *)&v41 + 8;
    v49 = 4LL;
    LODWORD(v35) = v16;
    v51 = 4LL;
    v53 = 8LL;
    v55 = 8LL;
    v57 = 8LL;
    v59 = 8LL;
    TlgWrite(v17, &unk_180061BBE, v18, v19, 0xBu, &pData);
  }
  return (unsigned int)v32;
}
