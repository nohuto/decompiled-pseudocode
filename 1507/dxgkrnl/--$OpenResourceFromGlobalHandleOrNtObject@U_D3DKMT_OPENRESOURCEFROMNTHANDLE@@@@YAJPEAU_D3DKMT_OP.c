/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00A94F0 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00013C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00013F8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B52C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00AE824 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_61_--ENSURE_SHARED_.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r13
  void *v8; // r14
  void *v9; // r12
  void *v10; // rbx
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  int StandardAllocation; // r14d
  void *v33; // r15
  _QWORD *v34; // r8
  _DWORD *v35; // rdx
  _DWORD *v36; // rdx
  unsigned int i; // r9d
  __int64 v38; // r10
  __int64 v39; // r11
  ULONG64 v40; // r8
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  _QWORD *v43; // rdx
  void *v44; // rcx
  size_t v45; // r8
  ULONG64 v46; // rdx
  void *v47; // rcx
  size_t v48; // r8
  ULONG64 v49; // rdx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rdx
  int v69; // ebx
  _DWORD *v70; // rcx
  void *v71; // rcx
  size_t v72; // r8
  ULONG64 v73; // rdx
  _QWORD *v74; // rax
  unsigned int v75; // ecx
  __int64 v76; // r9
  unsigned int v77; // r8d
  struct DXGRESOURCE *v78; // rbx
  unsigned int v79; // ecx
  __int64 v80; // rax
  char v81; // [rsp+50h] [rbp-368h]
  void *Src; // [rsp+58h] [rbp-360h]
  struct DXGDEVICE *v83; // [rsp+60h] [rbp-358h] BYREF
  __int64 v84; // [rsp+68h] [rbp-350h] BYREF
  char v85; // [rsp+70h] [rbp-348h]
  __int64 v86; // [rsp+78h] [rbp-340h]
  void *v87; // [rsp+80h] [rbp-338h]
  __int64 v88; // [rsp+88h] [rbp-330h] BYREF
  __int64 v89; // [rsp+90h] [rbp-328h] BYREF
  int v90[2]; // [rsp+98h] [rbp-320h]
  struct DXGPROCESS *v91; // [rsp+A0h] [rbp-318h]
  ULONG64 v92; // [rsp+A8h] [rbp-310h]
  void *v93; // [rsp+B0h] [rbp-308h]
  _BYTE v94[16]; // [rsp+B8h] [rbp-300h] BYREF
  void *v95; // [rsp+C8h] [rbp-2F0h]
  _BYTE v96[16]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned int v97[4]; // [rsp+E0h] [rbp-2D8h]
  __int128 v98; // [rsp+F0h] [rbp-2C8h]
  size_t Size[2]; // [rsp+100h] [rbp-2B8h]
  size_t v100[2]; // [rsp+110h] [rbp-2A8h]
  size_t v101[2]; // [rsp+120h] [rbp-298h]
  __int128 v102; // [rsp+130h] [rbp-288h]
  __int64 v103; // [rsp+140h] [rbp-278h]
  size_t v104; // [rsp+150h] [rbp-268h]
  _BYTE v105[24]; // [rsp+158h] [rbp-260h] BYREF
  int v106; // [rsp+170h] [rbp-248h]
  _BYTE v107[80]; // [rsp+180h] [rbp-238h] BYREF
  _BYTE v108[32]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _QWORD v109[48]; // [rsp+1F0h] [rbp-1C8h] BYREF
  int v110; // [rsp+370h] [rbp-48h] BYREF
  int v111; // [rsp+374h] [rbp-44h]
  int v112; // [rsp+378h] [rbp-40h]
  __int64 v113; // [rsp+37Ch] [rbp-3Ch]
  int v114; // [rsp+384h] [rbp-34h]

  v90[0] = a4;
  v88 = a3;
  v92 = a1;
  Current = DXGPROCESS::GetCurrent();
  v91 = Current;
  v8 = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v87 = 0LL;
  v10 = 0LL;
  v93 = 0LL;
  v81 = 0;
  if ( !Current )
  {
    v51 = WdLogNewEntry5_WdError(v6);
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v51 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v51);
    return (unsigned int)v52;
  }
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v97 = *(_OWORD *)v11;
  v98 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)Size = *(_OWORD *)(v11 + 32);
  *(_OWORD *)v100 = *(_OWORD *)(v11 + 48);
  *(_OWORD *)v101 = *(_OWORD *)(v11 + 64);
  v102 = *(_OWORD *)(v11 + 80);
  v103 = *(_QWORD *)(v11 + 96);
  v104 = v101[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v96, v97[0], (struct _KTHREAD **)Current, &v83);
  v16 = v83;
  if ( !v83 )
  {
    v53 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v53 + 24) = v97[0];
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v53 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v53);
LABEL_54:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v96);
    return (unsigned int)v52;
  }
  if ( !LODWORD(v101[0]) && !LODWORD(v100[0]) )
  {
    v54 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v54 + 24) = v16;
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v54);
    goto LABEL_54;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94,
    v83);
  v84 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  v85 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v16, 2, v17, 0);
  LODWORD(v86) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107);
  if ( (int)v86 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    LODWORD(v52) = v86;
    v55[4] = (int)v86;
LABEL_60:
    v55[3] = v16;
    WdLogEvent5_WdWarning(v55);
LABEL_109:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
    goto LABEL_54;
  }
  if ( !a3 )
  {
    v80 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v80 + 24) = v16;
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v80 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v80);
    goto LABEL_109;
  }
  v22 = *(_QWORD *)(a3 + 16);
  if ( !v22 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v55[4] = v88;
    LODWORD(v52) = -1073741811;
    v55[5] = -1073741811LL;
    goto LABEL_60;
  }
  v89 = 0LL;
  if ( (*(_DWORD *)(v22 + 12) & 0x10) != 0 )
  {
    v56 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v56 + 24) = v22;
    LODWORD(v52) = -1073741823;
    *(_QWORD *)(v56 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v56);
LABEL_64:
    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v89);
    goto LABEL_109;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v105, Current);
  if ( (_BYTE)v23 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v107);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v105, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
    LODWORD(v86) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107);
    if ( (int)v86 < 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v59, v58, v23, v60);
      v52 = (int)v86;
LABEL_63:
      *(_QWORD *)(v57 + 24) = v16;
      *(_QWORD *)(v57 + 32) = v52;
      WdLogEvent5_WdWarning(v57);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v105);
      goto LABEL_64;
    }
    v24 = 1LL;
  }
  if ( 80 * (unsigned __int64)(unsigned int)v98 > 0xFFFFFFFF )
  {
    v57 = WdLogNewEntry5_WdWarning((unsigned int)v98, 0xFFFFFFFFLL, v23, v24);
    v52 = -1073741675LL;
    goto LABEL_63;
  }
  v106 = 80 * v98;
  v25 = 80LL * (unsigned int)v98;
  if ( !is_mul_ok((unsigned int)v98, 0x50uLL) )
    v25 = -1LL;
  v95 = operator new[](v25, 0x4B677844u, (enum _POOL_TYPE)v24);
  if ( !v95 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    v61[3] = v16;
    v61[4] = (unsigned int)v98;
    v61[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v105);
    OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v89);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
    LODWORD(v52) = -1073741801;
    goto LABEL_54;
  }
  if ( LODWORD(v101[0]) )
  {
    v86 = LODWORD(v101[0]);
    v9 = operator new[](LODWORD(v101[0]), 0x4B677844u, PagedPool);
    v87 = v9;
    if ( !v9 )
      goto LABEL_70;
  }
  if ( LODWORD(v100[0]) )
  {
    v8 = operator new[](LODWORD(v100[0]), 0x4B677844u, PagedPool);
    Src = v8;
    if ( !v8 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v26, v28, v29);
      v63 = LODWORD(v100[0]);
      goto LABEL_71;
    }
  }
  if ( LODWORD(Size[0]) )
  {
    v86 = LODWORD(Size[0]);
    v10 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v93 = v10;
    if ( !v10 )
    {
LABEL_70:
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v26, v28, v29);
      v63 = v86;
LABEL_71:
      v62[3] = v16;
      v62[4] = v63;
      StandardAllocation = -1073741801;
      v62[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v62);
LABEL_75:
      v33 = Src;
LABEL_93:
      if ( v81 )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v108, Current);
        v75 = ((unsigned int)v102 >> 6) & 0xFFFFFF;
        if ( v75 < *((_DWORD *)Current + 58)
          && (v76 = *((_QWORD *)Current + 27),
              v77 = *(_DWORD *)(v76 + 16LL * v75 + 8),
              (unsigned int)v102 >> 30 == ((v77 >> 4) & 3))
          && (v77 & 0x1000) == 0
          && (v77 & 0xF) != 0
          && (*(_BYTE *)(v76 + 16LL * v75 + 8) & 0xF) == 4 )
        {
          v78 = *(struct DXGRESOURCE **)(v76 + 16LL * v75);
          if ( v78 )
          {
            if ( v75 < *((_DWORD *)Current + 58) )
            {
              v79 = *(_DWORD *)(v76 + 16LL * v75 + 8);
              if ( (unsigned int)v102 >> 30 == ((v79 >> 4) & 3) && (v79 & 0x1000) == 0 && (v79 & 0xF) != 0 )
                *(_DWORD *)(v76 + 16 * (((unsigned __int64)v102 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
        else
        {
          v78 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v108);
        DXGDEVICE::DestroyAllocationInternal(v16, 0, 0LL, v78, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      goto LABEL_49;
    }
  }
  v31 = *((_QWORD *)v16 + 2);
  if ( *(_QWORD *)(v22 + 72) == v31 && *(_QWORD *)(v22 + 80) == *((_QWORD *)v16 + 2338) )
  {
    v101[1] = (size_t)v9;
    v100[1] = (size_t)v8;
    Size[1] = (size_t)v10;
    *((_QWORD *)&v98 + 1) = v95;
    StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                           v16,
                           0,
                           (struct COREDEVICEACCESS *)v107,
                           v90[0],
                           0LL,
                           0LL,
                           0LL);
    v33 = Src;
    if ( StandardAllocation >= 0 )
      v81 = 1;
    goto LABEL_24;
  }
  v90[0] = *(_DWORD *)(v22 + 12);
  if ( (v90[0] & 0x20) == 0 )
  {
    StandardAllocation = -1073741811;
    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v26, v28, v29);
    v74[3] = v16;
    v74[4] = v88;
    v74[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v74);
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v22 + 116) != (_DWORD)v98 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v26, v28, v29);
    v64[3] = v16;
    v64[4] = (unsigned int)v98;
    v65 = *(unsigned int *)(v22 + 116);
LABEL_73:
    v64[5] = v65;
    v64[6] = -1073741811LL;
LABEL_74:
    WdLogEvent5_WdWarning(v64);
    StandardAllocation = -1073741811;
    goto LABEL_75;
  }
  LODWORD(v86) = *(_DWORD *)(v22 + 96);
  v67 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) != (_DWORD)v86 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v26, v28, v29);
    v64[3] = v16;
    v64[4] = v67;
    v65 = *(unsigned int *)(v22 + 96);
    goto LABEL_73;
  }
  v68 = *(unsigned int *)(v22 + 176);
  if ( !(_DWORD)v68 && *(_DWORD *)(*(_QWORD *)(v31 + 16) + 1256LL) < 0x5000u )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v68, v28, v29);
    v64[3] = v16;
    v64[4] = -1073741811LL;
    goto LABEL_74;
  }
  v111 = 0;
  v113 = 0LL;
  v114 = 0;
  v112 = v68;
  v110 = *(_DWORD *)(v22 + 168);
  v111 = *(_DWORD *)(v22 + 172);
  LODWORD(v113) = 7;
  memset(v109, 0, 376);
  HIDWORD(v109[0]) = v97[0];
  LODWORD(v109[2]) = 4;
  v109[3] = &v110;
  v109[39] = *(_QWORD *)(v22 + 88);
  LODWORD(v109[40]) = v86;
  v109[41] = *(_QWORD *)(v22 + 184);
  v109[42] = *(_QWORD *)(v22 + 192);
  LODWORD(v109[6]) = *(_DWORD *)(v22 + 200);
  v109[43] = v8;
  LODWORD(v109[44]) = v100[0];
  v109[45] = v9;
  LODWORD(v109[46]) = v101[0];
  LODWORD(v109[0]) = ((unsigned int)v90[0] >> 7) & 1 | (4 * (v90[0] & 0x40 | 0x10)) | 0x200;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v16,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v109,
                         (struct COREDEVICEACCESS *)v107);
  if ( StandardAllocation < 0 )
  {
LABEL_92:
    v33 = Src;
    goto LABEL_48;
  }
  v81 = 1;
  v69 = v109[1];
  *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v88, v109[1]) + 120LL) = v22;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88);
  memmove(v93, *(const void **)(v22 + 88), LODWORD(Size[0]));
  LODWORD(v102) = v69;
  v70 = v95;
  *(_DWORD *)v95 = HIDWORD(v109[6]);
  v70[4] = v101[0];
  *((_QWORD *)v70 + 1) = v9;
  *((_QWORD *)&v98 + 1) = v70;
  v10 = v93;
  Size[1] = (size_t)v93;
  v33 = Src;
  v100[1] = (size_t)Src;
  v101[1] = (size_t)v9;
LABEL_24:
  v34 = (_QWORD *)v92;
  v35 = (_DWORD *)(v92 + 80);
  if ( v92 + 80 >= MmUserProbeAddress )
    v35 = (_DWORD *)MmUserProbeAddress;
  *v35 = v102;
  v36 = v34 + 8;
  if ( (unsigned __int64)(v34 + 8) >= MmUserProbeAddress )
    v36 = (_DWORD *)MmUserProbeAddress;
  *v36 = v101[0];
  for ( i = 0; i < (unsigned int)v98; ++i )
  {
    v38 = 80LL * i;
    v39 = *((_QWORD *)&v98 + 1);
    *(_QWORD *)v90 = v104 + (unsigned int)(*(_DWORD *)(v38 + *((_QWORD *)&v98 + 1) + 8) - LODWORD(v101[1]));
    v40 = v38 + v34[3];
    v41 = (_DWORD *)v40;
    if ( v40 >= MmUserProbeAddress )
      v41 = (_DWORD *)MmUserProbeAddress;
    *v41 = *(_DWORD *)(v38 + *((_QWORD *)&v98 + 1));
    v42 = (_DWORD *)(v40 + 16);
    if ( v40 + 16 >= MmUserProbeAddress )
      v42 = (_DWORD *)MmUserProbeAddress;
    *v42 = *(_DWORD *)(v38 + v39 + 16);
    v43 = (_QWORD *)(v40 + 8);
    if ( v40 + 8 >= MmUserProbeAddress )
      v43 = (_QWORD *)MmUserProbeAddress;
    *v43 = *(_QWORD *)v90;
    v16 = v83;
    v34 = (_QWORD *)v92;
  }
  if ( LODWORD(Size[0]) )
  {
    v44 = (void *)v34[5];
    v45 = LODWORD(Size[0]);
    v46 = (ULONG64)v44 + LODWORD(Size[0]);
    if ( v46 > MmUserProbeAddress || v46 <= (unsigned __int64)v44 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v44, v10, v45);
    v16 = v83;
    v34 = (_QWORD *)v92;
  }
  if ( LODWORD(v100[0]) )
  {
    v71 = (void *)v34[7];
    v72 = LODWORD(v100[0]);
    v73 = (ULONG64)v71 + LODWORD(v100[0]);
    if ( v73 > MmUserProbeAddress || v73 <= (unsigned __int64)v71 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v71, v33, v72);
    v16 = v83;
  }
  if ( LODWORD(v101[0]) )
  {
    v47 = *(void **)(v92 + 72);
    v48 = LODWORD(v101[0]);
    v49 = (ULONG64)v47 + LODWORD(v101[0]);
    if ( v49 > MmUserProbeAddress || v49 <= (unsigned __int64)v47 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v47, v9, v48);
    v16 = v83;
  }
LABEL_48:
  if ( StandardAllocation < 0 )
    goto LABEL_93;
LABEL_49:
  operator delete(v9);
  operator delete(v33);
  operator delete(v95);
  operator delete(v93);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v105);
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v89);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v107);
  if ( v85 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v84);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v94);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v96);
  return (unsigned int)StandardAllocation;
}
