/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00E9244
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00F9EEC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000FB40 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00E3228 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C00FA93C (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C00FB0F0 (--0EDIDCACHE@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C00FB4E0 (CreateDxgkSharedObjectTypes.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C00FCA00 (--0QDC_CACHE@@QEAA@_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  DXGGLOBAL *v1; // rbx
  __int128 v2; // xmm0
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  bool v21; // cf
  int v22; // eax
  int v23; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // edi
  DXGDIAGNOSTICS *v30; // rax
  __int64 v31; // rcx
  enum _POOL_TYPE v32; // r8d
  DXGDIAGNOSTICS *v33; // rax
  DXGSESSIONMGR *v34; // rax
  __int64 v35; // rcx
  DXGSESSIONMGR *v36; // rax
  SIZE_T v37; // rax
  PVOID v38; // rax
  EDIDCACHE *v39; // rax
  __int64 v40; // rcx
  EDIDCACHE *v41; // rax
  __int64 v42; // rcx
  struct _KPROCESS *v43; // rcx
  QDC_CACHE *v44; // rax
  bool v45; // dl
  __int64 v46; // rcx
  QDC_CACHE *v47; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B8h] BYREF
  int v57; // [rsp+54h] [rbp-B4h] BYREF
  int v58; // [rsp+58h] [rbp-B0h] BYREF
  int v59; // [rsp+5Ch] [rbp-ACh] BYREF
  int v60; // [rsp+60h] [rbp-A8h] BYREF
  int v61; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v63[6]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-30h] BYREF
  int v65; // [rsp+E0h] [rbp-28h]
  const wchar_t *v66; // [rsp+E8h] [rbp-20h]
  unsigned int *v67; // [rsp+F0h] [rbp-18h]
  int v68; // [rsp+F8h] [rbp-10h]
  _OWORD *v69; // [rsp+100h] [rbp-8h]
  int v70; // [rsp+108h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+8h]
  int v72; // [rsp+118h] [rbp+10h]
  const wchar_t *v73; // [rsp+120h] [rbp+18h]
  int *v74; // [rsp+128h] [rbp+20h]
  int v75; // [rsp+130h] [rbp+28h]
  int *v76; // [rsp+138h] [rbp+30h]
  int v77; // [rsp+140h] [rbp+38h]
  __int64 v78; // [rsp+148h] [rbp+40h]
  int v79; // [rsp+150h] [rbp+48h]
  const wchar_t *v80; // [rsp+158h] [rbp+50h]
  unsigned int *v81; // [rsp+160h] [rbp+58h]
  int v82; // [rsp+168h] [rbp+60h]
  int *v83; // [rsp+170h] [rbp+68h]
  int v84; // [rsp+178h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+78h]
  int v86; // [rsp+188h] [rbp+80h]
  const wchar_t *v87; // [rsp+190h] [rbp+88h]
  unsigned int *v88; // [rsp+198h] [rbp+90h]
  int v89; // [rsp+1A0h] [rbp+98h]
  int *v90; // [rsp+1A8h] [rbp+A0h]
  int v91; // [rsp+1B0h] [rbp+A8h]
  __int64 v92; // [rsp+1B8h] [rbp+B0h]
  int v93; // [rsp+1C0h] [rbp+B8h]
  const wchar_t *v94; // [rsp+1C8h] [rbp+C0h]
  int *v95; // [rsp+1D0h] [rbp+C8h]
  int v96; // [rsp+1D8h] [rbp+D0h]
  __int64 *v97; // [rsp+1E0h] [rbp+D8h]
  int v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  int v100; // [rsp+1F8h] [rbp+F0h]
  _BYTE v101[40]; // [rsp+200h] [rbp+F8h] BYREF

  v1 = DXGGLOBAL::m_pGlobal;
  memset((char *)v63 + 8, 0, 0x58uLL);
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = *((_QWORD *)&v63[0] + 1);
  *((_OWORD *)v1 + 1) = v63[1];
  *((_OWORD *)v1 + 2) = v63[2];
  *((_OWORD *)v1 + 3) = v63[3];
  *((_QWORD *)v1 + 8) = *(_QWORD *)&v63[4];
  *((_DWORD *)v1 + 18) = DWORD2(v63[4]);
  v2 = v63[5];
  *((_DWORD *)v1 + 19) = HIDWORD(v63[4]);
  *((_OWORD *)v1 + 5) = v2;
  if ( !HMGRTABLE::ExpandTable((DXGGLOBAL *)((char *)v1 + 176)) )
  {
    v49 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v49 + 24) = -1073741801LL;
LABEL_36:
    WdLogEvent5_WdLowResource(v49);
    return 3221225495LL;
  }
  v4 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 39) = v4;
  if ( !v4 )
  {
    v50 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v50 + 24) = v1;
    *(_QWORD *)(v50 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v50);
    return 3221225495LL;
  }
  v9 = ExInitializeResourceLite(v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
LABEL_41:
    v51[4] = v14;
    v51[3] = v1;
    goto LABEL_43;
  }
  v15 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v1 + 640),
          0LL,
          0LL,
          PagedPool,
          0,
          0x5F0uLL,
          0x4B677844u,
          0);
  v14 = v15;
  if ( v15 < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v51[5] = 0LL;
    goto LABEL_41;
  }
  *((_BYTE *)v1 + 753) = 1;
  v65 = 288;
  v72 = 288;
  v66 = L"TerminationListSizeLimit";
  v79 = 288;
  v67 = &v56;
  v86 = 288;
  v69 = v63;
  v73 = L"ValidateWDDMCaps";
  v74 = &v57;
  v68 = 67108868;
  v76 = &v59;
  v80 = L"WDDM2LockManagement";
  v81 = &v55;
  v83 = &v60;
  v87 = L"MaximumAdapterCount";
  v88 = &v54;
  v90 = &v61;
  v94 = L"InvestigationDebugParameter";
  v95 = &v58;
  v75 = 67108868;
  v82 = 67108868;
  v89 = 67108868;
  v93 = 288;
  v96 = 67108868;
  v97 = &v62;
  *(_QWORD *)&v63[0] = 0x4000000LL;
  v56 = 0;
  v59 = 0;
  v57 = 0;
  v60 = 1;
  v55 = 0;
  v61 = 32;
  v54 = 0;
  v58 = 0;
  LODWORD(v62) = 0;
  v64 = 0LL;
  v70 = 4;
  v71 = 0LL;
  v77 = 4;
  v78 = 0LL;
  v84 = 4;
  v85 = 0LL;
  v91 = 4;
  v92 = 0LL;
  v98 = 4;
  v99 = 0LL;
  v100 = 0;
  memset(v101, 0, sizeof(v101));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v64, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 63) = 0x4000000LL;
    *((_BYTE *)v1 + 512) = 0;
    *((_DWORD *)v1 + 191) = 1;
    *((_DWORD *)v1 + 192) = 32;
    *((_DWORD *)v1 + 264) = 0;
  }
  else
  {
    v20 = v57 == 0;
    *((_QWORD *)v1 + 63) = v56;
    v21 = v55 < 2;
    *((_BYTE *)v1 + 512) = !v20;
    v22 = 1;
    if ( v21 )
      v22 = v55;
    *((_DWORD *)v1 + 191) = v22;
    v23 = v54;
    if ( v54 < 4 )
    {
      v23 = 4;
    }
    else if ( v54 > 0x400 )
    {
      v23 = 1024;
    }
    v54 = v23;
    *((_DWORD *)v1 + 192) = v23;
    *((_DWORD *)v1 + 264) = v58;
  }
  *((_DWORD *)v1 + 125) = 0;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v14 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes >= 0 )
  {
    v29 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
    v30 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4B677844u, PagedPool);
    if ( v30 )
      v33 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v30, v29, v32);
    else
      v33 = 0LL;
    *((_QWORD *)v1 + 68) = v33;
    if ( v33 )
    {
      v34 = (DXGSESSIONMGR *)operator new(0xF8uLL, 0x4B677844u, (POOL_TYPE)512);
      if ( v34 )
        v36 = DXGSESSIONMGR::DXGSESSIONMGR(v34);
      else
        v36 = 0LL;
      *((_QWORD *)v1 + 69) = v36;
      if ( v36 )
      {
        v37 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 192) + 31) >> 5);
        if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 192) + 31) >> 5, 4uLL) )
          v37 = -1LL;
        v38 = operator new(v37, 0x4B677844u, PagedPool);
        *((_QWORD *)v1 + 61) = v38;
        if ( v38 )
        {
          memset(v38, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 192) + 31) >> 5));
          RtlInitializeBitMap((PRTL_BITMAP)((char *)v1 + 472), *((PULONG *)v1 + 61), *((_DWORD *)v1 + 192));
          v39 = (EDIDCACHE *)operator new(0x278uLL, 0x4B677844u, PagedPool);
          if ( v39 )
            v41 = EDIDCACHE::EDIDCACHE(v39);
          else
            v41 = 0LL;
          *((_QWORD *)v1 + 79) = v41;
          if ( !v41 )
          {
            v52 = WdLogNewEntry5_WdLowResource(v40);
            *(_QWORD *)(v52 + 24) = 845LL;
            WdLogEvent5_WdLowResource(v52);
          }
          if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 97) < 0 )
          {
            v49 = WdLogNewEntry5_WdLowResource(v42);
            *(_QWORD *)(v49 + 24) = 856LL;
          }
          else
          {
            v43 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 97) + 48LL);
            if ( PsInitialSystemProcess != v43 )
            {
              v53 = WdLogNewEntry5_WdAssertion(v43);
              *(_QWORD *)(v53 + 24) = 859LL;
              WdLogEvent5_WdAssertion(v53);
            }
            v44 = (QDC_CACHE *)operator new(0x378uLL, 0x4B677844u, PagedPool);
            if ( v44 )
              v47 = QDC_CACHE::QDC_CACHE(v44, v45);
            else
              v47 = 0LL;
            *((_QWORD *)v1 + 111) = v47;
            if ( v47 )
            {
              KeInitializeSpinLock(&SpinLock);
              return 0LL;
            }
            v49 = WdLogNewEntry5_WdLowResource(v46);
            *(_QWORD *)(v49 + 24) = 864LL;
          }
        }
        else
        {
          v49 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v49 + 24) = 835LL;
        }
      }
      else
      {
        v49 = WdLogNewEntry5_WdLowResource(v35);
        *(_QWORD *)(v49 + 24) = 828LL;
      }
    }
    else
    {
      v49 = WdLogNewEntry5_WdLowResource(v31);
      *(_QWORD *)(v49 + 24) = v29;
    }
    goto LABEL_36;
  }
  v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
  v51[3] = v14;
LABEL_43:
  WdLogEvent5_WdWarning(v51);
  return (unsigned int)v14;
}
