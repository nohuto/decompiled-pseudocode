/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C008E68C
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D2AA0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00015FC (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00016F4 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0011318 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00114CC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0096D28 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessDxgProcess; // r13
  PVOID v10; // r14
  PVOID v11; // r12
  PVOID v12; // rbx
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  SIZE_T v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  int StandardAllocation; // r14d
  void *v35; // r15
  _QWORD *v36; // r8
  _DWORD *v37; // rdx
  _DWORD *v38; // rdx
  unsigned int i; // r9d
  __int64 v40; // r10
  __int64 v41; // r11
  ULONG64 v42; // r8
  _DWORD *v43; // rdx
  _DWORD *v44; // rdx
  _QWORD *v45; // rdx
  void *v46; // rcx
  size_t v47; // r8
  ULONG64 v48; // rdx
  void *v49; // rcx
  size_t v50; // r8
  ULONG64 v51; // rdx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rdx
  unsigned int v71; // ecx
  int v72; // ebx
  _DWORD *v73; // rcx
  void *v74; // rcx
  size_t v75; // r8
  ULONG64 v76; // rdx
  _QWORD *v77; // rax
  unsigned int v78; // ecx
  __int64 v79; // r9
  unsigned int v80; // r8d
  struct DXGRESOURCE *v81; // rbx
  unsigned int v82; // ecx
  __int64 v83; // rax
  char v84; // [rsp+50h] [rbp-398h]
  void *Src; // [rsp+58h] [rbp-390h]
  struct DXGDEVICE *v86; // [rsp+60h] [rbp-388h] BYREF
  __int64 v87; // [rsp+68h] [rbp-380h]
  void *v88; // [rsp+70h] [rbp-378h]
  _BYTE v89[16]; // [rsp+78h] [rbp-370h] BYREF
  char v90; // [rsp+88h] [rbp-360h]
  int v91[2]; // [rsp+90h] [rbp-358h]
  struct DXGPROCESS *v92; // [rsp+98h] [rbp-350h]
  __int64 v93; // [rsp+A0h] [rbp-348h] BYREF
  ULONG64 v94; // [rsp+A8h] [rbp-340h]
  void *v95; // [rsp+B0h] [rbp-338h]
  _BYTE v96[16]; // [rsp+B8h] [rbp-330h] BYREF
  void *v97; // [rsp+C8h] [rbp-320h]
  _BYTE v98[16]; // [rsp+D0h] [rbp-318h] BYREF
  unsigned int v99[4]; // [rsp+E0h] [rbp-308h]
  __int128 v100; // [rsp+F0h] [rbp-2F8h]
  size_t Size[2]; // [rsp+100h] [rbp-2E8h]
  size_t v102[2]; // [rsp+110h] [rbp-2D8h]
  size_t v103[2]; // [rsp+120h] [rbp-2C8h]
  __int128 v104; // [rsp+130h] [rbp-2B8h]
  __int64 v105; // [rsp+140h] [rbp-2A8h]
  int v106; // [rsp+150h] [rbp-298h]
  size_t v107; // [rsp+158h] [rbp-290h]
  DXGSHAREDRESOURCE *v108; // [rsp+160h] [rbp-288h]
  _BYTE v109[24]; // [rsp+168h] [rbp-280h] BYREF
  _BYTE v110[96]; // [rsp+180h] [rbp-268h] BYREF
  _BYTE v111[32]; // [rsp+1E0h] [rbp-208h] BYREF
  _QWORD v112[52]; // [rsp+200h] [rbp-1E8h] BYREF
  int v113; // [rsp+3A0h] [rbp-48h] BYREF
  int v114; // [rsp+3A4h] [rbp-44h]
  int v115; // [rsp+3A8h] [rbp-40h]
  __int64 v116; // [rsp+3ACh] [rbp-3Ch]
  int v117; // [rsp+3B4h] [rbp-34h]

  v91[0] = a4;
  v93 = a3;
  v94 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v92 = (struct DXGPROCESS *)ProcessDxgProcess;
  v10 = 0LL;
  Src = 0LL;
  v11 = 0LL;
  v88 = 0LL;
  v12 = 0LL;
  v95 = 0LL;
  v84 = 0;
  if ( !ProcessDxgProcess )
  {
    v53 = WdLogNewEntry5_WdError(v8);
    LODWORD(v54) = -1073741811;
    *(_QWORD *)(v53 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v53);
    return (unsigned int)v54;
  }
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)v99 = *(_OWORD *)v13;
  v100 = *(_OWORD *)(v13 + 16);
  *(_OWORD *)Size = *(_OWORD *)(v13 + 32);
  *(_OWORD *)v102 = *(_OWORD *)(v13 + 48);
  *(_OWORD *)v103 = *(_OWORD *)(v13 + 64);
  v104 = *(_OWORD *)(v13 + 80);
  v105 = *(_QWORD *)(v13 + 96);
  v107 = v103[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v98, v99[0], (struct _KTHREAD **)ProcessDxgProcess, &v86);
  v18 = v86;
  if ( !v86 )
  {
    v55 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v55 + 24) = v99[0];
    LODWORD(v54) = -1073741811;
    *(_QWORD *)(v55 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v55);
LABEL_56:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v98);
    return (unsigned int)v54;
  }
  if ( !LODWORD(v103[0]) && !LODWORD(v102[0]) )
  {
    v56 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v56 + 24) = v18;
    LODWORD(v54) = -1073741811;
    *(_QWORD *)(v56 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v56);
    goto LABEL_56;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96,
    v86);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v89,
    *(struct DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)v18, 2, v19, 0);
  LODWORD(v87) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v110);
  if ( (int)v87 < 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    LODWORD(v54) = v87;
    v57[4] = (int)v87;
LABEL_62:
    v57[3] = v18;
    WdLogEvent5_WdWarning(v57);
LABEL_110:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    if ( v90 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
    goto LABEL_56;
  }
  if ( !a3 )
  {
    v83 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v83 + 24) = v18;
    LODWORD(v54) = -1073741811;
    *(_QWORD *)(v83 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v83);
    goto LABEL_110;
  }
  v24 = *(_QWORD *)(a3 + 16);
  if ( !v24 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v57[4] = v93;
    LODWORD(v54) = -1073741811;
    v57[5] = -1073741811LL;
    goto LABEL_62;
  }
  v108 = 0LL;
  if ( (*(_DWORD *)(v24 + 12) & 0x10) != 0 )
  {
    v58 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v58 + 24) = v24;
    LODWORD(v54) = -1073741823;
    *(_QWORD *)(v58 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v58);
    goto LABEL_110;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v109, (struct DXGPROCESS *)ProcessDxgProcess);
  if ( (_BYTE)v25 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v110);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v109, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
    LODWORD(v87) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v110);
    if ( (int)v87 < 0 )
    {
      v62 = WdLogNewEntry5_WdWarning(v60, v59, v25, v61);
      v54 = (int)v87;
LABEL_67:
      *(_QWORD *)(v62 + 24) = v18;
      *(_QWORD *)(v62 + 32) = v54;
      WdLogEvent5_WdWarning(v62);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v109);
      goto LABEL_110;
    }
    v26 = 1LL;
  }
  if ( 80 * (unsigned __int64)(unsigned int)v100 > 0xFFFFFFFF )
  {
    v62 = WdLogNewEntry5_WdWarning((unsigned int)v100, 0xFFFFFFFFLL, v25, v26);
    v54 = -1073741675LL;
    goto LABEL_67;
  }
  v106 = 80 * v100;
  v27 = 80LL * (unsigned int)v100;
  if ( !is_mul_ok((unsigned int)v100, 0x50uLL) )
    v27 = -1LL;
  v97 = operator new(v27, 0x4B677844u, (POOL_TYPE)v26);
  if ( !v97 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v63[3] = v18;
    v63[4] = (unsigned int)v100;
    v63[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v63);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v109);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    if ( v90 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
    LODWORD(v54) = -1073741801;
    goto LABEL_56;
  }
  if ( LODWORD(v103[0]) )
  {
    v87 = LODWORD(v103[0]);
    v11 = operator new(LODWORD(v103[0]), 0x4B677844u, PagedPool);
    v88 = v11;
    if ( !v11 )
      goto LABEL_72;
  }
  if ( LODWORD(v102[0]) )
  {
    v10 = operator new(LODWORD(v102[0]), 0x4B677844u, PagedPool);
    Src = v10;
    if ( !v10 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v28, v30, v31);
      v65 = LODWORD(v102[0]);
      goto LABEL_73;
    }
  }
  if ( LODWORD(Size[0]) )
  {
    v87 = LODWORD(Size[0]);
    v12 = operator new(LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v95 = v12;
    if ( !v12 )
    {
LABEL_72:
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v28, v30, v31);
      v65 = v87;
LABEL_73:
      v64[3] = v18;
      v64[4] = v65;
      StandardAllocation = -1073741801;
      v64[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v64);
LABEL_77:
      v35 = Src;
LABEL_95:
      if ( v84 )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v111,
          (struct DXGPROCESS *)ProcessDxgProcess);
        v78 = ((unsigned int)v104 >> 6) & 0xFFFFFF;
        if ( v78 < *(_DWORD *)(ProcessDxgProcess + 224)
          && (v79 = *(_QWORD *)(ProcessDxgProcess + 208),
              v80 = *(_DWORD *)(v79 + 16LL * v78 + 8),
              (unsigned int)v104 >> 30 == ((v80 >> 4) & 3))
          && (v80 & 0x1000) == 0
          && (v80 & 0xF) != 0
          && (*(_BYTE *)(v79 + 16LL * v78 + 8) & 0xF) == 4 )
        {
          v81 = *(struct DXGRESOURCE **)(v79 + 16LL * v78);
          if ( v81 )
          {
            if ( v78 < *(_DWORD *)(ProcessDxgProcess + 224) )
            {
              v82 = *(_DWORD *)(v79 + 16LL * v78 + 8);
              if ( (unsigned int)v104 >> 30 == ((v82 >> 4) & 3) && (v82 & 0x1000) == 0 && (v82 & 0xF) != 0 )
                *(_DWORD *)(v79 + 16 * (((unsigned __int64)v104 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
        else
        {
          v81 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v111);
        DXGDEVICE::DestroyAllocationInternal(v18, 0, 0LL, v81, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      goto LABEL_49;
    }
  }
  v33 = *((_QWORD *)v18 + 2);
  if ( *(_QWORD *)(v24 + 72) == v33 && *(_QWORD *)(v24 + 88) == *((_QWORD *)v18 + 357) )
  {
    v103[1] = (size_t)v11;
    v102[1] = (size_t)v10;
    Size[1] = (size_t)v12;
    *((_QWORD *)&v100 + 1) = v97;
    StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                           v18,
                           0,
                           (struct COREDEVICEACCESS *)v110,
                           v91[0],
                           0LL,
                           0LL,
                           0LL);
    v35 = Src;
    if ( StandardAllocation >= 0 )
      v84 = 1;
    goto LABEL_24;
  }
  v91[0] = *(_DWORD *)(v24 + 12);
  if ( (v91[0] & 0x20) == 0 )
  {
    StandardAllocation = -1073741811;
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v28, v30, v31);
    v77[3] = v18;
    v77[4] = v93;
    v77[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v77);
    goto LABEL_94;
  }
  if ( *(_DWORD *)(v24 + 124) != (_DWORD)v100 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v28, v30, v31);
    v66[3] = v18;
    v66[4] = (unsigned int)v100;
    v67 = *(unsigned int *)(v24 + 124);
LABEL_75:
    v66[5] = v67;
    v66[6] = -1073741811LL;
LABEL_76:
    WdLogEvent5_WdWarning(v66);
    StandardAllocation = -1073741811;
    goto LABEL_77;
  }
  LODWORD(v87) = *(_DWORD *)(v24 + 104);
  v69 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) != (_DWORD)v87 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v28, v30, v31);
    v66[3] = v18;
    v66[4] = v69;
    v67 = *(unsigned int *)(v24 + 104);
    goto LABEL_75;
  }
  v70 = *(unsigned int *)(v24 + 184);
  if ( !(_DWORD)v70 && *(_DWORD *)(*(_QWORD *)(v33 + 16) + 1352LL) < 0x5000u )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v70, v30, v31);
    v66[3] = v18;
    v66[4] = -1073741811LL;
    goto LABEL_76;
  }
  v114 = 0;
  v116 = 0LL;
  v117 = 0;
  v115 = v70;
  v113 = *(_DWORD *)(v24 + 176);
  v114 = *(_DWORD *)(v24 + 180);
  LODWORD(v116) = 7;
  memset(v112, 0, 0x198uLL);
  v71 = v112[0] & 0xFFFFBEFF | (4 * (v91[0] & 0x40 | (32 * (v91[0] & 0x80)))) | 0x41;
  HIDWORD(v112[0]) = v99[0];
  LODWORD(v112[2]) = 4;
  v112[3] = &v113;
  v112[39] = *(_QWORD *)(v24 + 96);
  LODWORD(v112[40]) = v87;
  v112[41] = *(_QWORD *)(v24 + 192);
  v112[42] = *(_QWORD *)(v24 + 200);
  LODWORD(v112[6]) = *(_DWORD *)(v24 + 208);
  v112[43] = v10;
  LODWORD(v112[44]) = v102[0];
  v112[45] = v11;
  LODWORD(v112[46]) = v103[0];
  LODWORD(v112[0]) = ((unsigned __int16)v71 ^ (unsigned __int16)(LOWORD(v91[0]) << 7)) & 0x400 ^ v71 | 0x200;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v18,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v112,
                         (struct COREDEVICEACCESS *)v110);
  if ( StandardAllocation < 0 )
  {
LABEL_94:
    v35 = Src;
    goto LABEL_48;
  }
  v84 = 1;
  v72 = v112[1];
  *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(ProcessDxgProcess, (DXGRESOURCEREFERENCE *)&v93, v112[1]) + 120LL) = v24;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v93);
  memmove(v95, *(const void **)(v24 + 96), LODWORD(Size[0]));
  LODWORD(v104) = v72;
  v73 = v97;
  *(_DWORD *)v97 = HIDWORD(v112[6]);
  v73[4] = v103[0];
  *((_QWORD *)v73 + 1) = v11;
  *((_QWORD *)&v100 + 1) = v73;
  v12 = v95;
  Size[1] = (size_t)v95;
  v35 = Src;
  v102[1] = (size_t)Src;
  v103[1] = (size_t)v11;
LABEL_24:
  v36 = (_QWORD *)v94;
  v37 = (_DWORD *)(v94 + 80);
  if ( v94 + 80 >= MmUserProbeAddress )
    v37 = (_DWORD *)MmUserProbeAddress;
  *v37 = v104;
  v38 = v36 + 8;
  if ( (unsigned __int64)(v36 + 8) >= MmUserProbeAddress )
    v38 = (_DWORD *)MmUserProbeAddress;
  *v38 = v103[0];
  for ( i = 0; i < (unsigned int)v100; ++i )
  {
    v40 = 80LL * i;
    v41 = *((_QWORD *)&v100 + 1);
    *(_QWORD *)v91 = v107 + (unsigned int)(*(_DWORD *)(v40 + *((_QWORD *)&v100 + 1) + 8) - LODWORD(v103[1]));
    v42 = v40 + v36[3];
    v43 = (_DWORD *)v42;
    if ( v42 >= MmUserProbeAddress )
      v43 = (_DWORD *)MmUserProbeAddress;
    *v43 = *(_DWORD *)(v40 + *((_QWORD *)&v100 + 1));
    v44 = (_DWORD *)(v42 + 16);
    if ( v42 + 16 >= MmUserProbeAddress )
      v44 = (_DWORD *)MmUserProbeAddress;
    *v44 = *(_DWORD *)(v40 + v41 + 16);
    v45 = (_QWORD *)(v42 + 8);
    if ( v42 + 8 >= MmUserProbeAddress )
      v45 = (_QWORD *)MmUserProbeAddress;
    *v45 = *(_QWORD *)v91;
    v18 = v86;
    v36 = (_QWORD *)v94;
  }
  if ( LODWORD(Size[0]) )
  {
    v46 = (void *)v36[5];
    v47 = LODWORD(Size[0]);
    v48 = (ULONG64)v46 + LODWORD(Size[0]);
    if ( v48 > MmUserProbeAddress || v48 <= (unsigned __int64)v46 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v46, v12, v47);
    v18 = v86;
    v36 = (_QWORD *)v94;
  }
  if ( LODWORD(v102[0]) )
  {
    v74 = (void *)v36[7];
    v75 = LODWORD(v102[0]);
    v76 = (ULONG64)v74 + LODWORD(v102[0]);
    if ( v76 > MmUserProbeAddress || v76 <= (unsigned __int64)v74 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v74, v35, v75);
    v18 = v86;
  }
  if ( LODWORD(v103[0]) )
  {
    v49 = *(void **)(v94 + 72);
    v50 = LODWORD(v103[0]);
    v51 = (ULONG64)v49 + LODWORD(v103[0]);
    if ( v51 > MmUserProbeAddress || v51 <= (unsigned __int64)v49 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v49, v11, v50);
    v18 = v86;
  }
LABEL_48:
  if ( StandardAllocation < 0 )
    goto LABEL_95;
LABEL_49:
  operator delete(v11);
  operator delete(v35);
  operator delete(v97);
  operator delete(v95);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v109);
  if ( v108 )
    DXGSHAREDRESOURCE::ReleaseReference(v108, 0LL, 0);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
  if ( v90 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v96);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v98);
  return (unsigned int)StandardAllocation;
}
