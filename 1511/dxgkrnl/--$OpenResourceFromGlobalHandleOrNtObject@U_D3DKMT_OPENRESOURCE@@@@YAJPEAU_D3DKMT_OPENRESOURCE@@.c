/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370
 * Callers:
 *     DxgkOpenResource @ 0x1C0061880 (DxgkOpenResource.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001678 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003D78 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0011020 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001102C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C0061964 @ 0x1C0061964 (sub_1C0061964.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E6DC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  int v77; // ecx
  int v78; // ebx
  void *v79; // rcx
  size_t v80; // r8
  ULONG64 v81; // rdx
  _QWORD *v82; // rax
  unsigned int v83; // ecx
  __int64 v84; // r9
  unsigned int v85; // r8d
  struct DXGRESOURCE *v86; // rax
  unsigned int v87; // ecx
  struct DXGRESOURCE *v88; // r15
  __int64 v89; // rax
  int v90; // [rsp+30h] [rbp-388h]
  char v91; // [rsp+50h] [rbp-368h]
  void *Src; // [rsp+58h] [rbp-360h]
  _DWORD *v93; // [rsp+60h] [rbp-358h]
  struct DXGDEVICE *v94; // [rsp+68h] [rbp-350h] BYREF
  struct DXGRESOURCE *v95; // [rsp+70h] [rbp-348h]
  unsigned int v96; // [rsp+78h] [rbp-340h]
  _BYTE v97[8]; // [rsp+80h] [rbp-338h] BYREF
  char v98; // [rsp+88h] [rbp-330h]
  __int64 v99; // [rsp+90h] [rbp-328h]
  void *v100; // [rsp+98h] [rbp-320h]
  struct DXGPROCESS *v101; // [rsp+A0h] [rbp-318h]
  DXGSHAREDRESOURCE *v102; // [rsp+A8h] [rbp-310h] BYREF
  unsigned int v103[4]; // [rsp+B0h] [rbp-308h]
  __int128 v104; // [rsp+C0h] [rbp-2F8h]
  size_t Size[2]; // [rsp+D0h] [rbp-2E8h]
  size_t v106[2]; // [rsp+E0h] [rbp-2D8h]
  size_t v107; // [rsp+F0h] [rbp-2C8h]
  ULONG64 v108; // [rsp+100h] [rbp-2B8h]
  _BYTE v109[16]; // [rsp+108h] [rbp-2B0h] BYREF
  _BYTE v110[8]; // [rsp+118h] [rbp-2A0h] BYREF
  _BYTE v111[16]; // [rsp+120h] [rbp-298h] BYREF
  size_t v112; // [rsp+130h] [rbp-288h]
  _BYTE v113[24]; // [rsp+138h] [rbp-280h] BYREF
  _BYTE v114[8]; // [rsp+150h] [rbp-268h] BYREF
  unsigned int v115; // [rsp+158h] [rbp-260h]
  size_t v116; // [rsp+160h] [rbp-258h]
  _BYTE v117[80]; // [rsp+170h] [rbp-248h] BYREF
  _BYTE v118[32]; // [rsp+1C0h] [rbp-1F8h] BYREF
  _QWORD v119[50]; // [rsp+1E0h] [rbp-1D8h] BYREF
  int v120; // [rsp+370h] [rbp-48h] BYREF
  int v121; // [rsp+374h] [rbp-44h]
  int v122; // [rsp+378h] [rbp-40h]
  __int64 v123; // [rsp+37Ch] [rbp-3Ch]
  int v124; // [rsp+384h] [rbp-34h]

  v96 = a2;
  v108 = a1;
  Current = DXGPROCESS::GetCurrent();
  v101 = Current;
  v6 = 0LL;
  Src = 0LL;
  v7 = 0LL;
  v100 = 0LL;
  v8 = 0LL;
  v95 = 0LL;
  v91 = 0;
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
  *(_OWORD *)v103 = *(_OWORD *)v9;
  v104 = *(_OWORD *)(v9 + 16);
  *(_OWORD *)Size = *(_OWORD *)(v9 + 32);
  *(_OWORD *)v106 = *(_OWORD *)(v9 + 48);
  v107 = *(_QWORD *)(v9 + 64);
  v116 = v106[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v110, v103[0], (struct _KTHREAD **)Current, &v94);
  v14 = (__int64)v94;
  if ( !v94 )
  {
    v59 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v59 + 24) = v103[0];
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
LABEL_57:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v110);
    return (unsigned int)v14;
  }
  if ( !(_DWORD)v107 && !LODWORD(v106[0]) )
  {
    v60 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v60 + 24) = v14;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v60 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_57;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109,
    v94);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v97,
    *(struct DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, v14, 2, v15, 0);
  LODWORD(v99) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v117);
  if ( (int)v99 < 0 )
  {
    v61 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v61 + 24) = v14;
    LODWORD(v14) = v99;
    *(_QWORD *)(v61 + 32) = (int)v99;
    WdLogEvent5_WdWarning(v61);
LABEL_115:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    if ( v98 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
    goto LABEL_57;
  }
  if ( !a2 )
  {
    v89 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v89 + 24) = v14;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v89 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v89);
    goto LABEL_115;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v111);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  v26 = ObjectA;
  if ( !ObjectA )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v62[3] = v14;
LABEL_64:
    LODWORD(v14) = -1073741811;
    v63 = v96;
    v62[5] = -1073741811LL;
    v62[4] = v63;
    WdLogEvent5_WdWarning(v62);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111);
    goto LABEL_115;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v27 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v27 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      v62[3] = v94;
      v62[6] = 8265LL;
      goto LABEL_64;
    }
    v23 = (unsigned int)(v27 + 1);
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 60), v23, v27);
  }
  while ( v28 != v27 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111);
  v102 = (DXGSHAREDRESOURCE *)v26;
  if ( (*(_DWORD *)(v26 + 12) & 0x10) != 0 )
  {
    v64 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v64 + 24) = v26;
    LODWORD(v14) = -1073741823;
    *(_QWORD *)(v64 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v64);
LABEL_68:
    sub_1C0061964(&v102);
    goto LABEL_115;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v113, Current);
  if ( (_BYTE)v29 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v117);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v113, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    LODWORD(v99) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v117);
    if ( (int)v99 < 0 )
    {
      v65 = WdLogNewEntry5_WdWarning(v67, v66, v29, v68);
      v14 = (int)v99;
LABEL_67:
      *(_QWORD *)(v65 + 24) = v94;
      *(_QWORD *)(v65 + 32) = v14;
      WdLogEvent5_WdWarning(v65);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v113);
      goto LABEL_68;
    }
    v30 = 1LL;
  }
  if ( 80 * (unsigned __int64)v103[2] > 0xFFFFFFFF )
  {
    v65 = WdLogNewEntry5_WdWarning(v103[2], 0xFFFFFFFFLL, v29, v30);
    v14 = -1073741675LL;
    goto LABEL_67;
  }
  v115 = 80 * v103[2];
  v31 = 80LL * v103[2];
  if ( !is_mul_ok(v103[2], 0x50uLL) )
    v31 = -1LL;
  v93 = operator new[](v31, 0x4B677844u, (enum _POOL_TYPE)v30);
  if ( !v93 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    v69[3] = v94;
    v69[4] = v103[2];
    v69[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v69);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v113);
    sub_1C0061964(&v102);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    if ( v98 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
    LODWORD(v14) = -1073741801;
    goto LABEL_57;
  }
  if ( (_DWORD)v107 )
  {
    v99 = (unsigned int)v107;
    v7 = operator new[]((unsigned int)v107, 0x4B677844u, PagedPool);
    v100 = v7;
    if ( !v7 )
      goto LABEL_74;
  }
  if ( LODWORD(v106[0]) )
  {
    v6 = operator new[](LODWORD(v106[0]), 0x4B677844u, PagedPool);
    Src = v6;
    if ( !v6 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v74, v34, v35);
      v70[3] = v94;
      v71 = LODWORD(v106[0]);
      goto LABEL_75;
    }
  }
  if ( LODWORD(Size[0]) )
  {
    v99 = LODWORD(Size[0]);
    v8 = (struct DXGRESOURCE *)operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v95 = v8;
    if ( !v8 )
    {
LABEL_74:
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v36, v34, v35);
      v70[3] = v94;
      v71 = v99;
LABEL_75:
      v70[4] = v71;
      StandardAllocation = -1073741801;
      v70[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v70);
LABEL_79:
      v40 = Src;
      v38 = v93;
LABEL_97:
      if ( v91 )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v118, Current);
        v83 = (HIDWORD(v107) >> 6) & 0xFFFFFF;
        if ( v83 < *((_DWORD *)Current + 58)
          && (v84 = *((_QWORD *)Current + 27),
              v85 = *(_DWORD *)(v84 + 16LL * v83 + 8),
              HIDWORD(v107) >> 30 == ((v85 >> 4) & 3))
          && (v85 & 0x1000) == 0
          && (v85 & 0xF) != 0
          && (*(_BYTE *)(v84 + 16LL * v83 + 8) & 0xF) == 4 )
        {
          v86 = *(struct DXGRESOURCE **)(v84 + 16LL * v83);
          v95 = v86;
          if ( v86 && v83 < *((_DWORD *)Current + 58) )
          {
            v87 = *(_DWORD *)(v84 + 16LL * v83 + 8);
            if ( HIDWORD(v107) >> 30 != ((v87 >> 4) & 3) || (v87 & 0x1000) != 0 )
            {
              v88 = v95;
            }
            else
            {
              v88 = v95;
              if ( (v87 & 0xF) != 0 )
                *(_DWORD *)(v84 + 16 * (((unsigned __int64)HIDWORD(v107) >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
          else
          {
            v88 = v86;
          }
        }
        else
        {
          v88 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
        DXGDEVICE::DestroyAllocationInternal(v94, 0, 0LL, v88, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      goto LABEL_52;
    }
  }
  v37 = *(_QWORD *)(v14 + 16);
  if ( *(_QWORD *)(v26 + 72) == v37 )
  {
    v33 = v94;
    if ( *(_QWORD *)(v26 + 80) == *((_QWORD *)v94 + 354) )
    {
      v106[1] = (size_t)v7;
      Size[1] = (size_t)v6;
      *((_QWORD *)&v104 + 1) = v8;
      v38 = v93;
      *(_QWORD *)&v104 = v93;
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                             v94,
                             0,
                             (struct COREDEVICEACCESS *)v117,
                             v90,
                             0LL,
                             0LL,
                             0LL);
      v40 = Src;
      if ( StandardAllocation >= 0 )
        v91 = 1;
      goto LABEL_27;
    }
  }
  LODWORD(v99) = *(_DWORD *)(v26 + 12);
  if ( (v99 & 0x20) == 0 )
  {
    StandardAllocation = -1073741811;
    v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v34, v35);
    v82[3] = v94;
    v82[4] = 0LL;
    v82[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v82);
    goto LABEL_96;
  }
  if ( *(_DWORD *)(v26 + 116) != v103[2] )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v34, v35);
    v72[3] = v94;
    v72[4] = v103[2];
    v73 = *(unsigned int *)(v26 + 116);
LABEL_77:
    v72[5] = v73;
    v72[6] = -1073741811LL;
LABEL_78:
    WdLogEvent5_WdWarning(v72);
    StandardAllocation = -1073741811;
    goto LABEL_79;
  }
  v96 = *(_DWORD *)(v26 + 96);
  v75 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) != v96 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v34, v35);
    v72[3] = v94;
    v72[4] = v75;
    v73 = *(unsigned int *)(v26 + 96);
    goto LABEL_77;
  }
  v76 = *(unsigned int *)(v26 + 176);
  if ( !(_DWORD)v76 && *(_DWORD *)(*(_QWORD *)(v37 + 16) + 1264LL) < 0x5000u )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v76, v35);
    v72[3] = v94;
    v72[4] = -1073741811LL;
    goto LABEL_78;
  }
  v121 = 0;
  v123 = 0LL;
  v124 = 0;
  v122 = v76;
  v120 = *(_DWORD *)(v26 + 168);
  v121 = *(_DWORD *)(v26 + 172);
  LODWORD(v123) = 7;
  memset(v119, 0, 392);
  v77 = (4 * (v99 & 0x40 | (32 * (v99 & 0x80)))) | 0x41;
  HIDWORD(v119[0]) = v103[0];
  LODWORD(v119[2]) = 4;
  v119[3] = &v120;
  v119[39] = *(_QWORD *)(v26 + 88);
  LODWORD(v119[40]) = v96;
  v119[41] = *(_QWORD *)(v26 + 184);
  v119[42] = *(_QWORD *)(v26 + 192);
  LODWORD(v119[6]) = *(_DWORD *)(v26 + 200);
  v119[43] = v6;
  LODWORD(v119[44]) = v106[0];
  v119[45] = v7;
  LODWORD(v119[46]) = v107;
  LODWORD(v119[0]) = ((unsigned __int16)v77 ^ (unsigned __int16)((_WORD)v99 << 7)) & 0x400 ^ v77 | 0x200;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v94,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v119,
                         (struct COREDEVICEACCESS *)v117);
  if ( StandardAllocation < 0 )
  {
LABEL_96:
    v38 = v93;
    v40 = Src;
    goto LABEL_51;
  }
  v91 = 1;
  v78 = v119[1];
  *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)Current, (DXGRESOURCEREFERENCE *)v114, v119[1]) + 80LL) = v26;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v114);
  memmove(v8, *(const void **)(v26 + 88), LODWORD(Size[0]));
  HIDWORD(v107) = v78;
  v38 = v93;
  *v93 = HIDWORD(v119[6]);
  v93[4] = v107;
  *((_QWORD *)v93 + 1) = v7;
  *(_QWORD *)&v104 = v93;
  *((_QWORD *)&v104 + 1) = v8;
  v40 = Src;
  Size[1] = (size_t)Src;
  v106[1] = (size_t)v7;
LABEL_27:
  v41 = (_QWORD *)v108;
  v42 = (_DWORD *)(v108 + 68);
  if ( v108 + 68 >= MmUserProbeAddress )
    v42 = (_DWORD *)MmUserProbeAddress;
  *v42 = HIDWORD(v107);
  v43 = v41 + 8;
  if ( (unsigned __int64)(v41 + 8) >= MmUserProbeAddress )
    v43 = (_DWORD *)MmUserProbeAddress;
  *v43 = v107;
  for ( i = 0; i < v103[2]; ++i )
  {
    v45 = 80LL * i;
    v46 = v104;
    v112 = v116 + (unsigned int)(*(_DWORD *)(v45 + v104 + 8) - LODWORD(v106[1]));
    v47 = v45 + v41[2];
    v48 = (_DWORD *)v47;
    if ( v47 >= MmUserProbeAddress )
      v48 = (_DWORD *)MmUserProbeAddress;
    *v48 = *(_DWORD *)(v45 + v104);
    v49 = (_DWORD *)(v47 + 16);
    if ( v47 + 16 >= MmUserProbeAddress )
      v49 = (_DWORD *)MmUserProbeAddress;
    *v49 = *(_DWORD *)(v45 + v46 + 16);
    v50 = (_QWORD *)(v47 + 8);
    if ( v47 + 8 >= MmUserProbeAddress )
      v50 = (_QWORD *)MmUserProbeAddress;
    *v50 = v112;
    v41 = (_QWORD *)v108;
  }
  if ( LODWORD(Size[0]) )
  {
    v51 = (void *)v41[3];
    v52 = LODWORD(Size[0]);
    v53 = (ULONG64)v51 + LODWORD(Size[0]);
    if ( v53 > MmUserProbeAddress || v53 <= (unsigned __int64)v51 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v51, v8, v52);
    v41 = (_QWORD *)v108;
  }
  if ( LODWORD(v106[0]) )
  {
    v79 = (void *)v41[5];
    v80 = LODWORD(v106[0]);
    v81 = (ULONG64)v79 + LODWORD(v106[0]);
    if ( v81 > MmUserProbeAddress || v81 <= (unsigned __int64)v79 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v79, v40, v80);
  }
  if ( (_DWORD)v107 )
  {
    v54 = *(void **)(v108 + 56);
    v55 = (unsigned int)v107;
    v56 = (ULONG64)v54 + (unsigned int)v107;
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
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v113);
  sub_1C0061964(&v102);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
  if ( v98 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v109);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v110);
  return (unsigned int)StandardAllocation;
}
