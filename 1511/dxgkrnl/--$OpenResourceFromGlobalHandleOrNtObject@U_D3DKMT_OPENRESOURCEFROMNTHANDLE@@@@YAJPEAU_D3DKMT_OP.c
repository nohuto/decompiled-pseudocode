/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C0061660 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
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
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00080EC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0010CC0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0011020 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001102C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C0061864 @ 0x1C0061864 (sub_1C0061864.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C006E3D0 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  int v69; // ecx
  int v70; // ebx
  _DWORD *v71; // rcx
  void *v72; // rcx
  size_t v73; // r8
  ULONG64 v74; // rdx
  _QWORD *v75; // rax
  unsigned int v76; // ecx
  __int64 v77; // r9
  unsigned int v78; // r8d
  struct DXGRESOURCE *v79; // rbx
  unsigned int v80; // ecx
  __int64 v81; // rax
  char v82; // [rsp+50h] [rbp-378h]
  void *Src; // [rsp+58h] [rbp-370h]
  struct DXGDEVICE *v84; // [rsp+60h] [rbp-368h] BYREF
  __int64 v85; // [rsp+68h] [rbp-360h]
  _BYTE v86[8]; // [rsp+70h] [rbp-358h] BYREF
  char v87; // [rsp+78h] [rbp-350h]
  void *v88; // [rsp+80h] [rbp-348h]
  __int64 v89; // [rsp+88h] [rbp-340h] BYREF
  DXGSHAREDRESOURCE *v90; // [rsp+90h] [rbp-338h] BYREF
  int v91[2]; // [rsp+98h] [rbp-330h]
  struct DXGPROCESS *v92; // [rsp+A0h] [rbp-328h]
  ULONG64 v93; // [rsp+A8h] [rbp-320h]
  void *v94; // [rsp+B0h] [rbp-318h]
  _BYTE v95[16]; // [rsp+B8h] [rbp-310h] BYREF
  void *v96; // [rsp+C8h] [rbp-300h]
  _BYTE v97[16]; // [rsp+D0h] [rbp-2F8h] BYREF
  unsigned int v98[4]; // [rsp+E0h] [rbp-2E8h]
  __int128 v99; // [rsp+F0h] [rbp-2D8h]
  size_t Size[2]; // [rsp+100h] [rbp-2C8h]
  size_t v101[2]; // [rsp+110h] [rbp-2B8h]
  size_t v102[2]; // [rsp+120h] [rbp-2A8h]
  __int128 v103; // [rsp+130h] [rbp-298h]
  __int64 v104; // [rsp+140h] [rbp-288h]
  size_t v105; // [rsp+150h] [rbp-278h]
  _BYTE v106[24]; // [rsp+158h] [rbp-270h] BYREF
  int v107; // [rsp+170h] [rbp-258h]
  _BYTE v108[80]; // [rsp+180h] [rbp-248h] BYREF
  _BYTE v109[32]; // [rsp+1D0h] [rbp-1F8h] BYREF
  _QWORD v110[50]; // [rsp+1F0h] [rbp-1D8h] BYREF
  int v111; // [rsp+380h] [rbp-48h] BYREF
  int v112; // [rsp+384h] [rbp-44h]
  int v113; // [rsp+388h] [rbp-40h]
  __int64 v114; // [rsp+38Ch] [rbp-3Ch]
  int v115; // [rsp+394h] [rbp-34h]

  v91[0] = a4;
  v89 = a3;
  v93 = a1;
  Current = DXGPROCESS::GetCurrent();
  v92 = Current;
  v8 = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v88 = 0LL;
  v10 = 0LL;
  v94 = 0LL;
  v82 = 0;
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
  *(_OWORD *)v98 = *(_OWORD *)v11;
  v99 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)Size = *(_OWORD *)(v11 + 32);
  *(_OWORD *)v101 = *(_OWORD *)(v11 + 48);
  *(_OWORD *)v102 = *(_OWORD *)(v11 + 64);
  v103 = *(_OWORD *)(v11 + 80);
  v104 = *(_QWORD *)(v11 + 96);
  v105 = v102[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v97, v98[0], (struct _KTHREAD **)Current, &v84);
  v16 = v84;
  if ( !v84 )
  {
    v53 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v53 + 24) = v98[0];
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v53 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v53);
LABEL_54:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v97);
    return (unsigned int)v52;
  }
  if ( !LODWORD(v102[0]) && !LODWORD(v101[0]) )
  {
    v54 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v54 + 24) = v16;
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v54);
    goto LABEL_54;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v95,
    v84);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v86,
    *(struct DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v108, (__int64)v16, 2, v17, 0);
  LODWORD(v85) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v108);
  if ( (int)v85 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    LODWORD(v52) = v85;
    v55[4] = (int)v85;
LABEL_60:
    v55[3] = v16;
    WdLogEvent5_WdWarning(v55);
LABEL_109:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    if ( v87 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v95);
    goto LABEL_54;
  }
  if ( !a3 )
  {
    v81 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v81 + 24) = v16;
    LODWORD(v52) = -1073741811;
    *(_QWORD *)(v81 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v81);
    goto LABEL_109;
  }
  v22 = *(_QWORD *)(a3 + 16);
  if ( !v22 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v55[4] = v89;
    LODWORD(v52) = -1073741811;
    v55[5] = -1073741811LL;
    goto LABEL_60;
  }
  v90 = 0LL;
  if ( (*(_DWORD *)(v22 + 12) & 0x10) != 0 )
  {
    v56 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v56 + 24) = v22;
    LODWORD(v52) = -1073741823;
    *(_QWORD *)(v56 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v56);
LABEL_64:
    sub_1C0061864(&v90);
    goto LABEL_109;
  }
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v106, Current);
  if ( (_BYTE)v23 )
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v108);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
    DXGUSERCRIT::Acquire((DXGUSERCRIT *)v106, 1u);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
    LODWORD(v85) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v108);
    if ( (int)v85 < 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v59, v58, v23, v60);
      v52 = (int)v85;
LABEL_63:
      *(_QWORD *)(v57 + 24) = v16;
      *(_QWORD *)(v57 + 32) = v52;
      WdLogEvent5_WdWarning(v57);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v106);
      goto LABEL_64;
    }
    v24 = 1LL;
  }
  if ( 80 * (unsigned __int64)(unsigned int)v99 > 0xFFFFFFFF )
  {
    v57 = WdLogNewEntry5_WdWarning((unsigned int)v99, 0xFFFFFFFFLL, v23, v24);
    v52 = -1073741675LL;
    goto LABEL_63;
  }
  v107 = 80 * v99;
  v25 = 80LL * (unsigned int)v99;
  if ( !is_mul_ok((unsigned int)v99, 0x50uLL) )
    v25 = -1LL;
  v96 = operator new[](v25, 0x4B677844u, (enum _POOL_TYPE)v24);
  if ( !v96 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    v61[3] = v16;
    v61[4] = (unsigned int)v99;
    v61[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v106);
    sub_1C0061864(&v90);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
    if ( v87 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v95);
    LODWORD(v52) = -1073741801;
    goto LABEL_54;
  }
  if ( LODWORD(v102[0]) )
  {
    v85 = LODWORD(v102[0]);
    v9 = operator new[](LODWORD(v102[0]), 0x4B677844u, PagedPool);
    v88 = v9;
    if ( !v9 )
      goto LABEL_70;
  }
  if ( LODWORD(v101[0]) )
  {
    v8 = operator new[](LODWORD(v101[0]), 0x4B677844u, PagedPool);
    Src = v8;
    if ( !v8 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v26, v28, v29);
      v63 = LODWORD(v101[0]);
      goto LABEL_71;
    }
  }
  if ( LODWORD(Size[0]) )
  {
    v85 = LODWORD(Size[0]);
    v10 = operator new[](LODWORD(Size[0]), 0x4B677844u, PagedPool);
    v94 = v10;
    if ( !v10 )
    {
LABEL_70:
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v26, v28, v29);
      v63 = v85;
LABEL_71:
      v62[3] = v16;
      v62[4] = v63;
      StandardAllocation = -1073741801;
      v62[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v62);
LABEL_75:
      v33 = Src;
LABEL_93:
      if ( v82 )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v109, Current);
        v76 = ((unsigned int)v103 >> 6) & 0xFFFFFF;
        if ( v76 < *((_DWORD *)Current + 58)
          && (v77 = *((_QWORD *)Current + 27),
              v78 = *(_DWORD *)(v77 + 16LL * v76 + 8),
              (unsigned int)v103 >> 30 == ((v78 >> 4) & 3))
          && (v78 & 0x1000) == 0
          && (v78 & 0xF) != 0
          && (*(_BYTE *)(v77 + 16LL * v76 + 8) & 0xF) == 4 )
        {
          v79 = *(struct DXGRESOURCE **)(v77 + 16LL * v76);
          if ( v79 )
          {
            if ( v76 < *((_DWORD *)Current + 58) )
            {
              v80 = *(_DWORD *)(v77 + 16LL * v76 + 8);
              if ( (unsigned int)v103 >> 30 == ((v80 >> 4) & 3) && (v80 & 0x1000) == 0 && (v80 & 0xF) != 0 )
                *(_DWORD *)(v77 + 16 * (((unsigned __int64)v103 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
        else
        {
          v79 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v109);
        DXGDEVICE::DestroyAllocationInternal(v16, 0, 0LL, v79, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      goto LABEL_49;
    }
  }
  v31 = *((_QWORD *)v16 + 2);
  if ( *(_QWORD *)(v22 + 72) == v31 && *(_QWORD *)(v22 + 80) == *((_QWORD *)v16 + 354) )
  {
    v102[1] = (size_t)v9;
    v101[1] = (size_t)v8;
    Size[1] = (size_t)v10;
    *((_QWORD *)&v99 + 1) = v96;
    StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                           v16,
                           0,
                           (struct COREDEVICEACCESS *)v108,
                           v91[0],
                           0LL,
                           0LL,
                           0LL);
    v33 = Src;
    if ( StandardAllocation >= 0 )
      v82 = 1;
    goto LABEL_24;
  }
  v91[0] = *(_DWORD *)(v22 + 12);
  if ( (v91[0] & 0x20) == 0 )
  {
    StandardAllocation = -1073741811;
    v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v26, v28, v29);
    v75[3] = v16;
    v75[4] = v89;
    v75[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v75);
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v22 + 116) != (_DWORD)v99 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v26, v28, v29);
    v64[3] = v16;
    v64[4] = (unsigned int)v99;
    v65 = *(unsigned int *)(v22 + 116);
LABEL_73:
    v64[5] = v65;
    v64[6] = -1073741811LL;
LABEL_74:
    WdLogEvent5_WdWarning(v64);
    StandardAllocation = -1073741811;
    goto LABEL_75;
  }
  LODWORD(v85) = *(_DWORD *)(v22 + 96);
  v67 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) != (_DWORD)v85 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v26, v28, v29);
    v64[3] = v16;
    v64[4] = v67;
    v65 = *(unsigned int *)(v22 + 96);
    goto LABEL_73;
  }
  v68 = *(unsigned int *)(v22 + 176);
  if ( !(_DWORD)v68 && *(_DWORD *)(*(_QWORD *)(v31 + 16) + 1264LL) < 0x5000u )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v68, v28, v29);
    v64[3] = v16;
    v64[4] = -1073741811LL;
    goto LABEL_74;
  }
  v112 = 0;
  v114 = 0LL;
  v115 = 0;
  v113 = v68;
  v111 = *(_DWORD *)(v22 + 168);
  v112 = *(_DWORD *)(v22 + 172);
  LODWORD(v114) = 7;
  memset(v110, 0, 392);
  v69 = (4 * (v91[0] & 0x40 | (32 * (v91[0] & 0x80)))) | 0x41;
  HIDWORD(v110[0]) = v98[0];
  LODWORD(v110[2]) = 4;
  v110[3] = &v111;
  v110[39] = *(_QWORD *)(v22 + 88);
  LODWORD(v110[40]) = v85;
  v110[41] = *(_QWORD *)(v22 + 184);
  v110[42] = *(_QWORD *)(v22 + 192);
  LODWORD(v110[6]) = *(_DWORD *)(v22 + 200);
  v110[43] = v8;
  LODWORD(v110[44]) = v101[0];
  v110[45] = v9;
  LODWORD(v110[46]) = v102[0];
  LODWORD(v110[0]) = ((unsigned __int16)v69 ^ (unsigned __int16)(LOWORD(v91[0]) << 7)) & 0x400 ^ v69 | 0x200;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v16,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v110,
                         (struct COREDEVICEACCESS *)v108);
  if ( StandardAllocation < 0 )
  {
LABEL_92:
    v33 = Src;
    goto LABEL_48;
  }
  v82 = 1;
  v70 = v110[1];
  *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v89, v110[1]) + 80LL) = v22;
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v89);
  memmove(v94, *(const void **)(v22 + 88), LODWORD(Size[0]));
  LODWORD(v103) = v70;
  v71 = v96;
  *(_DWORD *)v96 = HIDWORD(v110[6]);
  v71[4] = v102[0];
  *((_QWORD *)v71 + 1) = v9;
  *((_QWORD *)&v99 + 1) = v71;
  v10 = v94;
  Size[1] = (size_t)v94;
  v33 = Src;
  v101[1] = (size_t)Src;
  v102[1] = (size_t)v9;
LABEL_24:
  v34 = (_QWORD *)v93;
  v35 = (_DWORD *)(v93 + 80);
  if ( v93 + 80 >= MmUserProbeAddress )
    v35 = (_DWORD *)MmUserProbeAddress;
  *v35 = v103;
  v36 = v34 + 8;
  if ( (unsigned __int64)(v34 + 8) >= MmUserProbeAddress )
    v36 = (_DWORD *)MmUserProbeAddress;
  *v36 = v102[0];
  for ( i = 0; i < (unsigned int)v99; ++i )
  {
    v38 = 80LL * i;
    v39 = *((_QWORD *)&v99 + 1);
    *(_QWORD *)v91 = v105 + (unsigned int)(*(_DWORD *)(v38 + *((_QWORD *)&v99 + 1) + 8) - LODWORD(v102[1]));
    v40 = v38 + v34[3];
    v41 = (_DWORD *)v40;
    if ( v40 >= MmUserProbeAddress )
      v41 = (_DWORD *)MmUserProbeAddress;
    *v41 = *(_DWORD *)(v38 + *((_QWORD *)&v99 + 1));
    v42 = (_DWORD *)(v40 + 16);
    if ( v40 + 16 >= MmUserProbeAddress )
      v42 = (_DWORD *)MmUserProbeAddress;
    *v42 = *(_DWORD *)(v38 + v39 + 16);
    v43 = (_QWORD *)(v40 + 8);
    if ( v40 + 8 >= MmUserProbeAddress )
      v43 = (_QWORD *)MmUserProbeAddress;
    *v43 = *(_QWORD *)v91;
    v16 = v84;
    v34 = (_QWORD *)v93;
  }
  if ( LODWORD(Size[0]) )
  {
    v44 = (void *)v34[5];
    v45 = LODWORD(Size[0]);
    v46 = (ULONG64)v44 + LODWORD(Size[0]);
    if ( v46 > MmUserProbeAddress || v46 <= (unsigned __int64)v44 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v44, v10, v45);
    v16 = v84;
    v34 = (_QWORD *)v93;
  }
  if ( LODWORD(v101[0]) )
  {
    v72 = (void *)v34[7];
    v73 = LODWORD(v101[0]);
    v74 = (ULONG64)v72 + LODWORD(v101[0]);
    if ( v74 > MmUserProbeAddress || v74 <= (unsigned __int64)v72 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v72, v33, v73);
    v16 = v84;
  }
  if ( LODWORD(v102[0]) )
  {
    v47 = *(void **)(v93 + 72);
    v48 = LODWORD(v102[0]);
    v49 = (ULONG64)v47 + LODWORD(v102[0]);
    if ( v49 > MmUserProbeAddress || v49 <= (unsigned __int64)v47 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v47, v9, v48);
    v16 = v84;
  }
LABEL_48:
  if ( StandardAllocation < 0 )
    goto LABEL_93;
LABEL_49:
  operator delete(v9);
  operator delete(v33);
  operator delete(v96);
  operator delete(v94);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v106);
  sub_1C0061864(&v90);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v108);
  if ( v87 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v95);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v97);
  return (unsigned int)StandardAllocation;
}
