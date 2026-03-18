/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00CD560 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000E734 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C0068190 (--0DXGPROCESS@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@QEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00682E4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C009423C (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C00CE76C (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C00E7C70 (--0EDIDCACHE@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C00E83A0 (CreateDxgkSharedObjectTypes.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C00EA154 (--0QDC_CACHE@@QEAA@_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  struct DXGGLOBAL *v1; // rbx
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  bool v27; // cf
  int v28; // eax
  int v29; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  DXGDIAGNOSTICS *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  DXGDIAGNOSTICS *v40; // rax
  char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char *v46; // rdi
  DXGSESSIONMGR *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  DXGSESSIONMGR *v52; // rax
  SIZE_T v53; // rax
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  EDIDCACHE *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  EDIDCACHE *v63; // rax
  DXGPROCESS *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  DXGPROCESS *v69; // rax
  __int64 result; // rax
  QDC_CACHE *v71; // rax
  _BOOL8 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  QDC_CACHE *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  unsigned int v81; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v82; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v83; // [rsp+50h] [rbp-B8h] BYREF
  int v84; // [rsp+54h] [rbp-B4h] BYREF
  int v85; // [rsp+58h] [rbp-B0h] BYREF
  int v86; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v87; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v88[7]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-30h] BYREF
  int v90; // [rsp+E0h] [rbp-28h]
  const wchar_t *v91; // [rsp+E8h] [rbp-20h]
  unsigned int *v92; // [rsp+F0h] [rbp-18h]
  int v93; // [rsp+F8h] [rbp-10h]
  _OWORD *v94; // [rsp+100h] [rbp-8h]
  int v95; // [rsp+108h] [rbp+0h]
  __int64 v96; // [rsp+110h] [rbp+8h]
  int v97; // [rsp+118h] [rbp+10h]
  const wchar_t *v98; // [rsp+120h] [rbp+18h]
  int *v99; // [rsp+128h] [rbp+20h]
  int v100; // [rsp+130h] [rbp+28h]
  int *v101; // [rsp+138h] [rbp+30h]
  int v102; // [rsp+140h] [rbp+38h]
  __int64 v103; // [rsp+148h] [rbp+40h]
  int v104; // [rsp+150h] [rbp+48h]
  const wchar_t *v105; // [rsp+158h] [rbp+50h]
  unsigned int *v106; // [rsp+160h] [rbp+58h]
  int v107; // [rsp+168h] [rbp+60h]
  int *v108; // [rsp+170h] [rbp+68h]
  int v109; // [rsp+178h] [rbp+70h]
  __int64 v110; // [rsp+180h] [rbp+78h]
  int v111; // [rsp+188h] [rbp+80h]
  const wchar_t *v112; // [rsp+190h] [rbp+88h]
  unsigned int *v113; // [rsp+198h] [rbp+90h]
  int v114; // [rsp+1A0h] [rbp+98h]
  __int64 *v115; // [rsp+1A8h] [rbp+A0h]
  int v116; // [rsp+1B0h] [rbp+A8h]
  __int64 v117; // [rsp+1B8h] [rbp+B0h]
  int v118; // [rsp+1C0h] [rbp+B8h]
  __int64 v119; // [rsp+1C8h] [rbp+C0h]
  _BYTE v120[32]; // [rsp+1D0h] [rbp+C8h] BYREF

  v1 = DXGGLOBAL::m_pGlobal;
  memset(&v88[1], 0, 0x58uLL);
  v2 = v88[2];
  *(_OWORD *)((char *)DXGGLOBAL::m_pGlobal + 8) = v88[1];
  v3 = v88[3];
  *(_OWORD *)((char *)v1 + 24) = v2;
  v4 = v88[4];
  *(_OWORD *)((char *)v1 + 40) = v3;
  v5 = v88[5];
  *(_OWORD *)((char *)v1 + 56) = v4;
  *(_QWORD *)&v4 = *(_QWORD *)&v88[6];
  *(_OWORD *)((char *)v1 + 72) = v5;
  *((_QWORD *)v1 + 11) = v4;
  if ( !HMGRTABLE::ExpandTable((struct DXGGLOBAL *)((char *)v1 + 200)) )
  {
    v77 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v77 + 24) = -1073741801LL;
LABEL_41:
    WdLogEvent5_WdLowResource(v77);
    return 3221225495LL;
  }
  v10 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 48) = v10;
  if ( !v10 )
  {
    v78 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v78 + 24) = v1;
    *(_QWORD *)(v78 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v78);
    return 3221225495LL;
  }
  v15 = ExInitializeResourceLite(v10);
  v20 = v15;
  if ( v15 < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
LABEL_46:
    v79[4] = v20;
    v79[3] = v1;
LABEL_48:
    WdLogEvent5_WdWarning(v79);
    return (unsigned int)v20;
  }
  v21 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v1 + 800),
          0LL,
          0LL,
          PagedPool,
          0,
          0x5F0uLL,
          0x4B677844u,
          0);
  v20 = v21;
  if ( v21 < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v79[5] = 0LL;
    goto LABEL_46;
  }
  *((_BYTE *)v1 + 913) = 1;
  v90 = 288;
  v93 = 67108868;
  v97 = 288;
  v100 = 67108868;
  v91 = L"TerminationListSizeLimit";
  v104 = 288;
  v92 = &v83;
  v94 = v88;
  v98 = L"ValidateWDDMCaps";
  v99 = &v84;
  v101 = &v85;
  v105 = L"WDDM2LockManagement";
  v106 = &v82;
  v108 = &v86;
  v112 = L"MaximumAdapterCount";
  v113 = &v81;
  v107 = 67108868;
  v111 = 288;
  v114 = 67108868;
  v115 = &v87;
  *(_QWORD *)&v88[0] = 0x4000000LL;
  v83 = 0;
  v85 = 0;
  v84 = 0;
  v86 = 1;
  v82 = 0;
  LODWORD(v87) = 32;
  v81 = 0;
  v89 = 0LL;
  v95 = 4;
  v96 = 0LL;
  v102 = 4;
  v103 = 0LL;
  v109 = 4;
  v110 = 0LL;
  v116 = 4;
  v117 = 0LL;
  v118 = 0;
  v119 = 0LL;
  memset(v120, 0, sizeof(v120));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v89, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 81) = 0x4000000LL;
    *((_BYTE *)v1 + 656) = 0;
    *((_DWORD *)v1 + 231) = 1;
    *((_DWORD *)v1 + 232) = 32;
  }
  else
  {
    v26 = v84 == 0;
    *((_QWORD *)v1 + 81) = v83;
    v27 = v82 < 2;
    *((_BYTE *)v1 + 656) = !v26;
    v28 = 1;
    if ( v27 )
      v28 = v82;
    *((_DWORD *)v1 + 231) = v28;
    v29 = v81;
    if ( v81 < 4 )
    {
      v29 = 4;
    }
    else if ( v81 > 0x400 )
    {
      v29 = 1024;
    }
    v81 = v29;
    *((_DWORD *)v1 + 232) = v29;
  }
  *((_DWORD *)v1 + 161) = 0;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v20 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    v79[3] = v20;
    goto LABEL_48;
  }
  v35 = (DXGDIAGNOSTICS *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
  if ( v35 )
    v40 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v35, 0x10000u, (enum _POOL_TYPE)v38);
  else
    v40 = 0LL;
  *((_QWORD *)v1 + 86) = v40;
  if ( !v40 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
    *(_QWORD *)(v77 + 24) = 0x10000LL;
    goto LABEL_41;
  }
  v41 = (char *)operator new[](0x200uLL, 0x4B677844u, PagedPool);
  v46 = v41;
  if ( v41 )
  {
    memset(v41, 0, 0x100uLL);
    memset(v46 + 256, 0, 0x100uLL);
  }
  else
  {
    v46 = 0LL;
  }
  *((_QWORD *)v1 + 87) = v46;
  if ( !v46 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v43, v42, v44, v45);
    *(_QWORD *)(v77 + 24) = 850LL;
    goto LABEL_41;
  }
  v47 = (DXGSESSIONMGR *)operator new[](0xC0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v47 )
    v52 = DXGSESSIONMGR::DXGSESSIONMGR(v47);
  else
    v52 = 0LL;
  *((_QWORD *)v1 + 88) = v52;
  if ( !v52 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v49, v48, v50, v51);
    *(_QWORD *)(v77 + 24) = 857LL;
    goto LABEL_41;
  }
  v53 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 232) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 232) + 31) >> 5, 4uLL) )
    v53 = -1LL;
  v54 = operator new[](v53, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 79) = v54;
  if ( !v54 )
  {
    v77 = WdLogNewEntry5_WdLowResource(0LL, v55, v56, v57);
    *(_QWORD *)(v77 + 24) = 864LL;
    goto LABEL_41;
  }
  memset(v54, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 232) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)((char *)v1 + 616), *((PULONG *)v1 + 79), *((_DWORD *)v1 + 232));
  v58 = (EDIDCACHE *)operator new[](0x3F8uLL, 0x4B677844u, PagedPool);
  if ( v58 )
    v63 = EDIDCACHE::EDIDCACHE(v58);
  else
    v63 = 0LL;
  *((_QWORD *)v1 + 98) = v63;
  if ( !v63 )
  {
    v80 = WdLogNewEntry5_WdLowResource(v60, v59, v61, v62);
    *(_QWORD *)(v80 + 24) = 874LL;
    WdLogEvent5_WdLowResource(v80);
  }
  v64 = (DXGPROCESS *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x158uLL);
  if ( v64 )
    v69 = DXGPROCESS::DXGPROCESS(v64, v1, PsInitialSystemProcess, 0LL);
  else
    v69 = 0LL;
  *((_QWORD *)v1 + 117) = v69;
  if ( !v69 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v66, v65, v67, v68);
    *(_QWORD *)(v77 + 24) = 885LL;
    goto LABEL_41;
  }
  result = DXGPROCESS::Initialize(v69);
  if ( (int)result < 0 )
    return result;
  v71 = (QDC_CACHE *)operator new[](0x378uLL, 0x4B677844u, PagedPool);
  if ( v71 )
    v76 = QDC_CACHE::QDC_CACHE(v71, v72);
  else
    v76 = 0LL;
  *((_QWORD *)v1 + 134) = v76;
  if ( !v76 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v73, v72, v74, v75);
    *(_QWORD *)(v77 + 24) = 898LL;
    goto LABEL_41;
  }
  KeInitializeSpinLock(&SpinLock);
  return 0LL;
}
