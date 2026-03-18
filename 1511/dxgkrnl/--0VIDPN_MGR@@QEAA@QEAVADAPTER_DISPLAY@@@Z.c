/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00DD684
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00DBD08 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ @ 0x1C0009F10 (--1-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_HWCAPS@@@DMM@@UEAA@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000E140 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E16C (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E484 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000E734 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C005D7E0 (DpiOpenPnpRegistryKey.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C00DBDAC (--0Lockable@@QEAA@XZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C00DCAC8 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00DD084 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00DD270 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C00DD388 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C00DD5EC (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C00DEFB8 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00E4030 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  void **v5; // rcx
  char *v6; // r12
  char *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DMMVIDEOPRESENTSOURCESET *v12; // rax
  DMMVIDEOPRESENTSOURCESET *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  DMMVIDEOPRESENTTARGETSET *v19; // rax
  DMMVIDEOPRESENTTARGETSET *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // r13d
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v44; // eax
  __int64 v45; // rcx
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r15
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  unsigned __int64 v62; // r15
  unsigned int v63; // r12d
  __int64 v64; // rdi
  __int64 v65; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  struct DMMVIDEOPRESENTTARGET *v71; // r13
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // r14
  unsigned int *i; // r14
  __int64 v77; // rax
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // r15
  unsigned __int64 v82; // r15
  __int64 v83; // rax
  unsigned __int64 v84; // r15
  unsigned int v85; // r12d
  __int64 v86; // rdi
  __int64 v87; // r14
  struct DMMVIDEOPRESENTTARGET *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  struct DMMVIDEOPRESENTTARGET *v93; // r13
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r14
  __int64 v97; // rax
  HANDLE v98; // rcx
  void ***v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r15
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r14
  __int64 v118; // rax
  HANDLE v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // r15
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r14
  __int64 v125; // rax
  DMMVIDPN *v126; // rax
  unsigned __int8 v127; // r8
  DMMVIDPN *v128; // rax
  char *v129; // rbx
  int (__high *v130)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE); // rdx
  __int64 v131; // rcx
  void *v132; // r8
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rbx
  _QWORD *v136; // r14
  MONITOR_MGR *v137; // rcx
  __int64 v138; // rax
  int inserted; // ebx
  __int64 v140; // rcx
  __int64 v141; // r14
  __int64 v142; // rax
  __int64 v143; // rax
  DXGDIAGNOSTICS *v144; // rax
  enum _POOL_TYPE v145; // r8d
  unsigned __int8 v147; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v148; // [rsp+30h] [rbp-D0h]
  unsigned __int64 *v149; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v150; // [rsp+38h] [rbp-C8h]
  unsigned int v151; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v153; // [rsp+50h] [rbp-B0h]
  _QWORD *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v155; // [rsp+60h] [rbp-A0h]
  _QWORD *v156; // [rsp+68h] [rbp-98h] BYREF
  __int64 v157; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v158; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v159; // [rsp+88h] [rbp-78h] BYREF
  void **v160; // [rsp+98h] [rbp-68h] BYREF
  __int128 v161; // [rsp+A0h] [rbp-60h]
  void **v162; // [rsp+B0h] [rbp-50h]
  __int64 v163; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v164; // [rsp+C0h] [rbp-40h]
  int v165; // [rsp+C8h] [rbp-38h]
  void **v166; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v167; // [rsp+D8h] [rbp-28h]
  void **v168; // [rsp+E8h] [rbp-18h]
  __int64 v169; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v170; // [rsp+F8h] [rbp-8h]
  int v171; // [rsp+100h] [rbp+0h]
  _OWORD v172[2]; // [rsp+108h] [rbp+8h] BYREF
  int v173; // [rsp+128h] [rbp+28h]
  wchar_t v174; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v175[3]; // [rsp+130h] [rbp+30h] BYREF

  v153 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
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
    v8 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN>::`vftable');
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = v3;
    *(_QWORD *)(v9 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v9);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = v3;
    WdLogEvent5_WdError(v11);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v12 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v13 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v12, v3);
  else
    v13 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 11, (__int64)v13);
  if ( !*(_QWORD *)v6
    || ((v19 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x70uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v20 = 0LL)
      : (v20 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v19, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 12, (__int64)v20),
        !*(_QWORD *)v7) )
  {
LABEL_14:
    v18 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    WdLogEvent5_WdLowResource(v18);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v22) = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3);
  if ( (int)v22 < 0
    || (LODWORD(v22) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), (int)v22 < 0)
    || (LODWORD(v22) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), (int)v22 < 0) )
  {
LABEL_20:
    v24 = WdLogNewEntry5_WdError(v21);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    goto LABEL_23;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v6 + 72LL), 1u);
  v27 = *(_QWORD **)v6;
  v155 = 0LL;
  if ( v27 == (_QWORD *)-112LL )
    InputBuffer = 0LL;
  else
    InputBuffer = v27;
  v155 = *((_QWORD *)v3 + 44);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v28);
  }
  v30 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          v147,
          v149);
  if ( v30 < 0 )
    goto LABEL_32;
  if ( !v27[5] )
  {
    v35 = WdLogNewEntry5_WdError(v29);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v36);
    }
    *(_QWORD *)(v35 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v35);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_36;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v27 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v27 = *(_QWORD **)v7;
  v157 = 0LL;
  if ( v27 == (_QWORD *)-112LL )
    v156 = 0LL;
  else
    v156 = v27;
  v157 = *((_QWORD *)v3 + 45);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37);
    WdLogEvent5_WdAssertion(v38);
  }
  v30 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL),
          0x232053u,
          &v156,
          0x10u,
          0LL,
          0,
          v148,
          v150);
  if ( v30 < 0 )
  {
LABEL_32:
    v32 = WdLogNewEntry5_WdError(v29);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v33);
    }
    *(_QWORD *)(v32 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v32);
    *((_DWORD *)v3 + 14) = v30;
LABEL_35:
    if ( !v27 )
      return v3;
LABEL_36:
    ReferenceCounted::Release((ReferenceCounted *)(v27 + 8));
    return v3;
  }
  if ( !v27[5] )
  {
    v40 = WdLogNewEntry5_WdError(v29);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v41);
    }
    *(_QWORD *)(v40 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v40);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_36;
  }
  v42 = v27 + 3;
  if ( (_QWORD *)*v42 == v42 )
    goto LABEL_57;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v42 - 8LL);
  if ( !NextTarget )
    goto LABEL_57;
  do
  {
    if ( IsInternalVideoOutput(*((_DWORD *)NextTarget + 18)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v27, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v44 = *((_DWORD *)NextTarget + 6);
  else
LABEL_57:
    v44 = -1;
  *((_DWORD *)v3 + 124) = v44;
  ReferenceCounted::Release((ReferenceCounted *)(v27 + 8));
  v45 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 40LL) < *(_QWORD *)(*(_QWORD *)v6 + 40LL) )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v46[3] = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
    v47 = *(_QWORD *)v6;
    v46[4] = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v48);
    }
    v46[5] = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v46);
    *((_DWORD *)v3 + 14) = -1071774938;
    return v3;
  }
  if ( !*((_QWORD *)v3 + 1) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45);
    WdLogEvent5_WdAssertion(v49);
  }
  v50 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL), 1, 0x20019u, &Handle);
  v22 = v50;
  if ( v50 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v51);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v52);
      WdLogEvent5_WdAssertion(v53);
    }
    v26 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *(_QWORD *)(v24 + 32) = v22;
LABEL_23:
    *(_QWORD *)(v24 + 24) = v26;
    WdLogEvent5_WdError(v24);
    *((_DWORD *)v3 + 14) = v22;
    return v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v27 = *(_QWORD **)v7;
  v173 = *(_DWORD *)L"st";
  v174 = aTargetpriority[18];
  v158.Buffer = (wchar_t *)v172;
  v172[0] = *(_OWORD *)L"TargetPriorityList";
  v168 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  *(_DWORD *)&v158.Length = 2490404;
  v172[1] = *(_OWORD *)L"iorityList";
  v166 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  v167 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v171 = 3;
  v54 = VIDPN_MGR::_ReadTargetPriorityList(v51, Handle, &v158, (__int64)&v166);
  v59 = v54;
  if ( v54 < 0 )
  {
    if ( v54 != -1073741275 )
    {
      v96 = WdLogNewEntry5_WdError(v56);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v97 = WdLogNewEntry5_WdAssertion(v95);
        WdLogEvent5_WdAssertion(v97);
      }
      *(_QWORD *)(v96 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v96 + 32) = v59;
      WdLogEvent5_WdError(v96);
      v98 = Handle;
      *((_DWORD *)v3 + 14) = v59;
      ZwClose(v98);
      v99 = &v166;
LABEL_96:
      DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(v99);
      goto LABEL_35;
    }
  }
  else
  {
    v60 = v170;
    if ( !v170 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v56);
      WdLogEvent5_WdAssertion(v61);
    }
    v62 = v60 >> 2;
    v63 = 0;
    if ( v62 )
    {
      v64 = v169;
      v65 = 0LL;
      do
      {
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v27,
                       *(_DWORD *)(v64 + 4 * v65));
        v71 = TargetById;
        if ( TargetById )
        {
          if ( *((_DWORD *)TargetById + 27) == -1 )
          {
            *((_DWORD *)TargetById + 27) = v63;
            v74 = WdLogNewEntry5_WdTrace(v68, v67, v69, v70);
            *(_QWORD *)(v74 + 24) = v65;
            v56 = *((unsigned int *)v71 + 6);
            *(_QWORD *)(v74 + 32) = v56;
          }
          else
          {
            v73 = WdLogNewEntry5_WdError(v68);
            *(_QWORD *)(v73 + 24) = *((unsigned int *)v71 + 6);
            WdLogEvent5_WdError(v73);
          }
        }
        else
        {
          v72 = WdLogNewEntry5_WdWarning(v68, v67, v69, v70);
          *(_QWORD *)(v72 + 24) = *(unsigned int *)(v64 + 4 * v65);
          *(_QWORD *)(v72 + 32) = v65;
          WdLogEvent5_WdWarning(v72);
        }
        v65 = ++v63;
      }
      while ( v63 < v62 );
      v3 = v153;
    }
    v75 = v27 + 3;
    if ( (_QWORD *)*v75 != v75 )
    {
      for ( i = (unsigned int *)(*v75 - 8LL);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v27,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( i[27] == -1 )
        {
          v77 = WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
          *(_QWORD *)(v77 + 24) = i[6];
          WdLogEvent5_WdWarning(v77);
        }
      }
    }
  }
  DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v166);
  v159.Buffer = (wchar_t *)v175;
  v175[0] = *(_OWORD *)L"TargetForcePriorityList";
  *(_DWORD *)&v159.Length = 3145774;
  v160 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  v175[1] = *(_OWORD *)L"rcePriorityList";
  v162 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  v175[2] = *(_OWORD *)L"ityList";
  v163 = 0LL;
  v164 = 0LL;
  v161 = 0LL;
  v165 = 3;
  v79 = VIDPN_MGR::_ReadTargetPriorityList(v78, Handle, &v159, (__int64)&v160);
  v81 = v79;
  if ( v79 < 0 )
  {
    if ( v79 == -1073741275 )
      goto LABEL_102;
    v117 = WdLogNewEntry5_WdError(v80);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v118 = WdLogNewEntry5_WdAssertion(v116);
      WdLogEvent5_WdAssertion(v118);
    }
    *(_QWORD *)(v117 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *(_QWORD *)(v117 + 32) = v81;
    WdLogEvent5_WdError(v117);
    v119 = Handle;
    *((_DWORD *)v3 + 14) = v81;
    ZwClose(v119);
    v99 = &v160;
    goto LABEL_96;
  }
  v82 = v164;
  if ( !v164 )
  {
    v83 = WdLogNewEntry5_WdAssertion(v80);
    WdLogEvent5_WdAssertion(v83);
  }
  v84 = v82 >> 2;
  v85 = 0;
  if ( v84 )
  {
    v86 = v163;
    v87 = 0LL;
    do
    {
      v88 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, *(_DWORD *)(v86 + 4 * v87));
      v93 = v88;
      if ( v88 )
      {
        if ( *((_DWORD *)v88 + 28) == -1 )
        {
          *((_DWORD *)v88 + 28) = v85;
          v101 = WdLogNewEntry5_WdTrace(v90, v89, v91, v92);
          *(_QWORD *)(v101 + 24) = v87;
          *(_QWORD *)(v101 + 32) = *((unsigned int *)v93 + 6);
        }
        else
        {
          v100 = WdLogNewEntry5_WdError(v90);
          *(_QWORD *)(v100 + 24) = *((unsigned int *)v93 + 6);
          WdLogEvent5_WdError(v100);
        }
      }
      else
      {
        v94 = WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
        *(_QWORD *)(v94 + 24) = *(unsigned int *)(v86 + 4 * v87);
        *(_QWORD *)(v94 + 32) = v87;
        WdLogEvent5_WdWarning(v94);
      }
      v87 = ++v85;
    }
    while ( v85 < v84 );
    v3 = v153;
  }
LABEL_102:
  DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>::~AutoBuffer<_DMM_COMMITVIDPNREQUEST_HWCAPS>(&v160);
  ZwClose(Handle);
  v151 = -1;
  if ( !*((_QWORD *)v3 + 1) )
  {
    v103 = WdLogNewEntry5_WdAssertion(v102);
    WdLogEvent5_WdAssertion(v103);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 176LL),
              L"DefaultSimulatedTarget",
              (char *)&v151,
              4u,
              1u) < 0
    || (v108 = v151, v151 == -1) )
  {
    v124 = WdLogNewEntry5_WdTrace(v105, v104, v106, v107);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v125 = WdLogNewEntry5_WdAssertion(v123);
      WdLogEvent5_WdAssertion(v125);
    }
    *(_QWORD *)(v124 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  }
  else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, v151) )
  {
    v114 = WdLogNewEntry5_WdTrace(v110, v109, v111, v112);
    *(_QWORD *)(v114 + 24) = v108;
    if ( !*((_QWORD *)v3 + 1) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v113);
      WdLogEvent5_WdAssertion(v115);
    }
    *(_QWORD *)(v114 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *((_DWORD *)v3 + 123) = v108;
  }
  else
  {
    v121 = WdLogNewEntry5_WdError(v110);
    *(_QWORD *)(v121 + 24) = v108;
    if ( !*((_QWORD *)v3 + 1) )
    {
      v122 = WdLogNewEntry5_WdAssertion(v120);
      WdLogEvent5_WdAssertion(v122);
    }
    *(_QWORD *)(v121 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v121);
  }
  if ( v27 )
    ReferenceCounted::Release((ReferenceCounted *)(v27 + 8));
  LODWORD(v22) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
  if ( (int)v22 < 0 )
    goto LABEL_20;
  v126 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v126 )
    v128 = DMMVIDPN::DMMVIDPN(v126, v3, v127);
  else
    v128 = 0LL;
  v129 = (char *)v3 + 72;
  auto_rc<DMMVIDPN>::reset((__int64 *)v3 + 9, (__int64)v128);
  v15 = *((_QWORD *)v3 + 9);
  if ( !v15 )
    goto LABEL_14;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 72))(v15 + 72) )
  {
    v133 = WdLogNewEntry5_WdDmmEvent(v131);
    *(_QWORD *)(v133 + 24) = *(_QWORD *)v129;
    *(_QWORD *)(v133 + 32) = *(int *)(*(_QWORD *)v129 + 80LL);
    WdLogEvent5_WdDmmEvent(v133);
    *((_DWORD *)v3 + 14) = *(_DWORD *)(*(_QWORD *)v129 + 80LL);
    return v3;
  }
  if ( !*((_QWORD *)v3 + 1) )
  {
    v134 = WdLogNewEntry5_WdAssertion(v131);
    WdLogEvent5_WdAssertion(v134);
  }
  v135 = *((_QWORD *)v3 + 1);
  v136 = (_QWORD *)((char *)v3 + 472);
  if ( v135 && &VIDPN_MGR::_MonitorEventHandler && v3 != (VIDPN_MGR *)-472LL )
  {
    *v136 = 0LL;
    v137 = *(MONITOR_MGR **)(v135 + 120);
    if ( !v137 )
    {
      v138 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v138 + 24) = *(_QWORD *)(v135 + 16);
      WdLogEvent5_WdError(v138);
      inserted = -1073741811;
LABEL_139:
      v141 = WdLogNewEntry5_WdError(v131);
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
    inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(v137, v130, v132, (struct HDXGMONITOREVENT__ **)v3 + 59);
  }
  else
  {
    inserted = -1073741811;
  }
  if ( inserted < 0 )
    goto LABEL_139;
  if ( !*v136 )
  {
    v143 = WdLogNewEntry5_WdAssertion(v131);
    WdLogEvent5_WdAssertion(v143);
  }
  v144 = (DXGDIAGNOSTICS *)operator new[](0x18uLL, 0x4E506456u, PagedPool);
  if ( v144 )
    v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v144, 0x8000u, v145);
  *((_QWORD *)v3 + 63) = v2;
  *((_DWORD *)v3 + 16) = 2;
  return v3;
}
