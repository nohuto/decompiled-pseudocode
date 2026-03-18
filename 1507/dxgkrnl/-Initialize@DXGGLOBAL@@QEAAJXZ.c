/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00C33D4
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00D78AC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000E4B4 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C008534C (--0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00854A0 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00D3F20 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C00D81F8 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C00DBE5C (--0EDIDCACHE@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C00DCD50 (CreateDxgkSharedObjectTypes.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C00DF460 (--0QDC_CACHE@@QEAA@_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  struct DXGGLOBAL *v1; // rbx
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  bool v24; // cf
  int v25; // eax
  int v26; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  DXGDIAGNOSTICS *v32; // rax
  __int64 v33; // rcx
  enum _POOL_TYPE v34; // r8d
  DXGDIAGNOSTICS *v35; // rax
  char *v36; // rax
  __int64 v37; // rcx
  char *v38; // rdi
  DXGSESSIONMGR *v39; // rax
  __int64 v40; // rcx
  DXGSESSIONMGR *v41; // rax
  SIZE_T v42; // rax
  PVOID v43; // rax
  EDIDCACHE *v44; // rax
  __int64 v45; // rcx
  EDIDCACHE *v46; // rax
  DXGPROCESS *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  DXGPROCESS *v52; // rax
  __int64 result; // rax
  QDC_CACHE *v54; // rax
  bool v55; // dl
  __int64 v56; // rcx
  QDC_CACHE *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v63; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v64; // [rsp+50h] [rbp-B8h] BYREF
  int v65; // [rsp+54h] [rbp-B4h] BYREF
  int v66; // [rsp+58h] [rbp-B0h] BYREF
  int v67; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v68; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v69[7]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-30h] BYREF
  int v71; // [rsp+E0h] [rbp-28h]
  const wchar_t *v72; // [rsp+E8h] [rbp-20h]
  unsigned int *v73; // [rsp+F0h] [rbp-18h]
  int v74; // [rsp+F8h] [rbp-10h]
  _OWORD *v75; // [rsp+100h] [rbp-8h]
  int v76; // [rsp+108h] [rbp+0h]
  __int64 v77; // [rsp+110h] [rbp+8h]
  int v78; // [rsp+118h] [rbp+10h]
  const wchar_t *v79; // [rsp+120h] [rbp+18h]
  int *v80; // [rsp+128h] [rbp+20h]
  int v81; // [rsp+130h] [rbp+28h]
  int *v82; // [rsp+138h] [rbp+30h]
  int v83; // [rsp+140h] [rbp+38h]
  __int64 v84; // [rsp+148h] [rbp+40h]
  int v85; // [rsp+150h] [rbp+48h]
  const wchar_t *v86; // [rsp+158h] [rbp+50h]
  unsigned int *v87; // [rsp+160h] [rbp+58h]
  int v88; // [rsp+168h] [rbp+60h]
  int *v89; // [rsp+170h] [rbp+68h]
  int v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  int v92; // [rsp+188h] [rbp+80h]
  const wchar_t *v93; // [rsp+190h] [rbp+88h]
  unsigned int *v94; // [rsp+198h] [rbp+90h]
  int v95; // [rsp+1A0h] [rbp+98h]
  __int64 *v96; // [rsp+1A8h] [rbp+A0h]
  int v97; // [rsp+1B0h] [rbp+A8h]
  __int64 v98; // [rsp+1B8h] [rbp+B0h]
  int v99; // [rsp+1C0h] [rbp+B8h]
  __int64 v100; // [rsp+1C8h] [rbp+C0h]
  _BYTE v101[32]; // [rsp+1D0h] [rbp+C8h] BYREF

  v1 = DXGGLOBAL::m_pGlobal;
  memset(&v69[1], 0, 0x58uLL);
  v2 = v69[2];
  *(_OWORD *)((char *)DXGGLOBAL::m_pGlobal + 8) = v69[1];
  v3 = v69[3];
  *(_OWORD *)((char *)v1 + 24) = v2;
  v4 = v69[4];
  *(_OWORD *)((char *)v1 + 40) = v3;
  v5 = v69[5];
  *(_OWORD *)((char *)v1 + 56) = v4;
  *(_QWORD *)&v4 = *(_QWORD *)&v69[6];
  *(_OWORD *)((char *)v1 + 72) = v5;
  *((_QWORD *)v1 + 11) = v4;
  if ( !HMGRTABLE::ExpandTable((struct DXGGLOBAL *)((char *)v1 + 176)) )
  {
    v58 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v58 + 24) = -1073741801LL;
LABEL_41:
    WdLogEvent5_WdLowResource(v58);
    return 3221225495LL;
  }
  v7 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 39) = v7;
  if ( !v7 )
  {
    v59 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v59 + 24) = v1;
    *(_QWORD *)(v59 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v59);
    return 3221225495LL;
  }
  v12 = ExInitializeResourceLite(v7);
  v17 = v12;
  if ( v12 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
LABEL_46:
    v60[4] = v17;
    v60[3] = v1;
LABEL_48:
    WdLogEvent5_WdWarning(v60);
    return (unsigned int)v17;
  }
  v18 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v1 + 656),
          0LL,
          0LL,
          PagedPool,
          0,
          0x5F0uLL,
          0x4B677844u,
          0);
  v17 = v18;
  if ( v18 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v60[5] = 0LL;
    goto LABEL_46;
  }
  *((_BYTE *)v1 + 769) = 1;
  v71 = 288;
  v74 = 67108868;
  v78 = 288;
  v81 = 67108868;
  v72 = L"TerminationListSizeLimit";
  v85 = 288;
  v73 = &v64;
  v75 = v69;
  v79 = L"ValidateWDDMCaps";
  v80 = &v65;
  v82 = &v66;
  v86 = L"WDDM2LockManagement";
  v87 = &v63;
  v89 = &v67;
  v93 = L"MaximumAdapterCount";
  v94 = &v62;
  v88 = 67108868;
  v92 = 288;
  v95 = 67108868;
  v96 = &v68;
  *(_QWORD *)&v69[0] = 0x4000000LL;
  v64 = 0;
  v66 = 0;
  v65 = 0;
  v67 = 1;
  v63 = 0;
  LODWORD(v68) = 32;
  v62 = 0;
  v70 = 0LL;
  v76 = 4;
  v77 = 0LL;
  v83 = 4;
  v84 = 0LL;
  v90 = 4;
  v91 = 0LL;
  v97 = 4;
  v98 = 0LL;
  v99 = 0;
  v100 = 0LL;
  memset(v101, 0, sizeof(v101));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v70, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 63) = 0x4000000LL;
    *((_BYTE *)v1 + 512) = 0;
    *((_DWORD *)v1 + 195) = 1;
    *((_DWORD *)v1 + 196) = 32;
  }
  else
  {
    v23 = v65 == 0;
    *((_QWORD *)v1 + 63) = v64;
    v24 = v63 < 2;
    *((_BYTE *)v1 + 512) = !v23;
    v25 = 1;
    if ( v24 )
      v25 = v63;
    *((_DWORD *)v1 + 195) = v25;
    v26 = v62;
    if ( v62 < 4 )
    {
      v26 = 4;
    }
    else if ( v62 > 0x400 )
    {
      v26 = 1024;
    }
    v62 = v26;
    *((_DWORD *)v1 + 196) = v26;
  }
  *((_DWORD *)v1 + 125) = 0;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v17 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v60[3] = v17;
    goto LABEL_48;
  }
  v32 = (DXGDIAGNOSTICS *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
  if ( v32 )
    v35 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v32, 0x10000u, v34);
  else
    v35 = 0LL;
  *((_QWORD *)v1 + 68) = v35;
  if ( !v35 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v58 + 24) = 0x10000LL;
    goto LABEL_41;
  }
  v36 = (char *)operator new[](0x200uLL, 0x4B677844u, PagedPool);
  v38 = v36;
  if ( v36 )
  {
    memset(v36, 0, 0x100uLL);
    memset(v38 + 256, 0, 0x100uLL);
  }
  else
  {
    v38 = 0LL;
  }
  *((_QWORD *)v1 + 69) = v38;
  if ( !v38 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v37);
    *(_QWORD *)(v58 + 24) = 877LL;
    goto LABEL_41;
  }
  v39 = (DXGSESSIONMGR *)operator new[](0x90uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v39 )
    v41 = DXGSESSIONMGR::DXGSESSIONMGR(v39);
  else
    v41 = 0LL;
  *((_QWORD *)v1 + 70) = v41;
  if ( !v41 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v40);
    *(_QWORD *)(v58 + 24) = 884LL;
    goto LABEL_41;
  }
  v42 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 196) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 196) + 31) >> 5, 4uLL) )
    v42 = -1LL;
  v43 = operator new[](v42, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 61) = v43;
  if ( !v43 )
  {
    v58 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v58 + 24) = 891LL;
    goto LABEL_41;
  }
  memset(v43, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 196) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)((char *)v1 + 472), *((PULONG *)v1 + 61), *((_DWORD *)v1 + 196));
  v44 = (EDIDCACHE *)operator new[](0x3F8uLL, 0x4B677844u, PagedPool);
  if ( v44 )
    v46 = EDIDCACHE::EDIDCACHE(v44);
  else
    v46 = 0LL;
  *((_QWORD *)v1 + 80) = v46;
  if ( !v46 )
  {
    v61 = WdLogNewEntry5_WdLowResource(v45);
    *(_QWORD *)(v61 + 24) = 901LL;
    WdLogEvent5_WdLowResource(v61);
  }
  v47 = (DXGPROCESS *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x158uLL);
  if ( v47 )
    v52 = DXGPROCESS::DXGPROCESS(v47, v1, PsInitialSystemProcess, 0LL);
  else
    v52 = 0LL;
  *((_QWORD *)v1 + 99) = v52;
  if ( !v52 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v49);
    *(_QWORD *)(v58 + 24) = 912LL;
    goto LABEL_41;
  }
  result = DXGPROCESS::Initialize(v52, v48, v50, v51);
  if ( (int)result < 0 )
    return result;
  v54 = (QDC_CACHE *)operator new[](0x1F8uLL, 0x4B677844u, PagedPool);
  if ( v54 )
    v57 = QDC_CACHE::QDC_CACHE(v54, v55);
  else
    v57 = 0LL;
  *((_QWORD *)v1 + 113) = v57;
  if ( !v57 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v56);
    *(_QWORD *)(v58 + 24) = 925LL;
    goto LABEL_41;
  }
  return 0LL;
}
