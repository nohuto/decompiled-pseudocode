/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4
 * Callers:
 *     DxgkOpenResource @ 0x1C00677E0 (DxgkOpenResource.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0009890 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00098B8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C000F698 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F920 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00904A0 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_61_--ENSURE_SHARED_RESOURCE_DER.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  void *v6; // rsi
  void *v7; // r12
  struct DXGRESOURCE *v8; // r13
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  struct DXGDEVICE *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rdx
  void *v38; // r14
  int StandardAllocation; // esi
  void *v40; // rbx
  _QWORD *v41; // r8
  _DWORD *v42; // rdx
  _DWORD *v43; // rdx
  unsigned int i; // r9d
  __int64 v45; // r10
  __int64 v46; // r11
  ULONG64 v47; // r8
  _DWORD *v48; // rdx
  _DWORD *v49; // rdx
  _QWORD *v50; // rdx
  void *v51; // rcx
  size_t v52; // r8
  ULONG64 v53; // rdx
  void *v54; // rcx
  size_t v55; // r8
  ULONG64 v56; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r9
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // r8
  int v77; // ebx
  void *v78; // rcx
  size_t v79; // r8
  ULONG64 v80; // rdx
  _QWORD *v81; // rax
  unsigned int v82; // ecx
  __int64 v83; // r9
  unsigned int v84; // r8d
  struct DXGRESOURCE *v85; // rax
  unsigned int v86; // ecx
  struct DXGRESOURCE *v87; // r15
  __int64 v88; // rax
  int v89; // [rsp+30h] [rbp-378h]
  char v90; // [rsp+50h] [rbp-358h]
  void *Src; // [rsp+58h] [rbp-350h]
  _DWORD *v92; // [rsp+60h] [rbp-348h]
  struct DXGDEVICE *v93; // [rsp+68h] [rbp-340h] BYREF
  struct DXGRESOURCE *v94; // [rsp+70h] [rbp-338h]
  unsigned int v95; // [rsp+78h] [rbp-330h]
  __int64 v96; // [rsp+80h] [rbp-328h] BYREF
  char v97; // [rsp+88h] [rbp-320h]
  __int64 v98; // [rsp+90h] [rbp-318h]
  void *v99; // [rsp+98h] [rbp-310h]
  struct DXGPROCESS *v100; // [rsp+A0h] [rbp-308h]
  __int64 v101; // [rsp+A8h] [rbp-300h] BYREF
  unsigned int v102[4]; // [rsp+B0h] [rbp-2F8h]
  __int128 v103; // [rsp+C0h] [rbp-2E8h]
  size_t Size[2]; // [rsp+D0h] [rbp-2D8h]
  size_t v105[2]; // [rsp+E0h] [rbp-2C8h]
  size_t v106; // [rsp+F0h] [rbp-2B8h]
  ULONG64 v107; // [rsp+100h] [rbp-2A8h]
  _BYTE v108[16]; // [rsp+108h] [rbp-2A0h] BYREF
  char v109[8]; // [rsp+118h] [rbp-290h] BYREF
  _BYTE v110[16]; // [rsp+120h] [rbp-288h] BYREF
  size_t v111; // [rsp+130h] [rbp-278h]
  _BYTE v112[24]; // [rsp+138h] [rbp-270h] BYREF
  char v113[8]; // [rsp+150h] [rbp-258h] BYREF
  unsigned int v114; // [rsp+158h] [rbp-250h]
  size_t v115; // [rsp+160h] [rbp-248h]
  _BYTE v116[80]; // [rsp+170h] [rbp-238h] BYREF
  _BYTE v117[32]; // [rsp+1C0h] [rbp-1E8h] BYREF
  _QWORD v118[48]; // [rsp+1E0h] [rbp-1C8h] BYREF
  int v119; // [rsp+360h] [rbp-48h] BYREF
  int v120; // [rsp+364h] [rbp-44h]
  int v121; // [rsp+368h] [rbp-40h]
  __int64 v122; // [rsp+36Ch] [rbp-3Ch]
  int v123; // [rsp+374h] [rbp-34h]

  v95 = a2;
  v107 = a1;
  Current = DXGPROCESS::GetCurrent();
  v100 = Current;
  v6 = 0LL;
  Src = 0LL;
  v7 = 0LL;
  v99 = 0LL;
  v8 = 0LL;
  v94 = 0LL;
  v90 = 0;
  if ( !Current )
  {
    v58 = WdLogNewEntry5_WdError(v4);
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    return (unsigned int)v14;
  }
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)v102 = *(_OWORD *)v9;
  v103 = *(_OWORD *)(v9 + 16);
  *(_OWORD *)Size = *(_OWORD *)(v9 + 32);
  *(_OWORD *)v105 = *(_OWORD *)(v9 + 48);
  v106 = *(_QWORD *)(v9 + 64);
  v115 = v105[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v109, v102[0], (struct _KTHREAD **)Current, &v93);
  v14 = (__int64)v93;
  if ( !v93 )
  {
    v59 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v59 + 24) = v102[0];
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
LABEL_57:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v109);
    return (unsigned int)v14;
  }
  if ( !(_DWORD)v106 && !LODWORD(v105[0]) )
  {
    v60 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v60 + 24) = v14;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_57;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108,
    v93);
  v96 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  v97 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v116, v14, 2, v15, 0);
  LODWORD(v98) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v116);
  if ( (int)v98 < 0 )
  {
    v61 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v61 + 24) = v14;
    LODWORD(v14) = v98;
    *(_QWORD *)(v61 + 32) = (int)v98;
    WdLogEvent5_WdWarning(v61);
LABEL_115:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
    if ( v97 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
    goto LABEL_57;
  }
  if ( !a2 )
  {
    v88 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v88 + 24) = v14;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v88 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v88);
    goto LABEL_115;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v110);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v110);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  v26 = ObjectA;
  if ( !ObjectA )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v62[3] = v14;
LABEL_64:
    LODWORD(v14) = -1073741811;
    v63 = v95;
    v62[5] = -1073741811LL;
    v62[4] = v63;
    WdLogEvent5_WdWarning(v62);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v110);
    goto LABEL_115;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v27 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v27 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      v62[3] = v93;
      v62[6] = 8533LL;
      goto LABEL_64;
    }
    v23 = (unsigned int)(v27 + 1);
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 60), v23, v27);
  }
  while ( v28 != v27 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v110);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v110);
  v101 = v26;
  if ( (*(_DWORD *)(v26 + 12) & 0x10) != 0 )
  {
    v64 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v64 + 24) = v26;
    LODWORD(v14) = -1073741823;
    *(_QWORD *)(v64 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v64);
LABEL_68:
    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v101);
    goto LABEL_115;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v112, Current);
  if ( (_BYTE)v29 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v116);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v112, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
    LODWORD(v98) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v116);
    if ( (int)v98 < 0 )
    {
      v65 = WdLogNewEntry5_WdWarning(v67, v66, v29, v68);
      v14 = (int)v98;
LABEL_67:
      *(_QWORD *)(v65 + 24) = v93;
      *(_QWORD *)(v65 + 32) = v14;
      WdLogEvent5_WdWarning(v65);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
      goto LABEL_68;
    }
    v30 = 1LL;
  }
  if ( 80 * (unsigned __int64)v102[2] > 0xFFFFFFFF )
  {
    v65 = WdLogNewEntry5_WdWarning(v102[2], 0xFFFFFFFFLL, v29, v30);
    v14 = -1073741675LL;
    goto LABEL_67;
  }
  v114 = 80 * v102[2];
  v31 = 80LL * v102[2];
  if ( !is_mul_ok(v102[2], 0x50uLL) )
    v31 = -1LL;
  v92 = operator new[](v31, 0x4B677844u, (enum _POOL_TYPE)v30);
  if ( !v92 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    v69[3] = v93;
    v69[4] = v102[2];
    v69[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v69);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v101);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
    if ( v97 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
    LODWORD(v14) = -1073741801;
    goto LABEL_57;
  }
  if ( (_DWORD)v106 )
  {
    v98 = (unsigned int)v106;
    v7 = operator new[]((unsigned int)v106, 0x4B677844u, PagedPool);
    v99 = v7;
    if ( !v7 )
      goto LABEL_74;
  }
  if ( LODWORD(v105[0]) )
  {
    v6 = operator new[](LODWORD(v105[0]), 0x4B677844u, PagedPool);
    Src = v6;
    if ( !v6 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v74, v34, v35);
      v70[3] = v93;
      v71 = LODWORD(v105[0]);
      goto LABEL_75;
    }
  }
  if ( LODWORD(Size[0]) )
  {
    v98 = LODWORD(Size[0]);
    v8 = (struct DXGRESOURCE *)operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v94 = v8;
    if ( !v8 )
    {
LABEL_74:
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v36, v34, v35);
      v70[3] = v93;
      v71 = v98;
LABEL_75:
      v70[4] = v71;
      StandardAllocation = -1073741801;
      v70[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v70);
LABEL_79:
      v40 = Src;
      v38 = v92;
LABEL_97:
      if ( v90 )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v117, Current);
        v82 = (HIDWORD(v106) >> 6) & 0xFFFFFF;
        if ( v82 < *((_DWORD *)Current + 58)
          && (v83 = *((_QWORD *)Current + 27),
              v84 = *(_DWORD *)(v83 + 16LL * v82 + 8),
              HIDWORD(v106) >> 30 == ((v84 >> 4) & 3))
          && (v84 & 0x1000) == 0
          && (v84 & 0xF) != 0
          && (*(_BYTE *)(v83 + 16LL * v82 + 8) & 0xF) == 4 )
        {
          v85 = *(struct DXGRESOURCE **)(v83 + 16LL * v82);
          v94 = v85;
          if ( v85 && v82 < *((_DWORD *)Current + 58) )
          {
            v86 = *(_DWORD *)(v83 + 16LL * v82 + 8);
            if ( HIDWORD(v106) >> 30 != ((v86 >> 4) & 3) || (v86 & 0x1000) != 0 )
            {
              v87 = v94;
            }
            else
            {
              v87 = v94;
              if ( (v86 & 0xF) != 0 )
                *(_DWORD *)(v83 + 16 * (((unsigned __int64)HIDWORD(v106) >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
          else
          {
            v87 = v85;
          }
        }
        else
        {
          v87 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v117);
        DXGDEVICE::DestroyAllocationInternal(v93, 0, 0LL, v87, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      goto LABEL_52;
    }
  }
  v37 = *(_QWORD *)(v14 + 16);
  if ( *(_QWORD *)(v26 + 72) == v37 )
  {
    v33 = v93;
    if ( *(_QWORD *)(v26 + 80) == *((_QWORD *)v93 + 2338) )
    {
      v105[1] = (size_t)v7;
      Size[1] = (size_t)v6;
      *((_QWORD *)&v103 + 1) = v8;
      v38 = v92;
      *(_QWORD *)&v103 = v92;
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                             v93,
                             0,
                             (struct COREDEVICEACCESS *)v116,
                             v89,
                             0LL,
                             0LL,
                             0LL);
      v40 = Src;
      if ( StandardAllocation >= 0 )
        v90 = 1;
      goto LABEL_27;
    }
  }
  LODWORD(v98) = *(_DWORD *)(v26 + 12);
  if ( (v98 & 0x20) == 0 )
  {
    StandardAllocation = -1073741811;
    v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v34, v35);
    v81[3] = v93;
    v81[4] = 0LL;
    v81[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v81);
    goto LABEL_96;
  }
  if ( *(_DWORD *)(v26 + 116) != v102[2] )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v34, v35);
    v72[3] = v93;
    v72[4] = v102[2];
    v73 = *(unsigned int *)(v26 + 116);
LABEL_77:
    v72[5] = v73;
    v72[6] = -1073741811LL;
LABEL_78:
    WdLogEvent5_WdWarning(v72);
    StandardAllocation = -1073741811;
    goto LABEL_79;
  }
  v95 = *(_DWORD *)(v26 + 96);
  v75 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) != v95 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v34, v35);
    v72[3] = v93;
    v72[4] = v75;
    v73 = *(unsigned int *)(v26 + 96);
    goto LABEL_77;
  }
  v76 = *(unsigned int *)(v26 + 176);
  if ( !(_DWORD)v76 && *(_DWORD *)(*(_QWORD *)(v37 + 16) + 1256LL) < 0x5000u )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v76, v35);
    v72[3] = v93;
    v72[4] = -1073741811LL;
    goto LABEL_78;
  }
  v120 = 0;
  v122 = 0LL;
  v123 = 0;
  v121 = v76;
  v119 = *(_DWORD *)(v26 + 168);
  v120 = *(_DWORD *)(v26 + 172);
  LODWORD(v122) = 7;
  memset(v118, 0, 376);
  HIDWORD(v118[0]) = v102[0];
  LODWORD(v118[2]) = 4;
  v118[3] = &v119;
  v118[39] = *(_QWORD *)(v26 + 88);
  LODWORD(v118[40]) = v95;
  v118[41] = *(_QWORD *)(v26 + 184);
  v118[42] = *(_QWORD *)(v26 + 192);
  LODWORD(v118[6]) = *(_DWORD *)(v26 + 200);
  v118[43] = v6;
  LODWORD(v118[44]) = v105[0];
  v118[45] = v7;
  LODWORD(v118[46]) = v106;
  LODWORD(v118[0]) = ((unsigned int)v98 >> 7) & 1 | (4 * (v98 & 0x40 | 0x10)) | 0x200;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v93,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v118,
                         (struct COREDEVICEACCESS *)v116);
  if ( StandardAllocation < 0 )
  {
LABEL_96:
    v38 = v92;
    v40 = Src;
    goto LABEL_51;
  }
  v90 = 1;
  v77 = v118[1];
  *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)Current, (DXGRESOURCEREFERENCE *)v113, v118[1]) + 120LL) = v26;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v113);
  memmove(v8, *(const void **)(v26 + 88), LODWORD(Size[0]));
  HIDWORD(v106) = v77;
  v38 = v92;
  *v92 = HIDWORD(v118[6]);
  v92[4] = v106;
  *((_QWORD *)v92 + 1) = v7;
  *(_QWORD *)&v103 = v92;
  *((_QWORD *)&v103 + 1) = v8;
  v40 = Src;
  Size[1] = (size_t)Src;
  v105[1] = (size_t)v7;
LABEL_27:
  v41 = (_QWORD *)v107;
  v42 = (_DWORD *)(v107 + 68);
  if ( v107 + 68 >= MmUserProbeAddress )
    v42 = (_DWORD *)MmUserProbeAddress;
  *v42 = HIDWORD(v106);
  v43 = v41 + 8;
  if ( (unsigned __int64)(v41 + 8) >= MmUserProbeAddress )
    v43 = (_DWORD *)MmUserProbeAddress;
  *v43 = v106;
  for ( i = 0; i < v102[2]; ++i )
  {
    v45 = 80LL * i;
    v46 = v103;
    v111 = v115 + (unsigned int)(*(_DWORD *)(v45 + v103 + 8) - LODWORD(v105[1]));
    v47 = v45 + v41[2];
    v48 = (_DWORD *)v47;
    if ( v47 >= MmUserProbeAddress )
      v48 = (_DWORD *)MmUserProbeAddress;
    *v48 = *(_DWORD *)(v45 + v103);
    v49 = (_DWORD *)(v47 + 16);
    if ( v47 + 16 >= MmUserProbeAddress )
      v49 = (_DWORD *)MmUserProbeAddress;
    *v49 = *(_DWORD *)(v45 + v46 + 16);
    v50 = (_QWORD *)(v47 + 8);
    if ( v47 + 8 >= MmUserProbeAddress )
      v50 = (_QWORD *)MmUserProbeAddress;
    *v50 = v111;
    v41 = (_QWORD *)v107;
  }
  if ( LODWORD(Size[0]) )
  {
    v51 = (void *)v41[3];
    v52 = LODWORD(Size[0]);
    v53 = (ULONG64)v51 + LODWORD(Size[0]);
    if ( v53 > MmUserProbeAddress || v53 <= (unsigned __int64)v51 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v51, v8, v52);
    v41 = (_QWORD *)v107;
  }
  if ( LODWORD(v105[0]) )
  {
    v78 = (void *)v41[5];
    v79 = LODWORD(v105[0]);
    v80 = (ULONG64)v78 + LODWORD(v105[0]);
    if ( v80 > MmUserProbeAddress || v80 <= (unsigned __int64)v78 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v78, v40, v79);
  }
  if ( (_DWORD)v106 )
  {
    v54 = *(void **)(v107 + 56);
    v55 = (unsigned int)v106;
    v56 = (ULONG64)v54 + (unsigned int)v106;
    if ( v56 > MmUserProbeAddress || v56 <= (unsigned __int64)v54 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v54, v7, v55);
  }
LABEL_51:
  if ( StandardAllocation < 0 )
    goto LABEL_97;
LABEL_52:
  operator delete(v7);
  operator delete(v40);
  operator delete(v38);
  operator delete(v8);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v112);
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v101);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v116);
  if ( v97 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v96);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v108);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v109);
  return (unsigned int)StandardAllocation;
}
