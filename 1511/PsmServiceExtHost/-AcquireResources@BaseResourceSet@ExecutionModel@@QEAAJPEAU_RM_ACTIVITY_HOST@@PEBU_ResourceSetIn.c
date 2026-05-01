/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800030DC (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON@@W4Enum@PendType@2@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x180015790 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@AEBU_.c)
 *     ?AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z @ 0x18004511C (-AcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEA_N@Z.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003708 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x18000382C (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?Attach@?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@ExecutionModel@@@Z @ 0x1800046B4 (-Attach@-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAAXPEAUIResourceSetCallback@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z @ 0x18000A140 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJPEAPEAVBaseResourceSet@2@@Z.c)
 *     RmpPolicyComputeUsageLimits @ 0x18000A5B0 (RmpPolicyComputeUsageLimits.c)
 *     MemUtilQueryMaxCommit @ 0x18000AA20 (MemUtilQueryMaxCommit.c)
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000B450 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000CCD0 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpEmPriorityCompare @ 0x18001D774 (RmpEmPriorityCompare.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800414E8 (-RmpPolicyAddAppliedResourceSetsFromActivityHostsToList@@YAJPEAPEAU_RM_ACTIVITY_HOST@@KPEAV-$lis.c)
 *     RmpPolicyGenerateRevokeListForCommit @ 0x1800416F4 (RmpPolicyGenerateRevokeListForCommit.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int *a5,
        unsigned int a6,
        int a7,
        unsigned __int8 a8,
        unsigned int a9,
        int a10,
        unsigned __int8 *a11,
        struct IUnknownVtbl *a12,
        __int64 (__fastcall *a13)(struct ExecutionModel::BaseResourceSet **a1),
        int a14,
        struct IUnknown **a15)
{
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *i; // rax
  __int64 v22; // rcx
  int v23; // ecx
  _BYTE *v24; // rdi
  unsigned int v25; // esi
  unsigned int v26; // ebx
  char *v27; // r13
  int *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  const struct _TlgProvider_t *v35; // rcx
  __int64 v36; // r15
  __int64 v37; // r12
  ULONG v38; // r14d
  unsigned __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // rdi
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rsi
  char v44; // r15
  unsigned __int8 v45; // r12
  int v46; // r14d
  __int64 v47; // rbx
  char *v48; // rax
  char *v49; // rdi
  int v50; // edx
  char *v51; // rcx
  signed __int64 v52; // rcx
  __int128 v53; // xmm0
  ExecutionModel::BaseResourceSet *v54; // r12
  int v55; // eax
  int v56; // ebx
  ExecutionModel::BaseResourceSet *v57; // rdi
  char *v58; // r10
  char *v59; // rcx
  char *j; // rax
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // rsi
  unsigned __int64 v64; // r9
  __int64 v65; // rdx
  int v66; // eax
  _QWORD *v67; // r15
  struct IUnknown *v68; // r14
  _QWORD *k; // rbx
  _QWORD *v70; // rax
  struct IUnknown *v71; // rcx
  _QWORD *v72; // rsi
  _QWORD *v73; // rax
  ExecutionModel::BaseResourceSet *v74; // rbx
  struct IUnknown *v75; // rdi
  __int64 v76; // rax
  char *v77; // rdx
  __int128 v78; // xmm0
  __int64 v79; // r15
  struct IUnknownVtbl *v80; // r8
  struct IUnknown *v81; // rax
  __int64 v82; // r14
  _QWORD *v83; // rax
  _QWORD *v84; // rsi
  _QWORD *v85; // rcx
  ULONG (__stdcall *Release)(IUnknown *); // rbx
  unsigned __int8 *v87; // r14
  struct IUnknown *v88; // rdi
  int v89; // esi
  unsigned int v90; // ecx
  __int64 v91; // rdx
  int *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  bool v95; // al
  unsigned int v96; // esi
  struct IUnknown *v97; // rbx
  unsigned int v98; // esi
  ExecutionModel::BaseResourceSet **v99; // rbx
  _QWORD *v100; // rcx
  __int64 v101; // rax
  ExecutionModel::BaseResourceSet *v102; // rdi
  __int64 (__fastcall *v103)(ExecutionModel::BaseResourceSet *); // r14
  ULONG (__stdcall *v104)(IUnknown *); // rdi
  __int64 v106; // rcx
  __int64 v107; // rdx
  int *v108; // r8
  __int64 v109; // rdx
  __int64 v110; // rax
  struct IUnknown *v111; // rax
  const GUID *v112; // r8
  const GUID *v113; // r9
  const struct _TlgProvider_t *v114; // rcx
  const GUID *v115; // r8
  const GUID *v116; // r9
  unsigned int v117; // ecx
  char *v118; // rax
  unsigned __int64 v119; // r8
  int v120; // eax
  unsigned int v121; // ebx
  char *v122; // r11
  __int64 v123; // rdx
  unsigned int v124; // r11d
  unsigned int *v125; // r9
  unsigned __int64 v126; // rbx
  __int64 v127; // rax
  int v128; // eax
  __int64 v129; // r8
  unsigned __int64 v130; // r10
  int v131; // ecx
  unsigned __int64 v132; // rdx
  unsigned __int64 v133; // rdi
  __int64 v134; // rbx
  int v135; // ebx
  ExecutionModel::BaseResourceSet *v136; // rax
  __int64 v137; // rax
  char *v138; // rdi
  char *v139; // rbx
  char *v140; // r8
  __int64 v141; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v142; // [rsp+58h] [rbp-A8h] BYREF
  int v143; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v144; // [rsp+64h] [rbp-9Ch]
  ExecutionModel::BaseResourceSet *v145; // [rsp+68h] [rbp-98h]
  unsigned __int8 v146; // [rsp+70h] [rbp-90h]
  unsigned int v147; // [rsp+74h] [rbp-8Ch] BYREF
  char v148; // [rsp+78h] [rbp-88h] BYREF
  char v149; // [rsp+79h] [rbp-87h] BYREF
  int v150; // [rsp+7Ch] [rbp-84h]
  __int64 v151; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v152; // [rsp+88h] [rbp-78h]
  unsigned int v153; // [rsp+90h] [rbp-70h] BYREF
  int v154; // [rsp+94h] [rbp-6Ch] BYREF
  int v155; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v156; // [rsp+9Ch] [rbp-64h] BYREF
  int v157; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v158; // [rsp+A4h] [rbp-5Ch] BYREF
  int *v159; // [rsp+A8h] [rbp-58h]
  void *Block[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v161; // [rsp+C0h] [rbp-40h]
  char *v162; // [rsp+C8h] [rbp-38h]
  __int64 v163; // [rsp+D0h] [rbp-30h]
  struct IUnknown **v164; // [rsp+D8h] [rbp-28h]
  __int64 v165; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v166)(struct ExecutionModel::BaseResourceSet **); // [rsp+E8h] [rbp-18h]
  __int64 v167; // [rsp+F0h] [rbp-10h] BYREF
  struct IUnknown *v168; // [rsp+F8h] [rbp-8h] BYREF
  char *v169; // [rsp+100h] [rbp+0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v171; // [rsp+118h] [rbp+18h] BYREF
  EVENT_DESCRIPTOR v172; // [rsp+120h] [rbp+20h] BYREF
  char v173[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v174; // [rsp+138h] [rbp+38h] BYREF
  __int128 v175; // [rsp+148h] [rbp+48h]
  __int128 v176; // [rsp+158h] [rbp+58h]
  __int128 v177; // [rsp+168h] [rbp+68h] BYREF
  __int128 v178; // [rsp+178h] [rbp+78h]
  __int128 v179; // [rsp+188h] [rbp+88h]
  _QWORD v180[22]; // [rsp+1A0h] [rbp+A0h] BYREF
  char SystemInformation[8]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v182; // [rsp+258h] [rbp+158h]
  unsigned int v183; // [rsp+25Ch] [rbp+15Ch]
  _BYTE v184[112]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v185; // [rsp+300h] [rbp+200h]
  char v186[48]; // [rsp+310h] [rbp+210h] BYREF
  unsigned int v187; // [rsp+340h] [rbp+240h]
  unsigned int v188; // [rsp+344h] [rbp+244h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+470h] [rbp+370h] BYREF
  void *v190; // [rsp+480h] [rbp+380h]
  int v191; // [rsp+488h] [rbp+388h]
  int v192; // [rsp+48Ch] [rbp+38Ch]
  int *v193; // [rsp+490h] [rbp+390h]
  __int64 v194; // [rsp+498h] [rbp+398h]
  char *v195; // [rsp+4A0h] [rbp+3A0h]
  __int64 v196; // [rsp+4A8h] [rbp+3A8h]
  char *v197; // [rsp+4B0h] [rbp+3B0h]
  __int64 v198; // [rsp+4B8h] [rbp+3B8h]
  int *v199; // [rsp+4C0h] [rbp+3C0h]
  __int64 v200; // [rsp+4C8h] [rbp+3C8h]
  char *v201; // [rsp+4D0h] [rbp+3D0h]
  __int64 v202; // [rsp+4D8h] [rbp+3D8h]
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+4E0h] [rbp+3E0h] BYREF
  void *v204; // [rsp+4F0h] [rbp+3F0h]
  int v205; // [rsp+4F8h] [rbp+3F8h]
  int v206; // [rsp+4FCh] [rbp+3FCh]
  int *v207; // [rsp+500h] [rbp+400h]
  __int64 v208; // [rsp+508h] [rbp+408h]
  int *v209; // [rsp+510h] [rbp+410h]
  __int64 v210; // [rsp+518h] [rbp+418h]
  int *v211; // [rsp+520h] [rbp+420h]
  __int64 v212; // [rsp+528h] [rbp+428h]
  int *v213; // [rsp+530h] [rbp+430h]
  __int64 v214; // [rsp+538h] [rbp+438h]
  int *v215; // [rsp+540h] [rbp+440h]
  __int64 v216; // [rsp+548h] [rbp+448h]
  int *v217; // [rsp+550h] [rbp+450h]
  __int64 v218; // [rsp+558h] [rbp+458h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+560h] [rbp+460h] BYREF
  __int64 *v220; // [rsp+580h] [rbp+480h]
  __int64 v221; // [rsp+588h] [rbp+488h]
  struct IUnknown **v222; // [rsp+590h] [rbp+490h]
  __int64 v223; // [rsp+598h] [rbp+498h]
  EVENT_DATA_DESCRIPTOR v224; // [rsp+5A0h] [rbp+4A0h] BYREF
  char *v225; // [rsp+5C0h] [rbp+4C0h]
  __int64 v226; // [rsp+5C8h] [rbp+4C8h]
  __int64 *v227; // [rsp+5D0h] [rbp+4D0h]
  __int64 v228; // [rsp+5D8h] [rbp+4D8h]

  v159 = a5;
  v152 = a11;
  v166 = a13;
  v164 = a15;
  v144 = a4;
  v162 = a3;
  v18 = *(_QWORD *)(a1 + 24);
  Block[0] = Block;
  Block[1] = Block;
  v163 = a2;
  v145 = (ExecutionModel::BaseResourceSet *)a1;
  v143 = 0;
  v142 = 0LL;
  v161 = 0LL;
  v150 = 0;
  if ( v18 )
  {
    v19 = *(int *)(a1 + 16);
    if ( (_DWORD)v19 == 1 )
    {
      v20 = (_QWORD *)(*(_QWORD *)(v18 + 8 * v19 + 176) + 160LL);
      for ( i = (_QWORD *)*v20; i != v20; i = (_QWORD *)*i )
      {
        v22 = i[2];
        if ( (*(_BYTE *)(v22 + 1434) & 8) == 0 )
        {
          v23 = *(_DWORD *)(v22 + 1408);
          if ( v23 != 11 && v23 != 55 )
            continue;
        }
        v150 = *(_DWORD *)(v18 + 80);
        goto LABEL_10;
      }
    }
    v150 = 0;
  }
LABEL_10:
  v24 = RmSvcGlobals;
  v25 = 0;
  v26 = 0;
  v27 = (char *)RmSvcGlobals + 304;
  v169 = (char *)RmSvcGlobals + 1464;
  memset_0((char *)RmSvcGlobals + 304, 0, 0x4E0uLL);
  if ( v144 )
  {
    v28 = v159;
    v29 = v144;
    do
    {
      if ( (unsigned int)*v28 <= 0x2F )
      {
        if ( (v24[1580] & 4) == 0 && *v28 == 1 )
        {
          v106 = v25++;
          v107 = 3 * v106;
          *(_OWORD *)&v27[8 * v107 + 1160] = *(_OWORD *)v28;
          *(_QWORD *)&v27[8 * v107 + 1176] = *((_QWORD *)v28 + 2);
        }
        else
        {
          v30 = v26++;
          v31 = 3 * v30;
          *(_OWORD *)&v27[8 * v31] = *(_OWORD *)v28;
          *(_QWORD *)&v27[8 * v31 + 16] = *((_QWORD *)v28 + 2);
        }
      }
      v28 += 6;
      --v29;
    }
    while ( v29 );
  }
  *((_DWORD *)v27 + 288) = v26;
  *((_DWORD *)v27 + 308) = v25;
  if ( *(_DWORD *)(a1 + 16) == 1 && a2 && *(int *)(a2 + 20) >= 0 )
  {
    if ( (a3[24] & 2) == 0
      && ((v32 = *(int *)a3, (unsigned int)v32 > 0x28) || (v33 = 0x11000002000LL, !_bittest64(&v33, v32)))
      || a3[26] < 0 )
    {
      *((_QWORD *)v27 + 155) = 0LL;
      v34 = RmpActivityHostActOnProcesses((struct _RM_ACTIVITY_HOST *)a2, v27 + 1240);
      HIDWORD(v151) = v34;
      if ( v34 >= 0 || v34 == -1073741251 || v34 == -1073741772 || v34 == -1073741275 )
      {
        HIDWORD(v151) = 0;
      }
      else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v35, 1uLL) )
      {
        v226 = 4LL;
        v225 = (char *)&v151 + 4;
        v165 = *(_QWORD *)(a2 + 24);
        v227 = &v165;
        v228 = 8LL;
        TlgWrite(v114, &unk_180064D35, v115, v116, 4u, &v224);
      }
      v24 = RmSvcGlobals;
    }
  }
  memset_0(v184, 0, 0x78uLL);
  v36 = (__int64)(v24 + 264);
  v37 = (__int64)(v24 + 208);
  v38 = MemUtilQueryMaxCommit(&v171);
  if ( v38 )
    v39 = (unsigned __int64)v164;
  else
    v39 = v171;
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  NtQuerySystemInformation(SystemPerformanceInformation, v186, 0x158u, 0LL);
  NtQuerySystemInformation(SystemMemoryListInformation, v180, 0xB0u, 0LL);
  v40 = v182;
  v41 = v188;
  memset_0(&v174, 0, 0x30uLL);
  v42 = v40 * (unsigned int)v41;
  *(_QWORD *)&v174 = v42;
  *((_QWORD *)&v175 + 1) = v40 * v183;
  *(_QWORD *)&v176 = v40
                   * (v180[0]
                    + v180[1]
                    + v180[12]
                    + v180[11]
                    + v180[10]
                    + v180[9]
                    + v180[8]
                    + v180[7]
                    + v180[5]
                    + v180[6]);
  *((_QWORD *)&v176 + 1) = *((_QWORD *)&v175 + 1) - v176;
  *((_QWORD *)&v174 + 1) = v40 * (v41 - v187);
  *(_QWORD *)&v175 = v42 - *((_QWORD *)&v174 + 1);
  if ( v38 || v42 > v39 )
    v39 = v40 * (unsigned int)v41;
  RmpPolicyComputeUsageLimits(v37, v36, (__int64)&v174, v39, (__int64)v184);
  v177 = v174;
  v178 = v175;
  v179 = v176;
  if ( a14 == 1 )
  {
    v57 = v145;
    v45 = 1;
    LOBYTE(v141) = 1;
    goto LABEL_163;
  }
  if ( *((_DWORD *)v145 + 4) == 1
    && (unsigned int)dword_180071060 > 4
    && (qword_180071070 & 9) != 0
    && (qword_180071078 & 9) == qword_180071078 )
  {
    v194 = 8LL;
    v196 = 8LL;
    v198 = 8LL;
    v200 = 8LL;
    v193 = v159 + 8;
    v195 = v27 + 1240;
    v197 = (char *)&v177 + 8;
    v199 = v159 + 14;
    v201 = (char *)v145 + 248;
    v202 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180063E46 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v190 = &unk_180063E51;
    UserData.Reserved = 2;
    v191 = 105;
    v192 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  v43 = *((unsigned int *)v27 + 288);
  v44 = 0;
  v45 = 0;
  LOWORD(v141) = 0;
  v46 = -1;
  v47 = (unsigned int)v43;
  v48 = (char *)malloc(saturated_mul(v43, 0x18uLL));
  v49 = v48;
  if ( !v48 )
  {
    v56 = -2147024882;
    goto LABEL_210;
  }
  v50 = v43 - 1;
  if ( (int)v43 - 1 >= 0 )
  {
    v51 = v48 + 16;
    do
    {
      --v50;
      *((_DWORD *)v51 - 4) = -1;
      *((_QWORD *)v51 - 1) = 0LL;
      *(_DWORD *)v51 = 101;
      *((_WORD *)v51 + 2) = 0;
      v51 += 24;
    }
    while ( v50 >= 0 );
  }
  if ( (_DWORD)v43 )
  {
    v52 = v27 - v48;
    do
    {
      v53 = *(_OWORD *)&v48[v52];
      v48 += 24;
      *(_OWORD *)(v48 - 24) = v53;
      *((_QWORD *)v48 - 1) = *(_QWORD *)&v48[v52 - 8];
      --v47;
    }
    while ( v47 );
  }
  v54 = v145;
  v55 = ExecutionModel::BaseResourceSet::RecursiveVisit(
          v145,
          0LL,
          (unsigned int)v43,
          (__int64)v49,
          a7,
          1,
          &v141,
          (_BYTE *)&v141 + 1,
          (__int64 **)Block,
          0LL);
  v44 = BYTE1(v141);
  v56 = v55;
  if ( v55 < 0 )
    goto LABEL_46;
  if ( BYTE1(v141) || *((_DWORD *)v54 + 4) != 1 )
  {
    v56 = 0;
LABEL_46:
    v45 = v141;
    goto LABEL_47;
  }
  v117 = 0;
  if ( (_DWORD)v43 )
  {
    v118 = v49;
    while ( 1 )
    {
      v119 = *((_QWORD *)v118 + 1);
      if ( v119 )
      {
        if ( *(_DWORD *)v118 != 2
          || v119 > *(_QWORD *)(*((_QWORD *)v54 + 3) + 192LL) - *(_QWORD *)(*((_QWORD *)v54 + 3) + 200LL) )
        {
          break;
        }
      }
      ++v117;
      v118 += 24;
      if ( v117 >= (unsigned int)v43 )
        goto LABEL_173;
    }
    v45 = v141;
  }
  else
  {
LABEL_173:
    v45 = 1;
    LOWORD(v141) = 257;
    v44 = 1;
  }
  v56 = 0;
LABEL_47:
  operator delete(v49);
  if ( v56 < 0 )
  {
LABEL_210:
    v57 = v145;
    goto LABEL_67;
  }
  v57 = v145;
  v146 = v45;
  if ( v44 )
  {
    if ( !v45 )
    {
      v58 = (char *)v145 + 160;
      v59 = (char *)*((_QWORD *)v145 + 20);
      for ( j = v59; j != v58; j = *(char **)j )
      {
        v61 = *((_QWORD *)j + 2);
        if ( *(_DWORD *)(v61 + 1352) == 1 && *(_DWORD *)(v61 + 1360) < (signed int)a6 )
        {
          v121 = 0;
          if ( (_DWORD)v43 )
          {
            v122 = v27;
            do
            {
              if ( *((_QWORD *)v122 + 1) )
              {
                if ( *(_QWORD *)(v61 + 24LL * *(int *)v122 + 200) )
                {
                  v57 = v145;
                  v123 = *((_QWORD *)v145 + 168);
                  if ( !_bittest64(&v123, *(unsigned int *)v122) )
                    goto LABEL_179;
                }
                else
                {
                  v57 = v145;
                }
              }
              ++v121;
              v122 += 24;
            }
            while ( v121 < (unsigned int)v43 );
          }
        }
      }
      while ( v59 != v58 )
      {
        v62 = *((_QWORD *)v59 + 2);
        if ( *(_DWORD *)(v62 + 1352) == 1 && *(_DWORD *)(v62 + 1360) < (signed int)a6 )
        {
          v124 = 0;
          if ( *((_DWORD *)v27 + 308) )
          {
            v125 = (unsigned int *)(v27 + 1160);
            do
            {
              if ( *((_QWORD *)v125 + 1) )
              {
                v126 = *v125;
                if ( *(_QWORD *)(v62 + 24LL * (int)v126 + 200) )
                {
                  v127 = *((_QWORD *)v57 + 168);
                  if ( !_bittest64(&v127, v126) )
                    goto LABEL_179;
                }
              }
              ++v124;
              v125 += 6;
            }
            while ( v124 < *((_DWORD *)v27 + 308) );
          }
        }
        v59 = *(char **)v59;
      }
      if ( (*(int (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD, char *))(*(_QWORD *)v57 + 40LL))(
             v57,
             (unsigned int)v43,
             v27) < 0 )
        goto LABEL_179;
    }
  }
  else
  {
    if ( a10 != 1 )
      goto LABEL_66;
    v120 = ExecutionModel::BaseResourceSet::CheckPoolResources(
             v145,
             v43,
             (__int64)v27,
             a7,
             0,
             &v149,
             (_BYTE *)&v141 + 1,
             0LL);
    v44 = BYTE1(v141);
    v56 = v120;
    if ( v120 < 0 )
      goto LABEL_67;
    if ( !BYTE1(v141) )
      goto LABEL_66;
LABEL_179:
    v45 = 1;
    LOBYTE(v141) = 1;
  }
  if ( *((_DWORD *)v27 + 308) )
  {
    v63 = *((_QWORD *)RmSvcGlobals + 195);
    v147 = *((_DWORD *)RmSvcGlobals + 392);
    if ( a10 )
    {
      if ( a10 == 1 )
      {
        v46 = 1;
      }
      else if ( a10 == 2 )
      {
        v46 = 2;
      }
    }
    else
    {
      v46 = 0;
    }
    v64 = *((_QWORD *)v27 + 155) + *((_QWORD *)v27 + 146);
    if ( !v64 )
    {
      v65 = 0LL;
      v147 = 0;
LABEL_64:
      if ( !v146 )
      {
        if ( (_DWORD)v65 )
        {
          v135 = RmpPolicyAddAppliedResourceSetsFromActivityHostsToList(v63, v65, Block, v64);
          if ( v135 < 0 )
          {
            v56 = v135 | 0x10000000;
            goto LABEL_67;
          }
        }
      }
      goto LABEL_66;
    }
    if ( v64 + (unsigned __int64)v178 >= v64 )
    {
      v128 = RmpEmPriorityCompare(a6, *((unsigned int *)RmSvcGlobals + 396), RmSvcGlobals, v64);
      v131 = 1;
      if ( v128 > 0 )
        v131 = 3;
      v132 = *(_QWORD *)&v184[8 * v131 + 16];
      if ( v130 < v132 )
      {
        v65 = 0LL;
        v147 = 0;
        goto LABEL_64;
      }
      if ( (__int64)v177 - v185 >= v64 && v46 != 2 )
      {
        v133 = v177 - v132 + v64 + 1;
        if ( v133 >= (unsigned __int64)v177 - v132 )
        {
          v134 = *(_QWORD *)(v129 + 1552);
          v153 = *(_DWORD *)(v129 + 1568);
          RmpPolicyPopulateActivityHostMetricsTable(a6, &v153, v134, 1LL, RmpPolicyFilterActivityHostWithFlags, 3LL);
          RmpPolicyGenerateRevokeListForCommit(v134, v153, v133, *((_QWORD *)&v177 + 1), v63, &v147);
          v65 = v147;
          v45 = 1;
          v57 = v145;
          LOBYTE(v141) = 1;
          goto LABEL_64;
        }
      }
    }
    v45 = 0;
    goto LABEL_164;
  }
LABEL_66:
  v56 = 0;
LABEL_67:
  v143 = v56;
  if ( v56 < 0 )
    goto LABEL_165;
  if ( !v44 )
  {
LABEL_164:
    v143 = -2147220992;
    goto LABEL_165;
  }
  if ( !v45 )
    goto LABEL_70;
LABEL_163:
  if ( !v152 )
    goto LABEL_164;
LABEL_70:
  if ( !v166 )
  {
    v136 = (ExecutionModel::BaseResourceSet *)malloc(0x558uLL);
    if ( v136 )
      v137 = ExecutionModel::BaseResourceSet::BaseResourceSet(v136);
    else
      v137 = 0LL;
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::Attach(&v142, v137);
    if ( v142 )
      goto LABEL_74;
    v143 = -2147024882;
LABEL_165:
    v96 = v144;
    goto LABEL_113;
  }
  if ( v166 == ExecutionModel::ResourceSet::ResourceSetFactory )
    v66 = ExecutionModel::ResourceSet::ResourceSetFactory((struct ExecutionModel::BaseResourceSet **)&v142);
  else
    v66 = v166((struct ExecutionModel::BaseResourceSet **)&v142);
  v143 = v66;
  if ( v66 < 0 )
    goto LABEL_165;
LABEL_74:
  v67 = (_QWORD *)((char *)v57 + 160);
  LODWORD(v142[170].lpVtbl) = a6;
  LODWORD(v142[1].lpVtbl) = a7;
  LODWORD(v142[2].lpVtbl) = *((_DWORD *)v57 + 4);
  v142[3].lpVtbl = a12;
  HIDWORD(v142[169].lpVtbl) ^= (HIDWORD(v142[169].lpVtbl) ^ (4 * a8)) & 4;
  v142[168].lpVtbl = *(struct IUnknownVtbl **)((char *)v57 + 1344);
  v68 = v142;
  for ( k = (_QWORD *)*((_QWORD *)v57 + 20);
        k != v67 && *(_DWORD *)(k[2] + 1360LL) < SLODWORD(v142[170].lpVtbl);
        k = (_QWORD *)*k )
  {
    ;
  }
  v70 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v72 = v70;
  if ( !v70 )
    goto LABEL_219;
  v70[2] = v68;
  if ( v68 )
  {
    ((void (__fastcall *)(struct IUnknown *))v68->lpVtbl->AddRef)(v68);
    v57 = v145;
  }
  if ( !v72 )
  {
LABEL_219:
    v143 = -2147024882;
    goto LABEL_165;
  }
  v73 = (_QWORD *)k[1];
  *v72 = k;
  v72[1] = v73;
  *v73 = v72;
  k[1] = v72;
  ++v67[2];
  v74 = v145;
  v143 = 0;
  v142[23].lpVtbl = (struct IUnknownVtbl *)v57;
  v75 = 0LL;
  if ( *((_DWORD *)v74 + 4) == 1 )
  {
    v75 = v142;
    v76 = 2LL;
    v77 = v162;
    v71 = v142 + 176;
    do
    {
      v71 += 16;
      v78 = *(_OWORD *)v77;
      v77 += 128;
      *(_OWORD *)&v71[-16].lpVtbl = v78;
      *(_OWORD *)&v71[-14].lpVtbl = *((_OWORD *)v77 - 7);
      *(_OWORD *)&v71[-12].lpVtbl = *((_OWORD *)v77 - 6);
      *(_OWORD *)&v71[-10].lpVtbl = *((_OWORD *)v77 - 5);
      *(_OWORD *)&v71[-8].lpVtbl = *((_OWORD *)v77 - 4);
      *(_OWORD *)&v71[-6].lpVtbl = *((_OWORD *)v77 - 3);
      *(_OWORD *)&v71[-4].lpVtbl = *((_OWORD *)v77 - 2);
      *(_OWORD *)&v71[-2].lpVtbl = *((_OWORD *)v77 - 1);
      --v76;
    }
    while ( v76 );
    v79 = v163;
    *(_OWORD *)&v71->lpVtbl = *(_OWORD *)v77;
    *(_OWORD *)&v71[2].lpVtbl = *((_OWORD *)v77 + 1);
    *(_OWORD *)&v71[4].lpVtbl = *((_OWORD *)v77 + 2);
    *(_OWORD *)&v71[6].lpVtbl = *((_OWORD *)v77 + 3);
    *(_OWORD *)&v71[8].lpVtbl = *((_OWORD *)v77 + 4);
    *(_OWORD *)&v71[10].lpVtbl = *((_OWORD *)v77 + 5);
    v71[12].lpVtbl = *(struct IUnknownVtbl **)(v77 + 96);
    if ( !v79 )
    {
      v87 = v152;
      goto LABEL_99;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v79 + 16));
    v80 = *(struct IUnknownVtbl **)(v79 + 608);
    v81 = v75 + 173;
    v75[173].lpVtbl = v80;
    v75[174].lpVtbl = (struct IUnknownVtbl *)(v79 + 608);
    if ( v80->AddRef != (ULONG (__stdcall *)(IUnknown *))(v79 + 608) )
      __fastfail(3u);
    v80->AddRef = (ULONG (__stdcall *)(IUnknown *))v81;
    *(_QWORD *)(v79 + 608) = v81;
    LODWORD(v75[172].lpVtbl) = 0;
    v75[175].lpVtbl = (struct IUnknownVtbl *)v79;
    if ( *(_DWORD *)(v79 + 40) )
    {
      v45 = v141;
    }
    else
    {
      v82 = *(_QWORD *)(v79 + 600);
      ((void (__fastcall *)(struct IUnknown *))v75->lpVtbl->AddRef)(v75);
      v83 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v84 = v83;
      if ( v83 )
      {
        v83[2] = v75;
        ((void (__fastcall *)(struct IUnknown *))v75->lpVtbl->AddRef)(v75);
        v85 = *(_QWORD **)(v82 + 8);
        v84[1] = v85;
        *v84 = v82;
        *v85 = v84;
        *(_QWORD *)(v82 + 8) = v84;
        ++*(_QWORD *)(v82 + 16);
      }
      Release = v75->lpVtbl->Release;
      if ( (char *)Release == (char *)ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v75);
      else
        ((void (__fastcall *)(struct IUnknown *))Release)(v75);
      QueryUnbiasedInterruptTime((PULONGLONG)&v75[175].lpVtbl[38].Release);
      v45 = v141;
      v74 = v145;
    }
  }
  else
  {
    v79 = v163;
  }
  v87 = v152;
  if ( v79 && *((_DWORD *)v74 + 4) == 1 && v152 )
  {
    if ( v45 )
    {
LABEL_140:
      v96 = v144;
      LODWORD(v142[19].lpVtbl) = a9;
      LODWORD(v142[169].lpVtbl) = 1;
      if ( v96 )
      {
        v108 = v159;
        v109 = v96;
        do
        {
          v110 = *v108;
          if ( (unsigned int)v110 <= 0x2F )
          {
            v71 = (struct IUnknown *)(3 * (v110 + 8));
            v111 = v142;
            *(_OWORD *)&v142[(_QWORD)v71].lpVtbl = *(_OWORD *)v108;
            v111[(_QWORD)v71 + 2] = *(struct IUnknown *)(v108 + 4);
          }
          v108 += 6;
          --v109;
        }
        while ( v109 );
      }
      ExecutionModel::BaseResourceSet::RevokeResourceList((ExecutionModel::BaseResourceSet *)v71, Block, v150, a9);
      goto LABEL_110;
    }
    LODWORD(v75[169].lpVtbl) = 2;
    if ( (unsigned int)RmpActivityHostCheckQueueWork(v79) )
    {
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v71, 1uLL) )
      {
        v167 = *(_QWORD *)(v79 + 24);
        v220 = &v167;
        v222 = &v168;
        v221 = 8LL;
        v168 = v75;
        v223 = 8LL;
        TlgWrite((TraceLoggingHProvider)v71, &unk_180063D07, v112, v113, 4u, &pData);
      }
      LOBYTE(v75[240].lpVtbl) |= 0x10u;
      v45 = 1;
    }
    LODWORD(v75[169].lpVtbl) = 0;
  }
LABEL_99:
  if ( v45 )
    goto LABEL_140;
  v88 = v142;
  v89 = ExecutionModel::BaseResourceSet::RecursiveVisit(
          v74,
          1LL,
          *((unsigned int *)v27 + 288),
          (__int64)v27,
          (unsigned int)v142[1].lpVtbl,
          1,
          &v148,
          &v151,
          0LL,
          (__int64)v142);
  if ( v89 >= 0 )
  {
    v90 = *((_DWORD *)v27 + 308);
    if ( v90 )
    {
      v91 = v90;
      v92 = (int *)v169;
      do
      {
        v93 = 3 * (*v92 + 8LL);
        *(_OWORD *)&v88[v93].lpVtbl = *(_OWORD *)v92;
        v88[v93 + 2] = *(struct IUnknown *)(v92 + 4);
        if ( *v92 == 1 )
        {
          v94 = *((_QWORD *)v92 + 1);
          *((_QWORD *)&v177 + 1) -= v94;
          *(_QWORD *)&v178 = v94 + v178;
        }
        v92 += 6;
        --v91;
      }
      while ( v91 );
    }
    v95 = LODWORD(v88[169].lpVtbl) == 1;
    LODWORD(v88[169].lpVtbl) = 2;
    if ( v95 )
      ((void (__fastcall *)(struct IUnknown *))v88->lpVtbl[4].AddRef)(v88);
  }
  v143 = v89;
  if ( v89 < 0 )
    goto LABEL_165;
  v96 = v144;
LABEL_110:
  v97 = v142;
  *v164 = v142;
  ((void (__fastcall *)(struct IUnknown *))v97->lpVtbl->AddRef)(v97);
  if ( v87 )
    *v87 = v45;
  v143 = 0;
LABEL_113:
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    v208 = 4LL;
    v207 = &v143;
    v209 = (int *)&v156;
    v158 = a6;
    v211 = (int *)&v158;
    v155 = a7;
    v213 = &v155;
    v157 = v45;
    v215 = &v157;
    v154 = a10;
    v217 = &v154;
    v156 = v96;
    v210 = 4LL;
    v212 = 4LL;
    v214 = 4LL;
    v216 = 4LL;
    v218 = 4LL;
    *(_DWORD *)&v172.Level = 4;
    v203.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&v172.Id = ((unsigned int)&unk_180063DC4 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v172.Keyword = 1LL;
    v203.Size = *(unsigned __int16 *)off_180071068;
    v204 = &unk_180063DCF;
    v203.Reserved = 2;
    v205 = 118;
    v206 = 1;
    EventWriteTransfer(RegHandle, &v172, 0LL, 0LL, 8u, &v203);
  }
  if ( v143 < 0 )
  {
    if ( v142 )
    {
      v138 = (char *)v145 + 160;
      v139 = (char *)*((_QWORD *)v145 + 20);
      while ( v139 != v138 )
      {
        if ( *((struct IUnknown **)v139 + 2) == v142 )
        {
          v140 = v139;
          v139 = *(char **)v139;
          utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
            v138,
            v173,
            v140);
        }
        else
        {
          v139 = *(char **)v139;
        }
      }
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v142->lpVtbl[1].AddRef)(v142, 0LL);
      if ( v142 )
        ATL::AtlComPtrAssign(&v142, 0LL);
    }
  }
  v98 = v143;
  while ( 1 )
  {
    v99 = (ExecutionModel::BaseResourceSet **)Block[0];
    if ( Block[0] == Block )
      break;
    v100 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v101 = *(_QWORD *)Block[0];
    *v100 = *(_QWORD *)Block[0];
    *(_QWORD *)(v101 + 8) = v100;
    v102 = v99[2];
    if ( v102 )
    {
      v103 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v102 + 16LL);
      if ( v103 == ExecutionModel::BaseResourceSet::Release )
        ExecutionModel::BaseResourceSet::Release(v99[2]);
      else
        v103(v99[2]);
    }
    operator delete(v99);
  }
  v161 = 0LL;
  if ( v142 )
  {
    v104 = v142->lpVtbl->Release;
    if ( (char *)v104 == (char *)ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v142);
    else
      ((void (__fastcall *)(struct IUnknown *))v104)(v142);
  }
  return v98;
}
