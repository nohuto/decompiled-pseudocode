/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000DE60 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003F1E8 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     ?RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W4Enum@Priority@ExecutionModel@@W4_RM_PEND_TYPE@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAPEAU_RM_ACTIVITY_HOST@@PEAK@Z @ 0x18000CF94 (-RmpPolicyGenerateRevokeListForQueryableResources@@YAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_RES.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180010E40 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002E4FC (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18003C124 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 */

int __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        ExecutionModel::BaseResourceSet *this,
        int *a2,
        unsigned int a3,
        int a4,
        int a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9)
{
  ExecutionModel::BaseResourceSet *v9; // r15
  unsigned int v11; // r13d
  __int64 v12; // r14
  _BYTE *v13; // rax
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  _BYTE *v17; // rsi
  int v18; // ebx
  ExecutionModel::_ResourceInfo *i; // rdi
  ExecutionModel::BaseResourceSet *v20; // r13
  int *v21; // r15
  int *v22; // rbx
  signed __int64 v23; // rdi
  unsigned int v25; // r14d
  int v26; // ebx
  char v27; // si
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *j; // rax
  __int64 v31; // r10
  __int64 v32; // r9
  _BYTE *v33; // r13
  __int64 v34; // rbx
  unsigned int v35; // eax
  int v36; // eax
  int result; // eax
  unsigned int v38; // ebx
  int *v39; // r11
  unsigned __int64 v40; // r14
  __int64 v41; // r8
  unsigned int v42; // r11d
  unsigned int *v43; // r10
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  int v46; // eax
  int v47; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v48[3]; // [rsp+54h] [rbp-B4h] BYREF
  signed int v49; // [rsp+60h] [rbp-A8h]
  unsigned int v50; // [rsp+64h] [rbp-A4h]
  ExecutionModel::BaseResourceSet *v51; // [rsp+68h] [rbp-A0h]
  __int64 v52; // [rsp+70h] [rbp-98h]
  _QWORD *v53; // [rsp+78h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-88h] BYREF
  int *v55; // [rsp+A0h] [rbp-68h]
  __int64 v56; // [rsp+A8h] [rbp-60h]
  char *v57; // [rsp+B0h] [rbp-58h]
  __int64 v58; // [rsp+B8h] [rbp-50h]

  v9 = this;
  v53 = a6;
  v11 = a3;
  *(_QWORD *)&v48[1] = a7;
  v51 = this;
  v52 = a9;
  *a8 = 0;
  *a7 = 0;
  v47 = a2[288];
  v12 = (unsigned int)v47;
  v49 = a4;
  v50 = a3;
  v13 = malloc(saturated_mul((unsigned int)v47, 0x18uLL));
  v17 = v13;
  if ( !v13 )
    return -2147024882;
  v18 = v47 - 1;
  for ( i = (ExecutionModel::_ResourceInfo *)v13; v18 >= 0; --v18 )
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(i);
    i = (ExecutionModel::_ResourceInfo *)((char *)i + 24);
  }
  if ( v47 )
  {
    v20 = v51;
    v21 = a2 + 2;
    v22 = a2;
    v23 = v17 - (_BYTE *)a2;
    do
    {
      if ( dword_1800690A0
        && *v22 == 2
        && (unsigned int)dword_1800690A0 > 4
        && (qword_1800690B0 & 9) != 0
        && (qword_1800690B8 & 9) == qword_1800690B8 )
      {
        v55 = v21;
        v57 = (char *)v20 + 248;
        v56 = 8LL;
        v58 = 8LL;
        TlgWrite(v14, &unk_18005C242, v15, v16, 4u, &pData);
      }
      v21 += 6;
      *(_OWORD *)((char *)v22 + v23) = *(_OWORD *)v22;
      *(_QWORD *)((char *)v22 + v23 + 16) = *((_QWORD *)v22 + 2);
      v22 += 6;
      --v12;
    }
    while ( v12 );
    v11 = v50;
    v9 = v51;
  }
  v25 = v47;
  v26 = ExecutionModel::BaseResourceSet::RecursiveVisit(
          v9,
          0,
          v47,
          (__int64)v17,
          v11,
          1,
          *(_BYTE **)&v48[1],
          a8,
          (__int64 *)v52,
          0LL);
  if ( v26 >= 0 )
    v26 = 0;
  operator delete(v17);
  if ( v26 < 0 )
    return v26;
  v27 = **(_BYTE **)&v48[1];
  if ( *a8 )
  {
    if ( !v27 )
    {
      v28 = (_QWORD *)((char *)v9 + 160);
      v29 = (_QWORD *)*((_QWORD *)v9 + 20);
      for ( j = v29; j != v28; j = (_QWORD *)*j )
      {
        v31 = j[2];
        if ( *(_DWORD *)(v31 + 1352) == 1 && *(_DWORD *)(v31 + 1360) < v49 )
        {
          v38 = 0;
          if ( v25 )
          {
            v39 = a2;
            do
            {
              if ( *((_QWORD *)v39 + 1) )
              {
                v40 = (unsigned int)*v39;
                if ( *(_QWORD *)(v31 + 24LL * (int)v40 + 200) )
                {
                  v41 = *((_QWORD *)v9 + 168);
                  if ( !_bittest64(&v41, v40) )
                    goto LABEL_74;
                }
                v25 = v47;
              }
              ++v38;
              v39 += 6;
            }
            while ( v38 < v25 );
          }
        }
      }
      while ( 1 )
      {
        if ( v29 == v28 )
        {
          v25 = v47;
          goto LABEL_28;
        }
        v32 = v29[2];
        if ( *(_DWORD *)(v32 + 1352) == 1 && *(_DWORD *)(v32 + 1360) < v49 )
        {
          v42 = 0;
          if ( a2[308] )
            break;
        }
LABEL_26:
        v29 = (_QWORD *)*v29;
      }
      v43 = (unsigned int *)(a2 + 290);
      while ( 1 )
      {
        if ( *((_QWORD *)v43 + 1) )
        {
          v44 = *v43;
          if ( *(_QWORD *)(v32 + 24LL * (int)v44 + 200) )
          {
            v45 = *((_QWORD *)v9 + 168);
            if ( !_bittest64(&v45, v44) )
              break;
          }
        }
        ++v42;
        v43 += 6;
        if ( v42 >= a2[308] )
          goto LABEL_26;
      }
LABEL_74:
      v33 = *(_BYTE **)&v48[1];
      v25 = v47;
      **(_BYTE **)&v48[1] = 1;
      goto LABEL_29;
    }
LABEL_28:
    v33 = *(_BYTE **)&v48[1];
    goto LABEL_29;
  }
  if ( a5 != 1 )
    goto LABEL_28;
  result = ExecutionModel::BaseResourceSet::CheckPoolResources(v9, v47, 0, (__int64)v48, (__int64)a8, 0LL);
  if ( result >= 0 )
  {
    if ( !*a8 )
      return 0;
    v33 = *(_BYTE **)&v48[1];
    **(_BYTE **)&v48[1] = 1;
LABEL_29:
    if ( *a8 )
    {
      if ( !*v33
        && (*(int (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD, int *))(*(_QWORD *)v9 + 40LL))(v9, v25, a2) < 0 )
      {
        *v33 = 1;
      }
      if ( *a8 && a2[308] )
      {
        v34 = *((_QWORD *)RmSvcGlobals + 205);
        v47 = *((_DWORD *)RmSvcGlobals + 412);
        if ( a5 )
        {
          if ( a5 == 1 )
          {
            v35 = 1;
          }
          else if ( a5 == 2 )
          {
            v35 = 2;
          }
          else
          {
            v35 = -1;
          }
        }
        else
        {
          v35 = 0;
        }
        v36 = RmpPolicyGenerateRevokeListForQueryableResources(
                (const struct _TlgProvider_t *)a2,
                (__int64)RmSvcGlobals + 208,
                (const GUID *)(unsigned int)v49,
                (const GUID *)v35,
                v53,
                v34,
                &v47);
        if ( v36 == -1073741670 )
        {
          *a8 = 0;
          *v33 = 0;
        }
        else
        {
          if ( v36 == 259 )
            *v33 = 1;
          if ( !v27 )
          {
            if ( v47 )
            {
              v46 = RmpPolicyAddAppliedResourceSetsFromActivityHostsToList(v34, (unsigned int)v47, v52);
              if ( v46 < 0 )
                return v46 | 0x10000000;
            }
          }
        }
      }
    }
    return 0;
  }
  return result;
}
