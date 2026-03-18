/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00D0DE8 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     ??1?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ @ 0x1C0007874 (--1-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CFB8 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000D92C (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000E4B4 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000E508 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0088DFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00B45D0 (DpiOpenPnpRegistryKey.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C00CB180 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00CD684 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00CD870 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00CD988 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C00CDC8C (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00CDD24 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C00D0D30 (--0Lockable@@QEAA@XZ.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00D6540 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void **v8; // rcx
  char *v9; // r12
  char *v10; // r15
  DMMVIDEOPRESENTSOURCESET *v11; // rax
  DMMVIDEOPRESENTSOURCESET *v12; // rax
  __int64 v13; // rcx
  DMMVIDEOPRESENTTARGETSET *v14; // rax
  DMMVIDEOPRESENTTARGETSET *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r14
  DMMVIDPN *v66; // rax
  unsigned __int8 v67; // r8
  DMMVIDPN *v68; // rax
  char *v69; // rbx
  int (__high *v70)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE); // rdx
  __int64 v71; // rcx
  void *v72; // r8
  __int64 v73; // r9
  __int64 v74; // rbx
  _QWORD *v75; // r14
  struct _FAST_MUTEX *v76; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v78; // rax
  enum _POOL_TYPE v79; // r8d
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r14
  __int64 v100; // rax
  __int64 v101; // rax
  HANDLE v102; // rcx
  void ***v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r14
  _QWORD *v117; // rbx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned __int64 v128; // r15
  __int64 v129; // rax
  unsigned __int64 v130; // r15
  unsigned int v131; // r12d
  __int64 v132; // rdi
  __int64 v133; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  struct DMMVIDEOPRESENTTARGET *v139; // r13
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  _QWORD *v143; // r14
  unsigned int *i; // r14
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // r14
  unsigned __int64 v151; // r15
  __int64 v152; // rax
  unsigned __int64 v153; // r15
  unsigned int v154; // r12d
  __int64 v155; // rdi
  __int64 v156; // r14
  struct DMMVIDEOPRESENTTARGET *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  struct DMMVIDEOPRESENTTARGET *v162; // r13
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // r14
  __int64 v171; // rax
  HANDLE v172; // rcx
  __int64 v173; // rax
  __int64 v174; // r14
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // r15
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // r15
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // r14
  __int64 v200; // rax
  __int64 v201; // rax
  unsigned __int8 v202; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v203; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v204; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v205; // [rsp+38h] [rbp-C8h]
  unsigned int v206; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v208; // [rsp+50h] [rbp-B0h]
  _QWORD *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v210; // [rsp+60h] [rbp-A0h]
  _QWORD *v211; // [rsp+68h] [rbp-98h] BYREF
  __int64 v212; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v213; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v214; // [rsp+88h] [rbp-78h] BYREF
  void **v215; // [rsp+98h] [rbp-68h] BYREF
  __int128 v216; // [rsp+A0h] [rbp-60h]
  void **v217; // [rsp+B0h] [rbp-50h]
  __int64 v218; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v219; // [rsp+C0h] [rbp-40h]
  int v220; // [rsp+C8h] [rbp-38h]
  void **v221; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v222; // [rsp+D8h] [rbp-28h]
  void **v223; // [rsp+E8h] [rbp-18h]
  __int64 v224; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v225; // [rsp+F8h] [rbp-8h]
  int v226; // [rsp+100h] [rbp+0h]
  _OWORD v227[2]; // [rsp+108h] [rbp+8h] BYREF
  int v228; // [rsp+128h] [rbp+28h]
  wchar_t v229; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v230[3]; // [rsp+130h] [rbp+30h] BYREF

  v208 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v8 = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v9 = (char *)v3 + 88;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v10 = (char *)v3 + 96;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = 0LL;
  *((_QWORD *)v3 + 13) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 30) = 0;
  *((_QWORD *)v3 + 14) = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 18) = 0LL;
  *((_QWORD *)v3 + 17) = (char *)v3 + 128;
  *((_QWORD *)v3 + 16) = (char *)v3 + 128;
  *((_DWORD *)v3 + 38) = 2;
  *((_QWORD *)v3 + 20) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 21) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_DWORD *)v3 + 44) = 0;
  *((_QWORD *)v3 + 25) = 0LL;
  *((_QWORD *)v3 + 24) = (char *)v3 + 184;
  *((_QWORD *)v3 + 23) = (char *)v3 + 184;
  *((_DWORD *)v3 + 52) = 2;
  *((_QWORD *)v3 + 27) = 30LL;
  *((_QWORD *)v3 + 28) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 60) = 0;
  *((_QWORD *)v3 + 29) = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 33) = 0LL;
  *((_QWORD *)v3 + 32) = (char *)v3 + 248;
  *((_QWORD *)v3 + 31) = (char *)v3 + 248;
  *((_DWORD *)v3 + 68) = 2;
  *((_QWORD *)v3 + 35) = 5LL;
  *((_QWORD *)v3 + 36) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 37) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_DWORD *)v3 + 76) = 0;
  *((_QWORD *)v3 + 41) = 0LL;
  *((_QWORD *)v3 + 40) = (char *)v3 + 312;
  *((_QWORD *)v3 + 39) = (char *)v3 + 312;
  *((_DWORD *)v3 + 84) = 2;
  *((_QWORD *)v3 + 43) = 40LL;
  *((_QWORD *)v3 + 44) = 0LL;
  *((_QWORD *)v3 + 45) = 0LL;
  *((_QWORD *)v3 + 46) = 0LL;
  *((_QWORD *)v3 + 47) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  *((_QWORD *)v3 + 49) = 0LL;
  *((_QWORD *)v3 + 50) = 0LL;
  *((_QWORD *)v3 + 51) = 0LL;
  *((_QWORD *)v3 + 52) = 0LL;
  *((_QWORD *)v3 + 53) = 0LL;
  *((_QWORD *)v3 + 54) = 0LL;
  *((_QWORD *)v3 + 55) = 0LL;
  *((_QWORD *)v3 + 56) = 0LL;
  *((_QWORD *)v3 + 57) = 0LL;
  *((_WORD *)v3 + 232) = 0;
  *((_QWORD *)v3 + 59) = 0LL;
  *((_DWORD *)v3 + 120) = 0;
  *((_DWORD *)v3 + 123) = -1;
  *((_DWORD *)v3 + 124) = -1;
  *((_QWORD *)v3 + 63) = 0LL;
  if ( !a2 )
  {
    v81 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN>::`vftable', v5, v6, v7);
    WdLogEvent5_WdAssertion(v81);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v83 = WdLogNewEntry5_WdAssertion(v8, v5, v6, v7);
      WdLogEvent5_WdAssertion(v83);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v82 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v82 + 24) = v3;
    *(_QWORD *)(v82 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v82);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v84 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v84 + 24) = v3;
    WdLogEvent5_WdError(v84);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v11 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v11, v3);
  else
    v12 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 11, (__int64)v12);
  if ( !*(_QWORD *)v9 )
    goto LABEL_73;
  v14 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  v15 = v14 ? DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v14, v3) : 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 12, (__int64)v15);
  if ( !*(_QWORD *)v10 )
    goto LABEL_73;
  LODWORD(v20) = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3, v16, v17, v18);
  if ( (int)v20 < 0 )
    goto LABEL_75;
  LODWORD(v20) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3);
  if ( (int)v20 < 0 )
    goto LABEL_75;
  LODWORD(v20) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3);
  if ( (int)v20 < 0 )
    goto LABEL_75;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v9 + 72LL), 1u);
  v24 = *(_QWORD **)v9;
  v210 = 0LL;
  if ( v24 == (_QWORD *)-112LL )
    InputBuffer = 0LL;
  else
    InputBuffer = v24;
  v210 = *((_QWORD *)v3 + 44);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v94 = WdLogNewEntry5_WdAssertion(v19, v21, v22, v23);
    WdLogEvent5_WdAssertion(v94);
  }
  v26 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          v202,
          v204);
  if ( v26 < 0 )
    goto LABEL_81;
  if ( !v24[5] )
  {
    v109 = WdLogNewEntry5_WdError(v25);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v110 = WdLogNewEntry5_WdAssertion(v106, v105, v107, v108);
      WdLogEvent5_WdAssertion(v110);
    }
    *(_QWORD *)(v109 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v109);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_89;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v10 + 72LL));
  v24 = *(_QWORD **)v10;
  v212 = 0LL;
  if ( v24 == (_QWORD *)-112LL )
    v211 = 0LL;
  else
    v211 = v24;
  v212 = *((_QWORD *)v3 + 45);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v111 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    WdLogEvent5_WdAssertion(v111);
  }
  v26 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL),
          0x232053u,
          &v211,
          0x10u,
          0LL,
          0,
          v203,
          v205);
  if ( v26 < 0 )
  {
LABEL_81:
    v99 = WdLogNewEntry5_WdError(v25);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v100 = WdLogNewEntry5_WdAssertion(v96, v95, v97, v98);
      WdLogEvent5_WdAssertion(v100);
    }
    *(_QWORD *)(v99 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v99);
    *((_DWORD *)v3 + 14) = v26;
LABEL_86:
    if ( !v24 )
      return v3;
LABEL_89:
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 8));
    return v3;
  }
  if ( !v24[5] )
  {
    v116 = WdLogNewEntry5_WdError(v25);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v104 = WdLogNewEntry5_WdAssertion(v113, v112, v114, v115);
      WdLogEvent5_WdAssertion(v104);
    }
    *(_QWORD *)(v116 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v116);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_89;
  }
  v31 = v24 + 3;
  if ( (_QWORD *)*v31 == v31 )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v31 - 8LL);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((_DWORD *)NextTarget + 18)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v24, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v33 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v33 = -1;
  *((_DWORD *)v3 + 124) = v33;
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8));
  v37 = *(_QWORD *)v10;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 40LL) >= *(_QWORD *)(*(_QWORD *)v9 + 40LL) )
  {
    if ( !*((_QWORD *)v3 + 1) )
    {
      v123 = WdLogNewEntry5_WdAssertion(v37, v34, v35, v36);
      WdLogEvent5_WdAssertion(v123);
    }
    v38 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL), 1, 0x20019u, &Handle);
    v20 = v38;
    if ( v38 < 0 )
    {
      v88 = WdLogNewEntry5_WdError(v39);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v93 = WdLogNewEntry5_WdAssertion(v125, v124, v126, v127);
        WdLogEvent5_WdAssertion(v93);
      }
      v92 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v88 + 32) = v20;
      goto LABEL_79;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v10 + 72LL));
    v24 = *(_QWORD **)v10;
    v228 = *(_DWORD *)L"st";
    v229 = aTargetpriority[18];
    v213.Buffer = (wchar_t *)v227;
    v227[0] = *(_OWORD *)L"TargetPriorityList";
    v223 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)&v213.Length = 2490404;
    v227[1] = *(_OWORD *)L"iorityList";
    v221 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v222 = 0LL;
    v224 = 0LL;
    v225 = 0LL;
    v226 = 3;
    v40 = VIDPN_MGR::_ReadTargetPriorityList(v39, Handle, &v213, (__int64)&v221);
    v45 = v40;
    if ( v40 >= 0 )
    {
      v128 = v225;
      if ( !v225 )
      {
        v129 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
        WdLogEvent5_WdAssertion(v129);
      }
      v130 = v128 >> 2;
      v131 = 0;
      if ( v130 )
      {
        v132 = v224;
        v133 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v24,
                         *(_DWORD *)(v132 + 4 * v133));
          v139 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 27) == -1 )
            {
              *((_DWORD *)TargetById + 27) = v131;
              v142 = WdLogNewEntry5_WdTrace(v136, v135, v137, v138);
              *(_QWORD *)(v142 + 24) = v133;
              v42 = *((unsigned int *)v139 + 6);
              *(_QWORD *)(v142 + 32) = v42;
            }
            else
            {
              v141 = WdLogNewEntry5_WdError(v136);
              *(_QWORD *)(v141 + 24) = *((unsigned int *)v139 + 6);
              WdLogEvent5_WdError(v141);
            }
          }
          else
          {
            v140 = WdLogNewEntry5_WdWarning(v136, v135, v137, v138);
            *(_QWORD *)(v140 + 24) = *(unsigned int *)(v132 + 4 * v133);
            *(_QWORD *)(v140 + 32) = v133;
            WdLogEvent5_WdWarning(v140);
          }
          v133 = ++v131;
        }
        while ( v131 < v130 );
        v3 = v208;
      }
      v143 = v24 + 3;
      if ( (_QWORD *)*v143 != v143 )
      {
        for ( i = (unsigned int *)(*v143 - 8LL);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v24,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[27] == -1 )
          {
            v145 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
            *(_QWORD *)(v145 + 24) = i[6];
            WdLogEvent5_WdWarning(v145);
          }
        }
      }
    }
    else if ( v40 != -1073741275 )
    {
      v150 = WdLogNewEntry5_WdError(v42);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v101 = WdLogNewEntry5_WdAssertion(v147, v146, v148, v149);
        WdLogEvent5_WdAssertion(v101);
      }
      *(_QWORD *)(v150 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v150 + 32) = v45;
      WdLogEvent5_WdError(v150);
      v102 = Handle;
      *((_DWORD *)v3 + 14) = v45;
      ZwClose(v102);
      v103 = &v221;
LABEL_85:
      DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(v103);
      goto LABEL_86;
    }
    DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v221);
    v214.Buffer = (wchar_t *)v230;
    v230[0] = *(_OWORD *)L"TargetForcePriorityList";
    *(_DWORD *)&v214.Length = 3145774;
    v215 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v230[1] = *(_OWORD *)L"rcePriorityList";
    v217 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v230[2] = *(_OWORD *)L"ityList";
    v218 = 0LL;
    v219 = 0LL;
    v216 = 0LL;
    v220 = 3;
    v47 = VIDPN_MGR::_ReadTargetPriorityList(v46, Handle, &v214, (__int64)&v215);
    v52 = v47;
    if ( v47 >= 0 )
    {
      v151 = v219;
      if ( !v219 )
      {
        v152 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        WdLogEvent5_WdAssertion(v152);
      }
      v153 = v151 >> 2;
      v154 = 0;
      if ( v153 )
      {
        v155 = v218;
        v156 = 0LL;
        do
        {
          v157 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, *(_DWORD *)(v155 + 4 * v156));
          v162 = v157;
          if ( v157 )
          {
            if ( *((_DWORD *)v157 + 28) == -1 )
            {
              *((_DWORD *)v157 + 28) = v154;
              v165 = WdLogNewEntry5_WdTrace(v159, v158, v160, v161);
              *(_QWORD *)(v165 + 24) = v156;
              *(_QWORD *)(v165 + 32) = *((unsigned int *)v162 + 6);
            }
            else
            {
              v164 = WdLogNewEntry5_WdError(v159);
              *(_QWORD *)(v164 + 24) = *((unsigned int *)v162 + 6);
              WdLogEvent5_WdError(v164);
            }
          }
          else
          {
            v163 = WdLogNewEntry5_WdWarning(v159, v158, v160, v161);
            *(_QWORD *)(v163 + 24) = *(unsigned int *)(v155 + 4 * v156);
            *(_QWORD *)(v163 + 32) = v156;
            WdLogEvent5_WdWarning(v163);
          }
          v156 = ++v154;
        }
        while ( v154 < v153 );
        v3 = v208;
      }
LABEL_43:
      DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v215);
      ZwClose(Handle);
      v206 = -1;
      if ( !*((_QWORD *)v3 + 1) )
      {
        v173 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
        WdLogEvent5_WdAssertion(v173);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL),
                  L"DefaultSimulatedTarget",
                  &v206,
                  4LL) < 0
        || (v174 = v206, v206 == -1) )
      {
        v65 = WdLogNewEntry5_WdTrace(v58, v57, v59, v60);
        if ( !*((_QWORD *)v3 + 1) )
        {
          v191 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
          WdLogEvent5_WdAssertion(v191);
        }
        *(_QWORD *)(v65 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, v206) )
      {
        v183 = WdLogNewEntry5_WdTrace(v176, v175, v177, v178);
        *(_QWORD *)(v183 + 24) = v174;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v184 = WdLogNewEntry5_WdAssertion(v180, v179, v181, v182);
          WdLogEvent5_WdAssertion(v184);
        }
        *(_QWORD *)(v183 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        *((_DWORD *)v3 + 123) = v174;
      }
      else
      {
        v189 = WdLogNewEntry5_WdError(v176);
        *(_QWORD *)(v189 + 24) = v174;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v190 = WdLogNewEntry5_WdAssertion(v186, v185, v187, v188);
          WdLogEvent5_WdAssertion(v190);
        }
        *(_QWORD *)(v189 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        WdLogEvent5_WdError(v189);
      }
      if ( v24 )
        ReferenceCounted::Release((ReferenceCounted *)(v24 + 8));
      LODWORD(v20) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v20 >= 0 )
      {
        v66 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
        if ( v66 )
          v68 = DMMVIDPN::DMMVIDPN(v66, v3, v67);
        else
          v68 = 0LL;
        v69 = (char *)v3 + 72;
        auto_rc<DMMVIDPN>::reset((__int64 *)v3 + 9, (__int64)v68);
        v13 = *((_QWORD *)v3 + 9);
        if ( v13 )
        {
          if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 72))(v13 + 72) )
          {
            v192 = WdLogNewEntry5_WdDmmEvent(v71);
            *(_QWORD *)(v192 + 24) = *(_QWORD *)v69;
            *(_QWORD *)(v192 + 32) = *(int *)(*(_QWORD *)v69 + 80LL);
            WdLogEvent5_WdDmmEvent(v192);
            *((_DWORD *)v3 + 14) = *(_DWORD *)(*(_QWORD *)v69 + 80LL);
            return v3;
          }
          if ( !*((_QWORD *)v3 + 1) )
          {
            v193 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
            WdLogEvent5_WdAssertion(v193);
          }
          v74 = *((_QWORD *)v3 + 1);
          v75 = (_QWORD *)((char *)v3 + 472);
          if ( v74 && VIDPN_MGR::_MonitorEventHandler && v3 != (VIDPN_MGR *)-472LL )
          {
            *v75 = 0LL;
            v76 = *(struct _FAST_MUTEX **)(v74 + 96);
            if ( !v76 )
            {
              v194 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v194 + 24) = *(_QWORD *)(v74 + 16);
              WdLogEvent5_WdError(v194);
              inserted = -1073741811;
LABEL_146:
              v199 = WdLogNewEntry5_WdError(v71);
              if ( !*((_QWORD *)v3 + 1) )
              {
                v200 = WdLogNewEntry5_WdAssertion(v196, v195, v197, v198);
                WdLogEvent5_WdAssertion(v200);
              }
              *(_QWORD *)(v199 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
              WdLogEvent5_WdError(v199);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v76,
                         v70,
                         v72,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
          }
          else
          {
            inserted = -1073741811;
          }
          if ( inserted >= 0 )
          {
            if ( !*v75 )
            {
              v201 = WdLogNewEntry5_WdAssertion(v71, v70, v72, v73);
              WdLogEvent5_WdAssertion(v201);
            }
            v78 = (DXGDIAGNOSTICS *)operator new[](0x18uLL, 0x4E506456u, PagedPool);
            if ( v78 )
              v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v78, 0x8000u, v79);
            *((_QWORD *)v3 + 63) = v2;
            *((_DWORD *)v3 + 16) = 2;
            return v3;
          }
          goto LABEL_146;
        }
LABEL_73:
        v85 = WdLogNewEntry5_WdLowResource(v13);
        WdLogEvent5_WdLowResource(v85);
        *((_DWORD *)v3 + 14) = -1073741801;
        return v3;
      }
LABEL_75:
      v88 = WdLogNewEntry5_WdError(v19);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v91 = WdLogNewEntry5_WdAssertion(v87, v86, v89, v90);
        WdLogEvent5_WdAssertion(v91);
      }
      v92 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
LABEL_79:
      *(_QWORD *)(v88 + 24) = v92;
      WdLogEvent5_WdError(v88);
      *((_DWORD *)v3 + 14) = v20;
      return v3;
    }
    if ( v47 == -1073741275 )
      goto LABEL_43;
    v170 = WdLogNewEntry5_WdError(v49);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v171 = WdLogNewEntry5_WdAssertion(v167, v166, v168, v169);
      WdLogEvent5_WdAssertion(v171);
    }
    *(_QWORD *)(v170 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *(_QWORD *)(v170 + 32) = v52;
    WdLogEvent5_WdError(v170);
    v172 = Handle;
    *((_DWORD *)v3 + 14) = v52;
    ZwClose(v172);
    v103 = &v215;
    goto LABEL_85;
  }
  v117 = (_QWORD *)WdLogNewEntry5_WdError(v37);
  v117[3] = *(_QWORD *)(*(_QWORD *)v10 + 40LL);
  v120 = *(_QWORD *)v9;
  v121 = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
  v117[4] = v121;
  if ( !*((_QWORD *)v3 + 1) )
  {
    v122 = WdLogNewEntry5_WdAssertion(v120, v121, v118, v119);
    WdLogEvent5_WdAssertion(v122);
  }
  v117[5] = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  WdLogEvent5_WdError(v117);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
