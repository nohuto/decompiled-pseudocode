/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0058050
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C000FDA0 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     ?Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C000F658 (-Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C000F680 (-AcquireExclusive@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C00104B8 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001DFC8 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     Template_ppqPR2TR2 @ 0x1C001E460 (Template_ppqPR2TR2.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C004C4E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C004E5D0 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0088224 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct DXGPROCESSVIDMMLOCK *a10,
        struct VIDMM_ALLOC **a11,
        struct _VIDMM_PRIMARIES_REFERENCES *a12,
        struct DXGALLOCATION **a13)
{
  unsigned int v13; // r15d
  __int64 v16; // r8
  unsigned int v17; // eax
  union _LARGE_INTEGER v18; // rax
  struct VIDMM_ALLOC *v19; // rdx
  unsigned int v20; // edi
  struct _D3DDDI_ALLOCATIONLIST *v21; // r14
  struct VIDMM_ALLOC **v22; // r13
  VIDMM_SEGMENT *v23; // r9
  struct DXGALLOCATION *v24; // r12
  struct VIDMM_ALLOC *v25; // r12
  __int64 v26; // r15
  _DWORD *v27; // rax
  __int64 v28; // rcx
  union _LARGE_INTEGER i; // rcx
  _DWORD *v30; // rdx
  unsigned __int64 *v31; // r13
  int v32; // r8d
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdi
  struct VIDMM_ALLOC *v44; // r15
  signed int v45; // edi
  __int64 v46; // rax
  struct _VIDMM_PRIMARIES_REFERENCES *v47; // r8
  _QWORD *v48; // rax
  unsigned int v49; // ebx
  unsigned int v50; // esi
  unsigned __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  _DWORD *v68; // rdx
  __int64 v69; // rax
  int v70; // r9d
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // edi
  PRKPROCESS **v74; // rcx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  union _LARGE_INTEGER *v82; // rcx
  union _LARGE_INTEGER v83; // r14
  signed int v84; // r15d
  unsigned int v85; // edi
  __int64 v87; // rdi
  _QWORD *v88; // rax
  __int64 v89; // rax
  union _LARGE_INTEGER v90; // r12
  union _LARGE_INTEGER v91; // r14
  __int64 v92; // r15
  __int64 j; // rsi
  __int64 v94; // rdx
  __int64 v95; // r8
  int *v96; // r9
  signed __int32 v97[8]; // [rsp+0h] [rbp-398h] BYREF
  __int64 v98; // [rsp+28h] [rbp-370h]
  unsigned int v99; // [rsp+40h] [rbp-358h]
  int v100; // [rsp+44h] [rbp-354h]
  VIDMM_SEGMENT *v101; // [rsp+48h] [rbp-350h]
  struct VIDMM_ALLOC *v102; // [rsp+50h] [rbp-348h]
  unsigned __int64 *p_QuadPart; // [rsp+58h] [rbp-340h]
  VIDMM_SEGMENT *v104; // [rsp+60h] [rbp-338h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-330h]
  int v106; // [rsp+70h] [rbp-328h]
  int v107; // [rsp+74h] [rbp-324h]
  unsigned int v108; // [rsp+78h] [rbp-320h]
  __int64 v109; // [rsp+80h] [rbp-318h]
  struct VIDMM_ALLOC *v110; // [rsp+88h] [rbp-310h]
  unsigned int *v111; // [rsp+90h] [rbp-308h]
  union _LARGE_INTEGER *v112; // [rsp+98h] [rbp-300h]
  __int64 v113; // [rsp+A0h] [rbp-2F8h]
  struct _VIDMM_PRIMARIES_REFERENCES *v114; // [rsp+A8h] [rbp-2F0h]
  DXGPROCESSVIDMMLOCK *v115; // [rsp+B0h] [rbp-2E8h]
  __int64 v116; // [rsp+B8h] [rbp-2E0h]
  int v117; // [rsp+C0h] [rbp-2D8h]
  struct DXGALLOCATION **v118; // [rsp+C8h] [rbp-2D0h]
  __int64 v119; // [rsp+D0h] [rbp-2C8h]
  struct VIDMM_ALLOC **v120; // [rsp+D8h] [rbp-2C0h]
  unsigned __int64 *v121; // [rsp+E0h] [rbp-2B8h]
  __int64 v122; // [rsp+E8h] [rbp-2B0h]
  union _LARGE_INTEGER v123; // [rsp+F0h] [rbp-2A8h]
  union _LARGE_INTEGER v124; // [rsp+F8h] [rbp-2A0h]
  __int64 v125; // [rsp+100h] [rbp-298h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-290h]
  struct _KTHREAD *v127; // [rsp+110h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-280h] BYREF
  _BYTE v129[512]; // [rsp+150h] [rbp-248h] BYREF

  v13 = a4;
  v108 = a4;
  v111 = a7;
  v112 = a8;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v121 = (unsigned __int64 *)&a9->QuadPart;
  v115 = a10;
  v120 = a11;
  v114 = a12;
  v118 = a13;
  v99 = 0;
  v102 = 0LL;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v104 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  DXGPROCESS::GetCurrent();
  v16 = *(_QWORD *)(a2[17].QuadPart + 16);
  v116 = v16;
  v100 = 0;
  if ( a9 )
    *a9 = a2[12];
  *a11 = 0LL;
  ++*((_DWORD *)this + 1784);
  *((_DWORD *)this + 1785) += v13;
  v17 = *((_DWORD *)this + 1786);
  if ( v13 > v17 )
    v17 = v13;
  *((_DWORD *)this + 1786) = v17;
  a2[3].HighPart |= 4u;
  v18 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v97, 0);
  a2[19] = v18;
  *(_QWORD *)a12 = 0LL;
  v113 = 0LL;
  v19 = 0LL;
  v110 = 0LL;
  v20 = 0;
  v99 = 0;
  v21 = a3;
  v22 = QuadPart;
  v23 = v104;
  while ( 1 )
  {
    v101 = v23;
    if ( v20 >= v13 )
      break;
    if ( !v21->hAllocation )
    {
      ++*((_DWORD *)this + 1787);
      *v22 = 0LL;
      *(_QWORD *)v23 = 0LL;
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      goto LABEL_61;
    }
    v24 = v118[v20];
    if ( !v24 )
    {
      v80 = WdLogNewEntry5_WdError(v118, v19, v16, v23);
      *(_QWORD *)(v80 + 24) = v21->hAllocation;
      *(_QWORD *)(v80 + 32) = v20;
      WdLogEvent5_WdError(v80);
      v49 = -1071775468;
      v100 = -1071775468;
      v50 = a6;
      v51 = p_QuadPart;
LABEL_153:
      if ( !v51 && v20 )
      {
        do
        {
          if ( *--v22 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v22, v50, v16, (__int64)v23);
          --v20;
        }
        while ( v20 );
      }
      return v49;
    }
    v25 = (struct VIDMM_ALLOC *)*((_QWORD *)v24 + 3);
    v102 = v25;
    v26 = **(_QWORD **)v25;
    v27 = *(_DWORD **)(v26 + 504);
    v28 = *v27 >> 14;
    if ( (*v27 & 0x4000) != 0 )
    {
      if ( v19 || (v21->Value & 1) == 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v19);
        v48[3] = v25;
        v48[4] = v110;
        v48[5] = v21->Value & 1;
        WdLogEvent5_WdAssertion(v48);
        v49 = -1071775482;
        v100 = -1071775482;
        v50 = a6;
        v51 = p_QuadPart;
        goto LABEL_153;
      }
      v110 = v25;
    }
    if ( *(_BYTE *)(v26 + 96) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v28, v19, v16, v23);
        v56 = WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
        *(_QWORD *)(v56 + 24) = a2;
        *(_QWORD *)(v56 + 32) = v25;
      }
      v49 = -1071775482;
      v100 = -1071775482;
      v50 = a6;
      v51 = p_QuadPart;
      goto LABEL_153;
    }
    if ( *((_QWORD *)v25 + 1) != v16 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v28, v19, v16, v23);
      v57[3] = v116;
      v57[4] = v25;
      v57[5] = v20;
      v57[6] = *((_QWORD *)v25 + 1);
      WdLogEvent5_WdError(v57);
      v49 = -1071775467;
      v100 = -1071775467;
      v50 = a6;
      v51 = p_QuadPart;
      goto LABEL_153;
    }
    if ( *(_WORD *)(*((_QWORD *)v25 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v62 = WdLogNewEntry5_WdAssertion(v59, v58);
        *(_QWORD *)(v62 + 24) = a2;
        *(_QWORD *)(v62 + 32) = v25;
        WdLogEvent5_WdAssertion(v62);
        v49 = -1071775466;
        v100 = -1071775466;
        v50 = a6;
        v51 = p_QuadPart;
        goto LABEL_153;
      }
      v63 = WdLogNewEntry5_WdError(v59, v58, v60, v61);
      *(_QWORD *)(v63 + 24) = a2;
      *(_QWORD *)(v63 + 32) = v25;
      WdLogEvent5_WdError(v63);
      v23 = v101;
    }
    *v22 = v25;
    *(_QWORD *)v23 = *(_QWORD *)(*((_QWORD *)v25 + 2) + 32LL);
    i.QuadPart = v21->Value & 1;
    if ( (v21->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v25 + 24) )
      {
        v122 = *((_QWORD *)this + 3);
        if ( *(int *)(v122 + 1792) >= 4608 )
        {
          v64 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdWarning)((union _LARGE_INTEGER)i.QuadPart);
          WdLogEvent5_WdWarning(v64);
          v66 = WdLogNewEntry5_WdWarning(v65);
          *(_QWORD *)(v66 + 24) = a2;
          *(_QWORD *)(v66 + 32) = v25;
          WdLogEvent5_WdWarning(v66);
          v49 = -1073741790;
          v100 = -1073741790;
          v50 = a6;
          v51 = p_QuadPart;
          goto LABEL_153;
        }
      }
    }
    v30 = (_DWORD *)((char *)v23 + 8);
    *((_DWORD *)v23 + 2) = i.LowPart | *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
    if ( (v21->Value & 1) != 0 )
      ++*((_DWORD *)this + 1788);
    if ( (*v30 & 1) != 0 && (**(_DWORD **)(v26 + 504) & 0x200000) != 0 )
      *((_DWORD *)v114 + 34) |= 1u;
    if ( (*v30 & 1) != 0 )
    {
      i.QuadPart = (**(_DWORD **)(v26 + 504) >> 23) & 0x100 | ((unsigned __int16)**(_DWORD **)(v26 + 504) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v26 + 504) | (**(_DWORD **)(v26 + 504) >> 11)) >> 11)) & 0x100u;
      if ( i.LowPart )
      {
        v47 = v114;
        if ( *(_DWORD *)v114 >= 0x10u )
        {
          ++*((_DWORD *)this + 1794);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v25 + 26);
          v25 = v102;
          *((_QWORD *)v47 + *(unsigned int *)v47 + 1) = v102;
          v23 = v104;
        }
        ++*(_DWORD *)v47;
        i.QuadPart = (*(_DWORD *)(*(_QWORD *)(v26 + 40) + 4LL) >> 6) & 0xF;
        *((_DWORD *)v47 + 1) |= 1 << ((*(_DWORD *)(*(_QWORD *)(v26 + 40) + 4LL) >> 6) & 0xF);
      }
    }
    v101 = *(VIDMM_SEGMENT **)(v26 + 136);
    v31 = p_QuadPart;
    if ( p_QuadPart )
      goto LABEL_23;
    if ( !v101 || (*((_DWORD *)this + 1616) & 0x40) != 0 )
    {
      v25 = v102;
      v23 = v104;
LABEL_23:
      ++*((_DWORD *)this + 1792);
      *v30 &= 0xFFFFFFC1;
      if ( v31 )
      {
        i = a2[17];
        v123 = i;
        if ( (*(_DWORD *)(i.QuadPart + 32) & 0x20) != 0 )
        {
          v33 = *((_QWORD *)v25 + 20);
        }
        else
        {
          v124 = i;
          v32 = *(_DWORD *)(i.QuadPart + 8);
          v117 = v32;
          v30 = (_DWORD *)((char *)v25 + 128);
          for ( i = *(union _LARGE_INTEGER *)((char *)v25 + 128);
                (_DWORD *)i.QuadPart != v30;
                i = *(union _LARGE_INTEGER *)i.QuadPart )
          {
            if ( ((*(_DWORD *)(i.QuadPart + 40) >> 4) & 0x3F) == v32 )
            {
              v33 = *(_QWORD *)(i.QuadPart + 72);
              goto LABEL_29;
            }
          }
          v33 = 0LL;
LABEL_29:
          v119 = v33;
        }
        *((_QWORD *)v23 + 2) = v33;
      }
      else
      {
        *((_QWORD *)v23 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_55;
      v125 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v125 + 300) & 4) != 0 || !*(_BYTE *)(v26 + 97) && (*(_DWORD *)(v26 + 76) & 0x400) == 0 )
        goto LABEL_55;
      v34 = 0;
      v106 = 0;
      v35 = *(_QWORD *)(v26 + 320);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v35 + 8) == CurrentThread )
      {
        if ( *(int *)(v35 + 24) <= 0 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v69 + 24) = 326LL;
          WdLogEvent5_WdAssertion(v69);
        }
        ++*(_DWORD *)(v35 + 24);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v35 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v70 = *(_DWORD *)(v35 + 28);
            if ( v70 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v37, &EventBlockThread, v38, v70);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v35);
          ExAcquirePushLockExclusiveEx(v35 + 16, 0LL);
        }
        if ( *(_QWORD *)(v35 + 8) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v71 + 24) = 350LL;
          WdLogEvent5_WdAssertion(v71);
        }
        if ( *(_DWORD *)(v35 + 24) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v72 + 24) = 351LL;
          WdLogEvent5_WdAssertion(v72);
        }
        *(_QWORD *)(v35 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v35 + 24) = 1;
      }
      v113 = v26;
      v40 = *(_QWORD *)(v26 + 112);
      if ( v40 )
      {
        v46 = *(_QWORD *)(v40 + 8);
      }
      else
      {
        v41 = *(_QWORD **)(v26 + 104);
        v36 = v41[3];
        if ( v36 )
        {
          v46 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v41[1] + 24LL) + 88LL))(*(_QWORD *)(v41[1] + 24LL));
        }
        else
        {
          v37 = v41[10];
          if ( !v37 )
          {
            v109 = 0LL;
            goto LABEL_45;
          }
          v46 = *(_QWORD *)(v37 + 8);
        }
      }
      v109 = v46;
      if ( !v46 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v26 + 136)
          && (**(_DWORD **)(v26 + 504) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v26 + 8)) >= 0 )
        {
          DXGPROCESSVIDMMLOCK::Release(v115);
          v34 = 1;
          v106 = 1;
          v73 = 0;
          v107 = 0;
          v74 = *(PRKPROCESS ***)(v26 + 104);
          if ( v74 && v74 != *(PRKPROCESS ***)v102 )
          {
            KeStackAttachProcess(*v74[1], &ApcState);
            v73 = 1;
            v107 = 1;
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      (VIDMM_GLOBAL *)v74,
                      *(struct _VIDMM_LOCAL_ALLOC **)(v26 + 104),
                      (struct _VIDMM_GLOBAL_ALLOC *)v26,
                      0LL,
                      *(_QWORD *)(v26 + 8),
                      (enum _LOCK_OPERATION)v98,
                      0LL,
                      0) < 0 )
          {
            v75 = WdLogNewEntry5_WdError(v37, v36, v38, v39);
            *(_QWORD *)(v75 + 24) = v26;
            WdLogEvent5_WdError(v75);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v26 + 8));
          }
          else
          {
            ++*(_DWORD *)(v26 + 348);
            *(_DWORD *)(v26 + 84) |= 2u;
          }
          if ( v73 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v113 = 0LL;
      v42 = *(_QWORD *)(v26 + 320);
      v127 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v42 + 8) != v127 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36, v38, v39);
        v76[3] = 275LL;
        v76[4] = 4LL;
        v76[5] = v42;
        v76[6] = 0LL;
        v76[7] = 0LL;
        WdLogEvent5_WdCriticalError(v76);
      }
      if ( *(int *)(v42 + 24) <= 0 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v77 + 24) = 370LL;
        WdLogEvent5_WdAssertion(v77);
      }
      if ( (*(_DWORD *)(v42 + 24))-- == 1 )
      {
        *(_QWORD *)(v42 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v42 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v34 )
        DXGPROCESSVIDMMLOCK::AcquireExclusive(v115);
      goto LABEL_54;
    }
    ++*((_DWORD *)this + 1791);
    v67 = VIDMM_SEGMENT::DriverId(v101);
    *v68 ^= (*v68 ^ (2 * v67)) & 0x3E;
    v30 = (_DWORD *)(*(_QWORD *)(v26 + 144) + *((_QWORD *)v101 + 3));
    *((_QWORD *)v104 + 2) = v30;
LABEL_54:
    v25 = v102;
LABEL_55:
    if ( !v31 )
      VIDMM_GLOBAL::AddDMAReferences(v25, a6);
    v44 = v102;
    if ( !*((_DWORD *)v25 + 42) && (*((_BYTE *)v102 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40872) & 2) == 0
        || (i.QuadPart = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (i.LowPart & 0x10) == 0) )
      {
        v78 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
                (union _LARGE_INTEGER)i.QuadPart,
                v30);
        *(_QWORD *)(v78 + 24) = v44;
        WdLogEvent5_WdAssertion(v78);
        v49 = -1073741823;
        v100 = -1073741823;
        VidSchiMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v44 + 1) + 32LL), 16);
        v50 = a6;
        if ( !v31 )
          VIDMM_GLOBAL::RemoveDMAReferences(v44, a6, v16, (__int64)v23);
        v20 = v99;
        v22 = QuadPart;
        v51 = p_QuadPart;
        goto LABEL_153;
      }
    }
    v21 = a3;
    v45 = (a3->Value >> 2) & 7;
    if ( v45 )
    {
      v79 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((union _LARGE_INTEGER)i.QuadPart, v30);
      *(_QWORD *)(v79 + 24) = v44;
      *(_QWORD *)(v79 + 32) = v45;
      WdLogEvent5_WdAssertion(v79);
    }
    v20 = v99;
    v22 = QuadPart;
    v23 = v104;
    v13 = v108;
    v19 = v110;
    v16 = v116;
LABEL_61:
    QuadPart = ++v22;
    a3 = ++v21;
    v23 = (VIDMM_SEGMENT *)((char *)v23 + 24);
    v104 = v23;
    v99 = ++v20;
  }
  *v120 = v19;
  if ( a2[8].QuadPart )
  {
    v101 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 136);
    if ( !v101 || (*((_DWORD *)this + 1616) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1792);
      a2[3].HighPart &= ~4u;
      *v111 = 0;
      v82 = v112;
      v112->QuadPart = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1791);
      if ( (*((_DWORD *)v101 + 14) & 0x1000) != 0 )
        v81 = 0;
      else
        v81 = *((_DWORD *)v101 + 4) + 1;
      *v111 = v81;
      v19 = (struct VIDMM_ALLOC *)(*((_QWORD *)v101 + 3) + *(_QWORD *)(a2[7].QuadPart + 144));
      v82 = v112;
      v112->QuadPart = (LONGLONG)v19;
    }
    v83 = a2[8];
    v84 = a6;
    if ( a6 + *(_DWORD *)(v83.QuadPart + 172) == 0x7FFFFFFF )
    {
      v87 = *(int *)(v83.QuadPart + 172);
      v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v82, v19, v16, v23);
      v88[3] = 270LL;
      v88[4] = 41LL;
      v88[5] = v83.QuadPart;
      v88[6] = v87;
      v88[7] = 0LL;
      WdLogEvent5_WdCriticalError(v88);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v83.QuadPart + 172), a6);
  }
  else
  {
    *v111 = 0;
    *v112 = a2[11];
    v84 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v84);
  if ( v84 > 1 )
    a2[3].HighPart |= 2u;
  v85 = v99;
  if ( !p_QuadPart )
    a2[18].LowPart = v99;
  a2[2].LowPart = v84;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v89 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v97, 0);
    v85 = v99;
    if ( a2[19].QuadPart == v89 )
      ++*((_DWORD *)this + 1793);
  }
  if ( (qword_1C0035050 & 4) != 0 )
  {
    v90 = a2[14];
    v91 = a2[13];
    v92 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v85; j = (unsigned int)(j + 128) )
    {
      v94 = 128LL;
      if ( v85 - (unsigned int)j < 0x80 )
        v94 = v85 - (unsigned int)j;
      v95 = 0LL;
      if ( (_DWORD)v94 )
      {
        v96 = (int *)v129;
        do
        {
          *v96 = *(_DWORD *)(v90.QuadPart + 24LL * (unsigned int)(v95 + j) + 8) & 1;
          v95 = (unsigned int)(v95 + 1);
          ++v96;
        }
        while ( (unsigned int)v95 < (unsigned int)v94 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v98) = v94;
        Template_ppqPR2TR2(v91.QuadPart + 8 * j, v94, v95, v92, a2, v98, v91.QuadPart + 8 * j, v129);
      }
    }
  }
  return 0LL;
}
