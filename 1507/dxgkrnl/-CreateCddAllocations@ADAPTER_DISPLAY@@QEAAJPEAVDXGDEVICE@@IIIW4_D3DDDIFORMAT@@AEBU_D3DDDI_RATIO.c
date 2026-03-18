/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFA64
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000822C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C000AEE4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00811D0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _D3DDDIFORMAT a6,
        const struct _D3DDDI_RATIONAL *a7,
        enum _D3DDDI_ROTATION a8,
        struct COREDEVICEACCESS *a9)
{
  struct DXGDEVICE *v9; // r15
  __int64 v10; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PERESOURCE *v21; // rcx
  __int64 v22; // rsi
  _QWORD *p_Flink; // rcx
  int *v24; // rcx
  int v25; // ebx
  struct DXGPROCESS *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  PERESOURCE *v31; // rax
  unsigned int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // rcx
  PERESOURCE **v35; // r13
  int StandardAllocation; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v43; // rdx
  __int64 v44; // r9
  struct DXGPROCESS *v45; // r14
  __int64 v46; // r12
  unsigned int *v47; // r13
  __int64 v48; // rsi
  DXGPUSHLOCK *v49; // r15
  unsigned int v50; // ebx
  unsigned int v51; // ecx
  __int64 v52; // r8
  int v53; // edx
  struct _ERESOURCE *v54; // rbx
  ADAPTER_RENDER *v55; // r8
  PERESOURCE *v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // r14
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned int v69; // ebx
  int v70; // ecx
  struct DXGPROCESS *v71; // r15
  unsigned int v72; // ecx
  __int64 v73; // r8
  int v74; // edx
  struct _ERESOURCE *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  ERESOURCE_THREAD OwnerThread; // rdx
  ADAPTER_RENDER *v85; // rcx
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rbx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  _QWORD *v98; // rax
  PERESOURCE *v99; // rax
  __int64 v100; // rax
  int v101; // edx
  unsigned int BitsPerPixel; // eax
  int v103; // edx
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  unsigned int v110; // eax
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  PERESOURCE *v116; // rcx
  PERESOURCE *v117; // rax
  __int64 v118; // rax
  PERESOURCE *v119; // rcx
  __int64 v120; // rax
  unsigned int v123; // [rsp+38h] [rbp-C8h]
  __int64 v124; // [rsp+40h] [rbp-C0h]
  __int64 v125; // [rsp+48h] [rbp-B8h] BYREF
  struct _ERESOURCE *v126; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v127; // [rsp+58h] [rbp-A8h]
  struct COREDEVICEACCESS *v128; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_DESCRIBEALLOCATION v129; // [rsp+68h] [rbp-98h] BYREF
  __int64 v130; // [rsp+98h] [rbp-68h]
  _QWORD v131[48]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGDEVICE *v132; // [rsp+220h] [rbp+120h] BYREF
  __int64 v133; // [rsp+228h] [rbp+128h]
  unsigned int v134; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 v135; // [rsp+234h] [rbp+134h]
  __int64 v136; // [rsp+23Ch] [rbp+13Ch]
  unsigned int v137; // [rsp+244h] [rbp+144h]

  v9 = a2;
  v10 = a3;
  v132 = a2;
  v128 = a9;
  v125 = 0LL;
  v126 = 0LL;
  memset(v131, 0, 376);
  memset(&v129, 0, sizeof(v129));
  v12 = 0;
  v123 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v9 + 2) + 16LL)) )
  {
    v81 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v81 + 24) = 10118LL;
    WdLogEvent5_WdAssertion(v81);
  }
  Current = DXGPROCESS::GetCurrent(v14);
  v21 = this[14];
  v22 = 1008 * v10;
  v127 = Current;
  v124 = v10;
  v130 = 1008 * v10;
  p_Flink = &v21[126 * v10 + 3]->SystemResourcesList.Flink;
  if ( !p_Flink
    || (v24 = (int *)*p_Flink, v25 = *v24, v25 != (unsigned int)PsGetCurrentProcessSessionId(v24, v18, v19, v20)) )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdError(p_Flink);
    LODWORD(v41) = -1073741811;
    v98[3] = this[2];
    v98[4] = -1073741811LL;
    goto LABEL_87;
  }
  v26 = DXGPROCESS::GetCurrent((__int64)p_Flink);
  Flink = (*(PERESOURCE *)((char *)this[14] + v22 + 24))->SystemResourcesList.Flink;
  Blink = Flink[1160].Blink;
  if ( *((struct _LIST_ENTRY **)v26 + 7) != Blink )
  {
    v82 = WdLogNewEntry5_WdAssertion(Flink, Blink, v27, v28);
    *(_QWORD *)(v82 + 24) = 10139LL;
    WdLogEvent5_WdAssertion(v82);
  }
  v31 = this[14];
  v32 = a5;
  if ( *(PERESOURCE *)((char *)v31 + v22 + 88) )
  {
    if ( !*(PERESOURCE *)((char *)v31 + v22 + 600) )
    {
      v83 = WdLogNewEntry5_WdAssertion(Flink, Blink, v27, 0LL);
      *(_QWORD *)(v83 + 24) = 10150LL;
      WdLogEvent5_WdAssertion(v83);
    }
    OwnerThread = (*(PERESOURCE *)((char *)this[14] + v22 + 88))->OwnerEntry.OwnerThread;
    if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
    {
      v85 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
      v129.hAllocation = *(HANDLE *)(OwnerThread + 16);
      v86 = ADAPTER_RENDER::DdiDescribeAllocation(v85, &v129, v27);
      v91 = v86;
      if ( v86 >= 0 )
      {
        if ( v129.Width == a4
          && v129.Height == a5
          && v129.Format == a6
          && v129.RefreshRate.Numerator == a7->Numerator
          && v129.RefreshRate.Denominator == a7->Denominator
          && *(_DWORD *)((char *)this[14] + v22 + 928) == a8 )
        {
          return 0LL;
        }
      }
      else
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v88, v87, v89, v90);
        v92[3] = v9;
        v93 = *(__int64 *)((char *)this[14] + v22 + 88);
        v92[5] = v124;
        v92[4] = v93;
        v92[6] = v91;
        WdLogEvent5_WdWarning(v92);
      }
    }
    v94 = ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)this, v9, a3);
    v41 = v94;
    if ( v94 >= 0 )
    {
      v99 = this[14];
      if ( *(PERESOURCE *)((char *)v99 + v22 + 88) || *(PERESOURCE *)((char *)v99 + v22 + 600) )
      {
        v100 = WdLogNewEntry5_WdAssertion(v96, v95, v97, 0LL);
        *(_QWORD *)(v100 + 24) = 10203LL;
        WdLogEvent5_WdAssertion(v100);
      }
      goto LABEL_8;
    }
    v98 = (_QWORD *)WdLogNewEntry5_WdError(v96);
    v98[3] = v9;
    v98[4] = v124;
    v98[5] = v41;
LABEL_87:
    WdLogEvent5_WdError(v98);
    return (unsigned int)v41;
  }
LABEL_8:
  v135 = 0LL;
  v137 = a3;
  v136 = (__int64)*a7;
  v131[3] = &v134;
  v33 = *((_QWORD *)v9 + 2);
  v134 = a4;
  v135 = __PAIR64__(a6, a5);
  v34 = *(_QWORD *)(v33 + 16);
  v131[1] = 0LL;
  v131[0] = 2049LL;
  LODWORD(v131[2]) = 1;
  if ( *((_QWORD *)v9 + 2338) != v34 )
  {
    if ( *((_BYTE *)this + 133) || ((a8 - 2) & 0xFFFFFFFD) != 0 )
    {
      BitsPerPixel = GetBitsPerPixel(a6);
      v12 = (v103 * (BitsPerPixel >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v125) = a5 * v12;
    }
    else
    {
      v12 = (a5 * ((unsigned int)GetBitsPerPixel(a6) >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v125) = v12 * v101;
    }
    v123 = v12;
    v131[4] = DxgkCreateDoDPrimarySection;
    v131[5] = &v125;
  }
  v35 = (PERESOURCE **)v128;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v9,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v131,
                         (PERESOURCE **)v128);
  v41 = StandardAllocation;
  if ( StandardAllocation < 0 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
    v104[3] = a4;
    v104[6] = v124;
    v104[4] = a5;
    v104[5] = v9;
    v104[7] = v41;
    WdLogEvent5_WdWarning(v104);
  }
  else
  {
    if ( !LODWORD(v131[1]) )
    {
      v105 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v105 + 24) = 10268LL;
      WdLogEvent5_WdAssertion(v105);
    }
    if ( v131 == (_QWORD *)-52LL )
    {
      v106 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v106 + 24) = 10269LL;
      WdLogEvent5_WdAssertion(v106);
    }
    if ( !HIDWORD(v131[1]) )
    {
      v107 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v107 + 24) = 10270LL;
      WdLogEvent5_WdAssertion(v107);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( NumDifferentPhysicalAdapters )
    {
      v45 = v127;
      v46 = v22 + 88;
      v47 = (unsigned int *)&v131[6] + 1;
      v48 = NumDifferentPhysicalAdapters;
      v49 = (struct DXGPROCESS *)((char *)v127 + 192);
      do
      {
        v50 = *v47;
        DXGPUSHLOCK::AcquireShared(v49);
        v51 = (v50 >> 6) & 0xFFFFFF;
        if ( v51 < *((_DWORD *)v45 + 58)
          && (v52 = *((_QWORD *)v45 + 27),
              v53 = *(_DWORD *)(v52 + 16LL * v51 + 8),
              ((v50 >> 26) & 0x30) == (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0x30))
          && (v53 & 0x1000) == 0
          && (v53 & 0xF) != 0
          && (*(_BYTE *)(v52 + 16LL * v51 + 8) & 0xF) == 5 )
        {
          v54 = *(struct _ERESOURCE **)(v52 + 16LL * v51);
        }
        else
        {
          v54 = 0LL;
        }
        ExReleasePushLockSharedEx(v49, 0LL);
        KeLeaveCriticalRegion();
        ++v47;
        *(PERESOURCE *)((char *)this[14] + v46) = v54;
        v46 += 8LL;
        --v48;
      }
      while ( v48 );
      v22 = v130;
      v12 = v123;
      v9 = v132;
      v32 = a5;
      v35 = (PERESOURCE **)v128;
    }
    v55 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
    if ( *((_QWORD *)v9 + 2338) != *((_QWORD *)v55 + 2) )
    {
      *(_DWORD *)((char *)this[14] + v22 + 612) = v125;
      v116 = this[14];
      *(PERESOURCE *)((char *)v116 + v22 + 616) = v126;
      v117 = this[14];
      if ( !*(_DWORD *)((char *)v117 + v22 + 612) || !*(PERESOURCE *)((char *)v117 + v22 + 616) )
      {
        v118 = WdLogNewEntry5_WdAssertion(v116, v43, v55, v44);
        *(_QWORD *)(v118 + 24) = 10395LL;
        WdLogEvent5_WdAssertion(v118);
      }
      v119 = this[14];
      *(PERESOURCE *)((char *)v119 + v22 + 600) = *(PERESOURCE *)((char *)v119 + v22 + 88);
      if ( !v12 )
      {
        v120 = WdLogNewEntry5_WdAssertion(v119, v43, v55, v44);
        *(_QWORD *)(v120 + 24) = 10406LL;
        WdLogEvent5_WdAssertion(v120);
      }
      *(_DWORD *)((char *)this[14] + v22 + 608) = v12;
      *(_DWORD *)((char *)this[14] + v22 + 944) = 1;
      *(_DWORD *)((char *)this[14] + v22 + 948) = 1;
      *(_DWORD *)((char *)this[14] + v22 + 952) = 0;
      goto LABEL_45;
    }
    v56 = this[14];
    v132 = 0LL;
    v133 = 0LL;
    v129.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)v56 + v22 + 88))->OwnerEntry.OwnerThread + 16);
    v57 = ADAPTER_RENDER::DdiDescribeAllocation(v55, &v129, (__int64)v55);
    v62 = v57;
    if ( v57 < 0 )
    {
      v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
      v63 = v124;
      v108[3] = v9;
      v108[4] = *(PERESOURCE *)((char *)this[14] + v22 + 88);
      v108[5] = v124;
      v108[6] = v62;
      WdLogEvent5_WdWarning(v108);
      *(_DWORD *)((char *)this[14] + v22 + 944) = 1;
      *(_DWORD *)((char *)this[14] + v22 + 948) = 1;
      *(_DWORD *)((char *)this[14] + v22 + 952) = 0;
    }
    else
    {
      v63 = v124;
      *(PERESOURCE *)((char *)this[14] + v22 + 944) = (PERESOURCE)v129.MultisampleMethod;
      *(_DWORD *)((char *)this[14] + v22 + 952) = v129.PrivateDriverFormatAttribute;
    }
    if ( *((_BYTE *)this + 133) || ((a8 - 2) & 0xFFFFFFFD) != 0 )
      v132 = (struct DXGDEVICE *)__PAIR64__(v32, a4);
    else
      v132 = (struct DXGDEVICE *)__PAIR64__(a4, v32);
    LODWORD(v133) = a6;
    v131[0] = 0LL;
    v131[3] = &v132;
    LODWORD(v131[2]) = 2;
    v64 = DXGDEVICE::CreateStandardAllocation(v9, (struct _D3DKM_CREATESTANDARDALLOCATION *)v131, v35);
    v41 = v64;
    if ( v64 >= 0 )
    {
      v69 = HIDWORD(v131[6]);
      if ( !HIDWORD(v131[6]) || !LODWORD(v131[1]) )
      {
        v113 = WdLogNewEntry5_WdAssertion(v66, v65, v67, v68);
        *(_QWORD *)(v113 + 24) = 10375LL;
        WdLogEvent5_WdAssertion(v113);
      }
      v70 = HIDWORD(v133);
      if ( !HIDWORD(v133) )
      {
        v114 = WdLogNewEntry5_WdAssertion(0LL, v65, v67, v68);
        *(_QWORD *)(v114 + 24) = 10380LL;
        WdLogEvent5_WdAssertion(v114);
        v70 = HIDWORD(v133);
      }
      v71 = v127;
      *(_DWORD *)((char *)this[14] + v22 + 608) = v70;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v71 + 192));
      v72 = (v69 >> 6) & 0xFFFFFF;
      if ( v72 < *((_DWORD *)v71 + 58)
        && (v73 = *((_QWORD *)v71 + 27),
            v74 = *(_DWORD *)(v73 + 16LL * v72 + 8),
            ((v69 >> 26) & 0x30) == (*(_BYTE *)(v73 + 16LL * v72 + 8) & 0x30))
        && (v74 & 0x1000) == 0
        && (v74 & 0xF) != 0
        && (*(_BYTE *)(v73 + 16LL * v72 + 8) & 0xF) == 5 )
      {
        v75 = *(struct _ERESOURCE **)(v73 + 16LL * v72);
      }
      else
      {
        v75 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)v71 + 192, 0LL);
      KeLeaveCriticalRegion();
      *(PERESOURCE *)((char *)this[14] + v22 + 600) = v75;
      if ( !*(PERESOURCE *)((char *)this[14] + v22 + 600) )
      {
        v115 = WdLogNewEntry5_WdAssertion(v77, v76, v78, v79);
        *(_QWORD *)(v115 + 24) = 10384LL;
        WdLogEvent5_WdAssertion(v115);
      }
LABEL_45:
      if ( *(_DWORD *)((char *)this[14] + v22 + 680) == 1 )
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, a3);
      return 0LL;
    }
    v109 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, v67, v68);
    v109[3] = (unsigned int)v132;
    v109[4] = HIDWORD(v132);
    v109[5] = v9;
    v109[6] = v63;
    v109[7] = v41;
    WdLogEvent5_WdWarning(v109);
    DXGDEVICE::DestroyAllocationInternal(
      v9,
      0,
      0LL,
      (struct DXGALLOCATION **)(*(PERESOURCE *)((char *)this[14] + v22 + 88))->ExclusiveWaiters,
      0LL,
      DXGDEVICE::DestroyFlagsDefault);
    v110 = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( v110 )
    {
      v111 = v22 + 88;
      v112 = v110;
      do
      {
        *(PERESOURCE *)((char *)this[14] + v111) = 0LL;
        v111 += 8LL;
        --v112;
      }
      while ( v112 );
    }
  }
  return (unsigned int)v41;
}
