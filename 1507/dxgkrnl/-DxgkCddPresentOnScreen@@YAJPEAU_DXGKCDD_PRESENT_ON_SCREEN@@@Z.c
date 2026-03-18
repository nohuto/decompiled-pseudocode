/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00014C8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001530 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006570 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00065A8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000E1CC (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C000E2E4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019470 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00CF9D8 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00D0E8C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00D16FC (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0127320 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0132564 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  DXGADAPTER *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  DXGSESSIONDATA *SessionData; // rbx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  SESSION_VIEW *v27; // r12
  __int64 v28; // rax
  struct DISPLAY_SOURCE *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  ADAPTER_DISPLAY *v34; // rdi
  __int64 v35; // r15
  __int64 v36; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v38; // rcx
  struct DXGDEVICE *v39; // r13
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  D3DKMT_HANDLE v49; // ebx
  D3DKMT_HANDLE v50; // esi
  RECT v51; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v53; // rcx
  __int64 v54; // r9
  bool v55; // zf
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r9
  unsigned int v59; // r15d
  ADAPTER_DISPLAY *v60; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v61; // r13d
  __int64 v62; // rcx
  struct tagRECT *v63; // rdi
  struct tagRECT *v64; // rbx
  int CddShadowPitch; // eax
  struct tagRECT *v66; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v67; // r8d
  DXGCONTEXT *v68; // rdi
  int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  struct tagRECT *v75; // rbx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rcx
  _QWORD *v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  SIZE_T v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v103; // rcx
  __int64 hAllocation; // rcx
  void *pData; // rax
  int v106; // eax
  int v107; // eax
  __int64 v108; // rcx
  _QWORD *v109; // rax
  UINT v110; // eax
  int v111; // edx
  int v112; // ecx
  RECT v113; // xmm1
  _QWORD *v114; // rax
  int v115; // eax
  __int64 v116; // rcx
  LONG v117; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v118; // ecx
  int v119; // r15d
  int v120; // r13d
  __int64 v121; // rsi
  struct tagRECT *v122; // rbx
  int v123; // edi
  int v124; // eax
  __int64 v125; // rcx
  struct DXGCONTEXT *v126; // rbx
  __int64 v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r9
  __int64 v130; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v131[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct tagRECT *v132; // [rsp+60h] [rbp-A8h]
  unsigned int v133[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v134; // [rsp+70h] [rbp-98h] BYREF
  D3DKMT_HANDLE v135; // [rsp+78h] [rbp-90h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v136; // [rsp+7Ch] [rbp-8Ch]
  struct tagRECT v137; // [rsp+80h] [rbp-88h] BYREF
  int v138; // [rsp+90h] [rbp-78h]
  ADAPTER_DISPLAY *v139; // [rsp+98h] [rbp-70h]
  struct DXGDEVICE *v140; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-60h]
  int v142; // [rsp+B0h] [rbp-58h]
  struct _D3DKMT_UNLOCK v143; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v144; // [rsp+C8h] [rbp-40h]
  struct DXGDEVICE *v145; // [rsp+D0h] [rbp-38h]
  DXGADAPTER *v146; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v147; // [rsp+E0h] [rbp-28h] BYREF
  char v148; // [rsp+E8h] [rbp-20h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+F0h] [rbp-18h]
  __int64 v150; // [rsp+F8h] [rbp-10h] BYREF
  char v151; // [rsp+100h] [rbp-8h]
  struct tagRECT v152; // [rsp+108h] [rbp+0h] BYREF
  struct _LUID v153; // [rsp+118h] [rbp+10h] BYREF
  __int64 v154; // [rsp+120h] [rbp+18h] BYREF
  ADAPTER_RENDER **v155; // [rsp+130h] [rbp+28h]
  struct _LUID v156; // [rsp+138h] [rbp+30h] BYREF
  SESSION_VIEW *SessionViewFromSource; // [rsp+140h] [rbp+38h]
  struct _D3DKMT_LOCK v158; // [rsp+148h] [rbp+40h] BYREF
  _DXGKARG_PRESENT_DISPLAYONLY v159; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v160[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v161[80]; // [rsp+1C8h] [rbp+C0h] BYREF
  PERESOURCE *v162[10]; // [rsp+218h] [rbp+110h] BYREF
  _QWORD v163[8]; // [rsp+268h] [rbp+160h] BYREF
  _D3DKMT_PRESENT v164; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v165[64]; // [rsp+888h] [rbp+780h] BYREF

  BYTE1(v131[0]) = 0;
  v5 = 0;
  if ( !a1 )
  {
    LODWORD(v25) = -1073741811;
    v78 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v78 + 24) = -1073741811LL;
LABEL_62:
    WdLogEvent5_WdError(v78);
    return (unsigned int)v25;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    v84 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
    LODWORD(v25) = -1073741811;
    *(_QWORD *)(v84 + 24) = *(int *)a1;
    *(_QWORD *)(v84 + 32) = -1073741811LL;
    WdLogEvent5_WdEvent(v84);
    return (unsigned int)v25;
  }
  PairingAdapters = DxgkpGetPairingAdapters(*((struct DXGADAPTER **)a1 + 1), *((unsigned int *)a1 + 4), 0LL, &v146);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v85[3] = *((_QWORD *)a1 + 1);
    v85[4] = *((unsigned int *)a1 + 4);
    v85[5] = v11;
    WdLogEvent5_WdError(v85);
    return (unsigned int)v11;
  }
  v12 = v146;
  if ( !v146 )
  {
    v86 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v86 + 24) = 998LL;
    WdLogEvent5_WdAssertion(v86);
  }
  v156 = *(struct _LUID *)((char *)v12 + 252);
  DXGADAPTER::ReleaseReference(v12);
  Global = DXGGLOBAL::GetGlobal(v14, v13, v15, v16);
  SessionData = DXGGLOBAL::GetSessionData(Global, v18, v19, v20);
  if ( !SessionData )
  {
    v79 = WdLogNewEntry5_WdError(v21);
    LODWORD(v25) = -1073741811;
    *(_QWORD *)(v79 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v81, v80, v82, v83);
    v78 = v79;
    *(_QWORD *)(v79 + 32) = -1073741811LL;
    goto LABEL_62;
  }
  BYTE2(v131[0]) = 0;
  v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)((char *)v131 + 2), 0);
  v25 = v23;
  if ( v23 < 0 )
  {
    v87 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v87 + 24) = v25;
LABEL_67:
    WdLogEvent5_WdError(v87);
    goto LABEL_58;
  }
  SessionViewFromSource = (SESSION_VIEW *)DXGSESSIONDATA::GetSessionViewFromSource(
                                            SessionData,
                                            &v156,
                                            *((_DWORD *)a1 + 4));
  v27 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v89 = *((unsigned int *)a1 + 4);
    v90 = v88;
    v88[3] = v89;
    v88[4] = v12;
    LODWORD(v25) = -1073741811;
    v88[5] = (unsigned int)PsGetCurrentProcessSessionId(v89, v91, v92, v93);
    v87 = (__int64)v90;
    v90[6] = -1073741811LL;
    goto LABEL_67;
  }
  v28 = *((unsigned int *)a1 + 19);
  if ( (unsigned int)v28 > 4 )
  {
    v94 = 16 * v28;
    if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
      v94 = -1LL;
    v132 = (struct tagRECT *)operator new[](v94, 0x4B677844u, PagedPool);
    if ( !v132 )
    {
      v96 = WdLogNewEntry5_WdLowResource(v95);
      LODWORD(v25) = -1073741801;
      *(_QWORD *)(v96 + 24) = *((unsigned int *)a1 + 19);
      *(_QWORD *)(v96 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v96);
      goto LABEL_58;
    }
  }
  else
  {
    v132 = (struct tagRECT *)v165;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v27);
  v29 = PrimaryDisplaySource;
  if ( !PrimaryDisplaySource )
    goto LABEL_54;
  do
  {
    v140 = 0LL;
    v134 = 0LL;
    v135 = 0;
    v133[0] = 0;
    LOBYTE(v131[0]) = 0;
    memset(&v158, 0, sizeof(v158));
    *(_QWORD *)&v143.hDevice = 0LL;
    v143.phAllocations = 0LL;
    memset(&v164, 0, sizeof(v164));
    v34 = (ADAPTER_DISPLAY *)*((_QWORD *)v29 + 1);
    v139 = v34;
    v35 = *((_QWORD *)v34 + 2);
    v144 = v35;
    v146 = (DXGADAPTER *)v35;
    if ( !v35 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
      *(_QWORD *)(v97 + 24) = 1088LL;
      WdLogEvent5_WdAssertion(v97);
    }
    if ( !*(_QWORD *)(v35 + 1976) )
    {
      v77 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
      *(_QWORD *)(v77 + 24) = 1089LL;
      WdLogEvent5_WdAssertion(v77);
    }
    v36 = *((unsigned int *)v29 + 4);
    v153 = *(struct _LUID *)(v35 + 252);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v153, &v140, &v134);
    v25 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v98 = WdLogNewEntry5_WdError(v38);
      *(_QWORD *)(v98 + 24) = v35;
      *(_QWORD *)(v98 + 32) = v25;
      WdLogEvent5_WdError(v98);
      goto LABEL_52;
    }
    v39 = v140;
    v145 = v140;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v154, v140);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v163,
      &v134,
      1u);
    v155 = (ADAPTER_RENDER **)((char *)v39 + 16);
    v40 = *((_QWORD *)v39 + 2);
    v148 = 0;
    v147 = *(_QWORD *)(v40 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, (__int64)v39, 1, v41, 0);
    if ( v163[0] )
    {
      v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v161);
      v25 = v43;
      if ( v43 < 0 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v44);
        v100[3] = v39;
        v100[4] = v25;
      }
      else
      {
        ADAPTER_DISPLAY::GetCddAllocationHandles((DXGADAPTER **)v34, (unsigned int)v36, &v135, v133);
        v49 = v135;
        if ( !v135 || (v50 = v133[0]) == 0 )
        {
          LODWORD(v25) = -1071775482;
          v114 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, v45, v47, v48);
          v114[3] = v35;
          v114[4] = v36;
          v114[5] = -1071775482LL;
          goto LABEL_111;
        }
        v158.hDevice = *((_DWORD *)v39 + 71);
        v158.hAllocation = v133[0];
        v143.hDevice = *((_DWORD *)v39 + 71);
        v143.phAllocations = &v158.hAllocation;
        v143.NumAllocations = 1;
        ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v34, v36);
        v51 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v34, v36);
        v137 = v51;
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v34, v36, 1) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v137.right;
          v137.right = v137.bottom;
          v137.bottom = right;
          v51 = v137;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v34, v36, 0);
        v55 = *(_DWORD *)a1 == 1;
        v131[1] = CurrentOrientation;
        if ( v55 )
        {
          if ( *(_QWORD *)(v35 + 1984) || !ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v34, v36) )
          {
            v56 = DXGDEVICE::Lock((PERESOURCE *)v39, &v158, (struct COREDEVICEACCESS *)v161, v54);
            v25 = v56;
            if ( v56 < 0 )
            {
              v100 = (_QWORD *)WdLogNewEntry5_WdError(v57);
              v100[3] = v35;
              v100[4] = v36;
              hAllocation = v158.hAllocation;
              v100[6] = v25;
LABEL_114:
              v100[5] = hAllocation;
              goto LABEL_115;
            }
            v138 = 0;
            LOBYTE(v131[0]) = 1;
            if ( *((_DWORD *)a1 + 19) )
            {
              v59 = v138;
              v60 = v34;
              v61 = v131[1];
              do
              {
                v62 = v59;
                v63 = &v132[v62];
                v64 = (struct tagRECT *)(v62 * 16 + *((_QWORD *)a1 + 10));
                CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v60, v36);
                DxgkpBlitA8R8R8G8(
                  *((unsigned __int8 **)a1 + 3),
                  *((_DWORD *)a1 + 8),
                  *((_DWORD *)a1 + 9),
                  *((_DWORD *)a1 + 10),
                  v61,
                  (unsigned __int8 *)v158.pData,
                  CddShadowPitch,
                  &v137,
                  v64,
                  v63);
                ++v59;
              }
              while ( v59 < *((_DWORD *)a1 + 19) );
              v51 = v137;
              v35 = v144;
              v34 = v60;
              v39 = v145;
              v49 = v135;
            }
            if ( *(_QWORD *)(v35 + 1984) )
            {
              DXGDEVICE::Unlock(v39, &v143, 0LL, v58);
              LOBYTE(v131[0]) = 0;
            }
            v66 = v132;
            v50 = v133[0];
          }
          else
          {
            v66 = v132;
            for ( i = 0; i < *((_DWORD *)a1 + 19); v66[v103] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v103) )
              v103 = i++;
          }
          v67 = v131[1];
LABEL_34:
          if ( !*(_QWORD *)(v35 + 1984) )
          {
            memset(&v159, 0, sizeof(v159));
            pData = v158.pData;
            v159.VidPnSourceId = v36;
            if ( !LOBYTE(v131[0]) )
              pData = (void *)*((_QWORD *)a1 + 3);
            v159.pSource = pData;
            v159.BytesPerPixel = 4;
            v159.Pitch = ADAPTER_DISPLAY::GetCddShadowPitch(v34, v36);
            v159.Flags.Value = 0;
            v106 = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v34, v36, 1);
            v159.NumMoves = 0;
            v159.pMoves = 0LL;
            v75 = v132;
            v159.pDirtyRect = v132;
            v159.Flags.Value ^= (*(_BYTE *)&v159.Flags.0 ^ (v106 != 1)) & 1;
            v159.NumDirtyRects = *((_DWORD *)a1 + 19);
            v107 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v34, &v159);
            v25 = v107;
            if ( v107 >= 0 )
              goto LABEL_42;
            v109 = (_QWORD *)WdLogNewEntry5_WdError(v108);
            v109[3] = v35;
            v109[5] = 1342LL;
            goto LABEL_87;
          }
          v68 = v134;
          v164.hWindow = 0LL;
          v164.BroadcastContextCount = 0;
          v164.pSrcSubRects = v66;
          v164.hDevice = *((_DWORD *)v134 + 6);
          v164.SubRectCnt = *((_DWORD *)a1 + 19);
          v69 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 )
          {
            v164.Flags.Value |= 1u;
            if ( v69 == 1 )
            {
              v164.hSource = v50;
              v164.hDestination = v49;
            }
            else
            {
              v164.hSource = v49;
              if ( v69 != 2 )
              {
                v111 = *((_DWORD *)a1 + 9);
                v112 = *((_DWORD *)a1 + 8);
                v164.hDestination = v49;
                DxgkpConvertRects(
                  v112,
                  v111,
                  v67,
                  &v137,
                  2u,
                  (struct tagRECT *)((char *)a1 + 44),
                  (struct tagRECT *)((char *)a1 + 44));
                v113 = *(RECT *)((char *)a1 + 60);
                v164.SrcRect = *(RECT *)((char *)a1 + 44);
                v164.DstRect = v113;
                goto LABEL_40;
              }
              v164.hDestination = v50;
            }
            v164.SrcRect = v51;
          }
          else
          {
            v164.Flags.Value |= 2u;
            v110 = *((_DWORD *)a1 + 5);
            v164.hSource = 0;
            v164.Color = v110;
            v164.hDestination = v49;
          }
          v164.DstRect = v51;
LABEL_40:
          v70 = DXGCONTEXT::PresentFromCdd(
                  v68,
                  &v164,
                  v36,
                  (struct COREDEVICEACCESS *)v161,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v147,
                  &v134);
          v25 = v70;
          if ( v70 >= 0 )
          {
            v34 = v139;
            v75 = v132;
LABEL_42:
            if ( *(_DWORD *)a1 != 2 )
            {
LABEL_43:
              BYTE1(v131[0]) = 1;
              goto LABEL_44;
            }
            v115 = DXGDEVICE::Lock((PERESOURCE *)v39, &v158, (struct COREDEVICEACCESS *)v161, v74);
            v25 = v115;
            v141 = v115;
            if ( v115 >= 0 )
            {
              v117 = *((_DWORD *)a1 + 8);
              v152.left = 0;
              v152.top = 0;
              v152.right = v117;
              LOBYTE(v131[0]) = 1;
              v152.bottom = *((_DWORD *)a1 + 9);
              if ( v131[1] != D3DKMDT_VPPR_IDENTITY )
              {
                if ( v131[1] == D3DKMDT_VPPR_ROTATE90 )
                {
                  v136 = D3DKMDT_VPPR_ROTATE270;
                  goto LABEL_106;
                }
                if ( v131[1] != D3DKMDT_VPPR_ROTATE180 )
                {
                  if ( v131[1] == D3DKMDT_VPPR_ROTATE270 )
                    v136 = D3DKMDT_VPPR_ROTATE90;
                  goto LABEL_106;
                }
              }
              v136 = v131[1];
LABEL_106:
              v118 = D3DKMDT_VPPR_UNINITIALIZED;
              v131[1] = D3DKMDT_VPPR_UNINITIALIZED;
              if ( *((_DWORD *)a1 + 19) )
              {
                v138 = v137.bottom - v137.top;
                v119 = v137.bottom - v137.top;
                v142 = v137.right - v137.left;
                v120 = v137.right - v137.left;
                v121 = 4LL * v137.left;
                do
                {
                  v122 = &v75[v118];
                  v123 = ADAPTER_DISPLAY::GetCddShadowPitch(v34, v36);
                  v124 = ADAPTER_DISPLAY::GetCddShadowPitch(v139, v36);
                  DxgkpBlitA8R8R8G8(
                    (unsigned __int8 *)v158.pData + v121 + (unsigned int)(v137.top * v124),
                    v120,
                    v119,
                    v123,
                    v136,
                    *((unsigned __int8 **)a1 + 3),
                    *((_DWORD *)a1 + 10),
                    &v152,
                    v122,
                    v122);
                  v34 = v139;
                  v118 = v131[1] + 1;
                  v75 = v132;
                  v131[1] = v118;
                }
                while ( (unsigned int)v118 < *((_DWORD *)a1 + 19) );
                LODWORD(v25) = v141;
                v35 = v144;
                v39 = v145;
              }
              goto LABEL_43;
            }
            v109 = (_QWORD *)WdLogNewEntry5_WdError(v116);
            v109[3] = v35;
            v109[4] = v36;
            v109[5] = v158.hAllocation;
            v109[6] = v25;
            goto LABEL_89;
          }
          if ( v70 == -1071775482 )
          {
            v114 = (_QWORD *)WdLogNewEntry5_WdEvent(v72, v71, v73, v74);
            v114[3] = v134;
            v114[4] = -1071775482LL;
            v114[5] = 1428LL;
LABEL_111:
            WdLogEvent5_WdEvent(v114);
LABEL_44:
            if ( !LOBYTE(v131[0]) )
              goto LABEL_45;
            DXGDEVICE::Unlock(v39, &v143, 0LL, v74);
            if ( (int)v25 >= 0 )
              goto LABEL_45;
            v100 = (_QWORD *)WdLogNewEntry5_WdError(v125);
            hAllocation = (int)v25;
            v100[3] = v35;
            v100[4] = v36;
            goto LABEL_114;
          }
          if ( v70 == -1071774910 )
            goto LABEL_44;
          v109 = (_QWORD *)WdLogNewEntry5_WdError(v72);
          v109[3] = v134;
          v109[5] = 1435LL;
LABEL_87:
          v109[4] = v25;
LABEL_89:
          WdLogEvent5_WdError(v109);
          goto LABEL_44;
        }
        if ( *(_QWORD *)(v35 + 1984) )
        {
          DxgkpConvertRects(
            *((_DWORD *)a1 + 8),
            *((_DWORD *)a1 + 9),
            CurrentOrientation,
            &v137,
            *((_DWORD *)a1 + 19),
            *((struct tagRECT **)a1 + 10),
            v132);
          v66 = v132;
          goto LABEL_34;
        }
        LODWORD(v25) = -1073741637;
        v100 = (_QWORD *)WdLogNewEntry5_WdError(v53);
        v100[3] = v35;
        v100[4] = *(int *)a1;
        v100[5] = -1073741637LL;
      }
LABEL_115:
      WdLogEvent5_WdError(v100);
      goto LABEL_45;
    }
    LODWORD(v25) = -1073741801;
    v99 = WdLogNewEntry5_WdLowResource(v42);
    *(_QWORD *)(v99 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v99);
LABEL_45:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
    if ( v148 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v163);
    ExReleaseResourceLite(*(PERESOURCE *)(v154 + 80));
    KeLeaveCriticalRegion();
    if ( v134 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v126 = v134;
        v127 = *((_QWORD *)v134 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v160,
          (struct DXGDEVICE *)v127);
        v128 = *((_QWORD *)v126 + 2);
        v151 = 0;
        v150 = *(_QWORD *)(*(_QWORD *)(v128 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v150);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v162, v127, 2, v129, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v162);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 16) + 16LL) + 160LL) != 4 )
          DXGDEVICE::DestroyContext((PERESOURCE *)v127, v134, v162, v130);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v162);
        if ( v151 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v150);
        if ( v160[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v160);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v127 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v127 + 16), (struct DXGDEVICE *)v127);
      }
      v39 = v140;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*v155, v140);
LABEL_52:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
    v29 = PrimaryDisplaySource;
  }
  while ( PrimaryDisplaySource );
  v5 = BYTE1(v131[0]);
LABEL_54:
  if ( v132 != (struct tagRECT *)v165 )
    operator delete(v132);
  if ( v5 )
    LODWORD(v25) = 0;
LABEL_58:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)((char *)v131 + 2));
  return (unsigned int)v25;
}
