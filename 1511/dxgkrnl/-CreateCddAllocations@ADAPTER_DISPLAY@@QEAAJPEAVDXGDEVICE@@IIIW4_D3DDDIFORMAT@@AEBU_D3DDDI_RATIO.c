/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009BB50
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0007B24 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C00087A8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
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
  __int64 v10; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rax
  PERESOURCE *v15; // rcx
  __int64 v16; // rsi
  int **v17; // rcx
  int v18; // ebx
  struct DXGPROCESS *v19; // rax
  __int64 v20; // r8
  struct _LIST_ENTRY *Flink; // rcx
  PERESOURCE *v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rcx
  PERESOURCE **v26; // r13
  int StandardAllocation; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  unsigned int NumDifferentPhysicalAdapters; // eax
  struct DXGPROCESS *v34; // r14
  __int64 v35; // r12
  unsigned int *v36; // r13
  __int64 v37; // rsi
  DXGPUSHLOCK *v38; // r15
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  __int64 v41; // r8
  int v42; // edx
  struct _ERESOURCE *v43; // rbx
  ADAPTER_RENDER *v44; // r8
  PERESOURCE *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  __int64 v52; // r14
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // ebx
  int v59; // ecx
  struct DXGPROCESS *v60; // r15
  unsigned int v61; // ecx
  __int64 v62; // r8
  int v63; // edx
  struct _ERESOURCE *v64; // rbx
  __int64 v65; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  ERESOURCE_THREAD OwnerThread; // rdx
  ADAPTER_RENDER *v71; // rcx
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rcx
  _QWORD *v82; // rax
  PERESOURCE *v83; // rax
  __int64 v84; // rax
  int v85; // edx
  unsigned int BitsPerPixel; // eax
  int v87; // edx
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  unsigned int v94; // eax
  __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  PERESOURCE *v100; // rcx
  PERESOURCE *v101; // rax
  __int64 v102; // rax
  PERESOURCE *v103; // rcx
  __int64 v104; // rax
  unsigned int v107; // [rsp+38h] [rbp-C8h]
  __int64 v108; // [rsp+40h] [rbp-C0h]
  __int64 v109; // [rsp+48h] [rbp-B8h] BYREF
  struct _ERESOURCE *v110; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v111; // [rsp+58h] [rbp-A8h]
  struct COREDEVICEACCESS *v112; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_DESCRIBEALLOCATION v113; // [rsp+68h] [rbp-98h] BYREF
  __int64 v114; // [rsp+98h] [rbp-68h]
  _QWORD v115[50]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGDEVICE *v116; // [rsp+230h] [rbp+130h] BYREF
  __int64 v117; // [rsp+238h] [rbp+138h]
  unsigned int v118; // [rsp+240h] [rbp+140h] BYREF
  unsigned __int64 v119; // [rsp+244h] [rbp+144h]
  __int64 v120; // [rsp+24Ch] [rbp+14Ch]
  unsigned int v121; // [rsp+254h] [rbp+154h]

  v9 = a2;
  v10 = a3;
  v116 = a2;
  v112 = a9;
  v109 = 0LL;
  v110 = 0LL;
  memset(v115, 0, 392);
  memset(&v113, 0, sizeof(v113));
  v12 = 0;
  v107 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)v9 + 2) + 16LL)) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v67 + 24) = 10463LL;
    WdLogEvent5_WdAssertion(v67);
  }
  Current = DXGPROCESS::GetCurrent();
  v15 = this[17];
  v16 = 1016 * v10;
  v111 = Current;
  v108 = v10;
  v114 = 1016 * v10;
  v17 = (int **)v15[127 * v10 + 3];
  if ( !v17 || (v18 = **v17, v18 != (unsigned int)PsGetCurrentProcessSessionId()) )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    LODWORD(v32) = -1073741811;
    v82[3] = this[2];
    v82[4] = -1073741811LL;
    goto LABEL_87;
  }
  v19 = DXGPROCESS::GetCurrent();
  Flink = (*(PERESOURCE *)((char *)this[17] + v16 + 24))->SystemResourcesList.Flink;
  if ( (struct _LIST_ENTRY *)*((_QWORD *)v19 + 7) != Flink[1162].Flink )
  {
    v68 = WdLogNewEntry5_WdAssertion(Flink);
    *(_QWORD *)(v68 + 24) = 10484LL;
    WdLogEvent5_WdAssertion(v68);
  }
  v22 = this[17];
  v23 = a5;
  if ( *(PERESOURCE *)((char *)v22 + v16 + 88) )
  {
    if ( !*(PERESOURCE *)((char *)v22 + v16 + 600) )
    {
      v69 = WdLogNewEntry5_WdAssertion(Flink);
      *(_QWORD *)(v69 + 24) = 10495LL;
      WdLogEvent5_WdAssertion(v69);
    }
    OwnerThread = (*(PERESOURCE *)((char *)this[17] + v16 + 88))->OwnerEntry.OwnerThread;
    if ( (*(_DWORD *)(OwnerThread + 4) & 0x10) == 0 )
    {
      v71 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
      v113.hAllocation = *(HANDLE *)(OwnerThread + 16);
      v72 = ADAPTER_RENDER::DdiDescribeAllocation(v71, &v113, v20);
      v77 = v72;
      if ( v72 >= 0 )
      {
        if ( v113.Width == a4
          && v113.Height == a5
          && v113.Format == a6
          && v113.RefreshRate.Numerator == a7->Numerator
          && v113.RefreshRate.Denominator == a7->Denominator
          && *(_DWORD *)((char *)this[17] + v16 + 928) == a8 )
        {
          return 0LL;
        }
      }
      else
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v73, v75, v76);
        v78[3] = v9;
        v79 = *(__int64 *)((char *)this[17] + v16 + 88);
        v78[5] = v108;
        v78[4] = v79;
        v78[6] = v77;
        WdLogEvent5_WdWarning(v78);
      }
    }
    v80 = ADAPTER_DISPLAY::DestroyCddAllocations(this, v9, a3);
    v32 = v80;
    if ( v80 >= 0 )
    {
      v83 = this[17];
      if ( *(PERESOURCE *)((char *)v83 + v16 + 88) || *(PERESOURCE *)((char *)v83 + v16 + 600) )
      {
        v84 = WdLogNewEntry5_WdAssertion(v81);
        *(_QWORD *)(v84 + 24) = 10548LL;
        WdLogEvent5_WdAssertion(v84);
      }
      goto LABEL_8;
    }
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v81);
    v82[3] = v9;
    v82[4] = v108;
    v82[5] = v32;
LABEL_87:
    WdLogEvent5_WdError(v82);
    return (unsigned int)v32;
  }
LABEL_8:
  v119 = 0LL;
  v121 = a3;
  v120 = (__int64)*a7;
  v115[3] = &v118;
  v24 = *((_QWORD *)v9 + 2);
  v118 = a4;
  v119 = __PAIR64__(a6, a5);
  v25 = *(_QWORD *)(v24 + 16);
  v115[1] = 0LL;
  v115[0] = 2049LL;
  LODWORD(v115[2]) = 1;
  if ( *((_QWORD *)v9 + 354) != v25 )
  {
    if ( *((_BYTE *)this + 157) || ((a8 - 2) & 0xFFFFFFFD) != 0 )
    {
      BitsPerPixel = GetBitsPerPixel(a6);
      v12 = (v87 * (BitsPerPixel >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v109) = a5 * v12;
    }
    else
    {
      v12 = (a5 * ((unsigned int)GetBitsPerPixel(a6) >> 3) + 3) & 0xFFFFFFFC;
      HIDWORD(v109) = v12 * v85;
    }
    v107 = v12;
    v115[4] = sub_1C012AD00;
    v115[5] = &v109;
  }
  v26 = (PERESOURCE **)v112;
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                         v9,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v115,
                         (PERESOURCE **)v112);
  v32 = StandardAllocation;
  if ( StandardAllocation < 0 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v88[3] = a4;
    v88[6] = v108;
    v88[4] = a5;
    v88[5] = v9;
    v88[7] = v32;
    WdLogEvent5_WdWarning(v88);
  }
  else
  {
    if ( !LODWORD(v115[1]) )
    {
      v89 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v89 + 24) = 10613LL;
      WdLogEvent5_WdAssertion(v89);
    }
    if ( v115 == (_QWORD *)-52LL )
    {
      v90 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v90 + 24) = 10614LL;
      WdLogEvent5_WdAssertion(v90);
    }
    if ( !HIDWORD(v115[1]) )
    {
      v91 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v91 + 24) = 10615LL;
      WdLogEvent5_WdAssertion(v91);
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( NumDifferentPhysicalAdapters )
    {
      v34 = v111;
      v35 = v16 + 88;
      v36 = (unsigned int *)&v115[6] + 1;
      v37 = NumDifferentPhysicalAdapters;
      v38 = (struct DXGPROCESS *)((char *)v111 + 192);
      do
      {
        v39 = *v36;
        DXGPUSHLOCK::AcquireShared(v38);
        v40 = (v39 >> 6) & 0xFFFFFF;
        if ( v40 < *((_DWORD *)v34 + 58)
          && (v41 = *((_QWORD *)v34 + 27),
              v42 = *(_DWORD *)(v41 + 16LL * v40 + 8),
              ((v39 >> 26) & 0x30) == (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0x30))
          && (v42 & 0x1000) == 0
          && (v42 & 0xF) != 0
          && (*(_BYTE *)(v41 + 16LL * v40 + 8) & 0xF) == 5 )
        {
          v43 = *(struct _ERESOURCE **)(v41 + 16LL * v40);
        }
        else
        {
          v43 = 0LL;
        }
        ExReleasePushLockSharedEx(v38, 0LL);
        KeLeaveCriticalRegion();
        ++v36;
        *(PERESOURCE *)((char *)this[17] + v35) = v43;
        v35 += 8LL;
        --v37;
      }
      while ( v37 );
      v16 = v114;
      v12 = v107;
      v9 = v116;
      v23 = a5;
      v26 = (PERESOURCE **)v112;
    }
    v44 = (ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
    if ( *((_QWORD *)v9 + 354) != *((_QWORD *)v44 + 2) )
    {
      *(_DWORD *)((char *)this[17] + v16 + 612) = v109;
      v100 = this[17];
      *(PERESOURCE *)((char *)v100 + v16 + 616) = v110;
      v101 = this[17];
      if ( !*(_DWORD *)((char *)v101 + v16 + 612) || !*(PERESOURCE *)((char *)v101 + v16 + 616) )
      {
        v102 = WdLogNewEntry5_WdAssertion(v100);
        *(_QWORD *)(v102 + 24) = 10740LL;
        WdLogEvent5_WdAssertion(v102);
      }
      v103 = this[17];
      *(PERESOURCE *)((char *)v103 + v16 + 600) = *(PERESOURCE *)((char *)v103 + v16 + 88);
      if ( !v12 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v103);
        *(_QWORD *)(v104 + 24) = 10751LL;
        WdLogEvent5_WdAssertion(v104);
      }
      *(_DWORD *)((char *)this[17] + v16 + 608) = v12;
      *(_DWORD *)((char *)this[17] + v16 + 944) = 1;
      *(_DWORD *)((char *)this[17] + v16 + 948) = 1;
      *(_DWORD *)((char *)this[17] + v16 + 952) = 0;
      goto LABEL_44;
    }
    v45 = this[17];
    v116 = 0LL;
    v117 = 0LL;
    v113.hAllocation = *(HANDLE *)((*(PERESOURCE *)((char *)v45 + v16 + 88))->OwnerEntry.OwnerThread + 16);
    v46 = ADAPTER_RENDER::DdiDescribeAllocation(v44, &v113, (__int64)v44);
    v51 = v46;
    if ( v46 < 0 )
    {
      v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
      v52 = v108;
      v92[3] = v9;
      v92[4] = *(PERESOURCE *)((char *)this[17] + v16 + 88);
      v92[5] = v108;
      v92[6] = v51;
      WdLogEvent5_WdWarning(v92);
      *(_DWORD *)((char *)this[17] + v16 + 944) = 1;
      *(_DWORD *)((char *)this[17] + v16 + 948) = 1;
      *(_DWORD *)((char *)this[17] + v16 + 952) = 0;
    }
    else
    {
      v52 = v108;
      *(PERESOURCE *)((char *)this[17] + v16 + 944) = (PERESOURCE)v113.MultisampleMethod;
      *(_DWORD *)((char *)this[17] + v16 + 952) = v113.PrivateDriverFormatAttribute;
    }
    if ( *((_BYTE *)this + 157) || ((a8 - 2) & 0xFFFFFFFD) != 0 )
      v116 = (struct DXGDEVICE *)__PAIR64__(v23, a4);
    else
      v116 = (struct DXGDEVICE *)__PAIR64__(a4, v23);
    LODWORD(v117) = a6;
    v115[0] = 0LL;
    v115[3] = &v116;
    LODWORD(v115[2]) = 2;
    v53 = DXGDEVICE::CreateStandardAllocation(v9, (struct _D3DKM_CREATESTANDARDALLOCATION *)v115, v26);
    v32 = v53;
    if ( v53 >= 0 )
    {
      v58 = HIDWORD(v115[6]);
      if ( !HIDWORD(v115[6]) || !LODWORD(v115[1]) )
      {
        v97 = WdLogNewEntry5_WdAssertion(v55);
        *(_QWORD *)(v97 + 24) = 10720LL;
        WdLogEvent5_WdAssertion(v97);
      }
      v59 = HIDWORD(v117);
      if ( !HIDWORD(v117) )
      {
        v98 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v98 + 24) = 10725LL;
        WdLogEvent5_WdAssertion(v98);
        v59 = HIDWORD(v117);
      }
      v60 = v111;
      *(_DWORD *)((char *)this[17] + v16 + 608) = v59;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v60 + 192));
      v61 = (v58 >> 6) & 0xFFFFFF;
      if ( v61 < *((_DWORD *)v60 + 58)
        && (v62 = *((_QWORD *)v60 + 27),
            v63 = *(_DWORD *)(v62 + 16LL * v61 + 8),
            ((v58 >> 26) & 0x30) == (*(_BYTE *)(v62 + 16LL * v61 + 8) & 0x30))
        && (v63 & 0x1000) == 0
        && (v63 & 0xF) != 0
        && (*(_BYTE *)(v62 + 16LL * v61 + 8) & 0xF) == 5 )
      {
        v64 = *(struct _ERESOURCE **)(v62 + 16LL * v61);
      }
      else
      {
        v64 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)v60 + 192, 0LL);
      KeLeaveCriticalRegion();
      *(PERESOURCE *)((char *)this[17] + v16 + 600) = v64;
      if ( !*(PERESOURCE *)((char *)this[17] + v16 + 600) )
      {
        v99 = WdLogNewEntry5_WdAssertion(v65);
        *(_QWORD *)(v99 + 24) = 10729LL;
        WdLogEvent5_WdAssertion(v99);
      }
LABEL_44:
      if ( *(_DWORD *)((char *)this[17] + v16 + 680) == 1 )
        ADAPTER_DISPLAY::RemoveVidPnOwnership((OUTPUTDUPL_MGR **)this, a3);
      return 0LL;
    }
    v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
    v93[3] = (unsigned int)v116;
    v93[4] = HIDWORD(v116);
    v93[5] = v9;
    v93[6] = v52;
    v93[7] = v32;
    WdLogEvent5_WdWarning(v93);
    DXGDEVICE::DestroyAllocationInternal(
      v9,
      0,
      0LL,
      (struct DXGRESOURCE *)(*(PERESOURCE *)((char *)this[17] + v16 + 88))->ExclusiveWaiters,
      0LL,
      DXGDEVICE::DestroyFlagsDefault);
    v94 = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
    if ( v94 )
    {
      v95 = v16 + 88;
      v96 = v94;
      do
      {
        *(PERESOURCE *)((char *)this[17] + v95) = 0LL;
        v95 += 8LL;
        --v96;
      }
      while ( v96 );
    }
  }
  return (unsigned int)v32;
}
