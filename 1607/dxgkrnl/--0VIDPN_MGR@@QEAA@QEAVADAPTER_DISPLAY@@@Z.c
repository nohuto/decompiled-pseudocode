/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00F6228 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C000FAF8 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000FB40 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000FBB4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000FBE0 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000FED0 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C007DCFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C00D91F0 (DpiOpenPnpRegistryKey.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C00F3480 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00F3DE4 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00F43B8 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00F45A4 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00F46BC (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C00F4920 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C00F6188 (--0Lockable@@QEAA@XZ.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00F9B34 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  void **v5; // rcx
  char *v6; // r12
  char *v7; // r15
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  __int64 v10; // rcx
  DMMVIDEOPRESENTTARGETSET *v11; // rax
  DMMVIDEOPRESENTTARGETSET *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r14
  DMMVIDPN *v42; // rax
  unsigned __int8 v43; // r8
  DMMVIDPN *v44; // rax
  char *v45; // rbx
  int (__high *v46)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  __int64 v47; // rcx
  void *v48; // r8
  __int64 v49; // rbx
  _QWORD *v50; // r14
  struct _FAST_MUTEX *v51; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v53; // rax
  enum _POOL_TYPE v54; // r8d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rax
  HANDLE v71; // rcx
  void ***v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r14
  _QWORD *v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // r15
  __int64 v86; // rax
  unsigned __int64 v87; // r15
  unsigned int v88; // r12d
  __int64 v89; // rdi
  __int64 v90; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  struct DMMVIDEOPRESENTTARGET *v96; // r13
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // r14
  unsigned int *i; // r14
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r14
  unsigned __int64 v105; // r15
  __int64 v106; // rax
  unsigned __int64 v107; // r15
  unsigned int v108; // r12d
  __int64 v109; // rdi
  __int64 v110; // r14
  struct DMMVIDEOPRESENTTARGET *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  struct DMMVIDEOPRESENTTARGET *v116; // r13
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r14
  __int64 v122; // rax
  HANDLE v123; // rcx
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // r15
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r15
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // r14
  __int64 v142; // rax
  __int64 v143; // rax
  unsigned int v144; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v146; // [rsp+50h] [rbp-B0h]
  _QWORD *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+60h] [rbp-A0h]
  _QWORD *v149; // [rsp+68h] [rbp-98h] BYREF
  __int64 v150; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v151; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v152; // [rsp+88h] [rbp-78h] BYREF
  void **v153; // [rsp+98h] [rbp-68h] BYREF
  __int128 v154; // [rsp+A0h] [rbp-60h]
  void **v155; // [rsp+B0h] [rbp-50h]
  __int64 v156; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v157; // [rsp+C0h] [rbp-40h]
  int v158; // [rsp+C8h] [rbp-38h]
  void **v159; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v160; // [rsp+D8h] [rbp-28h]
  void **v161; // [rsp+E8h] [rbp-18h]
  __int64 v162; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v163; // [rsp+F8h] [rbp-8h]
  int v164; // [rsp+100h] [rbp+0h]
  _OWORD v165[2]; // [rsp+108h] [rbp+8h] BYREF
  int v166; // [rsp+128h] [rbp+28h]
  wchar_t v167; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v168[3]; // [rsp+130h] [rbp+30h] BYREF

  v146 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<ADAPTER_DISPLAY>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v5 = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v6 = (char *)v3 + 88;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v7 = (char *)v3 + 96;
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
  *((_QWORD *)v3 + 28) = &Queue<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 60) = 0;
  *((_QWORD *)v3 + 29) = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 33) = 0LL;
  *((_QWORD *)v3 + 32) = (char *)v3 + 248;
  *((_QWORD *)v3 + 31) = (char *)v3 + 248;
  *((_DWORD *)v3 + 68) = 2;
  *((_QWORD *)v3 + 35) = 5LL;
  *((_QWORD *)v3 + 36) = &Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::`vftable';
  *((_QWORD *)v3 + 37) = &DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST>::`vftable';
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
  *((_BYTE *)v3 + 464) = 0;
  *((_QWORD *)v3 + 59) = 0LL;
  *((_DWORD *)v3 + 120) = 0;
  *((_DWORD *)v3 + 123) = -1;
  *((_DWORD *)v3 + 124) = -1;
  *((_QWORD *)v3 + 63) = 0LL;
  if ( !a2 )
  {
    v56 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN>::`vftable');
    WdLogEvent5_WdAssertion(v56);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v58);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v57 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v57 + 24) = v3;
    *(_QWORD *)(v57 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v57);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v59 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v59 + 24) = v3;
    WdLogEvent5_WdError(v59);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v8 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, PagedPool);
  if ( v8 )
    v9 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v8, v3);
  else
    v9 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 11, (__int64)v9);
  if ( !*(_QWORD *)v6 )
    goto LABEL_73;
  v11 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x70uLL, 0x4E506456u, PagedPool);
  v12 = v11 ? DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v11, v3) : 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 12, (__int64)v12);
  if ( !*(_QWORD *)v7 )
    goto LABEL_73;
  LODWORD(v14) = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3);
  if ( (int)v14 < 0 )
    goto LABEL_75;
  LODWORD(v14) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3);
  if ( (int)v14 < 0 )
    goto LABEL_75;
  LODWORD(v14) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3);
  if ( (int)v14 < 0 )
    goto LABEL_75;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v6 + 72LL), 1u);
  v15 = *(_QWORD **)v6;
  v148 = 0LL;
  if ( v15 == (_QWORD *)-112LL )
    InputBuffer = 0LL;
  else
    InputBuffer = v15;
  v148 = *((_QWORD *)v3 + 44);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v66);
  }
  v17 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v17 < 0 )
    goto LABEL_81;
  if ( !v15[5] )
  {
    v75 = WdLogNewEntry5_WdError(v16);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v76 = WdLogNewEntry5_WdAssertion(v74);
      WdLogEvent5_WdAssertion(v76);
    }
    *(_QWORD *)(v75 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v75);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_89;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v15 = *(_QWORD **)v7;
  v150 = 0LL;
  if ( v15 == (_QWORD *)-112LL )
    v149 = 0LL;
  else
    v149 = v15;
  v150 = *((_QWORD *)v3 + 45);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v77 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v77);
  }
  v17 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
          0x232053u,
          &v149,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v17 < 0 )
  {
LABEL_81:
    v68 = WdLogNewEntry5_WdError(v16);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v69 = WdLogNewEntry5_WdAssertion(v67);
      WdLogEvent5_WdAssertion(v69);
    }
    *(_QWORD *)(v68 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v68);
    *((_DWORD *)v3 + 14) = v17;
LABEL_86:
    if ( !v15 )
      return v3;
LABEL_89:
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
    return v3;
  }
  if ( !v15[5] )
  {
    v79 = WdLogNewEntry5_WdError(v16);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v78);
      WdLogEvent5_WdAssertion(v73);
    }
    *(_QWORD *)(v79 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v79);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_89;
  }
  v19 = v15 + 3;
  if ( (_QWORD *)*v19 == v19 )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v19 - 8LL);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((_DWORD *)NextTarget + 18)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v15, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v21 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v21 = -1;
  *((_DWORD *)v3 + 124) = v21;
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
  v22 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 40LL) >= *(_QWORD *)(*(_QWORD *)v6 + 40LL) )
  {
    if ( !*((_QWORD *)v3 + 1) )
    {
      v83 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v83);
    }
    v23 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL), 1, 0x20019u, &Handle);
    v14 = v23;
    if ( v23 < 0 )
    {
      v62 = WdLogNewEntry5_WdError(v24);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v65 = WdLogNewEntry5_WdAssertion(v84);
        WdLogEvent5_WdAssertion(v65);
      }
      v64 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v62 + 32) = v14;
      goto LABEL_79;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
    v15 = *(_QWORD **)v7;
    v166 = *(_DWORD *)L"st";
    v167 = aTargetpriority[18];
    v151.Buffer = (wchar_t *)v165;
    v165[0] = *(_OWORD *)L"TargetPriorityList";
    v155 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)&v151.Length = 2490404;
    v165[1] = *(_OWORD *)L"iorityList";
    v153 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
    v154 = 0LL;
    v156 = 0LL;
    v157 = 0LL;
    v158 = 3;
    v25 = VIDPN_MGR::_ReadTargetPriorityList(v24, Handle, &v151, (__int64)&v153);
    v30 = v25;
    if ( v25 >= 0 )
    {
      v85 = v157;
      if ( !v157 )
      {
        v86 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v86);
      }
      v87 = v85 >> 2;
      v88 = 0;
      if ( v87 )
      {
        v89 = v156;
        v90 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v15,
                         *(_DWORD *)(v89 + 4 * v90));
          v96 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 27) == -1 )
            {
              *((_DWORD *)TargetById + 27) = v88;
              v99 = WdLogNewEntry5_WdTrace(v93, v92, v94, v95);
              *(_QWORD *)(v99 + 24) = v90;
              v27 = *((unsigned int *)v96 + 6);
              *(_QWORD *)(v99 + 32) = v27;
            }
            else
            {
              v98 = WdLogNewEntry5_WdError(v93);
              *(_QWORD *)(v98 + 24) = *((unsigned int *)v96 + 6);
              WdLogEvent5_WdError(v98);
            }
          }
          else
          {
            v97 = WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
            *(_QWORD *)(v97 + 24) = *(unsigned int *)(v89 + 4 * v90);
            *(_QWORD *)(v97 + 32) = v90;
            WdLogEvent5_WdWarning(v97);
          }
          v90 = ++v88;
        }
        while ( v88 < v87 );
        v3 = v146;
      }
      v100 = v15 + 3;
      if ( (_QWORD *)*v100 != v100 )
      {
        for ( i = (unsigned int *)(*v100 - 8LL);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v15,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[27] == -1 )
          {
            v102 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
            *(_QWORD *)(v102 + 24) = i[6];
            WdLogEvent5_WdWarning(v102);
          }
        }
      }
    }
    else if ( v25 != -1073741275 )
    {
      v104 = WdLogNewEntry5_WdError(v27);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v70 = WdLogNewEntry5_WdAssertion(v103);
        WdLogEvent5_WdAssertion(v70);
      }
      *(_QWORD *)(v104 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v104 + 32) = v30;
      WdLogEvent5_WdError(v104);
      v71 = Handle;
      *((_DWORD *)v3 + 14) = v30;
      ZwClose(v71);
      v72 = &v153;
LABEL_85:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v72);
      goto LABEL_86;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v153);
    v152.Buffer = (wchar_t *)v168;
    v168[0] = *(_OWORD *)L"TargetForcePriorityList";
    *(_DWORD *)&v152.Length = 3145774;
    v159 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
    v168[1] = *(_OWORD *)L"rcePriorityList";
    v161 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v168[2] = *(_OWORD *)L"ityList";
    v162 = 0LL;
    v163 = 0LL;
    v160 = 0LL;
    v164 = 3;
    v32 = VIDPN_MGR::_ReadTargetPriorityList(v31, Handle, &v152, (__int64)&v159);
    v34 = v32;
    if ( v32 >= 0 )
    {
      v105 = v163;
      if ( !v163 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v106);
      }
      v107 = v105 >> 2;
      v108 = 0;
      if ( v107 )
      {
        v109 = v162;
        v110 = 0LL;
        do
        {
          v111 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, *(_DWORD *)(v109 + 4 * v110));
          v116 = v111;
          if ( v111 )
          {
            if ( *((_DWORD *)v111 + 28) == -1 )
            {
              *((_DWORD *)v111 + 28) = v108;
              v119 = WdLogNewEntry5_WdTrace(v113, v112, v114, v115);
              *(_QWORD *)(v119 + 24) = v110;
              *(_QWORD *)(v119 + 32) = *((unsigned int *)v116 + 6);
            }
            else
            {
              v118 = WdLogNewEntry5_WdError(v113);
              *(_QWORD *)(v118 + 24) = *((unsigned int *)v116 + 6);
              WdLogEvent5_WdError(v118);
            }
          }
          else
          {
            v117 = WdLogNewEntry5_WdWarning(v113, v112, v114, v115);
            *(_QWORD *)(v117 + 24) = *(unsigned int *)(v109 + 4 * v110);
            *(_QWORD *)(v117 + 32) = v110;
            WdLogEvent5_WdWarning(v117);
          }
          v110 = ++v108;
        }
        while ( v108 < v107 );
        v3 = v146;
      }
LABEL_43:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v159);
      ZwClose(Handle);
      v144 = -1;
      if ( !*((_QWORD *)v3 + 1) )
      {
        v124 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v124);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
                  L"DefaultSimulatedTarget",
                  (char *)&v144,
                  4u,
                  1u) < 0
        || (v125 = v144, v144 == -1) )
      {
        v41 = WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
        if ( !*((_QWORD *)v3 + 1) )
        {
          v136 = WdLogNewEntry5_WdAssertion(v40);
          WdLogEvent5_WdAssertion(v136);
        }
        *(_QWORD *)(v41 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v144) )
      {
        v131 = WdLogNewEntry5_WdTrace(v127, v126, v128, v129);
        *(_QWORD *)(v131 + 24) = v125;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v132 = WdLogNewEntry5_WdAssertion(v130);
          WdLogEvent5_WdAssertion(v132);
        }
        *(_QWORD *)(v131 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        *((_DWORD *)v3 + 123) = v125;
      }
      else
      {
        v134 = WdLogNewEntry5_WdError(v127);
        *(_QWORD *)(v134 + 24) = v125;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v135 = WdLogNewEntry5_WdAssertion(v133);
          WdLogEvent5_WdAssertion(v135);
        }
        *(_QWORD *)(v134 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        WdLogEvent5_WdError(v134);
      }
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 8));
      LODWORD(v14) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v14 >= 0 )
      {
        v42 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
        if ( v42 )
          v44 = DMMVIDPN::DMMVIDPN(v42, v3, v43);
        else
          v44 = 0LL;
        v45 = (char *)v3 + 72;
        auto_rc<DMMVIDPN>::reset((__int64 *)v3 + 9, (__int64)v44);
        v10 = *((_QWORD *)v3 + 9);
        if ( v10 )
        {
          if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v10 + 72))(v10 + 72) )
          {
            v137 = WdLogNewEntry5_WdDmmEvent(v47);
            *(_QWORD *)(v137 + 24) = *(_QWORD *)v45;
            *(_QWORD *)(v137 + 32) = *(int *)(*(_QWORD *)v45 + 80LL);
            WdLogEvent5_WdDmmEvent(v137);
            *((_DWORD *)v3 + 14) = *(_DWORD *)(*(_QWORD *)v45 + 80LL);
            return v3;
          }
          if ( !*((_QWORD *)v3 + 1) )
          {
            v138 = WdLogNewEntry5_WdAssertion(v47);
            WdLogEvent5_WdAssertion(v138);
          }
          v49 = *((_QWORD *)v3 + 1);
          v50 = (_QWORD *)((char *)v3 + 472);
          if ( v49 && VIDPN_MGR::_MonitorEventHandler && v3 != (VIDPN_MGR *)-472LL )
          {
            *v50 = 0LL;
            v51 = *(struct _FAST_MUTEX **)(v49 + 96);
            if ( !v51 )
            {
              v139 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v139 + 24) = *(_QWORD *)(v49 + 16);
              WdLogEvent5_WdError(v139);
              inserted = -1073741811;
LABEL_146:
              v141 = WdLogNewEntry5_WdError(v47);
              if ( !*((_QWORD *)v3 + 1) )
              {
                v142 = WdLogNewEntry5_WdAssertion(v140);
                WdLogEvent5_WdAssertion(v142);
              }
              *(_QWORD *)(v141 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
              WdLogEvent5_WdError(v141);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v51,
                         v46,
                         v48,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
          }
          else
          {
            inserted = -1073741811;
          }
          if ( inserted >= 0 )
          {
            if ( !*v50 )
            {
              v143 = WdLogNewEntry5_WdAssertion(v47);
              WdLogEvent5_WdAssertion(v143);
            }
            v53 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4E506456u, PagedPool);
            if ( v53 )
              v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v53, 0x8000u, v54);
            *((_QWORD *)v3 + 63) = v2;
            *((_DWORD *)v3 + 16) = 2;
            return v3;
          }
          goto LABEL_146;
        }
LABEL_73:
        v60 = WdLogNewEntry5_WdLowResource(v10);
        WdLogEvent5_WdLowResource(v60);
        *((_DWORD *)v3 + 14) = -1073741801;
        return v3;
      }
LABEL_75:
      v62 = WdLogNewEntry5_WdError(v13);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v63 = WdLogNewEntry5_WdAssertion(v61);
        WdLogEvent5_WdAssertion(v63);
      }
      v64 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
LABEL_79:
      *(_QWORD *)(v62 + 24) = v64;
      WdLogEvent5_WdError(v62);
      *((_DWORD *)v3 + 14) = v14;
      return v3;
    }
    if ( v32 == -1073741275 )
      goto LABEL_43;
    v121 = WdLogNewEntry5_WdError(v33);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v122 = WdLogNewEntry5_WdAssertion(v120);
      WdLogEvent5_WdAssertion(v122);
    }
    *(_QWORD *)(v121 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *(_QWORD *)(v121 + 32) = v34;
    WdLogEvent5_WdError(v121);
    v123 = Handle;
    *((_DWORD *)v3 + 14) = v34;
    ZwClose(v123);
    v72 = &v159;
    goto LABEL_85;
  }
  v80 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  v80[3] = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
  v81 = *(_QWORD *)v6;
  v80[4] = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v82 = WdLogNewEntry5_WdAssertion(v81);
    WdLogEvent5_WdAssertion(v82);
  }
  v80[5] = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  WdLogEvent5_WdError(v80);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
