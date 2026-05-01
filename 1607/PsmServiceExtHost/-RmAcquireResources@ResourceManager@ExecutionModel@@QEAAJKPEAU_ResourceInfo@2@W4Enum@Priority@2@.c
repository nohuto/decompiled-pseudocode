/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000DD1C
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x18001A8A0 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x180004734 (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@-$_HashTable@PE.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017C20 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        const struct _TlgProvider_t *a11,
        _QWORD *a12)
{
  const struct _TlgProvider_t *v12; // rcx
  _QWORD *v13; // r14
  __int64 *v14; // r13
  struct ExecutionModel::ExternalResourceSet *v16; // r12
  unsigned int v17; // edx
  struct ExecutionModel::_ResourceInfo *v18; // rcx
  __int64 v19; // rcx
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  char v33; // si
  unsigned int v34; // edi
  volatile signed __int32 *v35; // r15
  struct ExecutionModel::_ResourceInfo *v36; // r14
  __int64 v37; // r9
  int v38; // eax
  const struct _TlgProvider_t *v39; // rcx
  const GUID *v40; // r8
  const GUID *v41; // r9
  __int64 v43; // [rsp+38h] [rbp-C8h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  char v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch] BYREF
  int v47; // [rsp+78h] [rbp-88h] BYREF
  struct ExecutionModel::ExternalResourceSet *v48; // [rsp+80h] [rbp-80h] BYREF
  struct ExecutionModel::_ResourceInfo *v49; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v50; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  const struct _TlgProvider_t *v52; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v54[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v55[140]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v56[560]; // [rsp+2F0h] [rbp+1F0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+520h] [rbp+420h] BYREF
  int *v58; // [rsp+540h] [rbp+440h]
  __int64 v59; // [rsp+548h] [rbp+448h]
  _QWORD *v60; // [rsp+550h] [rbp+450h]
  __int64 v61; // [rsp+558h] [rbp+458h]
  int *v62; // [rsp+560h] [rbp+460h]
  __int64 v63; // [rsp+568h] [rbp+468h]
  int *v64; // [rsp+570h] [rbp+470h]
  __int64 v65; // [rsp+578h] [rbp+478h]
  const struct _TlgProvider_t **v66; // [rsp+580h] [rbp+480h]
  __int64 v67; // [rsp+588h] [rbp+488h]
  struct ExecutionModel::_ResourceInfo **v68; // [rsp+590h] [rbp+490h]
  __int64 v69; // [rsp+598h] [rbp+498h]
  _QWORD *v70; // [rsp+5A0h] [rbp+4A0h]
  __int64 v71; // [rsp+5A8h] [rbp+4A8h]
  PVOID *p_P; // [rsp+5B0h] [rbp+4B0h]
  __int64 v73; // [rsp+5B8h] [rbp+4B8h]
  struct ExecutionModel::ExternalResourceSet **v74; // [rsp+5C0h] [rbp+4C0h]
  __int64 v75; // [rsp+5C8h] [rbp+4C8h]

  v12 = a11;
  v13 = a12;
  v14 = (__int64 *)g_pResourceManager;
  v47 = a4;
  v16 = 0LL;
  v49 = a3;
  v52 = a11;
  v50 = a12;
  v48 = 0LL;
  P = 0LL;
  if ( a2 < 0x30 && a2 && a3 && a12 && a7 )
  {
    v45 = 1;
    v17 = 0;
    if ( a2 )
    {
      v18 = a3;
      while ( (unsigned int)(*(_DWORD *)v18 - 22) <= 4 )
      {
        ++v17;
        v18 = (struct ExecutionModel::_ResourceInfo *)((char *)v18 + 24);
        if ( v17 >= a2 )
          goto LABEL_12;
      }
      v45 = 0;
    }
LABEL_12:
    RtlEnterCriticalSection(&RmpGlobalLock);
    memset_0(v55, 0, 0x228uLL);
    v19 = v14[28];
    v55[0] = a5;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(v19, 1LL, v55, &P) < 0 )
    {
      v46 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*v14 + 80))(v14, a5, v56);
      if ( v46 >= 0 )
      {
        v20 = v55;
        v21 = 4LL;
        v22 = v56;
        do
        {
          v23 = v22[1];
          *v20 = *v22;
          v24 = v22[2];
          v20[1] = v23;
          v25 = v22[3];
          v20[2] = v24;
          v26 = v22[4];
          v20[3] = v25;
          v27 = v22[5];
          v20[4] = v26;
          v28 = v22[6];
          v20[5] = v27;
          v29 = v22[7];
          v22 += 8;
          v20[6] = v28;
          v20 += 8;
          *(v20 - 1) = v29;
          --v21;
        }
        while ( v21 );
        v30 = *v22;
        v31 = v22[1];
        v32 = *((_QWORD *)v22 + 4);
        *v20 = v30;
        v20[1] = v31;
        *((_QWORD *)v20 + 4) = v32;
        RmpActivityHostFindByTypeAndIdentifier(v14[28], 0LL, v55, &P);
      }
    }
    v33 = 0;
    v34 = 0;
    v35 = (volatile signed __int32 *)P;
    if ( a2 )
    {
      v36 = v49;
      while ( 1 )
      {
        v46 = ExecutionModel::ResourceManager::RmAccessCheckEx(v14, *(unsigned int *)v36, a5, 0LL);
        if ( v46 < 0 )
          break;
        ++v34;
        v36 = (struct ExecutionModel::_ResourceInfo *)((char *)v36 + 24);
        if ( v34 >= a2 )
          goto LABEL_26;
      }
      if ( (a8 & 1) != 0 )
      {
        if ( !v45
          || (LOBYTE(v37) = 1,
              v46 = ExecutionModel::ResourceManager::RmAccessCheckEx(v14, *((unsigned int *)v49 + 6 * v34), a5, v37),
              v46 >= 0) )
        {
          v33 = 1;
LABEL_26:
          v13 = v50;
          goto LABEL_27;
        }
      }
    }
    else
    {
LABEL_27:
      LODWORD(v44) = a9;
      LOBYTE(v43) = v33;
      v38 = ExecutionModel::ExternalResourceSet::CreateInstance(
              v14[14],
              a2,
              v49,
              v47,
              a5,
              a6,
              a7,
              v43,
              a8,
              v44,
              a10,
              (__int64)v35,
              (__int64)v52,
              &v48);
      v16 = v48;
      v46 = v38;
      if ( v38 >= 0 )
      {
        *v13 = v48;
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &>(
          (__int64)(v14 + 23),
          (__int64)v54,
          v13,
          &v48);
        (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v16 + 16LL))(v16);
        v46 = 0;
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( v35 )
      RmpObjectRelease(v35);
  }
  else
  {
    v46 = -2147024809;
  }
  if ( v52 )
    LOBYTE(v12) = *(_BYTE *)v52;
  else
    LOBYTE(v12) = 0;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v12, 9uLL) )
  {
    v59 = 4LL;
    v58 = &v46;
    v60 = v54;
    v62 = &v47;
    v64 = &v53;
    LODWORD(v52) = a5;
    v66 = &v52;
    LODWORD(v49) = a8;
    v68 = &v49;
    LODWORD(v50) = a9;
    v70 = &v50;
    LODWORD(P) = a10;
    p_P = &P;
    LODWORD(v48) = (unsigned __int8)v39;
    v74 = &v48;
    v54[0] = v16;
    v61 = 8LL;
    v47 = a2;
    v63 = 4LL;
    v53 = (int)v41;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    TlgWrite(v39, &unk_18003FCBB, v40, v41, 0xBu, &pData);
  }
  return (unsigned int)v46;
}
