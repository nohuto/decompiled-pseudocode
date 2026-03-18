/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008ED3C
 * Callers:
 *     DxgkOpenResource @ 0x1C008D9B0 (DxgkOpenResource.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00015FC (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0011318 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00114CC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C008F644 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0097038 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessDxgProcess; // r15
  PVOID v8; // rsi
  PVOID v9; // r12
  struct DXGRESOURCE *v10; // r13
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  __int64 v31; // r8
  __int64 v32; // r9
  SIZE_T v33; // rax
  __int64 v34; // rdx
  struct DXGDEVICE *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rdx
  void *v40; // r14
  int StandardAllocation; // esi
  void *v42; // rbx
  _QWORD *v43; // r8
  _DWORD *v44; // rdx
  _DWORD *v45; // rdx
  unsigned int i; // r9d
  __int64 v47; // r10
  __int64 v48; // r11
  ULONG64 v49; // r8
  _DWORD *v50; // rdx
  _DWORD *v51; // rdx
  _QWORD *v52; // rdx
  void *v53; // rcx
  size_t v54; // r8
  ULONG64 v55; // rdx
  void *v56; // rcx
  size_t v57; // r8
  ULONG64 v58; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r9
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // r8
  int v79; // ecx
  int v80; // ebx
  void *v81; // rcx
  size_t v82; // r8
  ULONG64 v83; // rdx
  _QWORD *v84; // rax
  unsigned int v85; // ecx
  __int64 v86; // r9
  unsigned int v87; // r8d
  struct DXGRESOURCE *v88; // rax
  unsigned int v89; // ecx
  struct DXGRESOURCE *v90; // r15
  __int64 v91; // rax
  int v92; // [rsp+30h] [rbp-3B8h]
  char v93; // [rsp+50h] [rbp-398h]
  void *Src; // [rsp+58h] [rbp-390h]
  _DWORD *v95; // [rsp+60h] [rbp-388h]
  struct DXGDEVICE *v96; // [rsp+68h] [rbp-380h] BYREF
  struct DXGRESOURCE *v97; // [rsp+70h] [rbp-378h]
  unsigned int v98; // [rsp+78h] [rbp-370h]
  __int64 v99; // [rsp+80h] [rbp-368h]
  void *v100; // [rsp+88h] [rbp-360h]
  _BYTE v101[16]; // [rsp+90h] [rbp-358h] BYREF
  char v102; // [rsp+A0h] [rbp-348h]
  struct DXGPROCESS *v103; // [rsp+A8h] [rbp-340h]
  _QWORD v104[2]; // [rsp+B0h] [rbp-338h] BYREF
  unsigned int v105[4]; // [rsp+C0h] [rbp-328h]
  __int128 v106; // [rsp+D0h] [rbp-318h]
  size_t Size[2]; // [rsp+E0h] [rbp-308h]
  size_t v108[2]; // [rsp+F0h] [rbp-2F8h]
  size_t v109; // [rsp+100h] [rbp-2E8h]
  ULONG64 v110; // [rsp+110h] [rbp-2D8h]
  _BYTE v111[16]; // [rsp+118h] [rbp-2D0h] BYREF
  _BYTE v112[8]; // [rsp+128h] [rbp-2C0h] BYREF
  _BYTE v113[16]; // [rsp+130h] [rbp-2B8h] BYREF
  unsigned int v114; // [rsp+140h] [rbp-2A8h]
  _BYTE v115[8]; // [rsp+148h] [rbp-2A0h] BYREF
  size_t v116; // [rsp+150h] [rbp-298h]
  size_t v117; // [rsp+158h] [rbp-290h]
  _BYTE v118[32]; // [rsp+160h] [rbp-288h] BYREF
  _BYTE v119[96]; // [rsp+180h] [rbp-268h] BYREF
  _BYTE v120[32]; // [rsp+1E0h] [rbp-208h] BYREF
  _QWORD v121[52]; // [rsp+200h] [rbp-1E8h] BYREF
  int v122; // [rsp+3A0h] [rbp-48h] BYREF
  int v123; // [rsp+3A4h] [rbp-44h]
  int v124; // [rsp+3A8h] [rbp-40h]
  __int64 v125; // [rsp+3ACh] [rbp-3Ch]
  int v126; // [rsp+3B4h] [rbp-34h]

  v98 = a2;
  v110 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v103 = (struct DXGPROCESS *)ProcessDxgProcess;
  v8 = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v100 = 0LL;
  v10 = 0LL;
  v97 = 0LL;
  v93 = 0;
  if ( !ProcessDxgProcess )
  {
    v60 = WdLogNewEntry5_WdError(v6);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v60 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v60);
    return (unsigned int)v16;
  }
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v105 = *(_OWORD *)v11;
  v106 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)Size = *(_OWORD *)(v11 + 32);
  *(_OWORD *)v108 = *(_OWORD *)(v11 + 48);
  v109 = *(_QWORD *)(v11 + 64);
  v116 = v108[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v112, v105[0], (struct _KTHREAD **)ProcessDxgProcess, &v96);
  v16 = (__int64)v96;
  if ( !v96 )
  {
    v61 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v61 + 24) = v105[0];
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v61 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v61);
LABEL_57:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v112);
    return (unsigned int)v16;
  }
  if ( !(_DWORD)v109 && !LODWORD(v108[0]) )
  {
    v62 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v62 + 24) = v16;
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_57;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111,
    v96);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v101,
    *(struct DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, v16, 2, v17, 0);
  LODWORD(v99) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v119);
  if ( (int)v99 < 0 )
  {
    v63 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v63 + 24) = v16;
    LODWORD(v16) = v99;
    *(_QWORD *)(v63 + 32) = (int)v99;
    WdLogEvent5_WdWarning(v63);
LABEL_115:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    if ( v102 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
    goto LABEL_57;
  }
  if ( !a2 )
  {
    v91 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v91 + 24) = v16;
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v91 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v91);
    goto LABEL_115;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v113);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v113);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
  v28 = ObjectA;
  if ( !ObjectA )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    v64[3] = v16;
LABEL_64:
    LODWORD(v16) = -1073741811;
    v65 = v98;
    v64[5] = -1073741811LL;
    v64[4] = v65;
    WdLogEvent5_WdWarning(v64);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113);
    goto LABEL_115;
  }
  _m_prefetchw((const void *)(ObjectA + 60));
  v29 = *(_DWORD *)(ObjectA + 60);
  do
  {
    if ( !v29 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      v64[3] = v96;
      v64[6] = 8690LL;
      goto LABEL_64;
    }
    v25 = (unsigned int)(v29 + 1);
    v30 = v29;
    v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 60), v25, v29);
  }
  while ( v30 != v29 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v113);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113);
  v104[0] = v28;
  if ( (*(_DWORD *)(v28 + 12) & 0x10) != 0 )
  {
    v66 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v66 + 24) = v28;
    LODWORD(v16) = -1073741823;
    *(_QWORD *)(v66 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v66);
LABEL_68:
    DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v104);
    goto LABEL_115;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v118, (struct DXGPROCESS *)ProcessDxgProcess);
  if ( (_BYTE)v31 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v119);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v118, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
    LODWORD(v99) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v119);
    if ( (int)v99 < 0 )
    {
      v67 = WdLogNewEntry5_WdWarning(v69, v68, v31, v70);
      v16 = (int)v99;
LABEL_67:
      *(_QWORD *)(v67 + 24) = v96;
      *(_QWORD *)(v67 + 32) = v16;
      WdLogEvent5_WdWarning(v67);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v118);
      goto LABEL_68;
    }
    v32 = 1LL;
  }
  if ( 80 * (unsigned __int64)v105[2] > 0xFFFFFFFF )
  {
    v67 = WdLogNewEntry5_WdWarning(v105[2], 0xFFFFFFFFLL, v31, v32);
    v16 = -1073741675LL;
    goto LABEL_67;
  }
  v114 = 80 * v105[2];
  v33 = 80LL * v105[2];
  if ( !is_mul_ok(v105[2], 0x50uLL) )
    v33 = -1LL;
  v95 = operator new(v33, 0x4B677844u, (POOL_TYPE)v32);
  if ( !v95 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
    v71[3] = v96;
    v71[4] = v105[2];
    v71[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v71);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v118);
    DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v104);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    if ( v102 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
    LODWORD(v16) = -1073741801;
    goto LABEL_57;
  }
  if ( (_DWORD)v109 )
  {
    v99 = (unsigned int)v109;
    v9 = operator new((unsigned int)v109, 0x4B677844u, PagedPool);
    v100 = v9;
    if ( !v9 )
      goto LABEL_74;
  }
  if ( LODWORD(v108[0]) )
  {
    v8 = operator new(LODWORD(v108[0]), 0x4B677844u, PagedPool);
    Src = v8;
    if ( !v8 )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v76, v36, v37);
      v72[3] = v96;
      v73 = LODWORD(v108[0]);
      goto LABEL_75;
    }
  }
  if ( LODWORD(Size[0]) )
  {
    v99 = LODWORD(Size[0]);
    v10 = (struct DXGRESOURCE *)operator new(LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v97 = v10;
    if ( !v10 )
    {
LABEL_74:
      v72 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v38, v36, v37);
      v72[3] = v96;
      v73 = v99;
LABEL_75:
      v72[4] = v73;
      StandardAllocation = -1073741801;
      v72[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v72);
LABEL_79:
      v42 = Src;
      v40 = v95;
LABEL_97:
      if ( v93 )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v120,
          (struct DXGPROCESS *)ProcessDxgProcess);
        v85 = (HIDWORD(v109) >> 6) & 0xFFFFFF;
        if ( v85 < *(_DWORD *)(ProcessDxgProcess + 224)
          && (v86 = *(_QWORD *)(ProcessDxgProcess + 208),
              v87 = *(_DWORD *)(v86 + 16LL * v85 + 8),
              HIDWORD(v109) >> 30 == ((v87 >> 4) & 3))
          && (v87 & 0x1000) == 0
          && (v87 & 0xF) != 0
          && (*(_BYTE *)(v86 + 16LL * v85 + 8) & 0xF) == 4 )
        {
          v88 = *(struct DXGRESOURCE **)(v86 + 16LL * v85);
          v97 = v88;
          if ( v88 && v85 < *(_DWORD *)(ProcessDxgProcess + 224) )
          {
            v89 = *(_DWORD *)(v86 + 16LL * v85 + 8);
            if ( HIDWORD(v109) >> 30 != ((v89 >> 4) & 3) || (v89 & 0x1000) != 0 )
            {
              v90 = v97;
            }
            else
            {
              v90 = v97;
              if ( (v89 & 0xF) != 0 )
                *(_DWORD *)(v86 + 16 * (((unsigned __int64)HIDWORD(v109) >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
          else
          {
            v90 = v88;
          }
        }
        else
        {
          v90 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v120);
        DXGDEVICE::DestroyAllocationInternal(v96, 0, 0LL, v90, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      goto LABEL_52;
    }
  }
  v39 = *(_QWORD *)(v16 + 16);
  if ( *(_QWORD *)(v28 + 72) == v39 )
  {
    v35 = v96;
    if ( *(_QWORD *)(v28 + 88) == *((_QWORD *)v96 + 357) )
    {
      v108[1] = (size_t)v9;
      Size[1] = (size_t)v8;
      *((_QWORD *)&v106 + 1) = v10;
      v40 = v95;
      *(_QWORD *)&v106 = v95;
      StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                             v96,
                             0,
                             (struct COREDEVICEACCESS *)v119,
                             v92,
                             0LL,
                             0LL,
                             0LL);
      v42 = Src;
      if ( StandardAllocation >= 0 )
        v93 = 1;
      goto LABEL_27;
    }
  }
  LODWORD(v99) = *(_DWORD *)(v28 + 12);
  if ( (v99 & 0x20) == 0 )
  {
    StandardAllocation = -1073741811;
    v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v39, v36, v37);
    v84[3] = v96;
    v84[4] = 0LL;
    v84[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v84);
    goto LABEL_96;
  }
  if ( *(_DWORD *)(v28 + 124) != v105[2] )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v39, v36, v37);
    v74[3] = v96;
    v74[4] = v105[2];
    v75 = *(unsigned int *)(v28 + 124);
LABEL_77:
    v74[5] = v75;
    v74[6] = -1073741811LL;
LABEL_78:
    WdLogEvent5_WdWarning(v74);
    StandardAllocation = -1073741811;
    goto LABEL_79;
  }
  v98 = *(_DWORD *)(v28 + 104);
  v77 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) != v98 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v39, v36, v37);
    v74[3] = v96;
    v74[4] = v77;
    v75 = *(unsigned int *)(v28 + 104);
    goto LABEL_77;
  }
  v78 = *(unsigned int *)(v28 + 184);
  if ( !(_DWORD)v78 && *(_DWORD *)(*(_QWORD *)(v39 + 16) + 1352LL) < 0x5000u )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v39, v78, v37);
    v74[3] = v96;
    v74[4] = -1073741811LL;
    goto LABEL_78;
  }
  v123 = 0;
  v125 = 0LL;
  v126 = 0;
  v124 = v78;
  v122 = *(_DWORD *)(v28 + 176);
  v123 = *(_DWORD *)(v28 + 180);
  LODWORD(v125) = 7;
  memset(v121, 0, 0x198uLL);
  v79 = v121[0] & 0xFFFFBEFF | (4 * (v99 & 0x40 | (32 * (v99 & 0x80)))) | 0x41;
  HIDWORD(v121[0]) = v105[0];
  LODWORD(v121[2]) = 4;
  v121[3] = &v122;
  v121[39] = *(_QWORD *)(v28 + 96);
  LODWORD(v121[40]) = v98;
  v121[41] = *(_QWORD *)(v28 + 192);
  v121[42] = *(_QWORD *)(v28 + 200);
  LODWORD(v121[6]) = *(_DWORD *)(v28 + 208);
  v121[43] = v8;
  LODWORD(v121[44]) = v108[0];
  v121[45] = v9;
  LODWORD(v121[46]) = v109;
  LODWORD(v121[0]) = ((unsigned __int16)v79 ^ (unsigned __int16)((_WORD)v99 << 7)) & 0x400 ^ v79 | 0x200;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v96,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v121,
                         (struct COREDEVICEACCESS *)v119);
  if ( StandardAllocation < 0 )
  {
LABEL_96:
    v40 = v95;
    v42 = Src;
    goto LABEL_51;
  }
  v93 = 1;
  v80 = v121[1];
  *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(ProcessDxgProcess, (DXGRESOURCEREFERENCE *)v115, v121[1]) + 120LL) = v28;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v115);
  memmove(v10, *(const void **)(v28 + 96), LODWORD(Size[0]));
  HIDWORD(v109) = v80;
  v40 = v95;
  *v95 = HIDWORD(v121[6]);
  v95[4] = v109;
  *((_QWORD *)v95 + 1) = v9;
  *(_QWORD *)&v106 = v95;
  *((_QWORD *)&v106 + 1) = v10;
  v42 = Src;
  Size[1] = (size_t)Src;
  v108[1] = (size_t)v9;
LABEL_27:
  v43 = (_QWORD *)v110;
  v44 = (_DWORD *)(v110 + 68);
  if ( v110 + 68 >= MmUserProbeAddress )
    v44 = (_DWORD *)MmUserProbeAddress;
  *v44 = HIDWORD(v109);
  v45 = v43 + 8;
  if ( (unsigned __int64)(v43 + 8) >= MmUserProbeAddress )
    v45 = (_DWORD *)MmUserProbeAddress;
  *v45 = v109;
  for ( i = 0; i < v105[2]; ++i )
  {
    v47 = 80LL * i;
    v48 = v106;
    v117 = v116 + (unsigned int)(*(_DWORD *)(v47 + v106 + 8) - LODWORD(v108[1]));
    v49 = v47 + v43[2];
    v50 = (_DWORD *)v49;
    if ( v49 >= MmUserProbeAddress )
      v50 = (_DWORD *)MmUserProbeAddress;
    *v50 = *(_DWORD *)(v47 + v106);
    v51 = (_DWORD *)(v49 + 16);
    if ( v49 + 16 >= MmUserProbeAddress )
      v51 = (_DWORD *)MmUserProbeAddress;
    *v51 = *(_DWORD *)(v47 + v48 + 16);
    v52 = (_QWORD *)(v49 + 8);
    if ( v49 + 8 >= MmUserProbeAddress )
      v52 = (_QWORD *)MmUserProbeAddress;
    *v52 = v117;
    v43 = (_QWORD *)v110;
  }
  if ( LODWORD(Size[0]) )
  {
    v53 = (void *)v43[3];
    v54 = LODWORD(Size[0]);
    v55 = (ULONG64)v53 + LODWORD(Size[0]);
    if ( v55 > MmUserProbeAddress || v55 <= (unsigned __int64)v53 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v53, v10, v54);
    v43 = (_QWORD *)v110;
  }
  if ( LODWORD(v108[0]) )
  {
    v81 = (void *)v43[5];
    v82 = LODWORD(v108[0]);
    v83 = (ULONG64)v81 + LODWORD(v108[0]);
    if ( v83 > MmUserProbeAddress || v83 <= (unsigned __int64)v81 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v81, v42, v82);
  }
  if ( (_DWORD)v109 )
  {
    v56 = *(void **)(v110 + 56);
    v57 = (unsigned int)v109;
    v58 = (ULONG64)v56 + (unsigned int)v109;
    if ( v58 > MmUserProbeAddress || v58 <= (unsigned __int64)v56 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v56, v9, v57);
  }
LABEL_51:
  if ( StandardAllocation < 0 )
    goto LABEL_97;
LABEL_52:
  operator delete(v9);
  operator delete(v42);
  operator delete(v40);
  operator delete(v10);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v118);
  DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v104);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  if ( v102 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v111);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v112);
  return (unsigned int)StandardAllocation;
}
