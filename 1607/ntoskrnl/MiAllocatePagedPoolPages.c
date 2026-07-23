/*
 * XREFs of MiAllocatePagedPoolPages @ 0x1400DC810
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 */

ULONG_PTR __fastcall MiAllocatePagedPoolPages(int a1, unsigned __int64 a2)
{
  int v3; // r14d
  unsigned __int64 v4; // rsi
  unsigned int v5; // ecx
  _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rax
  ULONG_PTR result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  void *v11; // r15
  unsigned __int64 v12; // r11
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // r15
  ULONG_PTR v15; // r12
  ULONG_PTR v16; // r13
  ULONG_PTR v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // r9
  unsigned int v25; // edx
  bool v26; // zf
  __int64 v27; // r8
  unsigned __int64 *v28; // r9
  unsigned int v29; // r9d
  __int64 v30; // rdx
  ULONG_PTR v31; // rcx
  __int64 v32; // r8
  unsigned __int64 *v33; // r11
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned int v36; // r8d
  unsigned __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  struct _KTHREAD *v41; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v44; // rcx
  unsigned __int64 *v45; // r15
  char *v46; // rsi
  int SessionId; // eax
  __int16 v48; // ax
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r11
  ULONG_PTR v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // r15
  ULONG_PTR v57; // rsi
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rdi
  __int64 v61; // r9
  unsigned __int64 *v62; // rdx
  unsigned int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned __int64 *v66; // r9
  unsigned int v67; // r9d
  __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rax
  unsigned int v76; // r8d
  unsigned __int64 v77; // r10
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r14
  unsigned __int64 v83; // rcx
  _BYTE *v84; // rsi
  char v85; // al
  unsigned __int64 v86; // rax
  ULONG_PTR v87; // rdi
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // rsi
  __int16 v90; // ax
  unsigned __int64 v91; // rsi
  __int64 *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 DemandZeroPte; // r9
  __int64 v98; // rcx
  unsigned __int64 v99; // r10
  ULONG_PTR v100; // [rsp+30h] [rbp-79h]
  unsigned __int64 v101; // [rsp+30h] [rbp-79h]
  unsigned __int64 v102; // [rsp+30h] [rbp-79h]
  unsigned __int64 v103; // [rsp+38h] [rbp-71h]
  __int64 v104; // [rsp+50h] [rbp-59h]
  unsigned __int64 v105; // [rsp+78h] [rbp-31h]
  unsigned __int64 v106; // [rsp+80h] [rbp-29h]
  void *v107; // [rsp+88h] [rbp-21h]
  unsigned __int64 v108; // [rsp+B8h] [rbp+Fh]
  unsigned int v109; // [rsp+110h] [rbp+67h]

  v3 = 0;
  v4 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v103 = v4;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  v109 = v5;
  if ( (a1 & 0x20) != 0 )
  {
    v11 = 0LL;
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = v9 + 2912;
  }
  else
  {
    if ( (unsigned __int64)(qword_1403278A8 - qword_140327898) < 0x500 )
    {
      ++dword_140326518;
      MiFreeExcessSegments();
      v5 = v109;
    }
    if ( v4 == 1 && a1 >= 0 )
    {
      v6 = &qword_1403269F0[26 * v5];
      if ( LOWORD(v6->Alignment) )
      {
        v7 = RtlpInterlockedPopEntrySList(v6);
        if ( v7 )
        {
          result = (ULONG_PTR)&v7[-1];
          if ( *(_QWORD *)result != (result ^ qword_1403277C0) )
            KeBugCheckEx(0x1Au, 0x5300uLL, result, *(_QWORD *)result, result ^ qword_1403277C0);
          return result;
        }
      }
    }
    v9 = 0LL;
    v10 = (unsigned __int64)&qword_140327868;
    v11 = &unk_140327BA0;
  }
  v107 = v11;
  v105 = v9;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v4, 1) )
    goto LABEL_215;
  v106 = 0LL;
  if ( !v9 )
  {
    if ( (dword_1403A9134 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeResident(MiSystemPartition, v4, 0LL) )
        goto LABEL_214;
      v12 = v4;
      v106 = v4;
      goto LABEL_19;
    }
    if ( !(unsigned int)MiChargeWsles(v11, v4) )
      goto LABEL_214;
  }
  v12 = v4;
LABEL_19:
  CurrentThread = KeGetCurrentThread();
  v14 = *(_QWORD *)(v10 + 8);
  v15 = *(_QWORD *)(v10 + 40);
  v16 = *(_QWORD *)(v10 + 16);
  v17 = v15;
  v104 = (__int64)CurrentThread;
  if ( v15 >= v14 )
    v17 = 0LL;
  v18 = v14 - 1;
  v100 = v17;
  if ( !v12 )
  {
    v101 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_95;
  }
  while ( 2 )
  {
    v19 = v18;
    if ( v18 - v17 + 1 < v12 )
    {
      v20 = -1LL;
      goto LABEL_48;
    }
    v21 = (unsigned __int64 *)(v16 + 8 * (v17 >> 6));
    v22 = v18 - v12 + 1;
    v23 = v16 + 8 * (v22 >> 6);
    v18 = (unsigned __int8)v17;
    LOBYTE(v18) = v17 & 0x3F;
    v24 = ((1LL << (v17 & 0x3F)) - 1) | *v21;
    if ( v12 > 0x7F )
    {
      if ( (v22 & 0x3F) != 0 )
        v23 += 8LL;
      if ( v24 )
      {
        if ( *++v21 )
          goto LABEL_34;
        v26 = !_BitScanReverse64(&v18, v24);
        if ( v26 )
          v25 = 64;
        else
          v25 = 63 - v18;
      }
      else
      {
        v25 = 0;
      }
LABEL_39:
      v20 = ((__int64)((__int64)v21 - v16) >> 3 << 6) - v25;
      if ( v20 > v22 )
        goto LABEL_88;
      v18 = (v12 - v25) >> 6;
      v28 = &v21[v18];
      for ( ++v21; v21 != v28; ++v21 )
      {
        if ( *v21 )
          goto LABEL_34;
      }
      v29 = ((_BYTE)v12 - (_BYTE)v25) & 0x3F;
      if ( (((_BYTE)v12 - (_BYTE)v25) & 0x3F) != 0 )
      {
        v26 = !_BitScanForward64((unsigned __int64 *)&v30, *v21);
        v18 = 64LL;
        if ( v26 )
          LODWORD(v30) = 64;
        if ( (unsigned int)v30 < v29 )
        {
LABEL_34:
          while ( (unsigned __int64)v21 <= v23 )
          {
            if ( !*++v21 )
            {
              v18 = *(v21 - 1);
              v26 = !_BitScanReverse64((unsigned __int64 *)&v27, v18);
              if ( v26 )
              {
                v18 = 64LL;
                v25 = 64;
              }
              else
              {
                v25 = 63 - v27;
              }
              goto LABEL_39;
            }
          }
          goto LABEL_88;
        }
      }
LABEL_47:
      if ( v20 == -1LL )
        goto LABEL_48;
      break;
    }
    if ( v12 < 0x40 )
    {
      if ( v12 > 1 )
      {
        v32 = 0LL;
        v33 = (unsigned __int64 *)(v16 + 8 * (v19 >> 6));
        while ( 1 )
        {
          if ( v24 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v21 > v23 )
                goto LABEL_88;
              v24 = *v21;
              if ( *v21 != -1LL )
              {
                v32 = 0LL;
                break;
              }
            }
          }
          v26 = !_BitScanForward64((unsigned __int64 *)&v34, v24);
          if ( v26 )
            LODWORD(v34) = 64;
          v35 = (unsigned int)(v32 + v34);
          v18 = v4;
          if ( v35 >= v4 )
            break;
          v36 = v4;
          v37 = ~v24;
          while ( 1 )
          {
            v18 = v36 >> 1;
            v37 &= v37 >> v18;
            if ( !v37 )
              break;
            v36 -= v18;
            if ( v36 <= 1 )
            {
              _BitScanForward64(&v18, v37);
              v38 = (unsigned int)v18;
              goto LABEL_87;
            }
          }
          if ( v21 == v33 )
            goto LABEL_88;
          v26 = !_BitScanReverse64(&v18, v24);
          v24 = v21[1];
          if ( v26 )
          {
            ++v21;
            v32 = 64LL;
          }
          else
          {
            v32 = (unsigned int)(63 - v18);
            ++v21;
          }
        }
        v38 = -v32;
LABEL_87:
        v20 = ((__int64)((__int64)v21 - v16) >> 3 << 6) + v38;
        if ( v20 <= v22 )
          goto LABEL_47;
        goto LABEL_88;
      }
      if ( v24 == -1 )
      {
        do
        {
          if ( (unsigned __int64)++v21 > v23 )
            goto LABEL_88;
          v24 = *v21;
        }
        while ( *v21 == -1LL );
      }
      _BitScanForward64(&v18, ~v24);
      v20 = (unsigned int)v18 + ((__int64)((__int64)v21 - v16) >> 3 << 6);
      if ( v20 > v22 )
      {
        v20 = -1LL;
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    while ( 1 )
    {
      v18 = 0x8000000000000000uLL;
      if ( v24 < 0 )
        break;
LABEL_69:
      v26 = !_BitScanReverse64((unsigned __int64 *)&v39, v24);
      if ( v26 )
        v18 = 64LL;
      else
        v18 = (unsigned int)(63 - v39);
      v20 = ((((__int64)((__int64)v21 - v16) >> 3) + 1) << 6) - (unsigned int)v18;
      if ( v20 > v22 )
        goto LABEL_88;
      v40 = v12 - (unsigned int)v18;
      if ( v12 == (unsigned int)v18 )
        goto LABEL_47;
      v24 = v21[1];
      ++v21;
      if ( v40 < 0x40 )
        goto LABEL_78;
      if ( !v24 )
      {
        v40 -= 64LL;
        if ( !v40 )
          goto LABEL_47;
        v24 = v21[1];
        ++v21;
LABEL_78:
        v26 = !_BitScanForward64(&v18, v24);
        if ( v26 )
          v18 = 64LL;
        if ( v18 >= v40 )
          goto LABEL_47;
      }
    }
    while ( (unsigned __int64)++v21 <= v23 )
    {
      v24 = *v21;
      if ( (*v21 & 0x8000000000000000uLL) == 0 )
        goto LABEL_69;
    }
LABEL_88:
    v20 = -1LL;
LABEL_48:
    if ( v100 )
    {
      v12 = v4;
      v17 = 0LL;
      v100 = 0LL;
      v31 = v15 + v4;
      if ( v15 + v4 > v14 )
        v31 = *(_QWORD *)(v10 + 8);
      v18 = v31 - 1;
      continue;
    }
    break;
  }
  CurrentThread = (struct _KTHREAD *)v104;
  v101 = v20;
LABEL_95:
  --CurrentThread->SpecialApcDisable;
  v41 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v41, v10, KeGetCurrentIrql(), 0LL);
  --v41->SpecialApcDisable;
  if ( v41->AbEntrySummary )
  {
LABEL_99:
    AbEntrySummary = v41->AbEntrySummary;
    _BitScanForward((unsigned int *)&v44, AbEntrySummary);
    v41->AbEntrySummary = AbEntrySummary & ~(1 << v44);
    v18 = 96 * v44;
    v45 = (unsigned __int64 *)v10;
    v46 = (char *)v41->LockEntries + v18;
    if ( !v46 )
      goto LABEL_100;
    if ( v10 < qword_140326950 || v10 >= qword_140326950 + 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx(v41->ApcState.Process);
    *((_DWORD *)v46 + 10) = SessionId;
    v18 = 0x7FFFFFFFFFFFFFFCLL;
    *((_QWORD *)v46 + 4) = v10 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( v41->AbOrphanedEntrySummary )
    {
      AbOrphanedEntrySummary = v41->AbOrphanedEntrySummary;
      v41->AbOrphanedEntrySummary = 0;
      v41->AbEntrySummary |= AbOrphanedEntrySummary;
      goto LABEL_99;
    }
    v46 = 0LL;
    v45 = (unsigned __int64 *)v10;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      EtwTraceAutoBoostEntryExhaustion(v41, v10);
      _interlockedbittestandset((volatile signed __int32 *)&v41->116 + 1, 0xFu);
      goto LABEL_108;
    }
LABEL_100:
    _interlockedbittestandset((volatile signed __int32 *)&v41->116 + 1, 0xFu);
  }
LABEL_108:
  v48 = v41->SpecialApcDisable + 1;
  v41->SpecialApcDisable = v48;
  if ( !v48 && ($2B8565053CDC740D4E4887693DD8AC9E *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
    KiCheckForKernelApcDelivery(v18);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v45, 0LL) )
    ExfAcquirePushLockExclusiveEx(v45, v46, (ULONG_PTR)v45);
  if ( v46 )
    v46[26] |= 1u;
  v49 = v45[5];
  v50 = v45[1];
  v51 = v101;
  v52 = v103;
  if ( v101 < v49 )
    v51 = v45[5];
  v108 = v45[5];
  v102 = v51;
  v53 = *(_QWORD *)(v10 + 16);
  v54 = v50 - 1;
  v55 = v51;
  if ( v51 >= v50 )
    v55 = 0LL;
  if ( !v103 )
  {
    v56 = v55 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_195;
  }
  while ( 2 )
  {
    v57 = v53;
    if ( v54 - v55 + 1 < v52 )
    {
      v58 = -1LL;
      goto LABEL_147;
    }
    v59 = v54 - v52 + 1;
    v60 = v53 + 8 * (v59 >> 6);
    v61 = *(_QWORD *)(v53 + 8 * (v55 >> 6)) | ((1LL << (v55 & 0x3F)) - 1);
    v62 = (unsigned __int64 *)(v53 + 8 * (v55 >> 6));
    if ( v52 > 0x7F )
    {
      if ( (v59 & 0x3F) != 0 )
        v60 += 8LL;
      if ( v61 )
      {
        if ( *++v62 )
          goto LABEL_132;
        v26 = !_BitScanReverse64((unsigned __int64 *)&v64, v61);
        if ( v26 )
          v63 = 64;
        else
          v63 = 63 - v64;
      }
      else
      {
        v63 = 0;
      }
LABEL_137:
      v58 = ((__int64)((__int64)v62 - v57) >> 3 << 6) - v63;
      if ( v58 <= v59 )
      {
        v66 = &v62[(v52 - v63) >> 6];
        for ( ++v62; v62 != v66; ++v62 )
        {
          if ( *v62 )
            goto LABEL_132;
        }
        v67 = ((_BYTE)v52 - (_BYTE)v63) & 0x3F;
        if ( (((_BYTE)v52 - (_BYTE)v63) & 0x3F) != 0 )
        {
          v26 = !_BitScanForward64((unsigned __int64 *)&v68, *v62);
          if ( v26 )
            LODWORD(v68) = 64;
          if ( (unsigned int)v68 < v67 )
          {
LABEL_132:
            while ( (unsigned __int64)v62 <= v60 )
            {
              if ( !*++v62 )
              {
                v26 = !_BitScanReverse64((unsigned __int64 *)&v65, *(v62 - 1));
                if ( v26 )
                  v63 = 64;
                else
                  v63 = 63 - v65;
                goto LABEL_137;
              }
            }
            goto LABEL_151;
          }
        }
        goto LABEL_145;
      }
      goto LABEL_188;
    }
    if ( v52 < 0x40 )
    {
      if ( v52 <= 1 )
      {
        if ( v61 != -1 )
        {
LABEL_192:
          _BitScanForward64(&v81, ~v61);
          v58 = v81 + ((__int64)((__int64)v62 - v57) >> 3 << 6);
          if ( v58 > v59 )
          {
            v58 = -1LL;
            goto LABEL_146;
          }
          goto LABEL_145;
        }
        while ( (unsigned __int64)++v62 <= v60 )
        {
          v61 = *v62;
          if ( *v62 != -1LL )
            goto LABEL_192;
        }
      }
      else
      {
        v74 = 0LL;
        while ( 1 )
        {
          if ( v61 == -1 )
          {
            do
            {
              if ( (unsigned __int64)++v62 > v60 )
                goto LABEL_188;
              v61 = *v62;
            }
            while ( *v62 == -1LL );
            v74 = 0LL;
          }
          v26 = !_BitScanForward64((unsigned __int64 *)&v75, v61);
          if ( v26 )
            LODWORD(v75) = 64;
          if ( (unsigned int)(v74 + v75) >= v103 )
            break;
          v76 = v103;
          v77 = ~v61;
          while ( 1 )
          {
            v77 &= v77 >> (v76 >> 1);
            if ( !v77 )
              break;
            v76 -= v76 >> 1;
            if ( v76 <= 1 )
            {
              _BitScanForward64(&v78, v77);
              v79 = (unsigned int)v78;
              goto LABEL_187;
            }
          }
          if ( v62 == (unsigned __int64 *)(v57 + 8 * (v54 >> 6)) )
            goto LABEL_188;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v80, v61);
          v61 = v62[1];
          if ( v26 )
          {
            ++v62;
            v74 = 64LL;
          }
          else
          {
            v74 = (unsigned int)(63 - v80);
            ++v62;
          }
        }
        v79 = -v74;
LABEL_187:
        v58 = ((__int64)((__int64)v62 - v57) >> 3 << 6) + v79;
        if ( v58 <= v59 )
        {
LABEL_145:
          if ( v58 == -1LL )
            goto LABEL_146;
          break;
        }
      }
LABEL_188:
      v58 = -1LL;
      goto LABEL_146;
    }
    while ( v61 >= 0 )
    {
LABEL_156:
      v26 = !_BitScanReverse64((unsigned __int64 *)&v70, v61);
      if ( v26 )
        v71 = 64;
      else
        v71 = 63 - v70;
      v58 = ((((__int64)((__int64)v62 - v57) >> 3) + 1) << 6) - v71;
      if ( v58 > v59 )
        goto LABEL_151;
      v72 = v52 - v71;
      if ( v52 == v71 )
        goto LABEL_145;
      v61 = v62[1];
      ++v62;
      if ( v72 >= 0x40 )
      {
        if ( v61 )
          continue;
        v72 -= 64LL;
        if ( !v72 )
          goto LABEL_145;
        v61 = v62[1];
        ++v62;
      }
      v26 = !_BitScanForward64(&v73, v61);
      if ( v26 )
        v73 = 64LL;
      if ( v73 >= v72 )
        goto LABEL_145;
    }
    while ( (unsigned __int64)++v62 <= v60 )
    {
      v61 = *v62;
      if ( (*v62 & 0x8000000000000000uLL) == 0 )
        goto LABEL_156;
    }
LABEL_151:
    v58 = -1LL;
LABEL_146:
    v51 = v102;
    v53 = *(_QWORD *)(v10 + 16);
LABEL_147:
    if ( v55 )
    {
      v52 = v103;
      v55 = 0LL;
      v69 = v51 + v103;
      if ( v51 + v103 > v50 )
        v69 = v50;
      v54 = v69 - 1;
      continue;
    }
    break;
  }
  v49 = v108;
  v56 = v58;
  v52 = v103;
LABEL_195:
  if ( v56 == -1LL )
  {
    v86 = MiExpandPagedPool((ULONG_PTR *)v10, v52);
    v56 = v86;
    if ( v86 != -1LL )
    {
      v52 = v103;
      if ( (v103 & 0x1FF) == 0 || v103 != 1 && v86 >= v49 )
        goto LABEL_220;
      goto LABEL_223;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease(v10);
    KiLeaveGuardedRegionUnsafe(v104);
    v3 = 1;
    v9 = v105;
    v4 = v103;
    if ( !v105 )
    {
      if ( v106 )
        MiReturnResidentAvailable(v103);
      else
        MiChargeWsles(v107, -(__int64)v103);
    }
LABEL_214:
    MiReturnCommit((__int64)MiSystemPartition, v4);
    MiFreeExcessSegments();
    if ( v3 )
      return 0LL;
LABEL_215:
    if ( v9 )
    {
      ++dword_1403264C8;
      ++dword_1403264F4;
      ++*(_DWORD *)(v9 + 100);
    }
    else
    {
      ++dword_1403264BC;
      ++dword_1403264F0;
    }
    return 0LL;
  }
  v82 = v52;
  if ( v52 )
  {
    v83 = v56 & 7;
    v84 = (_BYTE *)(*(_QWORD *)(v10 + 16) + (v56 >> 3));
    if ( v83 + v52 <= 8 )
    {
      v85 = byte_14026F6B8[v52] << v83;
      goto LABEL_205;
    }
    if ( (v56 & 7) != 0 )
    {
      *v84++ |= byte_14026F6C8[v83];
      v82 = v52 - (unsigned int)(8 - v83);
    }
    if ( v82 > 8 )
    {
      memset(v84, 255, v82 >> 3);
      v52 = v103;
      v84 += v82 >> 3;
      v82 &= 7u;
    }
    if ( v82 )
    {
      v85 = byte_14026F6B8[v82];
LABEL_205:
      *v84 |= v85;
    }
  }
LABEL_220:
  if ( v56 == v49 || v52 == 1 && v102 == v49 )
LABEL_223:
    *(_QWORD *)(v10 + 40) = v56 + v52;
  v87 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 48) += v52;
  v88 = (__int64)((v56 << 28) + (v87 << 25)) >> 16;
  if ( v105 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease(v10);
    KiLeaveGuardedRegionUnsafe(v104);
    v91 = v103;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v105 + 48), v103);
  }
  else
  {
    v89 = qword_1403278A8 - qword_140327898;
    if ( qword_1403278A8 - qword_140327898 < (unsigned __int64)qword_140326508 )
    {
      if ( qword_1403236A0->Header.SignalState )
        KeResetEvent(qword_1403236A0);
      if ( v89 <= qword_140326500 && !qword_140323698->Header.SignalState )
        KeSetEvent(qword_140323698, 0, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease(v10);
    v90 = *(_WORD *)(v104 + 486) + 1;
    *(_WORD *)(v104 + 486) = v90;
    if ( !v90 && *(_QWORD *)(v104 + 152) != v104 + 152 )
      KiCheckForKernelApcDelivery(v104);
    v91 = v103;
  }
  v92 = (__int64 *)(((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiFlushTbAsNeeded((ULONG_PTR)v92);
  if ( v106 )
  {
    MiFillPagedPoolLockedDown(v92, v91, v109);
    return v88;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL, v93, v94, v95);
    do
    {
      *v92 = DemandZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v92, v96) )
        MiWritePteShadow(v98, DemandZeroPte);
      ++v92;
    }
    while ( (unsigned __int64)v92 < v99 );
    return v88;
  }
}
