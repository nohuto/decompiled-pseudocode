/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C00B1480 (DxgkApplyPathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00B3D34 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000A708 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000A740 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C000A760 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0064A24 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0064A60 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0065A90 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0066138 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0066174 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008AB14 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C008F33C (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00B100C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C017D738 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C017DB68 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // r13d
  unsigned __int16 v4; // si
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int Active; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  DXGGLOBAL *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int i; // r14d
  DXGGLOBAL *v31; // rax
  __int64 v32; // rbx
  unsigned __int16 v33; // r8
  struct DXGPROCESS *v34; // r15
  int j; // r11d
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int16 k; // r9
  __int64 v40; // r10
  __int64 v41; // rcx
  unsigned __int16 m; // r9
  __int64 v43; // r8
  __int64 v44; // r14
  unsigned int v45; // r11d
  unsigned int v46; // ebx
  _DWORD *v47; // r10
  int v48; // r11d
  __int64 v49; // rcx
  unsigned __int16 n; // dx
  __int64 v51; // r8
  unsigned __int16 v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // r8d
  unsigned int v55; // ecx
  __int64 v56; // r10
  __int64 v57; // r11
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int16 v63; // r14
  unsigned int v64; // esi
  __int64 v65; // rbx
  __int64 v66; // rcx
  unsigned int v67; // edx
  __int64 v68; // r9
  __int64 v69; // r8
  __int64 v70; // r15
  __int64 v71; // rax
  unsigned int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  int v76; // ecx
  char v77; // r12
  unsigned int v78; // esi
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // r14
  __int64 v82; // rbx
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // r14
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  _BYTE *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  unsigned __int16 v99; // si
  __int64 v100; // r15
  __int64 v101; // rax
  unsigned int v102; // r13d
  int v103; // ebx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  unsigned int v107; // eax
  LONG v108; // ecx
  DXGGLOBAL *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  struct DXGPROCESS *v113; // rcx
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v118; // r9
  __int64 v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // r11
  __int64 v133; // rbx
  __int64 v134; // r10
  bool IsSameCloneGroup; // al
  _QWORD *v136; // rax
  __int64 v137; // rbx
  _QWORD *v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  int v144; // ebx
  __int64 v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rdx
  struct SESSION_VIEW **v148; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v149[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v150; // [rsp+34h] [rbp-CCh] BYREF
  char v151; // [rsp+35h] [rbp-CBh]
  unsigned __int8 v152; // [rsp+36h] [rbp-CAh]
  unsigned int v153; // [rsp+38h] [rbp-C8h]
  struct DXGPROCESS *v154; // [rsp+40h] [rbp-C0h]
  struct tagRECT v155; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v156[16]; // [rsp+58h] [rbp-A8h] BYREF
  struct _LUID *v157; // [rsp+68h] [rbp-98h]
  _BYTE v158[64]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v159; // [rsp+B0h] [rbp-50h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-30h] BYREF
  char v161; // [rsp+100h] [rbp+0h]

  v153 = a2;
  v2 = a2;
  v161 = 0;
  v4 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v158, 8u, 0);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v8 = -1073741811;
  if ( !SessionData )
  {
    v119 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v119 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v121, v120, v122, v123);
    v124 = v119;
    *(_QWORD *)(v119 + 32) = -1073741811LL;
LABEL_89:
    WdLogEvent5_WdError(v124);
    goto LABEL_84;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2321));
  Current = DXGPROCESS::GetCurrent();
  v154 = Current;
  v11 = Current;
  if ( !Current )
  {
    v124 = WdLogNewEntry5_WdError(v10);
    goto LABEL_89;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v125 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v125 + 24) = v11;
    WdLogEvent5_WdError(v125);
    v8 = -1073741790;
  }
  else
  {
    v150 = 0;
    v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v150, 1);
    v17 = v13;
    if ( v13 >= 0 )
    {
      v149[0] = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v158, v4, v15, v16) >= v4 )
      {
        LOBYTE(v20) = 1;
        LOBYTE(v19) = 1;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v158, 0LL, v19, v20, v149);
        v17 = Active;
        if ( Active != -1073741789 )
        {
          if ( Active < 0 )
          {
            v126 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v126 + 24) = *((_QWORD *)this + 8);
            *(_QWORD *)(v126 + 32) = v17;
            goto LABEL_94;
          }
          CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
          CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v158);
          v23 = v159;
          v24 = DXGGLOBAL::GetGlobal();
          MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(v24);
          v25 = 168 * MaximumAdapterCount;
          if ( !is_mul_ok(MaximumAdapterCount, 0xA8uLL) )
            v25 = -1LL;
          v27 = operator new[](v25, 0x63644356u, PagedPool);
          v28 = *((_QWORD *)this + 8);
          *(_QWORD *)(v28 + 40) = v27;
          v29 = *((_QWORD *)this + 8);
          if ( *(_QWORD *)(v29 + 40) )
          {
            *(_WORD *)(v29 + 28) = 0;
            for ( i = 0; ; ++i )
            {
              v31 = DXGGLOBAL::GetGlobal();
              if ( i >= DXGGLOBAL::GetMaximumAdapterCount(v31) )
                break;
              v32 = 168LL * i;
              memset((void *)(v32 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0xA8uLL);
              memset((void *)(v32 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
            }
            DxgkRemoveAllSessionViewForCurrentSession();
            v33 = 0;
            v34 = v154;
            for ( j = 1; v33 < *(_WORD *)(v23 + 20); v33 += j )
            {
              v36 = 216LL * v33;
              v37 = *(unsigned int *)(v36 + v23 + 236);
              if ( (_DWORD)v37 == v33
                || !CCD_TOPOLOGY::IsMatchingSource(
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v36 + v23 + 48),
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(216 * v37 + v23 + 48)) )
              {
                *(_DWORD *)(v36 + v23 + 232) = 0;
              }
              else
              {
                *(_DWORD *)(v36 + v23 + 232) = j;
                *(_DWORD *)(216LL * *(unsigned int *)(v36 + v23 + 236) + v23 + 232) = j;
              }
            }
            v38 = *((_QWORD *)this + 8);
            for ( k = 0; k < *(_WORD *)(v38 + 20); k += j )
            {
              v40 = 216LL * k;
              v41 = *(unsigned int *)(v40 + v38 + 236);
              if ( (_DWORD)v41 == k
                || !CCD_TOPOLOGY::IsMatchingSource(
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v40 + v38 + 48),
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v38 + 216 * v41 + 48)) )
              {
                *(_DWORD *)(v40 + v38 + 232) = 0;
              }
              else
              {
                *(_DWORD *)(v40 + v38 + 232) = j;
                *(_DWORD *)(216LL * *(unsigned int *)(v40 + *((_QWORD *)this + 8) + 236) + *((_QWORD *)this + 8) + 232) = j;
              }
              v38 = *((_QWORD *)this + 8);
            }
            for ( m = 0; m < *(_WORD *)(v23 + 20); m += j )
            {
              v43 = v23 + 216LL * m;
              if ( !*(_DWORD *)(v43 + 232) )
              {
                v44 = *((_QWORD *)this + 8);
                v45 = 0;
                v46 = *(unsigned __int16 *)(v44 + 20);
                if ( *(_WORD *)(v44 + 20) )
                {
                  while ( !CCD_TOPOLOGY::IsMatchingSource(
                             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v43 + 48),
                             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v44 + 216LL * v45 + 48)) )
                  {
                    v45 = v48 + 1;
                    if ( v45 >= v46 )
                      goto LABEL_30;
                  }
                  if ( *(_DWORD *)(v43 + 68) != v47[17]
                    || !CCD_TOPOLOGY::IsMatchingSource(
                          (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v23 + 216LL * *(unsigned int *)(v43 + 236) + 48),
                          (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(216LL * (unsigned int)v47[59] + v44 + 48)) )
                  {
                    v129 = *(unsigned int *)(v43 + 236);
                    if ( (_DWORD)v129 != m )
                      *(_DWORD *)(216 * v129 + v23 + 232) |= 2u;
                    v130 = (unsigned int)v47[59];
                    if ( (_DWORD)v130 != v48 )
                      *(_DWORD *)(216 * v130 + *((_QWORD *)this + 8) + 232) |= 2u;
                  }
                  *(_DWORD *)(v43 + 232) |= 1u;
                  v47[58] |= 1u;
                }
LABEL_30:
                j = 1;
                if ( !*(_DWORD *)(v43 + 232) )
                {
                  v131 = *(unsigned int *)(v43 + 236);
                  if ( (_DWORD)v131 != m )
                  {
                    *(_DWORD *)(v43 + 232) = 1;
                    *(_DWORD *)(216 * v131 + v23 + 232) |= 2u;
                  }
                }
              }
            }
            v49 = *((_QWORD *)this + 8);
            for ( n = 0; n < *(_WORD *)(v49 + 20); n += j )
            {
              v51 = 216LL * n;
              if ( !*(_DWORD *)(v51 + v49 + 232) )
              {
                v118 = *(unsigned int *)(v51 + v49 + 236);
                if ( (_DWORD)v118 != n )
                {
                  *(_DWORD *)(v51 + v49 + 232) = j;
                  *(_DWORD *)(216 * v118 + *((_QWORD *)this + 8) + 232) |= 2u;
                }
              }
              v49 = *((_QWORD *)this + 8);
            }
            v52 = 0;
            if ( *(_WORD *)(v23 + 20) )
            {
              do
              {
                v53 = *((_QWORD *)this + 8);
                v54 = 0;
                v55 = *(_DWORD *)(v53 + 36);
                if ( v55 )
                {
                  v132 = *(_QWORD *)(v53 + 40);
                  v133 = 216LL * v52;
                  do
                  {
                    v134 = 168LL * v54;
                    if ( *(_DWORD *)(v133 + v23 + 56) == *(_DWORD *)(v134 + v132)
                      && *(_DWORD *)(v133 + v23 + 60) == *(_DWORD *)(v134 + v132 + 4) )
                    {
                      break;
                    }
                    ++v54;
                  }
                  while ( v54 < v55 );
                }
                v56 = 168LL * v54;
                v57 = 216LL * v52;
                *(_DWORD *)(*(_QWORD *)(v53 + 40) + v56 + 144) |= 1 << *(_DWORD *)(v57 + v23 + 64);
                if ( (*(_DWORD *)(v57 + v23 + 232) & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v56 + 140) |= 1 << *(_DWORD *)(v57 + v23 + 64);
                v58 = *((_QWORD *)this + 8);
                v59 = *(unsigned int *)(v58 + 36);
                if ( v54 < (unsigned int)v59 )
                {
                  j = 1;
                }
                else
                {
                  v60 = 168 * v59;
                  v61 = *(_QWORD *)(v57 + v23 + 56);
                  j = 1;
                  *(_QWORD *)(v60 + *(_QWORD *)(v58 + 40)) = v61;
                  ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
                }
                ++v52;
              }
              while ( v52 < *(_WORD *)(v23 + 20) );
              v2 = v153;
            }
            v62 = *((_QWORD *)this + 8);
            v63 = 0;
            if ( *(_WORD *)(v62 + 20) )
            {
              while ( 2 )
              {
                v64 = 0;
                v65 = 216LL * v63;
                *(_DWORD *)(v65 + v62 + 256) = 0;
                v66 = *((_QWORD *)this + 8);
                v67 = *(_DWORD *)(v66 + 36);
                if ( v67 )
                {
                  v68 = *(_QWORD *)(v66 + 40);
                  do
                  {
                    v69 = 168LL * v64;
                    if ( *(_DWORD *)(v65 + v66 + 56) == *(_DWORD *)(v69 + v68)
                      && *(_DWORD *)(v65 + v66 + 60) == *(_DWORD *)(v69 + v68 + 4) )
                    {
                      break;
                    }
                    v64 += j;
                  }
                  while ( v64 < v67 );
                }
                v70 = 168LL * v64;
                *(_DWORD *)(*(_QWORD *)(v66 + 40) + v70 + 148) |= j << *(_DWORD *)(v65 + v66 + 64);
                v71 = *((_QWORD *)this + 8);
                v72 = *(_DWORD *)(v71 + v65 + 236);
                if ( v72 == v63 )
                {
                  *(_DWORD *)(*(_QWORD *)(v71 + 40) + v70 + 136) |= j << *(_DWORD *)(v71 + v65 + 64);
                  goto LABEL_50;
                }
                IsSameCloneGroup = CCD_TOPOLOGY::IsSameCloneGroup(this, v72, v63, j);
                j = 1;
                if ( !IsSameCloneGroup )
LABEL_50:
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                            + 4 * (42LL * v64 + *(unsigned int *)(v65 + *((_QWORD *)this + 8) + 64))
                            + 8) = v63;
                v73 = *((_QWORD *)this + 8);
                if ( (*(_DWORD *)(v65 + v73 + 232) & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(v73 + 40) + v70 + 140) |= j << *(_DWORD *)(v65 + v73 + 64);
                v74 = *((_QWORD *)this + 8);
                v75 = *(unsigned int *)(v74 + 36);
                if ( v64 >= (unsigned int)v75 )
                {
                  *(_QWORD *)(168 * v75 + *(_QWORD *)(v74 + 40)) = *(_QWORD *)(v65 + v74 + 56);
                  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) += j;
                }
                v62 = *((_QWORD *)this + 8);
                v63 += j;
                if ( v63 >= *(_WORD *)(v62 + 20) )
                {
                  v34 = v154;
                  v2 = v153;
                  break;
                }
                continue;
              }
            }
            v76 = *(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v77 = v76 != 0 ? j : 0;
            v78 = 0;
            v151 = v77;
            if ( v76 )
            {
              do
              {
                v79 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v78);
                v81 = v79;
                if ( v79 < 0 )
                {
                  v136 = (_QWORD *)WdLogNewEntry5_WdError(v80);
                  v137 = 168LL * v78;
                  v136[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v137 + 4);
                  v136[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v137);
                  v136[5] = *((_QWORD *)this + 8);
                  v136[6] = v81;
                  WdLogEvent5_WdError(v136);
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (struct _LUID *)(v137 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    0xFFFFFFFF,
                    v81);
                }
                else
                {
                  v82 = 168LL * v78;
                  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v82 + 144) )
                  {
                    v83 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(this, (struct DXGFASTMUTEX *const *)v34, v2, v78);
                    v85 = v83;
                    if ( v83 < 0 )
                    {
                      v138 = (_QWORD *)WdLogNewEntry5_WdError(v84);
                      v138[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v82 + 4);
                      v138[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 168LL * v78);
                      v138[5] = *((_QWORD *)this + 8);
                      v138[6] = v85;
                      WdLogEvent5_WdError(v138);
                    }
                    else
                    {
                      v77 = 0;
                    }
                  }
                }
                ++v78;
              }
              while ( v78 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
              v151 = v77;
            }
            v88 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 113);
            if ( *(_BYTE *)v88 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v87, v86, v89, v90) + 24) = 178LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v156, *(struct DXGFASTMUTEX *const *)(v88 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v156);
              v93 = 10LL;
              v94 = (_BYTE *)(v88 + 16);
              do
              {
                *v94 = 0;
                v94 += 48;
                --v93;
              }
              while ( v93 );
              ++*(_DWORD *)(v88 + 496);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL, v91, v92) + 24) = 200LL;
              if ( v156[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v156);
            }
            v98 = *((_QWORD *)this + 8);
            v99 = 0;
            v149[0] = 0;
            if ( *(_WORD *)(v98 + 20) )
            {
              while ( 2 )
              {
                v100 = 216LL * v99;
                v101 = *((_QWORD *)this + 8);
                v102 = *(_DWORD *)(v100 + v101 + 236);
                if ( *(int *)(v100 + v101 + 256) < 0 )
                  goto LABEL_80;
                v103 = v99;
                if ( v102 != v99 && CCD_TOPOLOGY::IsSameCloneGroup(this, v102, v99, 1) )
                  goto LABEL_80;
                v104 = *(_DWORD *)(v100 + *((_QWORD *)this + 8) + 48) & 0x20800;
                if ( (_DWORD)v104 != 133120 )
                {
                  v105 = WdLogNewEntry5_WdAssertion(v104, v95, v96, v97);
                  WdLogEvent5_WdAssertion(v105);
                }
                v106 = *((_QWORD *)this + 8);
                v107 = *(_DWORD *)(v100 + v106 + 64);
                v155.left = *(_DWORD *)(v100 + v106 + 180);
                v155.right = *(_DWORD *)(v100 + v106 + 188) + v155.left;
                v108 = *(_DWORD *)(v100 + v106 + 184);
                v153 = v107;
                v155.top = v108;
                v155.bottom = *(_DWORD *)(v100 + v106 + 192) + v108;
                v152 = v102 == v99;
                v157 = (struct _LUID *)(v100 + v106 + 56);
                v109 = DXGGLOBAL::GetGlobal();
                v154 = DXGGLOBAL::GetSessionData(v109);
                v113 = v154;
                if ( v154 )
                {
                  if ( *((struct _KTHREAD **)v154 + 2315) != KeGetCurrentThread() )
                  {
                    v145 = WdLogNewEntry5_WdAssertion(v154, v110, v111, v112);
                    *(_QWORD *)(v145 + 24) = 684LL;
                    WdLogEvent5_WdAssertion(v145);
                    v113 = v154;
                  }
                  v114 = DXGSESSIONDATA::AddSourceViewToSession(v113, &v155, v157, v153, v152, v148);
                  v99 = v149[0];
                  if ( v114 >= 0 )
                  {
                    if ( v102 == v103 )
                      ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
LABEL_80:
                    v116 = *((_QWORD *)this + 8);
                    v149[0] = ++v99;
                    if ( v99 >= *(_WORD *)(v116 + 20) )
                    {
                      v77 = v151;
                      goto LABEL_82;
                    }
                    continue;
                  }
                  v144 = v114;
                }
                else
                {
                  v139 = WdLogNewEntry5_WdError(0LL);
                  *(_QWORD *)(v139 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v141, v140, v142, v143);
                  *(_QWORD *)(v139 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v139);
                  v144 = -1073741811;
                }
                break;
              }
              v146 = (_QWORD *)WdLogNewEntry5_WdError(v115);
              v146[3] = *(int *)(v100 + *((_QWORD *)this + 8) + 60);
              v146[4] = *(unsigned int *)(v100 + *((_QWORD *)this + 8) + 56);
              v147 = *(unsigned int *)(v100 + *((_QWORD *)this + 8) + 64);
              v146[6] = v144;
              v146[5] = v147;
              WdLogEvent5_WdError(v146);
              *(_DWORD *)(v100 + *((_QWORD *)this + 8) + 256) = v144;
              goto LABEL_80;
            }
LABEL_82:
            CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
            CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v158);
            v8 = v77 != 0 ? 0xC0000001 : 0;
            goto LABEL_83;
          }
          v127 = WdLogNewEntry5_WdLowResource(v28);
          *(_QWORD *)(v127 + 24) = this;
          v128 = *((_QWORD *)this + 8);
LABEL_130:
          *(_QWORD *)(v127 + 32) = v128;
          WdLogEvent5_WdLowResource(v127);
          LODWORD(v17) = -1073741801;
          goto LABEL_131;
        }
        v4 = v149[0];
      }
      v127 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v127 + 24) = *((_QWORD *)this + 8);
      v128 = v4;
      goto LABEL_130;
    }
    v126 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v126 + 24) = v17;
LABEL_94:
    WdLogEvent5_WdError(v126);
LABEL_131:
    v8 = v17;
LABEL_83:
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v150);
  }
LABEL_84:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v158);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v8;
}
