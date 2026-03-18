/*
 * XREFs of CcPinFileData @ 0x140051C40
 * Callers:
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     CcMapData @ 0x14049CBA0 (CcMapData.c)
 *     CcPinMappedData @ 0x14049D270 (CcPinMappedData.c)
 *     CcPinRead @ 0x14049D440 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x14052FE34 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x140530004 (CcMapDataCommon.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x140050800 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     ExAcquireSharedStarveExclusive @ 0x140052F60 (ExAcquireSharedStarveExclusive.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     CcAllocateInitializeBcb @ 0x1400F1B2C (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1401DDF48 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401DE144 (CcReferenceFileOffset.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        __int64 *a8,
        _QWORD *a9)
{
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r15
  int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  volatile signed __int32 *v17; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v20; // rcx
  int SessionId; // eax
  __int16 v22; // ax
  unsigned __int8 CurrentIrql; // bl
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // si
  __int64 v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rdi
  int v30; // r8d
  int v31; // ecx
  __int64 v32; // r10
  int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // r11
  _QWORD *v36; // rbx
  ULONG_PTR v37; // rbx
  unsigned int v38; // r9d
  unsigned int v39; // ecx
  __int64 *v40; // r15
  unsigned __int8 v41; // si
  unsigned __int32 v42; // eax
  struct _ERESOURCE *v43; // rcx
  __int64 v44; // r15
  struct _KTHREAD *v45; // rdi
  __int64 v46; // r9
  __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r15
  __int64 Flink_low; // rcx
  unsigned int v51; // esi
  __int64 v52; // r8
  ULONG_PTR v53; // rbx
  struct _KTHREAD *v54; // rsi
  __int64 v55; // r8
  __int64 v56; // rdi
  int v57; // eax
  __int16 v58; // ax
  unsigned __int8 v59; // si
  __int64 *v60; // r15
  unsigned __int8 v61; // si
  unsigned __int32 v62; // eax
  char v63; // r15
  unsigned int v64; // r8d
  int v65; // eax
  unsigned __int8 v66; // si
  unsigned __int32 v67; // eax
  struct _ERESOURCE *v68; // rcx
  unsigned __int64 v69; // rcx
  int v70; // edx
  int v71; // ecx
  __int16 v72; // r9
  unsigned int v73; // r8d
  unsigned int v74; // ecx
  __int64 *v75; // rsi
  __int64 v76; // rax
  struct _ERESOURCE *v77; // rcx
  volatile signed __int32 *v78; // rbx
  unsigned __int8 v79; // di
  unsigned __int32 v80; // eax
  __int64 v81; // r9
  __int64 v82; // rdi
  unsigned __int8 v83; // si
  unsigned __int8 v84; // si
  unsigned __int32 v85; // eax
  int v86; // eax
  volatile signed __int32 *v87; // rdi
  unsigned __int8 v88; // si
  unsigned __int32 v89; // eax
  __int64 v90; // r9
  __int64 v91; // rsi
  unsigned __int8 v92; // r15
  __int64 *v93; // r15
  unsigned __int8 v94; // si
  unsigned __int32 v95; // eax
  volatile signed __int32 *v96; // rbx
  unsigned __int8 v97; // di
  unsigned __int32 v98; // eax
  __int64 v99; // r9
  __int64 v100; // rdi
  unsigned __int8 v101; // si
  __int64 *v102; // r15
  unsigned __int8 v103; // si
  unsigned __int32 v104; // eax
  unsigned __int8 v105; // si
  unsigned __int32 v106; // eax
  __int64 v107; // rax
  unsigned __int8 v108; // di
  unsigned __int32 v109; // eax
  int v110; // eax
  unsigned __int8 v111; // al
  __int64 v112; // rdx
  struct _KEVENT *v113; // rcx
  __int64 v115; // rcx
  unsigned __int8 v116; // si
  unsigned __int32 v117; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KEVENT *v119; // rcx
  unsigned __int8 v120; // [rsp+30h] [rbp-198h]
  ULONG_PTR v121; // [rsp+38h] [rbp-190h]
  int v122; // [rsp+44h] [rbp-184h]
  char v123[4]; // [rsp+48h] [rbp-180h] BYREF
  int v124; // [rsp+4Ch] [rbp-17Ch]
  __int64 *v125; // [rsp+50h] [rbp-178h]
  volatile signed __int32 *v126; // [rsp+58h] [rbp-170h] BYREF
  __int64 v127; // [rsp+60h] [rbp-168h] BYREF
  int v128; // [rsp+68h] [rbp-160h]
  int v129; // [rsp+6Ch] [rbp-15Ch] BYREF
  int v130; // [rsp+70h] [rbp-158h]
  unsigned int v131; // [rsp+74h] [rbp-154h]
  __int64 v132; // [rsp+78h] [rbp-150h] BYREF
  int v133; // [rsp+80h] [rbp-148h]
  __int64 v134; // [rsp+88h] [rbp-140h]
  unsigned __int64 v135; // [rsp+90h] [rbp-138h]
  int v136; // [rsp+98h] [rbp-130h]
  int v137; // [rsp+9Ch] [rbp-12Ch]
  int v138; // [rsp+A0h] [rbp-128h]
  int v139; // [rsp+A4h] [rbp-124h]
  ULONG_PTR v140; // [rsp+A8h] [rbp-120h]
  __int64 v141; // [rsp+B0h] [rbp-118h]
  __int64 v142; // [rsp+B8h] [rbp-110h]
  __int64 v143; // [rsp+C0h] [rbp-108h]
  __int64 v144; // [rsp+C8h] [rbp-100h]
  ULONG_PTR *v145; // [rsp+D0h] [rbp-F8h]
  int v146; // [rsp+D8h] [rbp-F0h]
  _QWORD *v147; // [rsp+E0h] [rbp-E8h]
  int v148; // [rsp+E8h] [rbp-E0h]
  __int64 *v149; // [rsp+F0h] [rbp-D8h]
  __int64 v150; // [rsp+F8h] [rbp-D0h]
  ULONG_PTR *v151; // [rsp+100h] [rbp-C8h]
  __int64 v152; // [rsp+108h] [rbp-C0h]
  __int64 v153; // [rsp+110h] [rbp-B8h]
  __int64 v154; // [rsp+118h] [rbp-B0h]
  __int64 *v155; // [rsp+120h] [rbp-A8h]
  int v156; // [rsp+128h] [rbp-A0h]
  int v157; // [rsp+12Ch] [rbp-9Ch]
  _DWORD v158[22]; // [rsp+130h] [rbp-98h]

  LODWORD(v135) = a3;
  v149 = a2;
  v145 = a7;
  v151 = a7;
  v125 = a8;
  v155 = a8;
  v147 = a9;
  v153 = (__int64)a9;
  v10 = 0LL;
  v124 = 0;
  v126 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v150 = v11;
  v142 = v11;
  v12 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x10CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v129 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
    v13 = 1;
  }
  else
  {
    v13 = 1;
    *a8 = CcGetVirtualAddress(v11, *a2, &v126, &v129, (a6 & 0x40) != 0, 0);
  }
  v17 = (volatile signed __int32 *)(v11 + 280);
  if ( KiAbEnabled )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v11 + 280, KeGetCurrentIrql(), 0LL);
    --CurrentThread->SpecialApcDisable;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, v11 + 280, v15, v16);
        goto LABEL_8;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v20, AbEntrySummary);
    v148 = v20;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v20);
    v14 = 96 * v20;
    v10 = (char *)CurrentThread->LockEntries + v14;
LABEL_8:
    if ( v10 )
    {
      if ( (unsigned __int64)(v11 + 0x70000000118LL) <= 0x7FFFFFFFFFLL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process, 0x7FFFFFFFFFLL);
      else
        SessionId = -1;
      *((_DWORD *)v10 + 10) = SessionId;
      v14 = 0x7FFFFFFFFFFFFFFCLL;
      *((_QWORD *)v10 + 4) = (unsigned __int64)v17 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    }
    v22 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v14);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v17, 0) )
    ExpAcquireFastMutexContended(v11 + 280);
  if ( v10 )
    v10[26] |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v122 = 1;
  v24 = *a2;
  v25 = *a2 + v12;
  v134 = v25;
  v26 = 0;
  v27 = v24 + 0x80000;
  v28 = *(_QWORD *)(v11 + 32);
  if ( v28 <= 0x200000 || (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    goto LABEL_126;
  if ( v28 <= 0x2000000 )
  {
    if ( v27 < v28 )
    {
      if ( *(_DWORD *)(v11 + 36) )
        v69 = 0xFFFFFFFFLL;
      else
        v69 = 8 * ((unsigned __int64)(unsigned int)v28 >> 18);
      v36 = (_QWORD *)(*(_QWORD *)(v11 + 88) + v69 + 16 * (v27 >> 19));
      goto LABEL_29;
    }
LABEL_126:
    v36 = (_QWORD *)(v11 + 16);
    goto LABEL_29;
  }
  v143 = v24 + 0x80000;
  v29 = 0LL;
  v133 = 0;
  v30 = 0;
  v128 = 0;
  v31 = 25;
  v130 = 25;
  v32 = *(_QWORD *)(v11 + 88);
  v141 = v32;
  do
  {
    v128 = ++v30;
    v31 += 7;
    v130 = v31;
  }
  while ( v28 > 1LL << v31 );
  if ( v27 >= 1LL << v31 )
    goto LABEL_126;
  v33 = v31 - 7;
  v130 = v33;
  do
  {
    v128 = --v30;
    v34 = v27 >> v33;
    v131 = v27 >> v33;
    v35 = *(_QWORD *)(v32 + 8LL * v131);
    v154 = v35;
    if ( !v35 )
    {
      while ( 1 )
      {
        if ( (_DWORD)v34 != 127 )
        {
          do
          {
            if ( (_DWORD)v34 == 127 )
              break;
            v34 = (unsigned int)(v34 + 1);
            v131 = v34;
          }
          while ( !*(_QWORD *)(v32 + 8 * v34) );
          v35 = *(_QWORD *)(v32 + 8LL * (unsigned int)v34);
          v154 = v35;
          if ( v35 )
            break;
        }
        if ( !(_DWORD)v29 )
          goto LABEL_126;
        v128 = ++v30;
        v29 = (unsigned int)(v29 - 1);
        v133 = v29;
        LODWORD(v34) = v158[v29];
        v131 = v34;
        v32 = *(_QWORD *)&v158[2 * v29 + 8];
        v141 = v32;
      }
      v27 = 0LL;
      v143 = 0LL;
    }
    v158[v29] = v34;
    *(_QWORD *)&v158[2 * v29 + 8] = v32;
    v29 = (unsigned int)(v29 + 1);
    v133 = v29;
    v32 = v35;
    v141 = v35;
    v27 &= (1LL << v33) - 1;
    v143 = v27;
    v33 -= 7;
    v130 = v33;
  }
  while ( v30 );
  v131 = v27 >> v33;
  v36 = (_QWORD *)(v35 + 8 * (((v27 >> v33) & 0xFFFFFFFELL) + 128));
LABEL_29:
  v37 = *v36 - 16LL;
  v140 = v37;
  if ( *((_DWORD *)a2 + 1) )
  {
LABEL_167:
    while ( *(_WORD *)v37 == 765 && *a2 < *(_QWORD *)(v37 + 32) )
    {
      v107 = *(_QWORD *)(v37 + 8);
      if ( *a2 >= v107 )
      {
LABEL_39:
        v26 = 1;
        break;
      }
      if ( v25 >= v107 )
        v25 = *(_QWORD *)(v37 + 8);
      v134 = v25;
      v37 = *(_QWORD *)(v37 + 16) - 16LL;
      v140 = v37;
    }
  }
  else if ( *(_WORD *)v37 == 765 )
  {
    if ( *(_DWORD *)(v37 + 36) )
      goto LABEL_167;
    v38 = v134;
    while ( *(_WORD *)v37 == 765 && *(_DWORD *)a2 < *(_DWORD *)(v37 + 32) )
    {
      v39 = *(_DWORD *)(v37 + 8);
      if ( *(_DWORD *)a2 >= v39 )
        goto LABEL_39;
      if ( v38 >= v39 )
      {
        v38 = *(_DWORD *)(v37 + 8);
        LODWORD(v134) = v38;
        v25 = v134;
      }
      v37 = *(_QWORD *)(v37 + 16) - 16LL;
      v140 = v37;
    }
  }
  v121 = v37;
  if ( v26 )
  {
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      a4 = 1;
    if ( *(_QWORD *)(v37 + 184) )
    {
      if ( (a6 & 1) != 0 )
      {
        ++*(_DWORD *)(v37 + 64);
        *(_QWORD *)(v11 + 288) = 0LL;
        v66 = *(_BYTE *)(v11 + 328);
        v67 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
        if ( v67 )
          ExpReleaseFastMutexContended(v11 + 280, v67);
        __writecr8(v66);
        KeAbPostRelease(v11 + 280);
        v122 = 0;
        if ( !a4 )
        {
          v68 = (struct _ERESOURCE *)(v37 + 72);
          if ( (a6 & 2) != 0 )
            ExAcquireResourceExclusiveLite(v68, 1u);
          else
            ExAcquireSharedStarveExclusive(v68, 1u);
        }
      }
      else
      {
        if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v37 + 72), 0) )
        {
          v37 = 0LL;
          v121 = 0LL;
          v120 = 0;
          goto LABEL_75;
        }
        ++*(_DWORD *)(v37 + 64);
        *(_QWORD *)(v11 + 288) = 0LL;
        v105 = *(_BYTE *)(v11 + 328);
        v106 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
        if ( v106 )
          ExpReleaseFastMutexContended(v11 + 280, v106);
        __writecr8(v105);
        KeAbPostRelease(v11 + 280);
        v122 = 0;
      }
      *v125 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v37 + 8));
    }
    else
    {
      v40 = v125;
      *v125 -= (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v37 + 8));
      v132 = *(_QWORD *)(v37 + 8);
      v127 = *(unsigned int *)(v37 + 4);
      if ( (a6 & 1) != 0 )
      {
        ++*(_DWORD *)(v37 + 64);
        *(_QWORD *)(v11 + 288) = 0LL;
        v41 = *(_BYTE *)(v11 + 328);
        v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
        if ( v42 )
          ExpReleaseFastMutexContended(v11 + 280, v42);
        __writecr8(v41);
        KeAbPostRelease(v11 + 280);
        v122 = 0;
        if ( !a4 )
        {
          v43 = (struct _ERESOURCE *)(v37 + 72);
          if ( (a6 & 2) != 0 )
            ExAcquireResourceExclusiveLite(v43, 1u);
          else
            ExAcquireSharedStarveExclusive(v43, 1u);
        }
        if ( (a6 & 4) != 0 )
          goto LABEL_74;
        v44 = *v40;
        v45 = KeGetCurrentThread();
        v46 = 1LL;
        v146 = 0;
        v47 = 0LL;
        v138 = 0;
        v123[0] = 1;
        v48 = ((v44 & 0xFFF) + (unsigned __int64)(unsigned int)v127 + 4095) >> 12;
        v137 = v48;
        v49 = v44 & 0xFFFFFFFFFFFFF000uLL;
        v135 = v49;
        Flink_low = LODWORD(v45[1].WaitListEntry.Flink);
        v51 = LOBYTE(v45[1].Teb) + 4 * Flink_low;
        while ( 1 )
        {
          v52 = 15LL;
          if ( !(_DWORD)v48 )
            break;
          LOBYTE(v45[1].Teb) = 1;
          if ( (unsigned int)(v48 - 1) > LODWORD(v45[1].WaitListEntry.Flink) )
          {
            v110 = v48 - 1;
            if ( (unsigned int)(v48 - 1) > 0xF )
              v110 = 15;
            LODWORD(v45[1].WaitListEntry.Flink) = v110;
          }
          v64 = 0;
          v136 = 0;
          if ( ((unsigned int)v46 & v124) != 0 )
          {
            v64 = 1;
            v136 = 1;
          }
          if ( v124 )
          {
            if ( (_DWORD)v46 == 2 )
              v13 = v48 - 1;
          }
          else
          {
            v13 = v48;
          }
          v65 = MmCheckCachedPageStates(v49, (unsigned int)(v13 << 12), v64, v123);
          v47 = (unsigned int)v65;
          v138 = v65;
          if ( v65 < 0 )
            break;
          v49 += (unsigned int)(v13 << 12);
          v135 = v49;
          LODWORD(v48) = v48 - v13;
          v137 = v48;
          if ( (_DWORD)v48 == 1 )
            v46 = 4LL;
          else
            v46 = 2LL;
          v13 = 1;
        }
        LOBYTE(v45[1].Teb) = v51 & 3;
        LODWORD(v45[1].WaitListEntry.Flink) = v51 >> 2;
        if ( (int)v47 < 0 )
          RtlRaiseStatus(v47);
        v11 = v150;
        v53 = v150 + 280;
        if ( !KiAbEnabled )
        {
          v56 = 0LL;
LABEL_65:
          v59 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v53, 0) )
            ExpAcquireFastMutexContended(v53);
          if ( v56 )
            *(_BYTE *)(v56 + 26) |= 1u;
          *(_QWORD *)(v53 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v53 + 48) = v59;
          v60 = v125;
          if ( !*(_QWORD *)(v121 + 184) )
          {
            *(_QWORD *)(v121 + 184) = *v125;
            *(_QWORD *)(v121 + 56) = v126;
            v126 = 0LL;
          }
          *(_QWORD *)(v53 + 8) = 0LL;
          v61 = *(_BYTE *)(v53 + 48);
          v62 = _InterlockedCompareExchange((volatile signed __int32 *)v53, 1, 0);
          if ( v62 )
            ExpReleaseFastMutexContended(v53, v62);
          __writecr8(v61);
          KeAbPostRelease(v53);
          v37 = v121;
          *v60 = *(_QWORD *)(v121 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v121 + 8));
LABEL_74:
          v120 = 1;
LABEL_75:
          v63 = a6;
          goto LABEL_76;
        }
        v54 = KeGetCurrentThread();
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
          KeBugCheckEx(0x192u, (ULONG_PTR)v54, v150 + 280, KeGetCurrentIrql(), 0LL);
        v156 = 1;
        --v54->SpecialApcDisable;
        v152 = 0LL;
        if ( !v54->AbEntrySummary )
        {
          if ( !v54->AbOrphanedEntrySummary )
          {
            v139 = 0;
            v56 = 0LL;
            v144 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(v54, v53, v52, v46);
            goto LABEL_58;
          }
          v111 = v54->AbOrphanedEntrySummary;
          v54->AbOrphanedEntrySummary = 0;
          v54->AbEntrySummary |= v111;
          v139 = 1;
        }
        v47 = v54->AbEntrySummary;
        _BitScanForward((unsigned int *)&v55, v47);
        v157 = v55;
        v54->AbEntrySummary = v47 & ~(1 << v55);
        Flink_low = 96 * v55;
        v56 = (__int64)&v54->LockEntries[v55];
        v144 = v56;
LABEL_58:
        v152 = v56;
        if ( v56 )
        {
          if ( v53 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
            v57 = MmGetSessionIdEx(v54->ApcState.Process, v47);
          else
            v57 = -1;
          *(_DWORD *)(v56 + 40) = v57;
          Flink_low = 0x7FFFFFFFFFFFFFFCLL;
          *(_QWORD *)(v56 + 32) = v53 & 0x7FFFFFFFFFFFFFFCLL;
        }
        else
        {
          _interlockedbittestandset((volatile signed __int32 *)&v54->116 + 1, 0xFu);
        }
        v58 = v54->SpecialApcDisable + 1;
        v54->SpecialApcDisable = v58;
        if ( !v58 && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
          KiCheckForKernelApcDelivery(Flink_low);
        goto LABEL_65;
      }
      if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v37 + 72), 0) )
      {
        v37 = 0LL;
        v121 = 0LL;
        v120 = 0;
        goto LABEL_75;
      }
      ++*(_DWORD *)(v37 + 64);
      v87 = (volatile signed __int32 *)(v11 + 280);
      *(_QWORD *)(v11 + 288) = 0LL;
      v88 = *(_BYTE *)(v11 + 328);
      v89 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
      if ( v89 )
        ExpReleaseFastMutexContended(v87, v89);
      __writecr8(v88);
      KeAbPostRelease(v11 + 280);
      v122 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*(_DWORD *)(v37 + 4), v124, 0, *v40) )
      {
        v120 = 0;
        goto LABEL_95;
      }
      v91 = KeAbPreAcquire((ULONG_PTR)v87, 0LL, 0LL, v90);
      v92 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v87, 0) )
        ExpAcquireFastMutexContended(v11 + 280);
      if ( v91 )
        *(_BYTE *)(v91 + 26) |= 1u;
      *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 328) = v92;
      v93 = v125;
      if ( !*(_QWORD *)(v37 + 184) )
      {
        *(_QWORD *)(v37 + 184) = *v125;
        *(_QWORD *)(v37 + 56) = v126;
        v126 = 0LL;
      }
      *(_QWORD *)(v11 + 288) = 0LL;
      v94 = *(_BYTE *)(v11 + 328);
      v95 = _InterlockedCompareExchange(v87, 1, 0);
      if ( v95 )
        ExpReleaseFastMutexContended(v11 + 280, v95);
      __writecr8(v94);
      KeAbPostRelease(v11 + 280);
      *v93 = *(_QWORD *)(v37 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v37 + 8));
    }
    v120 = 1;
LABEL_95:
    v37 = v121;
    goto LABEL_75;
  }
  v63 = a6;
  if ( (a6 & 8) != 0 )
  {
    v37 = 0LL;
    v121 = 0LL;
    v120 = 0;
    goto LABEL_76;
  }
  v132 = *a2;
  v127 = v25 - v132;
  v70 = v132;
  v71 = v132 & 0xFFF;
  v72 = v71 + v127;
  LODWORD(v127) = v71 + v127;
  v73 = v71 + v129;
  v129 += v71;
  if ( !a4 && (*(_DWORD *)(v11 + 152) & 4) == 0 || a5 )
  {
    v86 = 2;
    v124 = 2;
    if ( (v132 & 0xFFF) == 0 )
    {
      if ( (unsigned int)v135 >= 0x1000 )
        v86 = 3;
      v124 = v86;
    }
    if ( (v72 & 0xFFF) == 0 )
      v124 = v86 | 4;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    a4 = 1;
  LODWORD(v127) = (v127 + 4095) & 0xFFFFF000;
  v74 = v127;
  v75 = v125;
  *v125 -= *(_DWORD *)a2 & 0xFFF;
  LODWORD(v132) = v70 & 0xFFFFF000;
  if ( v74 > v73 )
    LODWORD(v127) = v73;
  v76 = CcAllocateInitializeBcb(v11, v37, &v132, &v127);
  v37 = v76;
  v121 = v76;
  if ( (a6 & 1) == 0 )
  {
    if ( !v76 )
    {
      v120 = 0;
      goto LABEL_75;
    }
    if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v76 + 72), 0) )
      KeBugCheckEx(0x34u, 0x20244uLL, v37, 0LL, 0LL);
    v96 = (volatile signed __int32 *)(v11 + 280);
    *(_QWORD *)(v11 + 288) = 0LL;
    v97 = *(_BYTE *)(v11 + 328);
    v98 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
    if ( v98 )
      ExpReleaseFastMutexContended(v11 + 280, v98);
    __writecr8(v97);
    KeAbPostRelease(v11 + 280);
    v122 = 0;
    if ( (unsigned __int8)CcMapAndRead(v127, v124, 0, *v75) )
    {
      v100 = KeAbPreAcquire(v11 + 280, 0LL, 0LL, v99);
      v101 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v96, 0) )
        ExpAcquireFastMutexContended(v11 + 280);
      if ( v100 )
        *(_BYTE *)(v100 + 26) |= 1u;
      *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 328) = v101;
      v102 = v125;
      if ( !*(_QWORD *)(v121 + 184) )
      {
        *(_QWORD *)(v121 + 184) = *v125;
        *(_QWORD *)(v121 + 56) = v126;
        v126 = 0LL;
      }
      *(_QWORD *)(v11 + 288) = 0LL;
      v103 = *(_BYTE *)(v11 + 328);
      v104 = _InterlockedCompareExchange(v96, 1, 0);
      if ( v104 )
        ExpReleaseFastMutexContended(v11 + 280, v104);
      __writecr8(v103);
      KeAbPostRelease(v11 + 280);
      v37 = v121;
      *v102 = *(_QWORD *)(v121 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v121 + 8));
      v120 = 1;
      goto LABEL_75;
    }
    v120 = 0;
    goto LABEL_95;
  }
  if ( !v76 )
  {
    *(_QWORD *)(v11 + 288) = 0LL;
    v108 = *(_BYTE *)(v11 + 328);
    v109 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
    if ( v109 )
      ExpReleaseFastMutexContended(v11 + 280, v109);
    __writecr8(v108);
    KeAbPostRelease(v11 + 280);
    RtlRaiseStatus(-1073741670);
  }
  if ( !a4 )
  {
    v77 = (struct _ERESOURCE *)(v76 + 72);
    if ( (a6 & 2) != 0 )
    {
      if ( !ExAcquireResourceExclusiveLite(v77, 0) )
        KeBugCheckEx(0x34u, 0x201DBuLL, v37, 0LL, 0LL);
    }
    else if ( !ExAcquireSharedStarveExclusive(v77, 0) )
    {
      KeBugCheckEx(0x34u, 0x201E2uLL, v37, 0LL, 0LL);
    }
  }
  v78 = (volatile signed __int32 *)(v11 + 280);
  *(_QWORD *)(v11 + 288) = 0LL;
  v79 = *(_BYTE *)(v11 + 328);
  v80 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
  if ( v80 )
    ExpReleaseFastMutexContended(v11 + 280, v80);
  __writecr8(v79);
  KeAbPostRelease(v11 + 280);
  v122 = 0;
  v63 = a6;
  if ( (a6 & 4) != 0 )
  {
    v37 = v121;
  }
  else
  {
    CcMapAndRead(v127, v124, 1, *v75);
    v82 = KeAbPreAcquire(v11 + 280, 0LL, 0LL, v81);
    v83 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v78, 0) )
      ExpAcquireFastMutexContended(v11 + 280);
    if ( v82 )
      *(_BYTE *)(v82 + 26) |= 1u;
    *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
    *(_DWORD *)(v11 + 328) = v83;
    if ( !*(_QWORD *)(v121 + 184) )
    {
      *(_QWORD *)(v121 + 184) = *v125;
      *(_QWORD *)(v121 + 56) = v126;
      v126 = 0LL;
    }
    *(_QWORD *)(v11 + 288) = 0LL;
    v84 = *(_BYTE *)(v11 + 328);
    v85 = _InterlockedCompareExchange(v78, 1, 0);
    if ( v85 )
      ExpReleaseFastMutexContended(v11 + 280, v85);
    __writecr8(v84);
    KeAbPostRelease(v11 + 280);
    v37 = v121;
    *v125 = *(_QWORD *)(v121 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v121 + 8));
  }
  v120 = 1;
LABEL_76:
  if ( (v63 & 6) == 6 && v37 && *(_QWORD *)(v37 + 184) )
  {
    v112 = *(_QWORD *)(*(_QWORD *)(v37 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v37 + 56) + 16LL)) )
    {
      v113 = *(struct _KEVENT **)(v112 + 184);
      if ( v113 )
        KeSetEvent(v113, 0, 0);
    }
    *(_QWORD *)(v37 + 184) = 0LL;
    *(_QWORD *)(v37 + 56) = 0LL;
    v37 = v121;
  }
  if ( v122 )
  {
    *(_QWORD *)(v11 + 288) = 0LL;
    v116 = *(_BYTE *)(v11 + 328);
    v117 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
    if ( v117 )
      ExpReleaseFastMutexContended(v11 + 280, v117);
    __writecr8(v116);
    KeAbPostRelease(v11 + 280);
    v37 = v121;
  }
  if ( v126 )
  {
    v115 = *((_QWORD *)v126 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v126 + 4) )
    {
      v119 = *(struct _KEVENT **)(v115 + 184);
      if ( v119 )
        KeSetEvent(v119, 0, 0);
    }
    v37 = v121;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v120 )
  {
    *v145 = v37;
    *v147 = *(_QWORD *)(v37 + 32);
  }
  else
  {
    *v125 = 0LL;
    if ( v37 )
      CcUnpinFileDataEx(v37, a4, 0LL);
  }
  return v120;
}
