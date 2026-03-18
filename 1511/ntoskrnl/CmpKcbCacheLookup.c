/*
 * XREFs of CmpKcbCacheLookup @ 0x140407660
 * Callers:
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     CmpFindKeyNameAtIndex @ 0x140041F60 (CmpFindKeyNameAtIndex.c)
 *     CmpGetConvKeyAtIndex @ 0x140041F90 (CmpGetConvKeyAtIndex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     CmpCompareUnicodeString @ 0x1403BC8B8 (CmpCompareUnicodeString.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmpLockTwoKcbsExclusive @ 0x1403DB140 (CmpLockTwoKcbsExclusive.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLockHashEntryExclusive @ 0x1403F9DF0 (CmpLockHashEntryExclusive.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1403FB6B0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpRemoveKeyHash @ 0x1404B48FC (CmpRemoveKeyHash.c)
 *     CmpRemoveFromDelayedClose @ 0x1404C082C (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpKcbCacheLookup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed int a4,
        int a5,
        _DWORD *a6,
        ULONG_PTR *a7,
        __int64 a8,
        _QWORD *a9,
        _DWORD *a10,
        _BYTE *a11,
        __int64 a12,
        char a13,
        _BYTE *a14)
{
  char v14; // cl
  signed __int64 v15; // rbx
  __int64 v17; // rbp
  ULONG_PTR v18; // rdi
  ULONG_PTR v19; // r15
  signed __int32 v20; // eax
  signed __int32 v21; // edx
  signed __int32 v22; // ett
  int v23; // esi
  signed int v24; // r15d
  unsigned int v25; // eax
  signed int i; // r14d
  ULONG_PTR v27; // r15
  int v28; // edi
  __int64 v29; // rsi
  int v30; // edi
  int v31; // edi
  unsigned int v32; // eax
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 *v34; // rsi
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // r11
  ULONG_PTR v38; // r12
  unsigned int v39; // eax
  __int64 *v40; // rdi
  signed __int64 v41; // rax
  signed __int64 v42; // rcx
  __int64 v43; // rtt
  signed int v44; // r10d
  int v45; // eax
  __int64 v46; // rdx
  unsigned int v47; // r10d
  __int64 v48; // r11
  __int64 v49; // r9
  __int64 KeyNameAtIndex; // rax
  signed int v51; // r10d
  __int64 v52; // r11
  __int64 v53; // r9
  unsigned __int16 v54; // di
  unsigned __int8 *v55; // r15
  unsigned __int16 v56; // si
  WCHAR *v57; // r14
  WCHAR v58; // ax
  int v59; // ebp
  int v60; // edx
  __int64 v61; // r15
  int v62; // edx
  __int64 v63; // r11
  char v64; // r14
  __int64 v65; // rdi
  int v66; // ecx
  int v67; // edx
  _WORD *v68; // rax
  _WORD *v69; // rax
  __int64 v70; // r11
  __int64 v71; // r9
  _WORD *v72; // r9
  __int16 v73; // r10
  __int16 v74; // r10
  bool v75; // zf
  signed __int32 v76; // eax
  signed __int32 v77; // ecx
  signed __int32 v78; // ett
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  __int64 v81; // rtt
  __int64 v82; // rsi
  __int64 *v83; // rdi
  signed __int64 v84; // rax
  signed __int64 v85; // rcx
  __int64 v86; // rtt
  ULONG_PTR v87; // r15
  unsigned __int32 v88; // edx
  unsigned __int32 v89; // ecx
  __int64 *v90; // r15
  int v91; // ecx
  __int64 v92; // rdi
  int v93; // eax
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // esi
  unsigned int v98; // r12d
  unsigned __int64 v100; // rdi
  signed __int64 v101; // rax
  __int64 v102; // rtt
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned __int8 v105; // si
  int v106; // eax
  ULONG_PTR v107; // rcx
  _BYTE *v108; // rdx
  _QWORD *v109; // rax
  unsigned __int8 v110; // di
  signed __int32 v111; // eax
  char v112; // si
  __int64 v113; // rax
  __int64 v114; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v116; // rax
  __int64 v117; // rdx
  _QWORD *v118; // rcx
  unsigned __int8 v119; // di
  signed __int32 v120; // eax
  unsigned __int32 v121; // edx
  unsigned __int32 v122; // ecx
  _QWORD *v123; // r10
  char *NextElement; // rax
  int v125; // ecx
  ULONG_PTR v126; // rcx
  int v127; // eax
  __int64 v128; // rcx
  char *v129; // rcx
  __int64 v130; // rax
  unsigned int ConvKeyAtIndex; // eax
  unsigned int v132; // eax
  unsigned int v133; // eax
  unsigned int v134; // edi
  __int64 v135; // rsi
  unsigned int v136; // edi
  __int64 v137; // rsi
  signed __int32 v138[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v139; // [rsp+30h] [rbp-98h]
  signed int v140; // [rsp+34h] [rbp-94h]
  int v141; // [rsp+38h] [rbp-90h]
  signed int v142; // [rsp+3Ch] [rbp-8Ch]
  __int64 v143; // [rsp+48h] [rbp-80h]
  __int64 v144; // [rsp+50h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  signed int v146; // [rsp+60h] [rbp-68h]
  ULONG_PTR v147; // [rsp+68h] [rbp-60h]
  __int64 v148; // [rsp+70h] [rbp-58h] BYREF
  _WORD v149[4]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v150; // [rsp+80h] [rbp-48h]

  v14 = 0;
  v15 = 0LL;
  v139 = 0;
  v17 = a3;
  *a11 = 0;
  v18 = *a7;
  v147 = v18;
  v19 = *(_QWORD *)(v18 + 32);
  *a14 = 0;
  v20 = *(_DWORD *)v18;
  BugCheckParameter2 = v19;
  v21 = v20 + 1;
  if ( v20 == -1 )
    return 3221225626LL;
  while ( 1 )
  {
    if ( v21 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v22 = v20;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)v18, v21, v20);
    if ( v22 == v20 )
      break;
    v21 = v20 + 1;
    if ( v20 == -1 )
      return 3221225626LL;
  }
  v23 = a5;
  v24 = a5 - 1;
  v146 = a5 - 1;
  while ( 2 )
  {
    v25 = *(_DWORD *)(v18 + 4);
    i = v24;
    v27 = BugCheckParameter2;
    v28 = v23 + 1;
    v29 = a1;
    v30 = ((v25 >> 21) & 0x3FF) - a4 + v28;
    while ( 1 )
    {
      v140 = i;
      if ( i < a4 )
      {
        v90 = (__int64 *)a7;
        goto LABEL_80;
      }
      v31 = v30 - 1;
      v141 = v31;
      if ( v14 )
      {
        ConvKeyAtIndex = CmpGetConvKeyAtIndex(v29, v17, i);
        CmpLockHashEntryExclusive(v27, ConvKeyAtIndex);
      }
      else
      {
        v32 = CmpGetConvKeyAtIndex(v29, v17, i);
        BugCheckParameter4 = v32;
        v34 = (unsigned __int64 *)(*(_QWORD *)(v27 + 2800)
                                 + 24LL
                                 * (((101027 * (v32 ^ (v32 >> 9))) ^ ((101027 * (v32 ^ (v32 >> 9))) >> 9)) & (*(_DWORD *)(v27 + 2808) - 1)));
        v35 = KeAbPreAcquire((ULONG_PTR)v34, 0LL, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v34, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v34, v35, (ULONG_PTR)v34);
        if ( v35 )
          *(_BYTE *)(v35 + 26) |= 1u;
        if ( !CmpReferenceHive(v27) )
          KeBugCheckEx(0x51u, 0x17uLL, v27, 9uLL, BugCheckParameter4);
        v31 = v141;
        v17 = a3;
        v29 = a1;
      }
      v36 = CmpGetConvKeyAtIndex(v29, v17, i);
      v37 = *(_QWORD *)(*(_QWORD *)(v27 + 2800)
                      + 24LL
                      * (((101027 * (v36 ^ (v36 >> 9))) ^ ((101027 * (v36 ^ (v36 >> 9))) >> 9)) & (*(_DWORD *)(v27 + 2808)
                                                                                                 - 1))
                      + 16);
      v143 = v37;
      if ( v37 )
        break;
LABEL_18:
      v39 = CmpGetConvKeyAtIndex(v29, v17, i);
      v40 = (__int64 *)(*(_QWORD *)(v27 + 2800)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(v27 + 2808) - 1) & ((101027 * (v39 ^ (v39 >> 9))) ^ ((unsigned __int64)(101027 * (v39 ^ (v39 >> 9))) >> 9))));
      v40[1] = 0LL;
      _m_prefetchw(v40);
      v41 = *v40;
      if ( (*v40 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v42 = v41 - 16;
      else
        v42 = 0LL;
      if ( (v41 & 2) != 0 || (v43 = *v40, v43 != _InterlockedCompareExchange64(v40, v42, v41)) )
        ExfReleasePushLock(v40);
      KeAbPostRelease((ULONG_PTR)v40);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v27);
      v30 = v141;
      --i;
      v14 = v139;
    }
    while ( 1 )
    {
      v38 = v37 - 16;
      if ( ((*(_DWORD *)(v37 - 12) >> 21) & 0x3FF) == v31 )
        break;
LABEL_16:
      v37 = *(_QWORD *)(v37 + 8);
      v143 = v37;
      if ( !v37 )
      {
LABEL_17:
        v27 = BugCheckParameter2;
        goto LABEL_18;
      }
    }
    v144 = v37 - 16;
    v44 = i;
    v142 = i;
    do
    {
      v45 = CmpGetConvKeyAtIndex(v29, v17, v44);
      if ( v45 != *(_DWORD *)(v48 + 16) )
        goto LABEL_94;
      v49 = *(_QWORD *)(v48 + 80);
      if ( (*(_DWORD *)v49 & 1) != 0 )
      {
        KeyNameAtIndex = CmpFindKeyNameAtIndex(a2, v46, v47);
        v54 = *(_WORD *)(v53 + 24);
        v55 = (unsigned __int8 *)(v53 + 26);
        v56 = *(_WORD *)KeyNameAtIndex >> 1;
        v57 = *(WCHAR **)(KeyNameAtIndex + 8);
        if ( !v56 )
        {
LABEL_37:
          v61 = a2;
          v62 = v56;
          v29 = a1;
          v60 = v62 - v54;
          goto LABEL_38;
        }
        while ( 1 )
        {
          if ( !v54 )
          {
LABEL_36:
            v17 = a3;
            v52 = v144;
            v51 = v142;
            goto LABEL_37;
          }
          v58 = *v57++;
          v59 = *v55++;
          if ( v58 != (_WORD)v59 )
          {
            if ( v58 >= 0x61u )
            {
              if ( v58 > 0x7Au )
                v58 = RtlUpcaseUnicodeChar(v58);
              else
                v58 -= 32;
            }
            v60 = v58 - v59;
            if ( v58 != v59 )
              break;
          }
          --v54;
          if ( !--v56 )
            goto LABEL_36;
        }
        v17 = a3;
        v29 = a1;
        v61 = a2;
      }
      else
      {
        v61 = a2;
        v150 = v49 + 26;
        v149[0] = *(_WORD *)(v49 + 24);
        v149[1] = v149[0];
        v130 = CmpFindKeyNameAtIndex(a2, v46, v47);
        v60 = CmpCompareUnicodeString(v130, (__int64)v149, 2);
      }
      v52 = v144;
      v51 = v142;
LABEL_38:
      if ( v60 )
        goto LABEL_94;
      v63 = *(_QWORD *)(v52 + 72);
      v44 = v51 - 1;
      v144 = v63;
      v142 = v44;
    }
    while ( v44 >= a4 );
    v18 = v147;
    if ( v147 != v63 )
    {
LABEL_94:
      v37 = v143;
      i = v140;
      v31 = v141;
      goto LABEL_16;
    }
    v64 = v139;
    if ( v139 )
    {
      CmpLockKcbExclusive(v38);
    }
    else
    {
      if ( (*(_DWORD *)(v38 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v38 + 64) = CmpLockTableAdd(v38, 0);
      v65 = KeAbPreAcquire(v38 + 48, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 48), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v38 + 48), v65, v38 + 48);
      if ( v65 )
        *(_BYTE *)(v65 + 26) |= 1u;
      _InterlockedIncrement((volatile signed __int32 *)(v38 + 56));
      v18 = v147;
    }
    v66 = *(_DWORD *)(v38 + 4);
    v67 = *(_DWORD *)(*(_QWORD *)(v38 + 72) + 4LL);
    if ( ((v66 | v67) & 0x20000) != 0 )
    {
      if ( !v64 )
      {
        CmpUnlockKcb((char *)v38);
        v132 = CmpGetConvKeyAtIndex(a1, v17, v140);
        CmpUnlockHashEntry(BugCheckParameter2, v132);
        v24 = v146;
        v14 = 1;
        v23 = a5;
        v139 = 1;
        continue;
      }
      if ( (v67 & 0x20000) != 0 )
      {
        if ( *(_DWORD *)v38 )
        {
          *(_DWORD *)(v38 + 4) = v66 | 0x20000;
          CmpRemoveKeyHash(*(_QWORD *)(v38 + 32), v38 + 16);
          *(_QWORD *)(v38 + 24) = -1LL;
        }
        else
        {
          CmpRemoveFromDelayedClose(v38);
          CmpCleanUpKcbCacheWithLock(v38, 0LL);
        }
        CmpUnlockKcb((char *)v38);
        i = v140;
        v29 = a1;
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(v38 + 4) & 0x20000) == 0 )
        break;
      CmpRemoveKeyHash(*(_QWORD *)(v38 + 32), v38 + 16);
      CmpUnlockKcb((char *)v38);
      v133 = CmpGetConvKeyAtIndex(a1, v17, v140);
      CmpUnlockHashEntry(BugCheckParameter2, v133);
      v126 = v18;
LABEL_148:
      CmpDereferenceKeyControlBlock(v126);
      return 3221225524LL;
    }
    break;
  }
  if ( *(_WORD *)a8 )
  {
    do
    {
      v68 = *(_WORD **)(a8 + 8);
      if ( *v68 != 92 )
        break;
      v75 = *(_WORD *)a8 == 2;
      *(_WORD *)a8 -= 2;
      *(_QWORD *)(a8 + 8) = v68 + 1;
    }
    while ( !v75 );
  }
  for ( i = v140; a4 <= i; ++a4 )
  {
    v69 = (_WORD *)CmpFindKeyNameAtIndex(v61, v17, a4);
    v72 = (_WORD *)(v71 + 2 * ((unsigned __int64)(unsigned __int16)*v69 >> 1));
    *(_QWORD *)(v70 + 8) = v72;
    v74 = v73 - *v69;
    *(_WORD *)v70 = v74;
    if ( v74 )
    {
      do
      {
        if ( *v72 != 92 )
          break;
        ++v72;
        v75 = v74 == 2;
        v74 -= 2;
        *(_QWORD *)(v70 + 8) = v72;
        *(_WORD *)v70 = v74;
      }
      while ( !v75 );
    }
  }
  v76 = *(_DWORD *)v38;
  v77 = *(_DWORD *)v38 + 1;
  if ( *(_DWORD *)v38 != -1 )
  {
    while ( 1 )
    {
      v78 = v76;
      v76 = _InterlockedCompareExchange((volatile signed __int32 *)v38, v77, v76);
      if ( v78 == v76 )
        break;
      v77 = v76 + 1;
      if ( v76 == -1 )
        goto LABEL_61;
    }
    if ( (*(_DWORD *)(v38 + 8) & 1) == 0 )
      goto LABEL_60;
    v112 = 0;
    v113 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL);
    v114 = v113;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v113);
    if ( v114 )
      *(_BYTE *)(v114 + 26) |= 1u;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
    if ( (*(_DWORD *)(v38 + 8) & 1) != 0 )
    {
      v116 = (_QWORD *)(v38 + 216);
      v117 = *(_QWORD *)(v38 + 216);
      v118 = *(_QWORD **)(v38 + 224);
      if ( *(_QWORD *)(v117 + 8) != v38 + 216 || (_QWORD *)*v118 != v116 )
        __fastfail(3u);
      *v118 = v117;
      *(_QWORD *)(v117 + 8) = v118;
      *(_QWORD *)(v38 + 224) = v38 + 216;
      *v116 = v116;
      _InterlockedOr(v138, 0);
      *(_DWORD *)(v38 + 8) &= ~1u;
      v112 = 1;
    }
    v119 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v120 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v120 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v120);
    __writecr8(v119);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    if ( v112 )
    {
      v121 = *(_DWORD *)v38;
      if ( *(_DWORD *)v38 <= 1u )
      {
LABEL_185:
        v134 = *(_DWORD *)(v38 + 16);
        v135 = *(_QWORD *)(v38 + 32);
        CmpLockHashEntryExclusiveByKcb(v38);
        CmpLockKcbExclusive(v38);
        CmpDereferenceKeyControlBlockWithLock(v38, 0LL);
        CmpUnlockKcb((char *)v38);
        CmpUnlockHashEntry(v135, v134);
      }
      else
      {
        while ( 1 )
        {
          v122 = v121 - 1;
          v121 = _InterlockedCompareExchange((volatile signed __int32 *)v38, v121 - 1, v121);
          if ( v121 == v122 + 1 )
            break;
          if ( v121 <= 1 )
            goto LABEL_185;
        }
      }
    }
    else
    {
LABEL_60:
      if ( (*(_DWORD *)(v38 + 8) & 2) != 0 )
      {
        v103 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0LL);
        v104 = v103;
        v105 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v103);
        if ( v104 )
          *(_BYTE *)(v104 + 26) |= 1u;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = v105;
        v106 = *(_DWORD *)(v38 + 8);
        if ( (v106 & 2) != 0 )
        {
          v107 = v38 + 216;
          if ( (v106 & 4) != 0 )
          {
            **(_BYTE **)v107 = 1;
            *(_DWORD *)(v38 + 8) &= ~4u;
          }
          else
          {
            v108 = *(_BYTE **)v107;
            v109 = *(_QWORD **)(v38 + 224);
            if ( *(_QWORD *)(*(_QWORD *)v107 + 8LL) != v107 || *v109 != v107 )
              __fastfail(3u);
            --CmpDelayedCloseElements;
            *v109 = v108;
            *((_QWORD *)v108 + 1) = v109;
            --qword_1406FC028;
          }
          *(_QWORD *)(v38 + 224) = v38 + 216;
          *(_QWORD *)v107 = v107;
          _InterlockedOr(v138, 0);
          *(_DWORD *)(v38 + 8) &= ~2u;
        }
        v110 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
        *(&CmpDelayedCloseTableLock + 1) = 0LL;
        v111 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
        if ( v111 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v111);
        __writecr8(v110);
        KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
      }
    }
  }
LABEL_61:
  if ( *(struct _KTHREAD **)(v38 + 56) == KeGetCurrentThread() )
    *(_QWORD *)(v38 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v38 + 56));
  _m_prefetchw((const void *)(v38 + 48));
  v79 = *(_QWORD *)(v38 + 48);
  if ( (v79 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v80 = v79 - 16;
  else
    v80 = 0LL;
  if ( (v79 & 2) != 0
    || (v81 = *(_QWORD *)(v38 + 48),
        v81 != _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 48), v80, v79)) )
  {
    ExfReleasePushLock((_QWORD *)(v38 + 48));
  }
  KeAbPostRelease(v38 + 48);
  if ( (*(_DWORD *)(v38 + 4) & 0x100000) != 0 )
    CmpLockTableRemove(v38, *(_DWORD *)(v38 + 64));
  if ( (*(_DWORD *)(v38 + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(v38);
  v82 = *(_QWORD *)(v38 + 32);
  *(_QWORD *)(*(_QWORD *)(v82 + 2800)
            + 24LL
            * (((101027 * (*(_DWORD *)(v38 + 16) ^ (*(_DWORD *)(v38 + 16) >> 9))) ^ ((unsigned int)(101027
                                                                                                  * (*(_DWORD *)(v38 + 16) ^ (*(_DWORD *)(v38 + 16) >> 9))) >> 9)) & (*(_DWORD *)(v82 + 2808) - 1))
            + 8) = 0LL;
  v83 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v38 + 32) + 2800LL)
                  + 24LL
                  * (((101027 * (*(_DWORD *)(v38 + 16) ^ (*(_DWORD *)(v38 + 16) >> 9))) ^ ((unsigned int)(101027 * (*(_DWORD *)(v38 + 16) ^ (*(_DWORD *)(v38 + 16) >> 9))) >> 9)) & (*(_DWORD *)(*(_QWORD *)(v38 + 32) + 2808LL) - 1)));
  _m_prefetchw(v83);
  v84 = *v83;
  if ( (*v83 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v85 = v84 - 16;
  else
    v85 = 0LL;
  if ( (v84 & 2) != 0 || (v86 = *v83, v86 != _InterlockedCompareExchange64(v83, v85, v84)) )
    ExfReleasePushLock(v83);
  KeAbPostRelease((ULONG_PTR)v83);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v82);
  v87 = v147;
  v88 = *(_DWORD *)v147;
  if ( *(_DWORD *)v147 <= 1u )
  {
LABEL_188:
    v136 = *(_DWORD *)(v87 + 16);
    v137 = *(_QWORD *)(v87 + 32);
    CmpLockHashEntryExclusiveByKcb(v87);
    CmpLockKcbExclusive(v87);
    CmpDereferenceKeyControlBlockWithLock(v87, 0LL);
    CmpUnlockKcb((char *)v87);
    CmpUnlockHashEntry(v137, v136);
  }
  else
  {
    while ( 1 )
    {
      v89 = v88 - 1;
      v88 = _InterlockedCompareExchange((volatile signed __int32 *)v87, v88 - 1, v88);
      if ( v88 == v89 + 1 )
        break;
      if ( v88 <= 1 )
        goto LABEL_188;
    }
  }
  v90 = (__int64 *)a7;
  *a9 = *(_QWORD *)(v38 + 32);
  v91 = *(_DWORD *)(v38 + 40);
  *a7 = v38;
  *a10 = v91;
LABEL_80:
  v92 = *v90;
  v93 = *(_DWORD *)(*v90 + 4);
  if ( (v93 & 0x10) != 0 )
  {
    *a6 = i + 1;
    return 0LL;
  }
  if ( (v93 & 0x100000) != 0 )
    *(_DWORD *)(v92 + 64) = CmpLockTableAdd(*v90, 0);
  v94 = KeAbPreAcquire(v92 + 48, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v92 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v92 + 48), v94, v92 + 48);
  if ( v94 )
    *(_BYTE *)(v94 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v92 + 56));
  v95 = *(_QWORD *)(*v90 + 232);
  if ( v95 && !CmEqualTrans(a12, v95) )
  {
LABEL_146:
    CmpUnlockKcb((char *)*v90);
    goto LABEL_147;
  }
  v96 = *v90;
  v148 = 0LL;
  if ( (*(_DWORD *)(v96 + 4) & 0x20000) != 0 )
  {
LABEL_143:
    if ( !a12 )
      goto LABEL_146;
    if ( (*(_DWORD *)(*v90 + 4) & 0x20000) != 0 )
      goto LABEL_146;
    v97 = a5;
    if ( !a13 || a5 != i + 1 )
      goto LABEL_146;
    CmpUnlockKcb((char *)*v90);
    CmpLockTwoKcbsExclusive(*v90, *(_QWORD *)(*v90 + 72));
    if ( CmRmIsKCBDeleted(*(_QWORD *)(*v90 + 72), a12) || (*(_DWORD *)(*v90 + 4) & 0x20000) != 0 )
    {
      v128 = *v90;
    }
    else
    {
      v127 = CmpUndoDeleteKeyForTrans(*v90, a12);
      v128 = *v90;
      v98 = v127;
      if ( v127 >= 0 )
      {
        v129 = *(char **)(v128 + 72);
        *a14 = 1;
        CmpUnlockKcb(v129);
        goto LABEL_91;
      }
    }
    CmpUnlockTwoKcbs((char *)v128, *(char **)(v128 + 72));
LABEL_147:
    v126 = *v90;
    goto LABEL_148;
  }
  if ( a12 )
  {
    v123 = (_QWORD *)(v96 + 200);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v123, &v148, 32);
      if ( !NextElement )
        break;
      v125 = *((_DWORD *)NextElement + 17);
      if ( v125 == 2 || v125 == 11 )
      {
        if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), a12) )
          break;
        goto LABEL_143;
      }
    }
  }
  v97 = a5;
  v98 = 0;
LABEL_91:
  if ( v97 == i + 1 )
  {
    *a11 = 1;
  }
  else
  {
    v100 = *v90;
    if ( *(struct _KTHREAD **)(*v90 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v100 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v100 + 56));
    _m_prefetchw((const void *)(v100 + 48));
    v101 = *(_QWORD *)(v100 + 48);
    if ( (v101 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v15 = v101 - 16;
    if ( (v101 & 2) != 0
      || (v102 = *(_QWORD *)(v100 + 48),
          v102 != _InterlockedCompareExchange64((volatile signed __int64 *)(v100 + 48), v15, v101)) )
    {
      ExfReleasePushLock((_QWORD *)(v100 + 48));
    }
    KeAbPostRelease(v100 + 48);
    if ( (*(_DWORD *)(v100 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v100, *(_DWORD *)(v100 + 64));
    if ( (*(_DWORD *)(v100 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v100);
  }
  *a6 = i + 1;
  return v98;
}
