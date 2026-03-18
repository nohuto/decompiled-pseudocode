/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00509D0
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0011890 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C0011344 (-Release@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPROCESSVIDMMLOCK@@QEAAXXZ @ 0x1C001136C (-AcquireExclusive@DXGPROCESSVIDMMLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011CD4 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001CCFC (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     Template_ppqPR2TR2 @ 0x1C001D0EC (Template_ppqPR2TR2.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00438B0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0046230 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?InsertAllocationInMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007B07C (-InsertAllocationInMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC ***a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        unsigned __int64 *a9,
        struct DXGPROCESSVIDMMLOCK *a10,
        struct VIDMM_ALLOC **a11,
        struct _VIDMM_PRIMARIES_REFERENCES *a12,
        struct DXGALLOCATION **a13)
{
  unsigned int v13; // r15d
  VIDMM_GLOBAL *v14; // r12
  struct _VIDMM_DMA_BUFFER *v15; // r10
  __int64 v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 i; // rcx
  __int64 v20; // rax
  struct _VIDMM_PRIMARIES_REFERENCES *v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // esi
  struct _D3DDDI_ALLOCATIONLIST *v24; // r14
  struct VIDMM_ALLOC **v25; // rdi
  struct VIDMM_ALLOC **v26; // r13
  struct DXGALLOCATION *v27; // rbx
  struct VIDMM_ALLOC *v28; // rbx
  __int64 v29; // r15
  _DWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned int v33; // ebx
  unsigned __int64 *v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  struct VIDMM_ALLOC *v45; // rdx
  unsigned __int64 *v46; // rsi
  int v47; // eax
  int v48; // r11d
  _DWORD *v49; // rdx
  struct VIDMM_ALLOC *v50; // rax
  int v51; // edi
  union _LARGE_INTEGER *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int LowPart; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  int v64; // eax
  DXGPROCESSVIDMMLOCK *v65; // r14
  int v66; // ebx
  PRKPROCESS **v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rax
  struct VIDMM_ALLOC *v73; // rdi
  __int64 v74; // rax
  signed int v75; // ebx
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // r8
  unsigned int v80; // esi
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // r14
  __int64 v84; // r15
  unsigned int v85; // r9d
  unsigned int v86; // eax
  int v88; // r8d
  signed __int32 v89[8]; // [rsp+0h] [rbp-3B8h] BYREF
  __int64 v90; // [rsp+28h] [rbp-390h]
  int v91; // [rsp+40h] [rbp-378h]
  int v92; // [rsp+44h] [rbp-374h]
  struct VIDMM_ALLOC *v93; // [rsp+48h] [rbp-370h]
  unsigned __int64 *v94; // [rsp+50h] [rbp-368h]
  struct _VIDMM_PRIMARIES_REFERENCES *v95; // [rsp+58h] [rbp-360h]
  struct _VIDMM_DMA_BUFFER *v96; // [rsp+60h] [rbp-358h]
  struct VIDMM_ALLOC **v97; // [rsp+68h] [rbp-350h]
  struct VIDMM_ALLOC **v98; // [rsp+70h] [rbp-348h]
  DXGPROCESSVIDMMLOCK *v99; // [rsp+78h] [rbp-340h]
  int v100; // [rsp+80h] [rbp-338h]
  struct VIDMM_ALLOC *v101; // [rsp+88h] [rbp-330h]
  unsigned int v102; // [rsp+90h] [rbp-328h]
  int v103; // [rsp+94h] [rbp-324h]
  unsigned int *v104; // [rsp+98h] [rbp-320h]
  VIDMM_GLOBAL *v105; // [rsp+A0h] [rbp-318h]
  union _LARGE_INTEGER *v106; // [rsp+A8h] [rbp-310h]
  __int64 v107; // [rsp+B0h] [rbp-308h]
  __int64 v108; // [rsp+B8h] [rbp-300h]
  VIDMM_SEGMENT *v109; // [rsp+C0h] [rbp-2F8h]
  int v110; // [rsp+C8h] [rbp-2F0h]
  LARGE_INTEGER Increment; // [rsp+D0h] [rbp-2E8h]
  __int64 v112; // [rsp+D8h] [rbp-2E0h]
  struct DXGALLOCATION **v113; // [rsp+E0h] [rbp-2D8h]
  struct VIDMM_ALLOC *v114; // [rsp+E8h] [rbp-2D0h]
  struct VIDMM_ALLOC **v115; // [rsp+F0h] [rbp-2C8h]
  int v116; // [rsp+F8h] [rbp-2C0h]
  unsigned __int64 *v117; // [rsp+100h] [rbp-2B8h]
  __int64 v118; // [rsp+108h] [rbp-2B0h]
  __int64 v119; // [rsp+110h] [rbp-2A8h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp-2A0h]
  struct DXGADAPTER *v121; // [rsp+120h] [rbp-298h]
  struct _KTHREAD *v122; // [rsp+128h] [rbp-290h]
  __int64 v123; // [rsp+130h] [rbp-288h]
  __int64 v124; // [rsp+138h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+140h] [rbp-278h] BYREF
  _BYTE v126[512]; // [rsp+170h] [rbp-248h] BYREF

  v13 = a4;
  v102 = a4;
  v96 = (struct _VIDMM_DMA_BUFFER *)a2;
  v14 = this;
  v105 = this;
  v104 = a7;
  v106 = a8;
  v94 = a9;
  v117 = a9;
  v99 = a10;
  v115 = a11;
  v95 = a12;
  v113 = a13;
  v91 = 0;
  v93 = 0LL;
  v98 = a2[13];
  v97 = a2[14];
  DXGPROCESS::GetCurrent();
  v15 = v96;
  v16 = *(_QWORD *)(*((_QWORD *)v96 + 17) + 16LL);
  v112 = v16;
  v100 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL)
                               + 8LL * *(unsigned int *)(*((_QWORD *)v14 + 3) + 184LL))
                   + 400LL);
  v92 = 0;
  if ( a9 )
    *a9 = *((_QWORD *)v96 + 12);
  v17 = 0;
  *a11 = 0LL;
  ++*((_DWORD *)v14 + 1784);
  *((_DWORD *)v14 + 1785) += v13;
  v18 = *((_DWORD *)v14 + 1786);
  if ( v13 > v18 )
    v18 = v13;
  *((_DWORD *)v14 + 1786) = v18;
  *((_DWORD *)v15 + 7) |= 4u;
  i = **((_QWORD **)v15 + 17);
  v20 = *(_QWORD *)(i + 40);
  _InterlockedOr(v89, 0);
  *((_QWORD *)v15 + 19) = v20;
  v21 = v95;
  *(_QWORD *)v95 = 0LL;
  v108 = 0LL;
  v22 = 0LL;
  v101 = 0LL;
  v23 = 0;
  v91 = 0;
  v24 = a3;
  v25 = v98;
  v26 = v97;
  while ( v23 < v13 )
  {
    if ( !v24->hAllocation )
    {
      ++*((_DWORD *)v14 + 1787);
      *v25 = 0LL;
      *v26 = 0LL;
      v26[1] = 0LL;
      v26[2] = 0LL;
      goto LABEL_123;
    }
    v27 = v113[v23];
    if ( !v27 )
    {
      v77 = WdLogNewEntry5_WdError(i, v22, v21);
      *(_QWORD *)(v77 + 24) = v24->hAllocation;
      *(_QWORD *)(v77 + 32) = v23;
      WdLogEvent5_WdError(v77);
      v33 = -1071775468;
      v92 = -1071775468;
      v34 = v94;
LABEL_153:
      if ( !v34 && v23 )
      {
        v88 = a6;
        do
        {
          if ( *--v25 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v25, v88);
          --v23;
        }
        while ( v23 );
      }
      return v33;
    }
    v28 = (struct VIDMM_ALLOC *)*((_QWORD *)v27 + 3);
    v93 = v28;
    v29 = **(_QWORD **)v28;
    v30 = *(_DWORD **)(v29 + 472);
    v31 = *v30 >> 14;
    if ( (*v30 & 0x4000) != 0 )
    {
      if ( v22 || (v24->Value & 1) == 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v31, v22, v21, v16);
        v32[3] = v28;
        v32[4] = v101;
        v32[5] = v24->Value & 1;
        WdLogEvent5_WdAssertion(v32);
        v33 = -1071775482;
        v92 = -1071775482;
        v34 = v94;
        goto LABEL_153;
      }
      v101 = v28;
    }
    if ( *(_BYTE *)(v29 + 93) )
    {
      v33 = -1071775482;
      v92 = -1071775482;
      v34 = v94;
      goto LABEL_153;
    }
    if ( *((_QWORD *)v28 + 1) != v16 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v31, v22, v21);
      v35[3] = v112;
      v35[4] = v28;
      v35[5] = v23;
      v35[6] = *((_QWORD *)v28 + 1);
      WdLogEvent5_WdError(v35);
      v33 = -1071775467;
      v92 = -1071775467;
      v34 = v94;
      goto LABEL_153;
    }
    v14 = v105;
    if ( *(_DWORD *)(*((_QWORD *)v28 + 12) + 4LL) && a5 )
    {
      v121 = (struct DXGADAPTER *)*((_QWORD *)v105 + 3);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors(v121) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
        *(_QWORD *)(v40 + 24) = v96;
        *(_QWORD *)(v40 + 32) = v28;
        WdLogEvent5_WdAssertion(v40);
        v33 = -1071775466;
        v92 = -1071775466;
        v34 = v94;
        goto LABEL_153;
      }
      v41 = WdLogNewEntry5_WdError(v37, v36, v38);
      *(_QWORD *)(v41 + 24) = v96;
      *(_QWORD *)(v41 + 32) = v28;
      WdLogEvent5_WdError(v41);
      v15 = v96;
      v21 = v95;
    }
    *v25 = v28;
    *v26 = *(struct VIDMM_ALLOC **)(*((_QWORD *)v28 + 2) + 32LL);
    i = v24->Value & 1;
    if ( (v24->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v28 + 24) )
      {
        v123 = *((_QWORD *)v14 + 3);
        if ( *(int *)(v123 + 1656) >= 4608 )
        {
          v42 = WdLogNewEntry5_WdWarning(i);
          WdLogEvent5_WdWarning(v42);
          v44 = WdLogNewEntry5_WdWarning(v43);
          *(_QWORD *)(v44 + 24) = v96;
          *(_QWORD *)(v44 + 32) = v28;
          WdLogEvent5_WdWarning(v44);
          v33 = -1073741790;
          v92 = -1073741790;
          v34 = v94;
          goto LABEL_153;
        }
      }
    }
    v45 = (struct VIDMM_ALLOC *)(v26 + 1);
    *((_DWORD *)v26 + 2) = i | (_DWORD)v26[1] & 0xFFFFFFFE;
    if ( (v24->Value & 1) != 0 )
      ++*((_DWORD *)v14 + 1788);
    if ( (*(_DWORD *)v45 & 1) != 0 && (**(_DWORD **)(v29 + 472) & 0x200000) != 0 )
      *((_DWORD *)v21 + 34) |= 1u;
    if ( (*(_DWORD *)v45 & 1) != 0 )
    {
      i = (**(_DWORD **)(v29 + 472) >> 23) & 0x100 | ((unsigned __int16)**(_DWORD **)(v29 + 472) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v29 + 472) | (**(_DWORD **)(v29 + 472) >> 11)) >> 11)) & 0x100u;
      if ( (_DWORD)i )
      {
        if ( *(_DWORD *)v21 >= 0x10u )
        {
          ++*((_DWORD *)v14 + 1794);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v28 + 26);
          v28 = v93;
          *((_QWORD *)v21 + *(unsigned int *)v21 + 1) = v93;
          v26 = v97;
        }
        ++*(_DWORD *)v21;
        i = (*(_DWORD *)(*(_QWORD *)(v29 + 40) + 4LL) >> 6) & 0xF;
        *((_DWORD *)v21 + 1) |= 1 << ((*(_DWORD *)(*(_QWORD *)(v29 + 40) + 4LL) >> 6) & 0xF);
      }
    }
    v109 = *(VIDMM_SEGMENT **)(v29 + 128);
    v46 = v94;
    if ( v94 )
      goto LABEL_50;
    if ( !v109 || (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      v28 = v93;
      v26 = v97;
LABEL_50:
      ++*((_DWORD *)v14 + 1792);
      *(_DWORD *)v45 &= 0xFFFFFFC1;
      if ( v46 )
      {
        i = *((_QWORD *)v15 + 17);
        v118 = i;
        if ( (*(_DWORD *)(i + 32) & 0x20) != 0 )
        {
          v50 = (struct VIDMM_ALLOC *)*((_QWORD *)v28 + 18);
        }
        else
        {
          v124 = i;
          v21 = (struct _VIDMM_PRIMARIES_REFERENCES *)*(unsigned int *)(i + 8);
          v116 = *(_DWORD *)(i + 8);
          v45 = (struct VIDMM_ALLOC *)((char *)v28 + 128);
          for ( i = *((_QWORD *)v28 + 16); (struct VIDMM_ALLOC *)i != v45; i = *(_QWORD *)i )
          {
            if ( ((*(_DWORD *)(i + 40) >> 4) & 0x3F) == (_DWORD)v21 )
            {
              v50 = *(struct VIDMM_ALLOC **)(i + 72);
              goto LABEL_60;
            }
          }
          v50 = 0LL;
LABEL_60:
          v114 = v50;
        }
        v26[2] = v50;
      }
      else
      {
        v26[2] = 0LL;
      }
      *((_DWORD *)v15 + 7) &= ~4u;
      if ( (dword_1C002F104 & 1) != 0 )
        goto LABEL_111;
      v119 = *((_QWORD *)v14 + 3);
      if ( (*(_DWORD *)(v119 + 284) & 4) != 0 || !*(_BYTE *)(v29 + 94) && (*(_DWORD *)(v29 + 76) & 0x400) == 0 )
        goto LABEL_111;
      v51 = 0;
      v103 = 0;
      v52 = *(union _LARGE_INTEGER **)(v29 + 312);
      KeEnterCriticalRegion();
      if ( _InterlockedIncrement((volatile signed __int32 *)&v52[1]) > 1 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (struct _KTHREAD *)v52->QuadPart == CurrentThread )
        {
          if ( v52[1].HighPart <= 0 )
          {
            v57 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
            *(_QWORD *)(v57 + 24) = 328LL;
            WdLogEvent5_WdAssertion(v57);
          }
          ++v52[1].HighPart;
          goto LABEL_81;
        }
        if ( bTracingEnabled )
        {
          LowPart = v52[7].LowPart;
          if ( LowPart != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v54, &EventBlockThread, v55, LowPart);
        }
        Increment.QuadPart = 1LL;
        ExInterlockedAddLargeInteger(v52 + 2, (LARGE_INTEGER)1LL, (PKSPIN_LOCK)&v52[6].QuadPart);
        KeWaitForSingleObject(&v52[3], Executive, 0, 0, 0LL);
      }
      if ( v52->QuadPart )
      {
        v59 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
        *(_QWORD *)(v59 + 24) = 354LL;
        WdLogEvent5_WdAssertion(v59);
      }
      if ( v52[1].HighPart )
      {
        v60 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
        *(_QWORD *)(v60 + 24) = 355LL;
        WdLogEvent5_WdAssertion(v60);
      }
      v52->QuadPart = (LONGLONG)KeGetCurrentThread();
      v52[1].HighPart = 1;
LABEL_81:
      v108 = v29;
      v61 = *(_QWORD *)(v29 + 104);
      if ( !v61 )
      {
        v62 = *(_QWORD **)(v29 + 96);
        v53 = v62[3];
        if ( v53 )
        {
          v63 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v62[1] + 24LL) + 88LL))(*(_QWORD *)(v62[1] + 24LL));
          goto LABEL_87;
        }
        v61 = v62[10];
        if ( !v61 )
        {
          v107 = 0LL;
          goto LABEL_88;
        }
      }
      v63 = *(_QWORD *)(v61 + 8);
LABEL_87:
      v107 = v63;
      if ( !v63 )
      {
LABEL_88:
        if ( !*(_QWORD *)(v29 + 128) && (**(_DWORD **)(v29 + 472) & 0x40000000) == 0 )
        {
          v64 = VIDMM_GLOBAL::ChargePinnedBackingStore(v14, *(_QWORD *)(v29 + 8));
          v65 = v99;
          if ( v64 >= 0 )
          {
            DXGPROCESSVIDMMLOCK::Release(v99);
            v51 = 1;
            v103 = 1;
            v66 = 0;
            v110 = 0;
            v67 = *(PRKPROCESS ***)(v29 + 96);
            if ( v67 && v67 != *(PRKPROCESS ***)v93 )
            {
              KeStackAttachProcess(*v67[1], &ApcState);
              v66 = 1;
              v110 = 1;
            }
            if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                        (VIDMM_GLOBAL *)v67,
                        *(struct _VIDMM_LOCAL_ALLOC **)(v29 + 96),
                        (struct _VIDMM_GLOBAL_ALLOC *)v29,
                        0LL,
                        *(_QWORD *)(v29 + 8),
                        (enum _LOCK_OPERATION)v90,
                        0LL,
                        0) < 0 )
            {
              v68 = WdLogNewEntry5_WdError(v54, v53, v55);
              *(_QWORD *)(v68 + 24) = v29;
              WdLogEvent5_WdError(v68);
              VIDMM_GLOBAL::ReturnPinnedBackingStore(v14, *(_QWORD *)(v29 + 8));
            }
            else
            {
              ++*(_DWORD *)(v29 + 340);
              *(_DWORD *)(v29 + 84) |= 2u;
            }
            if ( v66 )
              KeUnstackDetachProcess(&ApcState);
          }
          goto LABEL_100;
        }
      }
      v65 = v99;
LABEL_100:
      v108 = 0LL;
      v69 = *(_QWORD *)(v29 + 312);
      v122 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)v69 != v122 )
      {
        v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53, v55, v56);
        v70[3] = 275LL;
        v70[4] = 4LL;
        v70[5] = v69;
        v70[6] = 0LL;
        v70[7] = 0LL;
        WdLogEvent5_WdCriticalError(v70);
      }
      if ( *(int *)(v69 + 12) <= 0 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
        *(_QWORD *)(v71 + 24) = 374LL;
        WdLogEvent5_WdAssertion(v71);
      }
      if ( (*(_DWORD *)(v69 + 12))-- == 1 )
      {
        *(_QWORD *)v69 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 8), 0xFFFFFFFF) != 1 )
          KeSetEvent((PRKEVENT)(v69 + 24), 0, 0);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v69 + 8));
      }
      KeLeaveCriticalRegion();
      if ( v51 )
        DXGPROCESSVIDMMLOCK::AcquireExclusive(v65);
      goto LABEL_110;
    }
    ++*((_DWORD *)v14 + 1791);
    v47 = VIDMM_SEGMENT::DriverId(v109);
    *v49 ^= (*v49 ^ (2 * v47)) & 0x3E;
    v45 = (struct VIDMM_ALLOC *)(*(_QWORD *)(v29 + 136) + *((_QWORD *)v109 + 3));
    v97[2] = v45;
    if ( !*(_DWORD *)(v29 + 156) && *(_DWORD *)(v29 + 376) >= 0x78000000u && (*(_DWORD *)(v29 + 76) & 0x800000) == 0 )
    {
      if ( v48 )
      {
        ++*((_DWORD *)v14 + 1795);
        if ( !*(_BYTE *)(v29 + 92) && (unsigned __int64)*(unsigned int *)(v29 + 376) > *((_QWORD *)v14 + 888) )
        {
          ++*((_DWORD *)v14 + 1796);
          VIDMM_GLOBAL::InsertAllocationInMigrationTable(v14, (struct _VIDMM_GLOBAL_ALLOC *)v29);
        }
      }
    }
LABEL_110:
    v28 = v93;
LABEL_111:
    if ( !v46 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)v28 + 39, a6);
      v28 = v93;
    }
    v73 = v93;
    if ( !*((_DWORD *)v28 + 38) && (*((_BYTE *)v93 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)v14 + 40608) & 2) == 0 || (i = *(unsigned int *)(*((_QWORD *)v14 + 3) + 284LL), (i & 0x10) == 0) )
      {
        v74 = WdLogNewEntry5_WdAssertion(i, v45, v21, v16);
        *(_QWORD *)(v74 + 24) = v73;
        WdLogEvent5_WdAssertion(v74);
        v33 = -1073741823;
        v92 = -1073741823;
        VidSchiMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v73 + 1) + 32LL), 16);
        v34 = v94;
        if ( !v94 )
          VIDMM_GLOBAL::RemoveDMAReferences(v73, a6);
        v23 = v91;
        v25 = v98;
        goto LABEL_153;
      }
    }
    v24 = a3;
    v75 = (a3->Value >> 2) & 7;
    if ( v75 )
    {
      v76 = WdLogNewEntry5_WdAssertion(i, v45, v21, v16);
      *(_QWORD *)(v76 + 24) = v73;
      *(_QWORD *)(v76 + 32) = v75;
      WdLogEvent5_WdAssertion(v76);
    }
    v23 = v91;
    v25 = v98;
    v26 = v97;
    v15 = v96;
    v21 = v95;
    v22 = (__int64)v101;
    v16 = v112;
    v13 = v102;
    v17 = 0;
LABEL_123:
    v98 = ++v25;
    a3 = ++v24;
    v26 += 3;
    v97 = v26;
    v91 = ++v23;
  }
  *v115 = (struct VIDMM_ALLOC *)v22;
  if ( *((_QWORD *)v15 + 8) )
  {
    v95 = *(struct _VIDMM_PRIMARIES_REFERENCES **)(*((_QWORD *)v15 + 7) + 128LL);
    if ( !v95 || (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      ++*((_DWORD *)v14 + 1792);
      *((_DWORD *)v15 + 7) &= ~4u;
      *v104 = 0;
      v106->QuadPart = 0LL;
    }
    else
    {
      ++*((_DWORD *)v14 + 1791);
      if ( (*((_DWORD *)v95 + 14) & 0x1000) != 0 )
        v78 = 0;
      else
        v78 = *((_DWORD *)v95 + 4) + 1;
      *v104 = v78;
      v22 = *((_QWORD *)v95 + 3) + *(_QWORD *)(*((_QWORD *)v15 + 7) + 136LL);
      v106->QuadPart = v22;
    }
    v79 = a6;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)v15 + 8) + 156LL), a6);
  }
  else
  {
    *v104 = 0;
    *v106 = *(union _LARGE_INTEGER *)((char *)v15 + 88);
    v79 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 8, v79);
  if ( (int)v79 > 1 )
    *((_DWORD *)v15 + 7) |= 2u;
  v80 = v91;
  if ( !v94 )
    *((_DWORD *)v15 + 36) = v91;
  *((_DWORD *)v15 + 4) = v79;
  if ( (*((_DWORD *)v15 + 7) & 4) != 0 )
  {
    v81 = *(_QWORD *)(**((_QWORD **)v15 + 17) + 40LL);
    _InterlockedOr(v89, 0);
    v80 = v91;
    if ( *((_QWORD *)v15 + 19) == v81 )
      ++*((_DWORD *)v14 + 1793);
  }
  if ( (qword_1C002F070 & 4) != 0 )
  {
    v82 = *((_QWORD *)v15 + 14);
    v83 = *((_QWORD *)v15 + 13);
    v84 = *(_QWORD *)(*((_QWORD *)v15 + 17) + 24LL);
    if ( v80 )
    {
      do
      {
        v85 = 128;
        if ( v80 - v17 < 0x80 )
          v85 = v80 - v17;
        v86 = 0;
        if ( v85 )
        {
          v79 = (__int64)v126;
          do
          {
            v22 = *(_DWORD *)(v82 + 24LL * (v86 + v17) + 8) & 1;
            *(_DWORD *)v79 = v22;
            ++v86;
            v79 += 4LL;
          }
          while ( v86 < v85 );
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        {
          LODWORD(v90) = v85;
          Template_ppqPR2TR2(v83 + 8LL * v17, v22, v79, v84, v15, v90, v83 + 8LL * v17, v126);
          v15 = v96;
        }
        v17 += 128;
      }
      while ( v17 < v80 );
    }
  }
  return 0LL;
}
