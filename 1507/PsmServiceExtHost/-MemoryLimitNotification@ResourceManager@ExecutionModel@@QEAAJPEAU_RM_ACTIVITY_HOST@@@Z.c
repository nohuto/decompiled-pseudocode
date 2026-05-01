/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x180036E40 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180037EC8 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800390F0 (-UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ?AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_N@Z @ 0x180034158 (-AcquireAdditionalMemoryResources@ModernActivationResourceInfo@ExecutionModel@@QEAAJ_K0PEA_KPEA_.c)
 *     ?HasAppliedResources@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18003630C (-HasAppliedResources@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ.c)
 *     ?SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x180038BC8 (-SendReleaseRequests@ModernActivationResourceInfo@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180041110 (-TriggerOnOutOfMemoryCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  __int64 v2; // rax
  const WCHAR *v3; // r15
  __int64 v4; // r13
  SID *v5; // r12
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  ExecutionModel::ModernActivationResourceInfo *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  unsigned __int64 v12; // rax
  TraceLoggingHProvider v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 *i; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // r12d
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r14
  int v27; // eax
  const struct _TlgProvider_t *v28; // rcx
  __int64 v29; // r10
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  unsigned __int64 v32; // rax
  int v33; // eax
  ExecutionModel::ResourceManager *v34; // rdi
  void (__fastcall *v35)(ExecutionModel::ResourceManager *, LPCWSTR, SID *, _QWORD, unsigned int, __int64, int); // rbx
  unsigned int v36; // esi
  unsigned int v37; // r14d
  LPCGUID v38; // r8
  LPCGUID v39; // r9
  unsigned int v40; // r10d
  unsigned int v41; // r11d
  TraceLoggingHProvider v42; // rcx
  LPCGUID v43; // r8
  LPCGUID v44; // r9
  int v46; // [rsp+30h] [rbp-D0h]
  unsigned int v47; // [rsp+40h] [rbp-C0h]
  unsigned int v48; // [rsp+44h] [rbp-BCh]
  int hProvider; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int hProvider_4; // [rsp+4Ch] [rbp-B4h] BYREF
  bool v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v52; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR pwsz; // [rsp+78h] [rbp-88h]
  SID *pSid; // [rsp+80h] [rbp-80h]
  unsigned __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  ExecutionModel::ResourceManager *v61; // [rsp+98h] [rbp-68h]
  unsigned __int64 v62; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v63; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+B8h] [rbp-48h] BYREF
  struct _RM_ACTIVITY_HOST *v66; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+110h] [rbp+10h] BYREF
  int *p_hProvider_4; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  __int64 *v74; // [rsp+130h] [rbp+30h]
  unsigned __int64 v75; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v76; // [rsp+140h] [rbp+40h]
  unsigned __int64 v77; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]

  v2 = *((_QWORD *)a2 + 3);
  v3 = (const WCHAR *)((char *)a2 + 48);
  v4 = *((_QWORD *)a2 + 75);
  v5 = (SID *)((char *)a2 + 512);
  v6 = *((_DWORD *)a2 + 145);
  v7 = *((_DWORD *)a2 + 146);
  v61 = this;
  v66 = a2;
  pwsz = (LPCWSTR)((char *)a2 + 48);
  pSid = (SID *)((char *)a2 + 512);
  v47 = v6;
  v48 = v7;
  v59 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v56 = v2;
  if ( !ExecutionModel::ModernActivationResourceInfo::HasAppliedResources((ExecutionModel::ModernActivationResourceInfo **)v4) )
  {
    v11 = 0LL;
    hProvider = 0;
    goto LABEL_55;
  }
  ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v10, &v60, &v63, &v64, &v67, &v62);
  hProvider = (*(__int64 (__fastcall **)(_QWORD, const WCHAR *, SID *, _QWORD, unsigned int, __int64, unsigned __int64 *))(**((_QWORD **)this + 15) + 48LL))(
                *((_QWORD *)this + 15),
                v3,
                v5,
                v47,
                v48,
                v56,
                &v55);
  v11 = (const struct _TlgProvider_t *)(unsigned int)hProvider;
  if ( hProvider < 0 )
    goto LABEL_55;
  v12 = v55;
  if ( *(_QWORD *)(v4 + 80) > v55 )
    v12 = *(_QWORD *)(v4 + 80);
  *(_QWORD *)(v4 + 80) = v12;
  hProvider = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 15) + 56LL))(
                *((_QWORD *)this + 15),
                a2,
                0LL,
                &v59,
                &v54,
                &v53);
  v11 = (const struct _TlgProvider_t *)(unsigned int)hProvider;
  if ( hProvider < 0 )
    goto LABEL_55;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)hProvider, 1uLL) )
  {
    TlgCreateWsz(&pDesc, v3);
    TlgCreateSid(&v70, v5);
    hProvider_4 = v47;
    v71.Ptr = (ULONGLONG)&hProvider_4;
    v52 = v48;
    p_hProvider_4 = (int *)&v52;
    v74 = &v56;
    v76 = &v55;
    v78 = &v59;
    v80 = &v54;
    v82 = &v53;
    v84 = &v60;
    *(_QWORD *)&v71.Size = 4LL;
    v73 = 4LL;
    v75 = 8LL;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 8LL;
    v83 = 8LL;
    v85 = 8LL;
    TlgWrite(v13, &unk_18005AC62, v14, v15, 0xCu, &pData);
  }
  v16 = v64;
  if ( !v64 )
  {
    v11 = 0LL;
    hProvider = 0;
    goto LABEL_55;
  }
  v17 = v55;
  v18 = v60;
  v19 = v55 + v60;
  if ( v55 + v60 <= v64 )
  {
    v21 = 4096LL;
    if ( v64 - v60 > 0x1000 )
      v21 = v64 - v60;
    v59 = v21;
  }
  else
  {
    for ( i = *(__int64 **)(v4 + 24);
          i != (__int64 *)(v4 + 24)
       && (int)ExecutionModel::ResourceSet::TriggerOnOutOfMemoryCallback((ExecutionModel::ResourceSet *)i[2]) >= 0;
          i = (__int64 *)*i )
    {
      ;
    }
    v18 = v60;
    v17 = v55;
  }
  v22 = v67;
  if ( v19 >= v67 )
  {
    if ( v19 < v62 )
    {
      v24 = v67;
      v54 = v67;
      v22 = v62;
      v53 = v62;
      v23 = 2;
      goto LABEL_27;
    }
    v23 = 3;
    v54 = v62;
    v24 = v62;
    v22 = v16;
  }
  else
  {
    v23 = 1;
    v54 = 0LL;
    v24 = 0LL;
  }
  v53 = v22;
LABEL_27:
  v25 = v63;
  v26 = v16 - v18;
  if ( v26 <= v17 )
    goto LABEL_35;
  if ( v17 >= v63 )
  {
    v51 = 0;
    v65 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*((_QWORD *)v61 + 1) + 32LL))(
            (__int64)v61 + 8,
            v17,
            v26);
    v27 = ExecutionModel::ModernActivationResourceInfo::AcquireAdditionalMemoryResources(
            (ExecutionModel::ModernActivationResourceInfo *)v4,
            v65,
            v55,
            &v62,
            &v51);
    v25 += v62;
    hProvider = v27;
    if ( v27 < 0 )
    {
      if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v28, 1uLL) )
      {
        TlgCreateWsz(&pDesc, pwsz);
        TlgCreateSid(&v70, pSid);
        v52 = v47;
        v71.Ptr = (ULONGLONG)&v52;
        hProvider_4 = v48;
        p_hProvider_4 = (int *)&hProvider_4;
        v74 = &v56;
        v76 = &v65;
        *(_QWORD *)&v71.Size = v29;
        v73 = v29;
        v75 = (unsigned int)(v29 + 4);
        v77 = v75;
        TlgWrite((TraceLoggingHProvider)v75, &unk_18005AA0A, v30, v31, v29 + 4, &pData);
      }
      ExecutionModel::ModernActivationResourceInfo::SendReleaseRequests(v4);
    }
    v17 = v55;
    v18 = v60;
    v22 = v53;
    v24 = v54;
LABEL_35:
    if ( v17 >= v25 )
      goto LABEL_38;
  }
  if ( v25 < v22 )
  {
    v53 = v25;
    goto LABEL_41;
  }
LABEL_38:
  v32 = v18;
  if ( v22 < v18 )
    v32 = v22;
  v53 = v22 - v32;
LABEL_41:
  if ( v24 < v18 )
    v18 = v24;
  v54 = v24 - v18;
  v33 = *(_DWORD *)(v4 + 72);
  if ( v23 != v33 )
  {
    *(_DWORD *)(v4 + 72) = v23;
    if ( v33 )
    {
      if ( v23 > v33 )
      {
        v34 = v61;
        v35 = *(void (__fastcall **)(ExecutionModel::ResourceManager *, LPCWSTR, SID *, _QWORD, unsigned int, __int64, int))(*(_QWORD *)v61 + 368LL);
        v46 = 0;
LABEL_47:
        v5 = pSid;
        v3 = pwsz;
        v36 = v47;
        v37 = v48;
        v35(v34, pwsz, pSid, v47, v48, v56, v46);
        goto LABEL_51;
      }
      if ( v23 < v33 )
      {
        v34 = v61;
        v35 = *(void (__fastcall **)(ExecutionModel::ResourceManager *, LPCWSTR, SID *, _QWORD, unsigned int, __int64, int))(*(_QWORD *)v61 + 368LL);
        v46 = 1;
        goto LABEL_47;
      }
    }
  }
  v3 = pwsz;
  v5 = pSid;
  v36 = v47;
  v37 = v48;
LABEL_51:
  hProvider = (*(__int64 (__fastcall **)(_QWORD, struct _RM_ACTIVITY_HOST *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, _QWORD))(**((_QWORD **)v61 + 15) + 64LL))(
                *((_QWORD *)v61 + 15),
                v66,
                0LL,
                &v59,
                &v54,
                &v53,
                0LL);
  v11 = (const struct _TlgProvider_t *)(unsigned int)hProvider;
  if ( hProvider < 0 )
  {
    if ( (unsigned int)dword_1800690A0 <= 4 )
      return (unsigned int)v11;
    if ( TlgKeywordOn((TraceLoggingHProvider)(unsigned int)hProvider, 1uLL) )
    {
      *(_QWORD *)&pDesc.Size = 4LL;
      pDesc.Ptr = (ULONGLONG)&hProvider;
      TlgCreateWsz(&v70, v3);
      TlgCreateSid(&v71, v5);
      v52 = v36;
      p_hProvider_4 = (int *)&v52;
      v73 = 4LL;
      v74 = (__int64 *)&hProvider_4;
      v76 = (unsigned __int64 *)&v56;
      hProvider_4 = v37;
      v75 = 4LL;
      v77 = 8LL;
      TlgWrite((TraceLoggingHProvider)8, &unk_18005AA80, v38, v39, 8u, &pData);
      v11 = (const struct _TlgProvider_t *)(unsigned int)hProvider;
    }
  }
LABEL_55:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v11, 1uLL) )
  {
    *(_QWORD *)&pDesc.Size = 4LL;
    pDesc.Ptr = (ULONGLONG)&hProvider;
    TlgCreateWsz(&v70, v3);
    TlgCreateSid(&v71, v5);
    v52 = v40;
    p_hProvider_4 = (int *)&v52;
    v74 = (__int64 *)&hProvider_4;
    v76 = (unsigned __int64 *)&v56;
    v78 = &v59;
    v80 = &v54;
    v82 = &v53;
    v73 = 4LL;
    hProvider_4 = v41;
    v75 = 4LL;
    v77 = 8LL;
    v79 = 8LL;
    v81 = 8LL;
    v83 = 8LL;
    TlgWrite(v42, &unk_18005A8E1, v43, v44, 0xBu, &pData);
    LODWORD(v11) = hProvider;
  }
  return (unsigned int)v11;
}
