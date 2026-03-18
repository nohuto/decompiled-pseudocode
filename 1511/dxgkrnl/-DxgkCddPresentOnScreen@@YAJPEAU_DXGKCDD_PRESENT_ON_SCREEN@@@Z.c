/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00075BC (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00075F8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0007878 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000AC74 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000ACDC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C001AC48 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006DBF8 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C009B854 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00B11E0 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C012D5A8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0136DA0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  DXGADAPTER *v9; // rdi
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  DXGSESSIONDATA *SessionData; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  SESSION_VIEW *v18; // r12
  __int64 v19; // rax
  struct DISPLAY_SOURCE *v20; // r12
  __int64 v21; // rcx
  ADAPTER_DISPLAY *v22; // rdi
  __int64 v23; // r15
  __int64 v24; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v26; // rcx
  struct DXGDEVICE *v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  D3DKMT_HANDLE v40; // ebx
  D3DKMT_HANDLE v41; // esi
  RECT v42; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v44; // rcx
  __int64 v45; // r9
  bool v46; // zf
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r9
  unsigned int v50; // r15d
  ADAPTER_DISPLAY *v51; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v52; // r13d
  __int64 v53; // rcx
  struct tagRECT *v54; // rdi
  struct tagRECT *v55; // rbx
  int CddShadowPitch; // eax
  struct tagRECT *v57; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v58; // r8d
  DXGCONTEXT *v59; // rdi
  int v60; // eax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  struct tagRECT *v66; // rbx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rcx
  _QWORD *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  SIZE_T v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v98; // rcx
  _QWORD *v99; // rax
  __int64 hAllocation; // rcx
  void *pData; // rax
  int v102; // eax
  int v103; // eax
  __int64 v104; // rcx
  _QWORD *v105; // rax
  UINT v106; // eax
  int v107; // edx
  int v108; // ecx
  RECT v109; // xmm1
  int v110; // eax
  __int64 v111; // rcx
  LONG v112; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v113; // ecx
  int v114; // r15d
  int v115; // r13d
  __int64 v116; // rsi
  struct tagRECT *v117; // rbx
  int v118; // edi
  int v119; // eax
  __int64 v120; // rcx
  struct DXGCONTEXT *v121; // rbx
  __int64 v122; // rdi
  __int64 v123; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v124[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct tagRECT *v125; // [rsp+60h] [rbp-A8h]
  struct DXGCONTEXT *v126; // [rsp+68h] [rbp-A0h] BYREF
  D3DKMT_HANDLE v127; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v128; // [rsp+78h] [rbp-90h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v129; // [rsp+88h] [rbp-80h]
  int v130; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v131; // [rsp+90h] [rbp-78h] BYREF
  ADAPTER_DISPLAY *v132; // [rsp+98h] [rbp-70h]
  struct DXGDEVICE *v133; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v134; // [rsp+A8h] [rbp-60h]
  struct _D3DKMT_UNLOCK v135; // [rsp+B0h] [rbp-58h] BYREF
  int v136; // [rsp+C0h] [rbp-48h]
  DXGADAPTER *v137; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v138; // [rsp+D0h] [rbp-38h]
  struct DXGDEVICE *v139; // [rsp+D8h] [rbp-30h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E0h] [rbp-28h]
  struct tagRECT v141; // [rsp+E8h] [rbp-20h] BYREF
  struct _LUID v142; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v143[16]; // [rsp+100h] [rbp-8h] BYREF
  ADAPTER_RENDER **v144; // [rsp+110h] [rbp+8h]
  struct _LUID v145; // [rsp+118h] [rbp+10h] BYREF
  SESSION_VIEW *SessionViewFromSource; // [rsp+120h] [rbp+18h]
  struct _D3DKMT_LOCK v147; // [rsp+130h] [rbp+28h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v148; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v149[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v150[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v151[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v152[80]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v153[80]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v154[8]; // [rsp+278h] [rbp+170h] BYREF
  _D3DKMT_PRESENT v155; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v156[64]; // [rsp+898h] [rbp+790h] BYREF

  BYTE2(v124[0]) = 0;
  v5 = 0;
  if ( !a1 )
  {
    LODWORD(v16) = -1073741811;
    v70 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v70 + 24) = -1073741811LL;
LABEL_64:
    WdLogEvent5_WdError(v70);
    return (unsigned int)v16;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    v76 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v76 + 24) = *(int *)a1;
    *(_QWORD *)(v76 + 32) = -1073741811LL;
    WdLogEvent5_WdEvent(v76);
    return (unsigned int)v16;
  }
  PairingAdapters = DxgkpGetPairingAdapters(*((struct DXGADAPTER **)a1 + 1), *((_DWORD *)a1 + 4), 0LL, &v137);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v77[3] = *((_QWORD *)a1 + 1);
    v77[4] = *((unsigned int *)a1 + 4);
    v77[5] = v8;
    WdLogEvent5_WdError(v77);
    return (unsigned int)v8;
  }
  v9 = v137;
  if ( !v137 )
  {
    v78 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v78 + 24) = 998LL;
    WdLogEvent5_WdAssertion(v78);
  }
  v145 = *(struct _LUID *)((char *)v9 + 252);
  DXGADAPTER::ReleaseReference(v9);
  Global = DXGGLOBAL::GetGlobal(v10);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v71 = WdLogNewEntry5_WdError(v12);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v71 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v73, v72, v74, v75);
    v70 = v71;
    *(_QWORD *)(v71 + 32) = -1073741811LL;
    goto LABEL_64;
  }
  BYTE1(v124[0]) = 0;
  v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)((char *)v124 + 1), 0);
  v16 = v14;
  if ( v14 < 0 )
  {
    v79 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v79 + 24) = v16;
LABEL_69:
    WdLogEvent5_WdError(v79);
    goto LABEL_58;
  }
  SessionViewFromSource = (SESSION_VIEW *)DXGSESSIONDATA::GetSessionViewFromSource(
                                            SessionData,
                                            &v145,
                                            *((_DWORD *)a1 + 4));
  v18 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v80 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v81 = *((unsigned int *)a1 + 4);
    v82 = v80;
    v80[3] = v81;
    v80[4] = v9;
    LODWORD(v16) = -1073741811;
    v80[5] = (unsigned int)PsGetCurrentProcessSessionId(v81, v83, v84, v85);
    v79 = (__int64)v82;
    v82[6] = -1073741811LL;
    goto LABEL_69;
  }
  v19 = *((unsigned int *)a1 + 19);
  if ( (unsigned int)v19 > 4 )
  {
    v86 = 16 * v19;
    if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
      v86 = -1LL;
    v125 = (struct tagRECT *)operator new[](v86, 0x4B677844u, PagedPool);
    if ( !v125 )
    {
      v91 = WdLogNewEntry5_WdLowResource(v88, v87, v89, v90);
      LODWORD(v16) = -1073741801;
      *(_QWORD *)(v91 + 24) = *((unsigned int *)a1 + 19);
      *(_QWORD *)(v91 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v91);
      goto LABEL_58;
    }
  }
  else
  {
    v125 = (struct tagRECT *)v156;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v18);
  v20 = PrimaryDisplaySource;
  if ( !PrimaryDisplaySource )
    goto LABEL_54;
  do
  {
    v133 = 0LL;
    v126 = 0LL;
    v131 = 0;
    v127 = 0;
    LOBYTE(v124[0]) = 0;
    memset(&v147, 0, sizeof(v147));
    *(_QWORD *)&v135.hDevice = 0LL;
    v135.phAllocations = 0LL;
    memset(&v155, 0, sizeof(v155));
    v22 = (ADAPTER_DISPLAY *)*((_QWORD *)v20 + 1);
    v132 = v22;
    v23 = *((_QWORD *)v22 + 2);
    v138 = v23;
    v137 = (DXGADAPTER *)v23;
    if ( !v23 )
    {
      v92 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v92 + 24) = 1088LL;
      WdLogEvent5_WdAssertion(v92);
    }
    if ( !*(_QWORD *)(v23 + 1984) )
    {
      v68 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v68 + 24) = 1089LL;
      WdLogEvent5_WdAssertion(v68);
    }
    v24 = *((unsigned int *)v20 + 4);
    v142 = *(struct _LUID *)(v23 + 252);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(&v142, &v133, &v126);
    v16 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v93 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v93 + 24) = v23;
      *(_QWORD *)(v93 + 32) = v16;
      WdLogEvent5_WdError(v93);
      goto LABEL_52;
    }
    v27 = v133;
    v139 = v133;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v151, v133);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v154,
      &v126,
      1u);
    v28 = *((_QWORD *)v27 + 2);
    v144 = (ADAPTER_RENDER **)((char *)v27 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v143,
      *(struct DXGADAPTER **)(v28 + 16),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v152, (__int64)v27, 1, v29, 0);
    if ( v154[0] )
    {
      v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v152);
      v16 = v34;
      if ( v34 >= 0 )
      {
        ADAPTER_DISPLAY::GetCddAllocationHandles((DXGADAPTER **)v22, v24, &v131, &v127);
        v40 = v131;
        if ( !v131 || (v41 = v127) == 0 )
        {
          LODWORD(v16) = -1071775482;
          v69 = (_QWORD *)WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
          v69[3] = v23;
          v69[4] = v24;
          v69[5] = -1071775482LL;
LABEL_61:
          WdLogEvent5_WdEvent(v69);
          goto LABEL_44;
        }
        v147.hDevice = *((_DWORD *)v27 + 71);
        v147.hAllocation = v127;
        v135.hDevice = *((_DWORD *)v27 + 71);
        v135.phAllocations = &v147.hAllocation;
        v135.NumAllocations = 1;
        ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v22, v24);
        v42 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v22, v24);
        v128 = v42;
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v22, v24, 1) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v128.right;
          v128.right = v128.bottom;
          v128.bottom = right;
          v42 = v128;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v22, v24, 0);
        v46 = *(_DWORD *)a1 == 1;
        v124[1] = CurrentOrientation;
        if ( v46 )
        {
          if ( *(_QWORD *)(v23 + 1992) || !ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v22, v24) )
          {
            v47 = DXGDEVICE::Lock(v27, &v147, (struct COREDEVICEACCESS *)v152, v45);
            v16 = v47;
            if ( v47 < 0 )
            {
              v99 = (_QWORD *)WdLogNewEntry5_WdError(v48);
              v99[3] = v23;
              v99[4] = v24;
              hAllocation = v147.hAllocation;
              v99[6] = v16;
LABEL_114:
              v99[5] = hAllocation;
              goto LABEL_115;
            }
            v130 = 0;
            LOBYTE(v124[0]) = 1;
            if ( *((_DWORD *)a1 + 19) )
            {
              v50 = v130;
              v51 = v22;
              v52 = v124[1];
              do
              {
                v53 = v50;
                v54 = &v125[v53];
                v55 = (struct tagRECT *)(v53 * 16 + *((_QWORD *)a1 + 10));
                CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v51, v24);
                DxgkpBlitA8R8R8G8(
                  *((unsigned __int8 **)a1 + 3),
                  *((_DWORD *)a1 + 8),
                  *((_DWORD *)a1 + 9),
                  *((_DWORD *)a1 + 10),
                  v52,
                  (unsigned __int8 *)v147.pData,
                  CddShadowPitch,
                  &v128,
                  v55,
                  v54);
                ++v50;
              }
              while ( v50 < *((_DWORD *)a1 + 19) );
              v42 = v128;
              v23 = v138;
              v22 = v51;
              v27 = v139;
              v40 = v131;
            }
            if ( *(_QWORD *)(v23 + 1992) )
            {
              DXGDEVICE::Unlock(v27, &v135, 0LL, v49);
              LOBYTE(v124[0]) = 0;
            }
            v57 = v125;
            v41 = v127;
          }
          else
          {
            v57 = v125;
            for ( i = 0; i < *((_DWORD *)a1 + 19); v57[v98] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v98) )
              v98 = i++;
          }
          v58 = v124[1];
        }
        else
        {
          if ( !*(_QWORD *)(v23 + 1992) )
          {
            LODWORD(v16) = -1073741637;
            v99 = (_QWORD *)WdLogNewEntry5_WdError(v44);
            v99[3] = v23;
            v99[4] = *(int *)a1;
            v99[5] = -1073741637LL;
LABEL_115:
            WdLogEvent5_WdError(v99);
            goto LABEL_45;
          }
          DxgkpConvertRects(
            *((_DWORD *)a1 + 8),
            *((_DWORD *)a1 + 9),
            CurrentOrientation,
            &v128,
            *((_DWORD *)a1 + 19),
            *((struct tagRECT **)a1 + 10),
            v125);
          v57 = v125;
        }
        if ( !*(_QWORD *)(v23 + 1992) )
        {
          memset(&v148, 0, sizeof(v148));
          pData = v147.pData;
          v148.VidPnSourceId = v24;
          if ( !LOBYTE(v124[0]) )
            pData = (void *)*((_QWORD *)a1 + 3);
          v148.pSource = pData;
          v148.BytesPerPixel = 4;
          v148.Pitch = ADAPTER_DISPLAY::GetCddShadowPitch(v22, v24);
          v148.Flags.Value = 0;
          v102 = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v22, v24, 1);
          v148.NumMoves = 0;
          v148.pMoves = 0LL;
          v66 = v125;
          v148.pDirtyRect = v125;
          v148.Flags.Value ^= (*(_BYTE *)&v148.Flags.0 ^ (v102 != 1)) & 1;
          v148.NumDirtyRects = *((_DWORD *)a1 + 19);
          v103 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v22, &v148);
          v16 = v103;
          if ( v103 >= 0 )
            goto LABEL_42;
          v105 = (_QWORD *)WdLogNewEntry5_WdError(v104);
          v105[3] = v23;
          v105[5] = 1342LL;
          goto LABEL_89;
        }
        v59 = v126;
        v155.hWindow = 0LL;
        v155.BroadcastContextCount = 0;
        v155.pSrcSubRects = v57;
        v155.hDevice = *((_DWORD *)v126 + 6);
        v155.SubRectCnt = *((_DWORD *)a1 + 19);
        v60 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 )
        {
          v155.Flags.Value |= 1u;
          if ( v60 == 1 )
          {
            v155.hSource = v41;
            v155.hDestination = v40;
          }
          else
          {
            v155.hSource = v40;
            if ( v60 != 2 )
            {
              v107 = *((_DWORD *)a1 + 9);
              v108 = *((_DWORD *)a1 + 8);
              v155.hDestination = v40;
              DxgkpConvertRects(
                v108,
                v107,
                v58,
                &v128,
                2u,
                (struct tagRECT *)((char *)a1 + 44),
                (struct tagRECT *)((char *)a1 + 44));
              v109 = *(RECT *)((char *)a1 + 60);
              v155.SrcRect = *(RECT *)((char *)a1 + 44);
              v155.DstRect = v109;
              goto LABEL_40;
            }
            v155.hDestination = v41;
          }
          v155.SrcRect = v42;
        }
        else
        {
          v155.Flags.Value |= 2u;
          v106 = *((_DWORD *)a1 + 5);
          v155.hSource = 0;
          v155.Color = v106;
          v155.hDestination = v40;
        }
        v155.DstRect = v42;
LABEL_40:
        v61 = DXGCONTEXT::PresentFromCdd(
                v59,
                &v155,
                v24,
                (struct COREDEVICEACCESS *)v152,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v143,
                &v126);
        v16 = v61;
        if ( v61 >= 0 )
        {
          v22 = v132;
          v66 = v125;
LABEL_42:
          if ( *(_DWORD *)a1 != 2 )
          {
LABEL_43:
            BYTE2(v124[0]) = 1;
            goto LABEL_44;
          }
          v110 = DXGDEVICE::Lock(v27, &v147, (struct COREDEVICEACCESS *)v152, v65);
          v16 = v110;
          v134 = v110;
          if ( v110 >= 0 )
          {
            v112 = *((_DWORD *)a1 + 8);
            v141.left = 0;
            v141.top = 0;
            v141.right = v112;
            LOBYTE(v124[0]) = 1;
            v141.bottom = *((_DWORD *)a1 + 9);
            if ( v124[1] != D3DKMDT_VPPR_IDENTITY )
            {
              if ( v124[1] == D3DKMDT_VPPR_ROTATE90 )
              {
                v129 = D3DKMDT_VPPR_ROTATE270;
                goto LABEL_108;
              }
              if ( v124[1] != D3DKMDT_VPPR_ROTATE180 )
              {
                if ( v124[1] == D3DKMDT_VPPR_ROTATE270 )
                  v129 = D3DKMDT_VPPR_ROTATE90;
                goto LABEL_108;
              }
            }
            v129 = v124[1];
LABEL_108:
            v113 = D3DKMDT_VPPR_UNINITIALIZED;
            v124[1] = D3DKMDT_VPPR_UNINITIALIZED;
            if ( *((_DWORD *)a1 + 19) )
            {
              v130 = v128.bottom - v128.top;
              v114 = v128.bottom - v128.top;
              v136 = v128.right - v128.left;
              v115 = v128.right - v128.left;
              v116 = 4LL * v128.left;
              do
              {
                v117 = &v66[v113];
                v118 = ADAPTER_DISPLAY::GetCddShadowPitch(v22, v24);
                v119 = ADAPTER_DISPLAY::GetCddShadowPitch(v132, v24);
                DxgkpBlitA8R8R8G8(
                  (unsigned __int8 *)v147.pData + v116 + (unsigned int)(v128.top * v119),
                  v115,
                  v114,
                  v118,
                  v129,
                  *((unsigned __int8 **)a1 + 3),
                  *((_DWORD *)a1 + 10),
                  &v141,
                  v117,
                  v117);
                v22 = v132;
                v113 = v124[1] + 1;
                v66 = v125;
                v124[1] = v113;
              }
              while ( (unsigned int)v113 < *((_DWORD *)a1 + 19) );
              LODWORD(v16) = v134;
              v23 = v138;
              v27 = v139;
            }
            goto LABEL_43;
          }
          v105 = (_QWORD *)WdLogNewEntry5_WdError(v111);
          v105[3] = v23;
          v105[4] = v24;
          v105[5] = v147.hAllocation;
          v105[6] = v16;
          goto LABEL_91;
        }
        if ( v61 == -1071775482 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdEvent(v63, v62, v64, v65);
          v69[3] = v126;
          v69[4] = -1071775482LL;
          v69[5] = 1428LL;
          goto LABEL_61;
        }
        if ( v61 == -1071774910 )
        {
LABEL_44:
          if ( !LOBYTE(v124[0]) )
            goto LABEL_45;
          DXGDEVICE::Unlock(v27, &v135, 0LL, v65);
          if ( (int)v16 >= 0 )
            goto LABEL_45;
          v99 = (_QWORD *)WdLogNewEntry5_WdError(v120);
          hAllocation = (int)v16;
          v99[3] = v23;
          v99[4] = v24;
          goto LABEL_114;
        }
        v105 = (_QWORD *)WdLogNewEntry5_WdError(v63);
        v105[3] = v126;
        v105[5] = 1435LL;
LABEL_89:
        v105[4] = v16;
LABEL_91:
        WdLogEvent5_WdError(v105);
        goto LABEL_44;
      }
      v95 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v95 + 24) = v27;
      *(_QWORD *)(v95 + 32) = v16;
      WdLogEvent5_WdError(v95);
    }
    else
    {
      LODWORD(v16) = -1073741801;
      v94 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
      *(_QWORD *)(v94 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v94);
    }
LABEL_45:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v152);
    if ( v143[8] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v143);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v151);
    if ( v126 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v126 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v121 = v126;
        v122 = *((_QWORD *)v126 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v150,
          (struct DXGDEVICE *)v122);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v149,
          *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v121 + 2) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v153, v122, 2, v123, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v153);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v122 + 16) + 16LL) + 160LL) != 4 )
          DXGDEVICE::DestroyContext((PERESOURCE *)v122, v126, (struct COREDEVICEACCESS *)v153);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
        if ( v149[8] )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v149);
        if ( v150[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v150);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v122 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v122 + 16), (struct DXGDEVICE *)v122);
      }
      v27 = v133;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*v144, v133);
LABEL_52:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
    v20 = PrimaryDisplaySource;
  }
  while ( PrimaryDisplaySource );
  v5 = BYTE2(v124[0]);
LABEL_54:
  if ( v125 != (struct tagRECT *)v156 )
    operator delete(v125);
  if ( v5 )
    LODWORD(v16) = 0;
LABEL_58:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)((char *)v124 + 1));
  return (unsigned int)v16;
}
