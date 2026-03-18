/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0088748
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00067C4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000AE54 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        enum _D3DDDIFORMAT a6,
        const struct _D3DDDI_RATIONAL *a7,
        enum _D3DDDI_ROTATION a8,
        struct COREDEVICEACCESS *a9)
{
  struct DXGDEVICE *v9; // r15
  __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 ProcessDxgProcess; // rax
  PERESOURCE *v17; // rcx
  __int64 v18; // rsi
  int **v19; // rcx
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  struct _LIST_ENTRY *Flink; // rcx
  PERESOURCE *v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rcx
  struct COREDEVICEACCESS *v29; // r13
  int StandardAllocation; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v37; // r14
  __int64 v38; // r12
  unsigned int *v39; // r13
  __int64 v40; // rsi
  DXGPUSHLOCK *v41; // r15
  unsigned int v42; // ebx
  unsigned int v43; // ecx
  __int64 v44; // r8
  int v45; // edx
  struct _ERESOURCE *v46; // rbx
  ADAPTER_RENDER *v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // r14
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // ebx
  int v61; // ecx
  __int64 v62; // r15
  unsigned int v63; // ecx
  __int64 v64; // r8
  int v65; // edx
  struct _ERESOURCE *v66; // rbx
  __int64 v67; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  ERESOURCE_THREAD OwnerThread; // rdx
  ADAPTER_RENDER *v73; // rcx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rbx
  _QWORD *v80; // rax
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  PERESOURCE *v85; // rax
  __int64 v86; // rax
  int v87; // edx
  unsigned int BitsPerPixel; // eax
  int v89; // edx
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  PERESOURCE *v102; // rcx
  PERESOURCE *v103; // rax
  __int64 v104; // rax
  PERESOURCE *v105; // rcx
  __int64 v106; // rax
  unsigned int v108; // [rsp+34h] [rbp-CCh]
  __int64 v110; // [rsp+40h] [rbp-C0h]
  _QWORD v111[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct COREDEVICEACCESS *v112; // [rsp+58h] [rbp-A8h]
  __int64 v113; // [rsp+60h] [rbp-A0h]
  __int64 v114; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_DESCRIBEALLOCATION v115; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v116[52]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v117[12]; // [rsp+240h] [rbp+140h] BYREF
  int v118; // [rsp+24Ch] [rbp+14Ch]
  unsigned int v119; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int64 v120; // [rsp+254h] [rbp+154h]
  __int64 v121; // [rsp+25Ch] [rbp+15Ch]
  unsigned int v122; // [rsp+264h] [rbp+164h]

  v9 = a2;
  memset(v111, 0, sizeof(v111));
  v11 = a3;
  v112 = a9;
  *(_QWORD *)v117 = a2;
  memset(v116, 0, 0x198uLL);
  memset(&v115, 0, sizeof(v115));
  v12 = 0;
  v108 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v9 + 2) + 16LL)) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v69 + 24) = 222LL;
    WdLogEvent5_WdAssertion(v69);
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v15);
  v17 = this[14];
  v18 = 1016 * v11;
  v113 = ProcessDxgProcess;
  v110 = v11;
  v114 = 1016 * v11;
  v19 = (int **)v17[127 * v11 + 3];
  if ( !v19 || (v20 = **v19, v20 != (unsigned int)PsGetCurrentProcessSessionId()) )
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    LODWORD(v35) = -1073741811;
    v84[3] = this[2];
    v84[4] = -1073741811LL;
    goto LABEL_87;
  }
  v21 = PsGetCurrentProcess();
  v23 = PsGetProcessDxgProcess(v21, v22);
  Flink = (*(PERESOURCE *)((char *)this[14] + v18 + 24))->SystemResourcesList.Flink;
  if ( *(struct _LIST_ENTRY **)(v23 + 48) != Flink[1161].Blink )
  {
    v70 = WdLogNewEntry5_WdAssertion(Flink);
    *(_QWORD *)(v70 + 24) = 243LL;
    WdLogEvent5_WdAssertion(v70);
  }
  v25 = this[14];
  v26 = a5;
  if ( *(PERESOURCE *)((char *)v25 + v18 + 88) )
  {
    if ( !*(PERESOURCE *)((char *)v25 + v18 + 600) )
    {
      v71 = WdLogNewEntry5_WdAssertion(Flink);
      *(_QWORD *)(v71 + 24) = 254LL;
      WdLogEvent5_WdAssertion(v71);
    }
    OwnerThread = (*(PERESOURCE *)((char *)this[14] + v18 + 88))->OwnerEntry.OwnerThread;
    if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
    {
      v73 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
      v115.hAllocation = *(HANDLE *)(OwnerThread + 16);
      v74 = ADAPTER_RENDER::DdiDescribeAllocation(v73, &v115);
      v79 = v74;
      if ( v74 >= 0 )
      {
        if ( v115.Width == a4
          && v115.Height == a5
          && v115.Format == a6
          && v115.RefreshRate.Numerator == a7->Numerator
          && v115.RefreshRate.Denominator == a7->Denominator
          && *(_DWORD *)((char *)this[14] + v18 + 936) == a8 )
        {
          return 0LL;
        }
      }
      else
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, v75, v77, v78);
        v80[3] = v9;
        v81 = *(__int64 *)((char *)this[14] + v18 + 88);
        v80[5] = v110;
        v80[4] = v81;
        v80[6] = v79;
        WdLogEvent5_WdWarning(v80);
      }
    }
    v82 = ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)this, v9, a3);
    v35 = v82;
    if ( v82 >= 0 )
    {
      v85 = this[14];
      if ( *(PERESOURCE *)((char *)v85 + v18 + 88) || *(PERESOURCE *)((char *)v85 + v18 + 600) )
      {
        v86 = WdLogNewEntry5_WdAssertion(v83);
        *(_QWORD *)(v86 + 24) = 307LL;
        WdLogEvent5_WdAssertion(v86);
      }
      goto LABEL_8;
    }
    v84 = (_QWORD *)WdLogNewEntry5_WdError(v83);
    v84[3] = v9;
    v84[4] = v110;
    v84[5] = v35;
LABEL_87:
    WdLogEvent5_WdError(v84);
    return (unsigned int)v35;
  }
LABEL_8:
  v120 = 0LL;
  v122 = a3;
  v121 = (__int64)*a7;
  v116[3] = &v119;
  v27 = *((_QWORD *)v9 + 2);
  v119 = a4;
  v120 = __PAIR64__(a6, a5);
  v28 = *(_QWORD *)(v27 + 16);
  v116[1] = 0LL;
  v116[0] = 2049LL;
  LODWORD(v116[2]) = 1;
  if ( *((_QWORD *)v9 + 357) != v28 )
  {
    if ( *((_BYTE *)this + 133) || ((a8 - 2) & 0xFFFFFFFD) != 0 )
    {
      BitsPerPixel = GetBitsPerPixel(a6);
      v12 = (v89 * (BitsPerPixel >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v111[0]) = a5 * v12;
    }
    else
    {
      v12 = (a5 * ((unsigned int)GetBitsPerPixel(a6) >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v111[0]) = v12 * v87;
    }
    v108 = v12;
    v116[4] = DxgkCreateDoDPrimarySection;
    v116[5] = v111;
  }
  v29 = v112;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(v9, (struct _D3DKM_CREATESTANDARDALLOCATION *)v116, v112);
  v35 = StandardAllocation;
  if ( StandardAllocation < 0 )
  {
    v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    v90[3] = a4;
    v90[6] = v110;
    v90[4] = a5;
    v90[5] = v9;
    v90[7] = v35;
    WdLogEvent5_WdWarning(v90);
  }
  else
  {
    if ( !LODWORD(v116[1]) )
    {
      v91 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v91 + 24) = 372LL;
      WdLogEvent5_WdAssertion(v91);
    }
    if ( v116 == (_QWORD *)-52LL )
    {
      v92 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v92 + 24) = 373LL;
      WdLogEvent5_WdAssertion(v92);
    }
    if ( !HIDWORD(v116[1]) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v93 + 24) = 374LL;
      WdLogEvent5_WdAssertion(v93);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( NumDifferentPhysicalAdapters )
    {
      v37 = v113;
      v38 = v18 + 88;
      v39 = (unsigned int *)&v116[6] + 1;
      v40 = NumDifferentPhysicalAdapters;
      v41 = (DXGPUSHLOCK *)(v113 + 184);
      do
      {
        v42 = *v39;
        DXGPUSHLOCK::AcquireShared(v41);
        v43 = (v42 >> 6) & 0xFFFFFF;
        if ( v43 < *(_DWORD *)(v37 + 224)
          && (v44 = *(_QWORD *)(v37 + 208),
              v45 = *(_DWORD *)(v44 + 16LL * v43 + 8),
              ((v42 >> 26) & 0x30) == (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0x30))
          && (v45 & 0x1000) == 0
          && (v45 & 0xF) != 0
          && (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0xF) == 5 )
        {
          v46 = *(struct _ERESOURCE **)(v44 + 16LL * v43);
        }
        else
        {
          v46 = 0LL;
        }
        ExReleasePushLockSharedEx(v41, 0LL);
        KeLeaveCriticalRegion();
        ++v39;
        *(PERESOURCE *)((char *)this[14] + v38) = v46;
        v38 += 8LL;
        --v40;
      }
      while ( v40 );
      v18 = v114;
      v12 = v108;
      v9 = *(struct DXGDEVICE **)v117;
      v26 = a5;
      v29 = v112;
    }
    v47 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
    if ( *((_QWORD *)v9 + 357) != *((_QWORD *)v47 + 2) )
    {
      *(_DWORD *)((char *)this[14] + v18 + 612) = v111[0];
      v102 = this[14];
      *(PERESOURCE *)((char *)v102 + v18 + 616) = (PERESOURCE)v111[1];
      v103 = this[14];
      if ( !*(_DWORD *)((char *)v103 + v18 + 612) || !*(PERESOURCE *)((char *)v103 + v18 + 616) )
      {
        v104 = WdLogNewEntry5_WdAssertion(v102);
        *(_QWORD *)(v104 + 24) = 499LL;
        WdLogEvent5_WdAssertion(v104);
      }
      v105 = this[14];
      *(PERESOURCE *)((char *)v105 + v18 + 600) = *(PERESOURCE *)((char *)v105 + v18 + 88);
      if ( !v12 )
      {
        v106 = WdLogNewEntry5_WdAssertion(v105);
        *(_QWORD *)(v106 + 24) = 510LL;
        WdLogEvent5_WdAssertion(v106);
      }
      *(_DWORD *)((char *)this[14] + v18 + 608) = v12;
      *(_DWORD *)((char *)this[14] + v18 + 952) = 1;
      *(_DWORD *)((char *)this[14] + v18 + 956) = 1;
      *(_DWORD *)((char *)this[14] + v18 + 960) = 0;
      goto LABEL_44;
    }
    memset(v117, 0, sizeof(v117));
    v118 = 0;
    v115.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)this[14] + v18 + 88))->OwnerEntry.OwnerThread + 16);
    v48 = ADAPTER_RENDER::DdiDescribeAllocation(v47, &v115);
    v53 = v48;
    if ( v48 < 0 )
    {
      v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
      v54 = v110;
      v94[3] = v9;
      v94[4] = *(PERESOURCE *)((char *)this[14] + v18 + 88);
      v94[5] = v110;
      v94[6] = v53;
      WdLogEvent5_WdWarning(v94);
      *(_DWORD *)((char *)this[14] + v18 + 952) = 1;
      *(_DWORD *)((char *)this[14] + v18 + 956) = 1;
      *(_DWORD *)((char *)this[14] + v18 + 960) = 0;
    }
    else
    {
      v54 = v110;
      *(PERESOURCE *)((char *)this[14] + v18 + 952) = (PERESOURCE)v115.MultisampleMethod;
      *(_DWORD *)((char *)this[14] + v18 + 960) = v115.PrivateDriverFormatAttribute;
    }
    if ( *((_BYTE *)this + 133) || ((a8 - 2) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)v117 = a4;
      *(_DWORD *)&v117[4] = v26;
    }
    else
    {
      *(_DWORD *)&v117[4] = a4;
      *(_DWORD *)v117 = v26;
    }
    *(_DWORD *)&v117[8] = a6;
    v116[0] = 0LL;
    v116[3] = v117;
    LODWORD(v116[2]) = 2;
    v55 = DXGDEVICE::CreateStandardAllocation(v9, (struct _D3DKM_CREATESTANDARDALLOCATION *)v116, v29);
    v35 = v55;
    if ( v55 >= 0 )
    {
      v60 = HIDWORD(v116[6]);
      if ( !HIDWORD(v116[6]) || !LODWORD(v116[1]) )
      {
        v99 = WdLogNewEntry5_WdAssertion(v57);
        *(_QWORD *)(v99 + 24) = 479LL;
        WdLogEvent5_WdAssertion(v99);
      }
      v61 = v118;
      if ( !v118 )
      {
        v100 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v100 + 24) = 484LL;
        WdLogEvent5_WdAssertion(v100);
        v61 = v118;
      }
      v62 = v113;
      *(_DWORD *)((char *)this[14] + v18 + 608) = v61;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v62 + 184));
      v63 = (v60 >> 6) & 0xFFFFFF;
      if ( v63 < *(_DWORD *)(v62 + 224)
        && (v64 = *(_QWORD *)(v62 + 208),
            v65 = *(_DWORD *)(v64 + 16LL * v63 + 8),
            ((v60 >> 26) & 0x30) == (*(_BYTE *)(v64 + 16LL * v63 + 8) & 0x30))
        && (v65 & 0x1000) == 0
        && (v65 & 0xF) != 0
        && (*(_BYTE *)(v64 + 16LL * v63 + 8) & 0xF) == 5 )
      {
        v66 = *(struct _ERESOURCE **)(v64 + 16LL * v63);
      }
      else
      {
        v66 = 0LL;
      }
      ExReleasePushLockSharedEx(v62 + 184, 0LL);
      KeLeaveCriticalRegion();
      *(PERESOURCE *)((char *)this[14] + v18 + 600) = v66;
      if ( !*(PERESOURCE *)((char *)this[14] + v18 + 600) )
      {
        v101 = WdLogNewEntry5_WdAssertion(v67);
        *(_QWORD *)(v101 + 24) = 488LL;
        WdLogEvent5_WdAssertion(v101);
      }
LABEL_44:
      if ( *(_DWORD *)((char *)this[14] + v18 + 680) == 1 )
        ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_MGR **)this, a3);
      return 0LL;
    }
    v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
    v95[3] = *(unsigned int *)v117;
    v95[4] = *(unsigned int *)&v117[4];
    v95[5] = v9;
    v95[6] = v54;
    v95[7] = v35;
    WdLogEvent5_WdWarning(v95);
    DXGDEVICE::DestroyAllocationInternal(
      v9,
      0,
      0LL,
      (struct DXGRESOURCE *)(*(PERESOURCE *)((char *)this[14] + v18 + 88))->ExclusiveWaiters,
      0LL,
      DXGDEVICE::DestroyFlagsDefault);
    v96 = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( v96 )
    {
      v97 = v18 + 88;
      v98 = v96;
      do
      {
        *(PERESOURCE *)((char *)this[14] + v97) = 0LL;
        v97 += 8LL;
        --v98;
      }
      while ( v98 );
    }
  }
  return (unsigned int)v35;
}
