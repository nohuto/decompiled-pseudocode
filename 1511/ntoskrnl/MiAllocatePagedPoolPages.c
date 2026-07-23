/*
 * XREFs of MiAllocatePagedPoolPages @ 0x14005F630
 * Callers:
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 * Callees:
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIssuePageExtendRequestNoWait @ 0x1401DCE50 (MiIssuePageExtendRequestNoWait.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 */

ULONG_PTR __fastcall MiAllocatePagedPoolPages(int a1, unsigned __int64 a2)
{
  int v3; // r14d
  unsigned __int64 v4; // rdi
  unsigned int v5; // ecx
  _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rax
  ULONG_PTR result; // rax
  unsigned __int64 v9; // rbx
  ULONG_PTR *v10; // rax
  unsigned __int64 v11; // r10
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v13; // r8
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r14
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // r9
  unsigned int v26; // edx
  bool v27; // zf
  __int64 v28; // r8
  unsigned __int64 *v29; // r9
  unsigned int v30; // r9d
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 *v34; // r11
  __int64 v35; // rdx
  unsigned int v36; // r8d
  unsigned __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // r10
  __int64 v41; // rdx
  struct _KTHREAD *v42; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v45; // rcx
  __int64 v46; // rsi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v48; // rcx
  int v49; // eax
  __int16 v50; // ax
  _QWORD *v51; // r9
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // r11
  __int64 v56; // rdx
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r15
  __int64 v60; // rsi
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rdi
  __int64 v64; // r9
  unsigned __int64 *v65; // rdx
  unsigned int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // r8
  unsigned __int64 *v69; // r9
  unsigned int v70; // r9d
  __int64 v71; // rcx
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned __int64 v75; // r10
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned __int64 *v78; // r11
  __int64 v79; // rcx
  unsigned int v80; // r8d
  unsigned __int64 v81; // r10
  unsigned __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  ULONG_PTR v86; // r13
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // rcx
  _BYTE *v89; // rsi
  char v90; // al
  unsigned __int64 v91; // rax
  __int64 v92; // rdi
  ULONG_PTR v93; // rdi
  unsigned __int64 v94; // rdi
  __int64 v95; // rcx
  __int16 v96; // ax
  unsigned __int64 v97; // rbx
  int v98; // eax
  int v99; // r12d
  __int64 v100; // rdx
  _QWORD *v101; // rsi
  ULONG_PTR v102; // r14
  int v103; // r15d
  unsigned __int64 v104; // r13
  ULONG_PTR BugCheckParameter4; // rax
  unsigned int v106; // ebx
  ULONG_PTR v107; // rdi
  char v108; // cl
  unsigned int v109; // eax
  _QWORD *v110; // rbx
  signed __int32 v111[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 v112; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v113; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  __int64 v115; // [rsp+48h] [rbp-B8h]
  unsigned int v116; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD *v117; // [rsp+58h] [rbp-A8h]
  int v118; // [rsp+60h] [rbp-A0h]
  unsigned int v119; // [rsp+64h] [rbp-9Ch]
  int v120; // [rsp+68h] [rbp-98h]
  int v121; // [rsp+6Ch] [rbp-94h]
  int v122; // [rsp+70h] [rbp-90h]
  unsigned __int64 v123; // [rsp+78h] [rbp-88h]
  int v124; // [rsp+80h] [rbp-80h]
  int v125; // [rsp+84h] [rbp-7Ch]
  int v126; // [rsp+88h] [rbp-78h]
  int v127; // [rsp+8Ch] [rbp-74h] BYREF
  int v128; // [rsp+90h] [rbp-70h]
  unsigned int v129; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v130; // [rsp+98h] [rbp-68h]
  unsigned __int64 v131; // [rsp+A0h] [rbp-60h]
  int v132; // [rsp+A8h] [rbp-58h]
  int v133; // [rsp+ACh] [rbp-54h]
  int v134; // [rsp+B0h] [rbp-50h]
  int v135; // [rsp+B4h] [rbp-4Ch]
  int v136; // [rsp+B8h] [rbp-48h]
  int v137; // [rsp+BCh] [rbp-44h]
  int v138; // [rsp+C0h] [rbp-40h]
  int v139; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v140; // [rsp+D4h] [rbp-2Ch]
  __int64 v141; // [rsp+D8h] [rbp-28h]
  __int64 v142; // [rsp+E0h] [rbp-20h]
  __int64 v143; // [rsp+E8h] [rbp-18h]

  v3 = 0;
  v4 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v112 = v4;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  v116 = v5;
  if ( (a1 & 0x20) != 0 )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = (ULONG_PTR *)(v9 + 2912);
  }
  else
  {
    if ( (unsigned __int64)(qword_1402FF7A8 - qword_1402FF798) < 0x500 )
    {
      ++dword_1402FE218;
      MiTrimSegmentCache();
      v5 = v116;
    }
    if ( v4 == 1 && a1 >= 0 )
    {
      v6 = &qword_1402FE6C0[26 * v5];
      if ( LOWORD(v6->Alignment) )
      {
        v7 = RtlpInterlockedPopEntrySList(v6);
        if ( v7 )
        {
          result = (ULONG_PTR)&v7[-1];
          if ( *(_QWORD *)result != (result ^ qword_1402FF6C0) )
            KeBugCheckEx(0x1Au, 0x5300uLL, result, *(_QWORD *)result, result ^ qword_1402FF6C0);
          return result;
        }
      }
    }
    v9 = 0LL;
    v10 = &qword_1402FF768;
  }
  BugCheckParameter2 = (ULONG_PTR)v10;
  v130 = v9;
  if ( !(unsigned int)MiChargeCommit(&MiSystemPartition, v4, 1LL) )
    goto LABEL_220;
  v123 = 0LL;
  if ( !v9 )
  {
    if ( (dword_1403810E8 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeResident(&MiSystemPartition, v4, 0LL) )
        goto LABEL_219;
      v11 = v112;
      _InterlockedExchangeAdd64(&qword_1402FF450, v112);
      v123 = v112;
      goto LABEL_19;
    }
    if ( !(unsigned int)MiChargeWsles((ULONG_PTR)&dword_1402FF980) )
      goto LABEL_219;
  }
  v11 = v112;
LABEL_19:
  CurrentThread = KeGetCurrentThread();
  v13 = BugCheckParameter2;
  v117 = CurrentThread;
  v14 = *(_QWORD *)(BugCheckParameter2 + 8);
  v15 = *(_QWORD *)(BugCheckParameter2 + 40);
  v16 = *(_QWORD *)(BugCheckParameter2 + 16);
  v17 = v15;
  if ( v15 >= v14 )
    v17 = 0LL;
  v18 = v14 - 1;
  v113 = v17;
  if ( !v11 )
  {
    v113 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_97;
  }
  while ( 2 )
  {
    v19 = v17;
    v20 = v18;
    if ( v18 - v19 + 1 < v11 )
    {
      v21 = -1LL;
      goto LABEL_49;
    }
    v22 = v18 - v11 + 1;
    v23 = (unsigned __int64 *)(v16 + 8 * (v19 >> 6));
    v24 = v16 + 8 * (v22 >> 6);
    v18 = (unsigned __int8)v19;
    LOBYTE(v18) = v19 & 0x3F;
    v25 = *v23 | ((1LL << (v19 & 0x3F)) - 1);
    if ( v11 > 0x7F )
    {
      if ( (v22 & 0x3F) != 0 )
        v24 += 8LL;
      if ( v25 )
      {
        if ( *++v23 )
          goto LABEL_34;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v18, v25);
        if ( v27 )
        {
          v26 = 64;
          v125 = 64;
        }
        else
        {
          v26 = 63 - v18;
          v125 = 63 - v18;
        }
      }
      else
      {
        v26 = 0;
      }
LABEL_40:
      v21 = (((__int64)v23 - v16) >> 3 << 6) - v26;
      if ( v21 > v22 )
        goto LABEL_90;
      v18 = (v11 - v26) >> 6;
      v29 = &v23[v18];
      for ( ++v23; v23 != v29; ++v23 )
      {
        if ( *v23 )
          goto LABEL_34;
      }
      v30 = ((_BYTE)v11 - (_BYTE)v26) & 0x3F;
      if ( (((_BYTE)v11 - (_BYTE)v26) & 0x3F) != 0 )
      {
        v18 = *v23;
        v27 = !_BitScanForward64((unsigned __int64 *)&v31, *v23);
        LOBYTE(v18) = !v27;
        if ( v27 )
          LODWORD(v31) = 64;
        v135 = v31;
        if ( (unsigned int)v31 < v30 )
        {
LABEL_34:
          while ( (unsigned __int64)v23 <= v24 )
          {
            if ( !*++v23 )
            {
              v18 = *(v23 - 1);
              v27 = !_BitScanReverse64((unsigned __int64 *)&v28, v18);
              if ( v27 )
                v26 = 64;
              else
                v26 = 63 - v28;
              v119 = v26;
              goto LABEL_40;
            }
          }
          goto LABEL_90;
        }
      }
LABEL_48:
      if ( v21 == -1LL )
        goto LABEL_49;
      break;
    }
    if ( v11 < 0x40 )
    {
      if ( v11 > 1 )
      {
        v33 = 0LL;
        v34 = (unsigned __int64 *)(v16 + 8 * (v20 >> 6));
        while ( 1 )
        {
          if ( v25 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v23 > v24 )
                goto LABEL_90;
              v25 = *v23;
              if ( *v23 != -1LL )
              {
                v33 = 0LL;
                break;
              }
            }
          }
          v27 = !_BitScanForward64((unsigned __int64 *)&v35, v25);
          v18 = 64LL;
          if ( v27 )
            LODWORD(v35) = 64;
          v137 = v35;
          if ( (unsigned int)(v33 + v35) >= v11 )
            break;
          v36 = v112;
          v37 = ~v25;
          while ( 1 )
          {
            v18 = v36 >> 1;
            v37 &= v37 >> v18;
            if ( !v37 )
              break;
            v36 -= v18;
            if ( v36 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v18, v37);
              v126 = v18;
              v38 = (unsigned int)v18;
              goto LABEL_89;
            }
          }
          if ( v23 == v34 )
            goto LABEL_90;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v18, v25);
          v25 = v23[1];
          if ( v27 )
          {
            ++v23;
            v11 = v112;
            v33 = 64LL;
            v124 = 64;
          }
          else
          {
            v11 = v112;
            v33 = (unsigned int)(63 - v18);
            ++v23;
            v124 = 63 - v18;
          }
        }
        v38 = -v33;
LABEL_89:
        v21 = (((__int64)v23 - v16) >> 3 << 6) + v38;
        if ( v21 <= v22 )
          goto LABEL_48;
        goto LABEL_90;
      }
      if ( v25 == -1 )
      {
        do
        {
          if ( (unsigned __int64)++v23 > v24 )
            goto LABEL_90;
          v25 = *v23;
        }
        while ( *v23 == -1LL );
      }
      _BitScanForward64((unsigned __int64 *)&v18, ~v25);
      v21 = (unsigned int)v18 + (((__int64)v23 - v16) >> 3 << 6);
      v126 = v18;
      if ( v21 > v22 )
      {
        v21 = -1LL;
        goto LABEL_49;
      }
      goto LABEL_48;
    }
    while ( 1 )
    {
      v18 = 0x8000000000000000uLL;
      if ( v25 < 0 )
        break;
LABEL_71:
      v27 = !_BitScanReverse64((unsigned __int64 *)&v39, v25);
      if ( v27 )
        v18 = 64LL;
      else
        v18 = (unsigned int)(63 - v39);
      v121 = v18;
      v21 = (((((__int64)v23 - v16) >> 3) + 1) << 6) - (unsigned int)v18;
      if ( v21 > v22 )
        goto LABEL_90;
      v40 = v11 - (unsigned int)v18;
      if ( !v40 )
        goto LABEL_48;
      v25 = v23[1];
      ++v23;
      if ( v40 >= 0x40 )
      {
        if ( v25 )
          goto LABEL_67;
        v40 -= 64LL;
        if ( !v40 )
          goto LABEL_48;
        v25 = v23[1];
        ++v23;
      }
      v27 = !_BitScanForward64((unsigned __int64 *)&v41, v25);
      if ( v27 )
        LODWORD(v41) = 64;
      v18 = (unsigned int)v41;
      v132 = v41;
      if ( (unsigned int)v41 >= v40 )
        goto LABEL_48;
LABEL_67:
      v11 = v112;
    }
    while ( (unsigned __int64)++v23 <= v24 )
    {
      v25 = *v23;
      if ( (*v23 & 0x8000000000000000uLL) == 0 )
        goto LABEL_71;
    }
LABEL_90:
    v21 = -1LL;
LABEL_49:
    if ( v113 )
    {
      v11 = v112;
      v17 = 0LL;
      v113 = 0LL;
      v32 = v15 + v112;
      if ( v15 + v112 > v14 )
        v32 = v14;
      v18 = v32 - 1;
      continue;
    }
    break;
  }
  CurrentThread = v117;
  v113 = v21;
  v13 = BugCheckParameter2;
LABEL_97:
  --CurrentThread->SpecialApcDisable;
  if ( !KiAbEnabled )
  {
    v46 = 0LL;
    goto LABEL_116;
  }
  v42 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v42, v13, KeGetCurrentIrql(), 0LL);
  --v42->SpecialApcDisable;
  if ( v42->AbEntrySummary )
  {
LABEL_102:
    AbEntrySummary = v42->AbEntrySummary;
    _BitScanForward((unsigned int *)&v45, AbEntrySummary);
    v134 = v45;
    v42->AbEntrySummary = AbEntrySummary & ~(1 << v45);
    v18 = 96 * v45;
    v46 = (__int64)v42->LockEntries + v18;
    if ( v46 )
    {
      if ( v13 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = v42->ApcState.Process, (v48 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v49 = -1;
      }
      else
      {
        v49 = *(_DWORD *)(v48 + 8);
      }
      *(_DWORD *)(v46 + 40) = v49;
      v18 = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v46 + 32) = v13 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_112;
    }
    goto LABEL_103;
  }
  if ( v42->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v42->AbOrphanedEntrySummary;
    v42->AbOrphanedEntrySummary = 0;
    v42->AbEntrySummary |= AbOrphanedEntrySummary;
    goto LABEL_102;
  }
  v46 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
  {
LABEL_103:
    _interlockedbittestandset((volatile signed __int32 *)&v42->116 + 1, 0xFu);
    goto LABEL_112;
  }
  EtwTraceAutoBoostEntryExhaustion(v42, v13);
  _interlockedbittestandset((volatile signed __int32 *)&v42->116 + 1, 0xFu);
LABEL_112:
  v50 = v42->SpecialApcDisable + 1;
  v42->SpecialApcDisable = v50;
  if ( !v50 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
    KiCheckForKernelApcDelivery(v18);
LABEL_116:
  v51 = (_QWORD *)BugCheckParameter2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v46, BugCheckParameter2);
    v51 = (_QWORD *)BugCheckParameter2;
  }
  if ( v46 )
    *(_BYTE *)(v46 + 26) |= 1u;
  v52 = v51[5];
  v53 = v113;
  v54 = v51[1];
  v55 = v112;
  v56 = v51[2];
  if ( v113 < v52 )
    v53 = v51[5];
  v131 = v51[5];
  v57 = v53;
  v113 = v53;
  if ( v53 >= v54 )
    v57 = 0LL;
  v115 = v56;
  v58 = v54 - 1;
  if ( !v112 )
  {
    v59 = v57 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_200;
  }
  while ( 2 )
  {
    v60 = v56;
    if ( v58 - v57 + 1 < v55 )
    {
      v61 = -1LL;
      goto LABEL_152;
    }
    v62 = v58 - v55 + 1;
    v63 = v56 + 8 * (v62 >> 6);
    v64 = *(_QWORD *)(v56 + 8 * (v57 >> 6)) | ((1LL << (v57 & 0x3F)) - 1);
    v65 = (unsigned __int64 *)(v56 + 8 * (v57 >> 6));
    if ( v55 > 0x7F )
    {
      if ( (v62 & 0x3F) != 0 )
        v63 += 8LL;
      if ( v64 )
      {
        if ( *++v65 )
          goto LABEL_137;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v67, v64);
        if ( v27 )
        {
          v66 = 64;
          v128 = 64;
        }
        else
        {
          v66 = 63 - v67;
          v128 = 63 - v67;
        }
      }
      else
      {
        v66 = 0;
      }
LABEL_142:
      v61 = (((__int64)v65 - v60) >> 3 << 6) - v66;
      if ( v61 <= v62 )
      {
        v69 = &v65[(v55 - v66) >> 6];
        for ( ++v65; v65 != v69; ++v65 )
        {
          if ( *v65 )
            goto LABEL_137;
        }
        v70 = ((_BYTE)v55 - (_BYTE)v66) & 0x3F;
        if ( (((_BYTE)v55 - (_BYTE)v66) & 0x3F) != 0 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v71, *v65);
          if ( v27 )
            LODWORD(v71) = 64;
          v138 = v71;
          if ( (unsigned int)v71 < v70 )
          {
LABEL_137:
            while ( (unsigned __int64)v65 <= v63 )
            {
              if ( !*++v65 )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v68, *(v65 - 1));
                if ( v27 )
                {
                  v66 = 64;
                  v120 = 64;
                }
                else
                {
                  v66 = 63 - v68;
                  v120 = 63 - v68;
                }
                goto LABEL_142;
              }
            }
            goto LABEL_156;
          }
        }
        goto LABEL_150;
      }
      goto LABEL_193;
    }
    if ( v55 < 0x40 )
    {
      if ( v55 <= 1 )
      {
        if ( v64 != -1 )
        {
LABEL_197:
          _BitScanForward64(&v85, ~v64);
          v61 = v85 + (((__int64)v65 - v60) >> 3 << 6);
          v122 = v85;
          if ( v61 > v62 )
          {
            v61 = -1LL;
            goto LABEL_151;
          }
          goto LABEL_150;
        }
        while ( (unsigned __int64)++v65 <= v63 )
        {
          v64 = *v65;
          if ( *v65 != -1LL )
            goto LABEL_197;
        }
      }
      else
      {
        v77 = 0LL;
        v78 = (unsigned __int64 *)(v60 + 8 * (v58 >> 6));
        while ( 1 )
        {
          if ( v64 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v65 > v63 )
                goto LABEL_156;
              v64 = *v65;
            }
            while ( *v65 == -1LL );
            v77 = 0LL;
          }
          v27 = !_BitScanForward64((unsigned __int64 *)&v79, v64);
          if ( v27 )
            LODWORD(v79) = 64;
          v133 = v79;
          if ( (unsigned int)(v77 + v79) >= v112 )
            break;
          v80 = v112;
          v81 = ~v64;
          while ( 1 )
          {
            v81 &= v81 >> (v80 >> 1);
            if ( !v81 )
              break;
            v80 -= v80 >> 1;
            if ( v80 <= 1 )
            {
              _BitScanForward64(&v82, v81);
              v122 = v82;
              v83 = (unsigned int)v82;
              goto LABEL_192;
            }
          }
          if ( v65 == v78 )
            goto LABEL_156;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v84, v64);
          v64 = v65[1];
          if ( v27 )
          {
            ++v65;
            v77 = 64LL;
            v118 = 64;
          }
          else
          {
            v77 = (unsigned int)(63 - v84);
            ++v65;
            v118 = 63 - v84;
          }
        }
        v83 = -v77;
LABEL_192:
        v61 = (((__int64)v65 - v60) >> 3 << 6) + v83;
        if ( v61 <= v62 )
        {
LABEL_150:
          if ( v61 == -1LL )
            goto LABEL_151;
          break;
        }
      }
LABEL_193:
      v61 = -1LL;
      goto LABEL_151;
    }
    while ( v64 >= 0 )
    {
LABEL_161:
      v27 = !_BitScanReverse64((unsigned __int64 *)&v73, v64);
      if ( v27 )
        v74 = 64;
      else
        v74 = 63 - v73;
      v129 = v74;
      v61 = (((((__int64)v65 - v60) >> 3) + 1) << 6) - v74;
      if ( v61 > v62 )
        goto LABEL_156;
      v75 = v55 - v74;
      if ( v55 == v74 )
        goto LABEL_150;
      v64 = v65[1];
      ++v65;
      if ( v75 >= 0x40 )
      {
        if ( v64 )
          continue;
        v75 -= 64LL;
        if ( !v75 )
          goto LABEL_150;
        v64 = v65[1];
        ++v65;
      }
      v27 = !_BitScanForward64((unsigned __int64 *)&v76, v64);
      if ( v27 )
        LODWORD(v76) = 64;
      v136 = v76;
      if ( (unsigned int)v76 >= v75 )
        goto LABEL_150;
    }
    while ( (unsigned __int64)++v65 <= v63 )
    {
      v64 = *v65;
      if ( (*v65 & 0x8000000000000000uLL) == 0 )
        goto LABEL_161;
    }
LABEL_156:
    v61 = -1LL;
LABEL_151:
    v53 = v113;
    v56 = v115;
LABEL_152:
    if ( v57 )
    {
      v55 = v112;
      v57 = 0LL;
      v72 = v53 + v112;
      if ( v53 + v112 > v54 )
        v72 = v54;
      v58 = v72 - 1;
      continue;
    }
    break;
  }
  v52 = v131;
  v59 = v61;
  v55 = v112;
LABEL_200:
  v86 = BugCheckParameter2;
  if ( v59 == -1LL )
  {
    v91 = MiExpandPagedPool((ULONG_PTR *)BugCheckParameter2, v55);
    v59 = v91;
    if ( v91 != -1LL )
    {
      v55 = v112;
      if ( (v112 & 0x1FF) == 0 || v112 != 1 && v91 >= v52 )
        goto LABEL_226;
      goto LABEL_229;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe((__int64)v117);
    v3 = 1;
    v9 = v130;
    v4 = v112;
    if ( !v130 )
    {
      if ( v123 )
      {
        MiReturnResidentAvailable(v112);
        _InterlockedExchangeAdd64(&qword_1402FF458, v112);
      }
      else
      {
        MiChargeWsles((ULONG_PTR)&dword_1402FF980);
      }
    }
LABEL_219:
    MiReturnCommit(&MiSystemPartition, v4);
    if ( v3 )
    {
LABEL_281:
      MiIssuePageExtendRequestNoWait(&MiSystemPartition, v4, 0LL);
      MiTrimSegmentCache();
      return 0LL;
    }
LABEL_220:
    if ( v9 )
    {
      ++dword_1402FE1C8;
      ++dword_1402FE1F4;
      if ( (MiAllocationDebug & 1) != 0 )
        __debugbreak();
      ++*(_DWORD *)(v9 + 100);
    }
    else
    {
      ++dword_1402FE1BC;
      ++dword_1402FE1F0;
      if ( (MiAllocationDebug & 1) != 0 )
        __debugbreak();
    }
    goto LABEL_281;
  }
  v87 = v55;
  if ( v55 )
  {
    v88 = v59 & 7;
    v89 = (_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 16) + (v59 >> 3));
    if ( v88 + v55 <= 8 )
    {
      v90 = byte_140247340[v55] << v88;
      goto LABEL_210;
    }
    if ( (v59 & 7) != 0 )
    {
      *v89++ |= byte_1402453A0[v88];
      v87 = v55 - (unsigned int)(8 - v88);
    }
    if ( v87 > 8 )
    {
      memset(v89, 255, v87 >> 3);
      v55 = v112;
      v89 += v87 >> 3;
      v87 &= 7u;
    }
    if ( v87 )
    {
      v90 = byte_140247340[v87];
LABEL_210:
      *v89 |= v90;
    }
  }
LABEL_226:
  if ( v59 == v52 || v55 == 1 && v113 == v52 )
LABEL_229:
    *(_QWORD *)(v86 + 40) = v59 + v55;
  v92 = *(_QWORD *)(v86 + 24);
  *(_QWORD *)(v86 + 48) += v55;
  v93 = (__int64)((v59 << 28) + (v92 << 25)) >> 16;
  BugCheckParameter2 = v93;
  if ( v130 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v86);
    KeAbPostRelease(v86);
    KiLeaveGuardedRegionUnsafe((__int64)v117);
    v97 = v112;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v130 + 48), v112);
    v98 = 2;
  }
  else
  {
    v94 = qword_1402FF7A8 - qword_1402FF798;
    if ( qword_1402FF7A8 - qword_1402FF798 < (unsigned __int64)qword_1402FE208 )
    {
      if ( qword_1402FFE58->Header.SignalState != (_DWORD)v130 )
        KeResetEvent(qword_1402FFE58);
      if ( v94 <= qword_1402FE200 && !qword_1402FFE50->Header.SignalState )
        KeSetEvent(qword_1402FFE50, 0, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v86);
    KeAbPostRelease(v86);
    v95 = (__int64)v117;
    v96 = v117->SpecialApcDisable + 1;
    v117->SpecialApcDisable = v96;
    if ( !v96 && *(_QWORD *)(v95 + 152) != v95 + 152 )
      KiCheckForKernelApcDelivery(v95);
    v93 = BugCheckParameter2;
    v97 = v112;
    v98 = 0;
  }
  v141 = 20LL;
  v139 = v98;
  v99 = 0;
  v140 = 0;
  v100 = 0x98000000000LL;
  v142 = 0LL;
  v101 = (_QWORD *)(((v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v143 = 0LL;
  v102 = (ULONG_PTR)v101;
  v103 = 0;
  v104 = 0LL;
  if ( v97 )
  {
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v102);
      if ( (BugCheckParameter4 & 0x401) != 0
        || (BugCheckParameter4 & 0x800) != 0
        || ((BugCheckParameter4 >> 5) & 0x1F) != 0 && ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, v102, v97 - v104, BugCheckParameter4);
      }
      v106 = BugCheckParameter4;
      v107 = HIDWORD(BugCheckParameter4);
      *(_QWORD *)v102 = (unsigned int)BugCheckParameter4;
      if ( (unsigned int)MiPteInShadowRange(v102) )
        MiWritePteShadow(v102, v106);
      if ( (_DWORD)v107 )
      {
        if ( (_DWORD)v107 == v99 )
        {
          if ( v103 == 1 )
            MiInsertTbFlushEntry(&v139, (__int64)(v102 << 25) >> 16, 1LL, 0LL);
        }
        else
        {
          _InterlockedOr(v111, 0);
          v108 = KiTbFlushTimeStamp;
          v109 = KiTbFlushTimeStamp - v107;
          if ( (unsigned int)(KiTbFlushTimeStamp - v107) <= 2 )
          {
            while ( (v107 & 1) != 0 || v109 < 2 )
            {
              if ( (v108 & 1) == 0 )
              {
                MiInsertTbFlushEntry(&v139, (__int64)(v102 << 25) >> 16, 1LL, 0LL);
                v103 = 1;
                goto LABEL_267;
              }
              v127 = 0;
              _InterlockedOr(v111, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(&v127);
              if ( (v107 & 1) != 0 )
              {
                _InterlockedOr(v111, 0);
                v108 = KiTbFlushTimeStamp;
                v109 = KiTbFlushTimeStamp - v107;
                if ( (unsigned int)(KiTbFlushTimeStamp - v107) <= 2 )
                  continue;
              }
              break;
            }
          }
          v103 = 0;
LABEL_267:
          v99 = v107;
        }
      }
      else
      {
        v103 = 0;
        v99 = 0;
      }
      v97 = v112;
      ++v104;
      v102 += 8LL;
    }
    while ( v104 < v112 );
    v93 = BugCheckParameter2;
  }
  MiFlushTbList((__int64)&v139, (_KPROCESS *)v100);
  if ( v123 )
  {
    MiFillPagedPoolLockedDown(v101, v97, v116);
    return v93;
  }
  else
  {
    v110 = &v101[v97];
    do
    {
      *v101 = 128LL;
      if ( (unsigned int)MiPteInShadowRange(v101) )
        MiWritePteShadow(v101, 128LL);
      ++v101;
    }
    while ( v101 < v110 );
    return v93;
  }
}
