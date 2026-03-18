/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001250 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00012B8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006278 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00062B0 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0006520 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C001ED1C (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0070A70 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C008846C (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096238 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00B0FB0 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0148244 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C015659C (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  char v2; // r15
  int PairingAdapters; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  DXGADAPTER *v6; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  DXGSESSIONDATA *SessionData; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  SESSION_VIEW *v14; // r12
  __int64 v15; // rax
  struct DISPLAY_SOURCE *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  DXGADAPTER **v28; // rsi
  D3DKMT_HANDLE v29; // ebx
  struct tagRECT v30; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v32; // rcx
  bool v33; // zf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v34; // edi
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v38; // r15d
  __int64 v39; // rcx
  struct tagRECT *v40; // rdi
  struct tagRECT *v41; // rbx
  int v42; // eax
  struct tagRECT *v43; // r8
  DXGCONTEXT *v44; // rsi
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  struct tagRECT *v48; // rbx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rbx
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 hAllocation; // rcx
  void *pData; // rax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  UINT v76; // eax
  int v77; // edx
  int v78; // ecx
  RECT v79; // xmm1
  int v80; // eax
  __int64 v81; // rcx
  LONG v82; // eax
  unsigned int v83; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v84; // r15d
  int v85; // r13d
  int v86; // esi
  struct tagRECT *v87; // rbx
  int CddShadowPitch; // edi
  int v89; // eax
  __int64 v90; // rcx
  struct DXGCONTEXT *v91; // rbx
  __int64 v92; // rdi
  __int64 v93; // r9
  char v94; // [rsp+58h] [rbp-B0h]
  char v95; // [rsp+59h] [rbp-AFh]
  _BYTE v96[6]; // [rsp+5Ah] [rbp-AEh] BYREF
  struct tagRECT *v97; // [rsp+60h] [rbp-A8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v98; // [rsp+68h] [rbp-A0h]
  unsigned int v99; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v100; // [rsp+70h] [rbp-98h]
  struct DXGCONTEXT *v101; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v102; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT v103; // [rsp+88h] [rbp-80h] BYREF
  ADAPTER_DISPLAY *v104; // [rsp+98h] [rbp-70h]
  struct DXGDEVICE *v105; // [rsp+A0h] [rbp-68h]
  __int64 v106; // [rsp+A8h] [rbp-60h]
  int v107; // [rsp+B0h] [rbp-58h]
  int v108; // [rsp+B4h] [rbp-54h]
  struct _D3DKMT_UNLOCK v109; // [rsp+B8h] [rbp-50h] BYREF
  DXGADAPTER *v110; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v111; // [rsp+D0h] [rbp-38h]
  struct DXGDEVICE *v112; // [rsp+D8h] [rbp-30h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E0h] [rbp-28h]
  struct tagRECT v114; // [rsp+E8h] [rbp-20h] BYREF
  SESSION_VIEW *SessionViewFromSource; // [rsp+F8h] [rbp-10h]
  __int64 v116; // [rsp+100h] [rbp-8h]
  struct _LUID v117; // [rsp+108h] [rbp+0h] BYREF
  ADAPTER_RENDER **v118; // [rsp+110h] [rbp+8h]
  struct _D3DKMT_LOCK v119; // [rsp+118h] [rbp+10h] BYREF
  _DXGKARG_PRESENT_DISPLAYONLY v120; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v121[2]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v122[24]; // [rsp+198h] [rbp+90h] BYREF
  unsigned __int64 v123; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v124[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v125[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v126[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v127[8]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v128[96]; // [rsp+288h] [rbp+180h] BYREF
  struct _D3DKMT_PRESENT v129; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v130[64]; // [rsp+8C8h] [rbp+7C0h] BYREF

  v95 = 0;
  v2 = 0;
  if ( !a1 )
  {
    LODWORD(v12) = -1073741811;
    v52 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v52 + 24) = -1073741811LL;
LABEL_63:
    WdLogEvent5_WdError(v52);
    return (unsigned int)v12;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    v54 = WdLogNewEntry5_WdEvent();
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v54 + 24) = *(int *)a1;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdEvent(v54);
    return (unsigned int)v12;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v110,
                      &v123);
  v5 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v55[3] = *((_QWORD *)a1 + 1);
    v55[4] = *((unsigned int *)a1 + 4);
    v55[5] = v5;
    WdLogEvent5_WdError(v55);
    return (unsigned int)v5;
  }
  v6 = v110;
  if ( !v110 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v56 + 24) = 1006LL;
    WdLogEvent5_WdAssertion(v56);
  }
  v117 = *(struct _LUID *)((char *)v6 + 268);
  DXGADAPTER::ReleaseReference(v6);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v53 = WdLogNewEntry5_WdError(v8);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v53 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v52 = v53;
    *(_QWORD *)(v53 + 32) = -1073741811LL;
    goto LABEL_63;
  }
  v96[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v96, 0);
  v12 = v10;
  if ( v10 < 0 )
  {
    v57 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v57 + 24) = v12;
LABEL_68:
    WdLogEvent5_WdError(v57);
    goto LABEL_57;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v117, *((_DWORD *)a1 + 4));
  v14 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v58[3] = *((unsigned int *)a1 + 4);
    v58[4] = v6;
    LODWORD(v12) = -1073741811;
    v58[5] = (unsigned int)PsGetCurrentProcessSessionId();
    v57 = (__int64)v58;
    v58[6] = -1073741811LL;
    goto LABEL_68;
  }
  v15 = *((unsigned int *)a1 + 19);
  if ( (unsigned int)v15 > 4 )
  {
    v59 = 16 * v15;
    if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
      v59 = -1LL;
    v97 = (struct tagRECT *)operator new(v59, 0x4B677844u, PagedPool);
    if ( !v97 )
    {
      v61 = WdLogNewEntry5_WdLowResource(v60);
      LODWORD(v12) = -1073741801;
      *(_QWORD *)(v61 + 24) = *((unsigned int *)a1 + 19);
      *(_QWORD *)(v61 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v61);
      goto LABEL_57;
    }
  }
  else
  {
    v97 = (struct tagRECT *)v130;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v14);
  v16 = PrimaryDisplaySource;
  if ( !PrimaryDisplaySource )
    goto LABEL_53;
  do
  {
    v105 = 0LL;
    v101 = 0LL;
    v102 = 0;
    v99 = 0;
    v94 = 0;
    memset(&v119, 0, sizeof(v119));
    *(_QWORD *)&v109.hDevice = 0LL;
    v109.phAllocations = 0LL;
    memset(&v129, 0, sizeof(v129));
    v104 = (ADAPTER_DISPLAY *)*((_QWORD *)v16 + 1);
    v18 = *((_QWORD *)v104 + 2);
    v111 = v18;
    v110 = (DXGADAPTER *)v18;
    if ( !v18 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v62 + 24) = 1095LL;
      WdLogEvent5_WdAssertion(v62);
    }
    if ( !*(_QWORD *)(v18 + 2128) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v50 + 24) = 1096LL;
      WdLogEvent5_WdAssertion(v50);
    }
    v19 = *((unsigned int *)v16 + 4);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v18 + 268));
    v12 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v63 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v63 + 24) = v18;
      *(_QWORD *)(v63 + 32) = v12;
      WdLogEvent5_WdError(v63);
      goto LABEL_51;
    }
    v22 = v105;
    v112 = v105;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v124, v105);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v127,
      &v101,
      1u);
    v23 = *((_QWORD *)v22 + 2);
    v118 = (ADAPTER_RENDER **)((char *)v22 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v122,
      *(struct DXGADAPTER **)(v23 + 16),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v126, (__int64)v22, 1, v24, 0);
    if ( v127[0] )
    {
      v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v126);
      v12 = v26;
      if ( v26 >= 0 )
      {
        v28 = (DXGADAPTER **)v104;
        ADAPTER_DISPLAY::GetCddAllocationHandles(v104, v19, &v102, &v99);
        v29 = v102;
        if ( !v102 || !v99 )
        {
          LODWORD(v12) = -1071775482;
          v51 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v51[3] = v18;
          v51[4] = v19;
          v51[5] = -1071775482LL;
LABEL_60:
          WdLogEvent5_WdEvent(v51);
          goto LABEL_43;
        }
        v119.hDevice = *((_DWORD *)v22 + 77);
        v119.hAllocation = v99;
        v109.hDevice = *((_DWORD *)v22 + 77);
        v109.phAllocations = &v119.hAllocation;
        v109.NumAllocations = 1;
        ADAPTER_DISPLAY::GetCddDisplayMode(v28, v19);
        v30 = *ADAPTER_DISPLAY::GetDwmClipBox(v28, v19);
        v103 = v30;
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v28, (unsigned int)v19, 1LL) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v103.right;
          v103.right = v103.bottom;
          v103.bottom = right;
          v30 = v103;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v28, (unsigned int)v19, 0LL);
        v33 = *(_DWORD *)a1 == 1;
        v34 = CurrentOrientation;
        v98 = CurrentOrientation;
        if ( v33 )
        {
          if ( !*(_QWORD *)(v18 + 2136) && ADAPTER_DISPLAY::IsIdenticalMode(v28, v19) )
          {
            v43 = v97;
            for ( i = 0; i < *((_DWORD *)a1 + 19); v43[v68] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v68) )
              v68 = i++;
LABEL_33:
            if ( !*(_QWORD *)(v18 + 2136) )
            {
              memset(&v120, 0, sizeof(v120));
              pData = v119.pData;
              v120.VidPnSourceId = v19;
              if ( !v94 )
                pData = (void *)*((_QWORD *)a1 + 3);
              v120.pSource = pData;
              v120.BytesPerPixel = 4;
              v120.Pitch = ADAPTER_DISPLAY::GetCddShadowPitch((ADAPTER_DISPLAY *)v28, v19);
              v120.Flags.Value = 0;
              v72 = ADAPTER_DISPLAY::GetCurrentOrientation(v28, (unsigned int)v19, 1LL);
              v120.NumMoves = 0;
              v120.pMoves = 0LL;
              v48 = v97;
              v120.pDirtyRect = v97;
              v120.Flags.Value ^= (*(_BYTE *)&v120.Flags.0 ^ (v72 != 1)) & 1;
              v120.NumDirtyRects = *((_DWORD *)a1 + 19);
              v73 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd((ADAPTER_DISPLAY *)v28, &v120);
              v12 = v73;
              if ( v73 >= 0 )
                goto LABEL_41;
              v75 = (_QWORD *)WdLogNewEntry5_WdError(v74);
              v75[3] = v18;
              v75[5] = 1349LL;
              goto LABEL_88;
            }
            v44 = v101;
            v129.hWindow = 0LL;
            v129.BroadcastContextCount = 0;
            v129.pSrcSubRects = v43;
            v129.hDevice = *((_DWORD *)v101 + 6);
            v129.SubRectCnt = *((_DWORD *)a1 + 19);
            v45 = *(_DWORD *)a1;
            if ( *(_DWORD *)a1 )
            {
              v129.Flags.Value |= 1u;
              if ( v45 == 1 )
              {
                v129.hSource = v99;
                v129.hDestination = v29;
              }
              else
              {
                v129.hSource = v29;
                if ( v45 != 2 )
                {
                  v77 = *((_DWORD *)a1 + 9);
                  v78 = *((_DWORD *)a1 + 8);
                  v129.hDestination = v29;
                  DxgkpConvertRects(
                    v78,
                    v77,
                    v34,
                    &v103,
                    2u,
                    (struct tagRECT *)((char *)a1 + 44),
                    (struct tagRECT *)((char *)a1 + 44));
                  v79 = *(RECT *)((char *)a1 + 60);
                  v129.SrcRect = *(RECT *)((char *)a1 + 44);
                  v129.DstRect = v79;
                  goto LABEL_39;
                }
                v129.hDestination = v99;
              }
              v129.SrcRect = v30;
            }
            else
            {
              v129.Flags.Value |= 2u;
              v76 = *((_DWORD *)a1 + 5);
              v129.hSource = 0;
              v129.Color = v76;
              v129.hDestination = v29;
            }
            v129.DstRect = v30;
LABEL_39:
            v46 = DXGCONTEXT::PresentFromCdd(
                    v44,
                    &v129,
                    v19,
                    (struct COREDEVICEACCESS *)v126,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v122,
                    &v101);
            v12 = v46;
            if ( v46 >= 0 )
            {
              v48 = v97;
LABEL_41:
              if ( *(_DWORD *)a1 != 2 )
              {
LABEL_42:
                v95 = 1;
                goto LABEL_43;
              }
              v80 = DXGDEVICE::Lock(v22, &v119, (struct COREDEVICEACCESS *)v126);
              v12 = v80;
              v106 = v80;
              if ( v80 >= 0 )
              {
                v82 = *((_DWORD *)a1 + 8);
                v114.left = 0;
                v114.top = 0;
                v114.right = v82;
                v114.bottom = *((_DWORD *)a1 + 9);
                v94 = 1;
                if ( v34 != D3DKMDT_VPPR_IDENTITY )
                {
                  if ( v34 == D3DKMDT_VPPR_ROTATE90 )
                  {
                    v98 = D3DKMDT_VPPR_ROTATE270;
                  }
                  else if ( v34 == D3DKMDT_VPPR_ROTATE270 )
                  {
                    v98 = D3DKMDT_VPPR_ROTATE90;
                  }
                }
                v83 = 0;
                LODWORD(v100) = 0;
                if ( *((_DWORD *)a1 + 19) )
                {
                  v84 = v98;
                  v107 = v103.bottom - v103.top;
                  v85 = v103.bottom - v103.top;
                  v108 = v103.right - v103.left;
                  v86 = v103.right - v103.left;
                  v116 = 4LL * v103.left;
                  do
                  {
                    v87 = &v48[v83];
                    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v104, v19);
                    v89 = ADAPTER_DISPLAY::GetCddShadowPitch(v104, v19);
                    DxgkpBlitA8R8R8G8(
                      (unsigned __int8 *)v119.pData + v116 + (unsigned int)(v103.top * v89),
                      v86,
                      v85,
                      CddShadowPitch,
                      v84,
                      *((unsigned __int8 **)a1 + 3),
                      *((_DWORD *)a1 + 10),
                      &v114,
                      v87,
                      v87);
                    v48 = v97;
                    v83 = v100 + 1;
                    LODWORD(v100) = v83;
                  }
                  while ( v83 < *((_DWORD *)a1 + 19) );
                  LODWORD(v12) = v106;
                  v18 = v111;
                  v22 = v112;
                }
                goto LABEL_42;
              }
              v75 = (_QWORD *)WdLogNewEntry5_WdError(v81);
              v75[3] = v18;
              v75[4] = v19;
              v75[5] = v119.hAllocation;
              v75[6] = v12;
              goto LABEL_90;
            }
            if ( v46 == -1071775482 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v51[3] = v101;
              v51[4] = -1071775482LL;
              v51[5] = 1435LL;
              goto LABEL_60;
            }
            if ( v46 == -1071774910 )
            {
LABEL_43:
              if ( !v94 )
                goto LABEL_44;
              DXGDEVICE::Unlock(v22, &v109, 0);
              if ( (int)v12 >= 0 )
                goto LABEL_44;
              v69 = (_QWORD *)WdLogNewEntry5_WdError(v90);
              hAllocation = (int)v12;
              v69[3] = v18;
              v69[4] = v19;
              goto LABEL_111;
            }
            v75 = (_QWORD *)WdLogNewEntry5_WdError(v47);
            v75[3] = v101;
            v75[5] = 1442LL;
LABEL_88:
            v75[4] = v12;
LABEL_90:
            WdLogEvent5_WdError(v75);
            goto LABEL_43;
          }
          v35 = DXGDEVICE::Lock(v22, &v119, (struct COREDEVICEACCESS *)v126);
          v12 = v35;
          if ( v35 < 0 )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdError(v36);
            v69[3] = v18;
            v69[4] = v19;
            hAllocation = v119.hAllocation;
            v69[6] = v12;
LABEL_111:
            v69[5] = hAllocation;
            goto LABEL_112;
          }
          LODWORD(v100) = 0;
          v28 = (DXGADAPTER **)v104;
          v94 = 1;
          if ( *((_DWORD *)a1 + 19) )
          {
            v37 = v100;
            v38 = v34;
            do
            {
              v39 = v37;
              v40 = &v97[v39];
              v41 = (struct tagRECT *)(v39 * 16 + *((_QWORD *)a1 + 10));
              v42 = ADAPTER_DISPLAY::GetCddShadowPitch((ADAPTER_DISPLAY *)v28, v19);
              DxgkpBlitA8R8R8G8(
                *((unsigned __int8 **)a1 + 3),
                *((_DWORD *)a1 + 8),
                *((_DWORD *)a1 + 9),
                *((_DWORD *)a1 + 10),
                v38,
                (unsigned __int8 *)v119.pData,
                v42,
                &v103,
                v41,
                v40);
              ++v37;
            }
            while ( v37 < *((_DWORD *)a1 + 19) );
            v30 = v103;
            v18 = v111;
            v22 = v112;
            v29 = v102;
            v34 = v98;
          }
          if ( *(_QWORD *)(v18 + 2136) )
          {
            DXGDEVICE::Unlock(v22, &v109, 0);
            v94 = 0;
          }
        }
        else
        {
          if ( !*(_QWORD *)(v18 + 2136) )
          {
            LODWORD(v12) = -1073741637;
            v69 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v69[3] = v18;
            v69[4] = *(int *)a1;
            v69[5] = -1073741637LL;
LABEL_112:
            WdLogEvent5_WdError(v69);
            goto LABEL_44;
          }
          DxgkpConvertRects(
            *((_DWORD *)a1 + 8),
            *((_DWORD *)a1 + 9),
            CurrentOrientation,
            &v103,
            *((_DWORD *)a1 + 19),
            *((struct tagRECT **)a1 + 10),
            v97);
        }
        v43 = v97;
        goto LABEL_33;
      }
      v65 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v65 + 24) = v22;
      *(_QWORD *)(v65 + 32) = v12;
      WdLogEvent5_WdError(v65);
    }
    else
    {
      LODWORD(v12) = -1073741801;
      v64 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v64 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v64);
    }
LABEL_44:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
    if ( v122[16] )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v122);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v127);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v124);
    if ( v101 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v91 = v101;
        v92 = *((_QWORD *)v101 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v121,
          (struct DXGDEVICE *)v92);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v125,
          *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v91 + 2) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v128, v92, 2, v93, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v128);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v92 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v92, v101, (struct COREDEVICEACCESS *)v128);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v128);
        if ( v125[16] )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
        if ( v121[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v121);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v92 + 16), (struct DXGDEVICE *)v92);
      }
      v22 = v105;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*v118, v105);
LABEL_51:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
    v16 = PrimaryDisplaySource;
  }
  while ( PrimaryDisplaySource );
  v2 = v95;
LABEL_53:
  if ( v97 != (struct tagRECT *)v130 )
    operator delete(v97);
  if ( v2 )
    LODWORD(v12) = 0;
LABEL_57:
  DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)v96);
  return (unsigned int)v12;
}
