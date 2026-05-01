/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000BD0C
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x18001B360 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000C778 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x1800190E4 (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800194BC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        _BYTE *a11,
        _QWORD *a12)
{
  __int64 v12; // rdi
  _BYTE *v14; // rax
  _QWORD *v16; // r15
  ExecutionModel::ResourceManager *v17; // rsi
  unsigned int v18; // edx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  _OWORD *v21; // rdx
  __int64 v22; // r8
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // rcx
  __int128 v33; // xmm1
  __int64 v34; // rax
  struct _RM_OBJECT_HEADER *v35; // r12
  char v36; // r14
  __int64 v37; // rsi
  unsigned int *v38; // r15
  __int64 v39; // r9
  int v40; // r14d
  int v41; // eax
  void *v42; // rax
  int v43; // r8d
  void *v44; // rsi
  const struct _TlgProvider_t *v45; // rcx
  const GUID *v46; // r8
  const GUID *v47; // r9
  char v49; // [rsp+38h] [rbp-C8h]
  char v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v53; // [rsp+7Ch] [rbp-84h] BYREF
  _BYTE *v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  ExecutionModel::ResourceManager *v56; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v57; // [rsp+98h] [rbp-68h] BYREF
  struct _RM_OBJECT_HEADER *v58; // [rsp+A0h] [rbp-60h] BYREF
  int v59[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v60[140]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v61[560]; // [rsp+2F0h] [rbp+1F0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+520h] [rbp+420h] BYREF
  int *v63; // [rsp+540h] [rbp+440h]
  int v64; // [rsp+548h] [rbp+448h]
  int v65; // [rsp+54Ch] [rbp+44Ch]
  int *v66; // [rsp+550h] [rbp+450h]
  int v67; // [rsp+558h] [rbp+458h]
  int v68; // [rsp+55Ch] [rbp+45Ch]
  unsigned int *v69; // [rsp+560h] [rbp+460h]
  int v70; // [rsp+568h] [rbp+468h]
  int v71; // [rsp+56Ch] [rbp+46Ch]
  unsigned int *v72; // [rsp+570h] [rbp+470h]
  int v73; // [rsp+578h] [rbp+478h]
  int v74; // [rsp+57Ch] [rbp+47Ch]
  _QWORD *v75; // [rsp+580h] [rbp+480h]
  int v76; // [rsp+588h] [rbp+488h]
  int v77; // [rsp+58Ch] [rbp+48Ch]
  __int64 *v78; // [rsp+590h] [rbp+490h]
  int v79; // [rsp+598h] [rbp+498h]
  int v80; // [rsp+59Ch] [rbp+49Ch]
  ExecutionModel::ResourceManager **v81; // [rsp+5A0h] [rbp+4A0h]
  int v82; // [rsp+5A8h] [rbp+4A8h]
  int v83; // [rsp+5ACh] [rbp+4ACh]
  _QWORD *v84; // [rsp+5B0h] [rbp+4B0h]
  int v85; // [rsp+5B8h] [rbp+4B8h]
  int v86; // [rsp+5BCh] [rbp+4BCh]
  struct _RM_OBJECT_HEADER **v87; // [rsp+5C0h] [rbp+4C0h]
  int v88; // [rsp+5C8h] [rbp+4C8h]
  int v89; // [rsp+5CCh] [rbp+4CCh]

  v51 = 0;
  v12 = 0LL;
  v58 = 0LL;
  v14 = a11;
  v16 = a12;
  v17 = g_pResourceManager;
  v53 = a4;
  v52 = a2;
  v54 = a11;
  v57 = a12;
  v56 = g_pResourceManager;
  v55 = 0LL;
  if ( a2 && a3 && a12 && a7 )
  {
    v18 = 0;
    v50 = 1;
    if ( a2 )
    {
      v19 = a3;
      while ( (unsigned int)(*v19 - 22) <= 4 )
      {
        ++v18;
        v19 += 6;
        if ( v18 >= a2 )
          goto LABEL_9;
      }
      v50 = 0;
    }
LABEL_9:
    RtlEnterCriticalSection(&RmpGlobalLock);
    memset_0(v60, 0, 0x228uLL);
    v20 = *((_QWORD *)v17 + 26);
    v60[0] = a5;
    if ( (int)RmpActivityHostFindByTypeAndIdentifier(v20, 1LL, v60, &v58) < 0 )
    {
      v51 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _BYTE *))(*(_QWORD *)v17 + 40LL))(
              v17,
              a5,
              v61);
      if ( v51 >= 0 )
      {
        v21 = v60;
        v22 = 4LL;
        v23 = v61;
        do
        {
          v24 = v23[1];
          *v21 = *v23;
          v25 = v23[2];
          v21[1] = v24;
          v26 = v23[3];
          v21[2] = v25;
          v27 = v23[4];
          v21[3] = v26;
          v28 = v23[5];
          v21[4] = v27;
          v29 = v23[6];
          v21[5] = v28;
          v30 = v23[7];
          v23 += 8;
          v21[6] = v29;
          v21 += 8;
          *(v21 - 1) = v30;
          --v22;
        }
        while ( v22 );
        v31 = *v23;
        v32 = *((_QWORD *)v17 + 26);
        v33 = v23[1];
        v34 = *((_QWORD *)v23 + 4);
        *v21 = v31;
        v21[1] = v33;
        *((_QWORD *)v21 + 4) = v34;
        RmpActivityHostFindByTypeAndIdentifier(v32, 0LL, v60, &v58);
      }
    }
    v35 = v58;
    v36 = 0;
    v37 = 0LL;
    if ( v52 )
    {
      v38 = a3;
      while ( 1 )
      {
        v51 = ExecutionModel::ResourceManager::RmAccessCheckEx(v56, *v38, a5, 0LL);
        if ( v51 < 0 )
          break;
        v37 = (unsigned int)(v37 + 1);
        v38 += 6;
        if ( (unsigned int)v37 >= v52 )
          goto LABEL_18;
      }
      if ( (a8 & 1) != 0 )
      {
        if ( !v50
          || (LOBYTE(v39) = 1,
              v51 = ExecutionModel::ResourceManager::RmAccessCheckEx(v56, (unsigned int)a3[6 * v37], a5, v39),
              v51 >= 0) )
        {
          v36 = 1;
LABEL_18:
          v16 = v57;
          goto LABEL_19;
        }
      }
    }
    else
    {
LABEL_19:
      v49 = v36;
      v40 = (int)v56;
      v41 = ExecutionModel::ExternalResourceSet::CreateInstance(
              *((_QWORD *)v56 + 12),
              v52,
              a3,
              v53,
              a5,
              a6,
              a7,
              v49,
              a8,
              a9,
              a10,
              v35,
              v54,
              &v55);
      v12 = v55;
      v51 = v41;
      if ( v41 >= 0 )
      {
        *v16 = v55;
        v42 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_18003D04A);
        v44 = v42;
        if ( v42 )
        {
          *((_QWORD *)v42 + 3) = *v16;
          *((_QWORD *)v42 + 4) = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        }
        else
        {
          v44 = 0LL;
        }
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_EmplaceImpl(
          v40 + 168,
          (int)v59,
          v43,
          0,
          v44);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    if ( v35 )
      RmpObjectRelease(v35);
    v14 = v54;
  }
  else
  {
    v51 = -2147024809;
  }
  if ( v14 )
    LOBYTE(a1) = *v14;
  else
    LOBYTE(a1) = 0;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 9uLL) )
  {
    v65 = 0;
    v68 = 0;
    v71 = 0;
    v74 = 0;
    v77 = 0;
    v80 = 0;
    v83 = 0;
    v86 = 0;
    v89 = 0;
    v63 = &v51;
    v66 = v59;
    v69 = &v53;
    v72 = &v52;
    LODWORD(v54) = a5;
    v75 = &v54;
    LODWORD(v55) = a8;
    v78 = &v55;
    LODWORD(v56) = a9;
    v81 = &v56;
    LODWORD(v57) = a10;
    v84 = &v57;
    LODWORD(v58) = (unsigned __int8)v45;
    v87 = &v58;
    v64 = 4;
    *(_QWORD *)v59 = v12;
    v67 = 8;
    v53 = (unsigned int)v46;
    v70 = 4;
    v52 = (unsigned int)v47;
    v73 = 4;
    v76 = 4;
    v79 = 4;
    v82 = 4;
    v85 = 4;
    v88 = 4;
    TlgWrite(v45, &unk_18003FF94, v46, v47, 0xBu, &pData);
  }
  return (unsigned int)v51;
}
