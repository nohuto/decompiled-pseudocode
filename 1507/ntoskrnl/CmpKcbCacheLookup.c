/*
 * XREFs of CmpKcbCacheLookup @ 0x1404993B0
 * Callers:
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpGetConvKeyAtIndex @ 0x140050170 (CmpGetConvKeyAtIndex.c)
 *     CmpFindKeyNameAtIndex @ 0x140050190 (CmpFindKeyNameAtIndex.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401E006C (CmpLockTableRemove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmpLockTwoKcbsExclusive @ 0x140447040 (CmpLockTwoKcbsExclusive.c)
 *     SeAssignSecurity @ 0x140449E58 (SeAssignSecurity.c)
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockTwoKcbs @ 0x1404C6A80 (CmpUnlockTwoKcbs.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404C8A40 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryExclusive @ 0x1404CCB90 (CmpLockHashEntryExclusive.c)
 *     CmpRemoveFromDelayedClose @ 0x1404EDEA4 (CmpRemoveFromDelayedClose.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpCompareUnicodeString @ 0x140547818 (CmpCompareUnicodeString.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 */

__int64 __fastcall CmpKcbCacheLookup(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        __int64 *a7,
        __int64 a8,
        _QWORD *a9,
        _DWORD *a10,
        _BYTE *a11,
        __int64 a12,
        char a13,
        _BYTE *a14,
        __int64 a15,
        struct _SECURITY_SUBJECT_CONTEXT *a16)
{
  signed __int64 v16; // rbx
  __int64 v17; // rdi
  char v18; // cl
  __int64 v19; // rbp
  __int64 v20; // rsi
  signed int v21; // r14d
  __int64 v22; // r15
  ULONG_PTR v23; // r13
  signed __int32 v24; // eax
  signed __int32 v25; // edx
  signed __int32 v26; // ett
  int v28; // r8d
  signed int v29; // edx
  signed int i; // r12d
  int v31; // esi
  int v32; // esi
  unsigned int ConvKeyAtIndex; // eax
  unsigned int v34; // eax
  ULONG_PTR v35; // rbp
  unsigned __int64 *v36; // rsi
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 KeyNameAtIndex; // rax
  __int64 v46; // r9
  unsigned __int16 v47; // si
  unsigned __int8 *v48; // r15
  unsigned __int16 v49; // bp
  WCHAR *v50; // r14
  WCHAR v51; // ax
  int v52; // edi
  int v53; // edx
  __int64 v54; // rax
  char v55; // r12
  _DWORD *v56; // r14
  __int64 v57; // rdx
  _WORD *v58; // r9
  __int64 v59; // rdi
  int v60; // ecx
  unsigned int v61; // eax
  unsigned __int64 v62; // rdx
  __int64 *v63; // rdi
  signed __int64 v64; // rax
  signed __int64 v65; // rcx
  __int64 v66; // rtt
  unsigned int v67; // eax
  _WORD *v68; // rax
  bool v69; // zf
  signed int v70; // edi
  _WORD *v71; // rax
  __int64 v72; // r11
  __int64 v73; // r9
  __int16 v74; // r10
  __int16 v75; // r10
  signed __int32 v76; // eax
  signed __int32 v77; // ecx
  signed __int32 v78; // ett
  char v79; // si
  __int64 v80; // rax
  __int64 v81; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  unsigned __int8 v86; // di
  signed __int32 v87; // eax
  int v88; // ecx
  unsigned int v89; // edi
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdi
  unsigned __int8 v93; // si
  int v94; // eax
  _DWORD *v95; // rcx
  _BYTE *v96; // rdx
  _QWORD *v97; // rax
  unsigned __int8 v98; // di
  signed __int32 v99; // eax
  signed __int64 v100; // rax
  signed __int64 v101; // rcx
  __int64 v102; // rtt
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 *v105; // rdi
  signed __int64 v106; // rax
  signed __int64 v107; // rcx
  __int64 v108; // rtt
  __int64 v109; // rcx
  __int64 v110; // rdi
  int v111; // eax
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // r10
  __int64 NextElement; // rax
  __int64 v119; // r10
  int v120; // ecx
  int v121; // r15d
  int v122; // r13d
  int v123; // ebp
  __int64 v124; // rdi
  __int64 KCBCacheSecurity; // rsi
  bool IsSystemEntity; // al
  PACCESS_TOKEN ClientToken; // rdx
  NTSTATUS v128; // eax
  ULONG_PTR v129; // rcx
  PSECURITY_DESCRIPTOR v130; // rsi
  void *v131; // rcx
  signed __int64 v132; // rax
  __int64 v133; // rtt
  signed __int32 v134[8]; // [rsp+0h] [rbp-D8h] BYREF
  char v135; // [rsp+40h] [rbp-98h]
  signed int v136; // [rsp+44h] [rbp-94h]
  signed int v137; // [rsp+48h] [rbp-90h]
  int v138; // [rsp+4Ch] [rbp-8Ch]
  __int64 v139; // [rsp+58h] [rbp-80h]
  ULONG_PTR v140; // [rsp+60h] [rbp-78h]
  signed int v141; // [rsp+68h] [rbp-70h]
  __int64 v142; // [rsp+70h] [rbp-68h]
  __int64 v143; // [rsp+78h] [rbp-60h] BYREF
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+80h] [rbp-58h] BYREF
  _WORD v145[4]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v146; // [rsp+90h] [rbp-48h]

  v16 = 0LL;
  NewDescriptor = 0LL;
  v17 = a1;
  v18 = 0;
  v19 = a2;
  v137 = a4;
  v20 = *a7;
  v21 = a4;
  v22 = a3;
  v135 = 0;
  *a11 = 0;
  v23 = *(_QWORD *)(v20 + 32);
  v142 = v20;
  v140 = v23;
  *a14 = 0;
  v24 = *(_DWORD *)v20;
  v25 = *(_DWORD *)v20 + 1;
  if ( *(_DWORD *)v20 == -1 )
    return 3221225626LL;
  while ( 1 )
  {
    if ( v25 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v26 = v24;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)v20, v25, v24);
    if ( v26 == v24 )
      break;
    v25 = v24 + 1;
    if ( v24 == -1 )
      return 3221225626LL;
  }
  v28 = a5;
  v29 = a5 - 1;
  v141 = a5 - 1;
  while ( 2 )
  {
    i = v29;
    v31 = ((*(_DWORD *)(v20 + 4) >> 21) & 0x3FF) - v21 + v28 + 1;
    while ( 1 )
    {
      v136 = i;
      if ( i < v21 )
        goto LABEL_132;
      v32 = v31 - 1;
      v138 = v32;
      if ( v18 )
      {
        ConvKeyAtIndex = CmpGetConvKeyAtIndex(v17, v22, i);
        CmpLockHashEntryExclusive(v23, ConvKeyAtIndex);
      }
      else
      {
        v34 = CmpGetConvKeyAtIndex(v17, v22, i);
        v35 = v34;
        v36 = (unsigned __int64 *)(*(_QWORD *)(v23 + 2800)
                                 + 24LL
                                 * (((101027 * (v34 ^ (v34 >> 9))) ^ ((101027 * (v34 ^ (v34 >> 9))) >> 9)) & (*(_DWORD *)(v23 + 2808) - 1)));
        v38 = KeAbPreAcquire((ULONG_PTR)v36, 0LL, 0LL, v37);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v36, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v36, v38, (ULONG_PTR)v36, v39);
        if ( v38 )
          *(_BYTE *)(v38 + 26) |= 1u;
        if ( !CmpReferenceHive(v23) )
          KeBugCheckEx(0x51u, 0x17uLL, v23, 9uLL, v35);
        v19 = a2;
        v17 = a1;
        v32 = v138;
      }
      v40 = CmpGetConvKeyAtIndex(v17, v22, i);
      v41 = *(_QWORD *)(*(_QWORD *)(v23 + 2800)
                      + 24LL
                      * (((101027 * (v40 ^ (v40 >> 9))) ^ ((101027 * (v40 ^ (v40 >> 9))) >> 9)) & (*(_DWORD *)(v23 + 2808)
                                                                                                 - 1))
                      + 16);
      v139 = v41;
      if ( v41 )
        break;
LABEL_57:
      v61 = CmpGetConvKeyAtIndex(a1, v22, i);
      v62 = (unsigned int)(*(_DWORD *)(v23 + 2808) - 1) & ((101027 * (v61 ^ (v61 >> 9))) ^ ((unsigned __int64)(101027 * (v61 ^ (v61 >> 9))) >> 9));
      v63 = (__int64 *)(*(_QWORD *)(v23 + 2800) + 24 * v62);
      v63[1] = 0LL;
      _m_prefetchw(v63);
      v64 = *v63;
      v65 = *v63 - 16;
      if ( (*v63 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v65 = 0LL;
      if ( (v64 & 2) != 0 || (v66 = *v63, v66 != _InterlockedCompareExchange64(v63, v65, v64)) )
        ExfReleasePushLock(v63, v62);
      KeAbPostRelease((ULONG_PTR)v63);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v23);
      v21 = v137;
      --i;
      v17 = a1;
      v31 = v138;
      v18 = v135;
    }
    while ( 1 )
    {
      v42 = v41 - 16;
      if ( ((*(_DWORD *)(v41 - 12) >> 21) & 0x3FF) == v32 )
        break;
LABEL_37:
      v41 = *(_QWORD *)(v139 + 8);
      v139 = v41;
      if ( !v41 )
        goto LABEL_56;
    }
    do
    {
      if ( (unsigned int)CmpGetConvKeyAtIndex(v17, v22, i) != *(_DWORD *)(v42 + 16) )
        goto LABEL_36;
      v44 = *(_QWORD *)(v42 + 80);
      if ( (*(_DWORD *)v44 & 1) != 0 )
      {
        KeyNameAtIndex = CmpFindKeyNameAtIndex(v19, v43, i);
        v47 = *(_WORD *)(v46 + 24);
        v48 = (unsigned __int8 *)(v46 + 26);
        v49 = *(_WORD *)KeyNameAtIndex >> 1;
        v50 = *(WCHAR **)(KeyNameAtIndex + 8);
        if ( v49 )
        {
          while ( v47 )
          {
            v51 = *v50++;
            v52 = *v48++;
            if ( v51 != (_WORD)v52 )
            {
              if ( v51 >= 0x61u )
              {
                if ( v51 <= 0x7Au )
                  v51 -= 32;
                else
                  v51 = RtlUpcaseUnicodeChar(v51);
              }
              v53 = v51 - v52;
              if ( v51 != v52 )
                goto LABEL_31;
            }
            --v47;
            if ( !--v49 )
              break;
          }
        }
        v53 = v49 - v47;
LABEL_31:
        v22 = a3;
        v19 = a2;
        v21 = v137;
      }
      else
      {
        v146 = v44 + 26;
        v145[0] = *(_WORD *)(v44 + 24);
        v145[1] = v145[0];
        v54 = CmpFindKeyNameAtIndex(v19, v43, i);
        v53 = CmpCompareUnicodeString(v54, v145, 2LL);
      }
      v17 = a1;
      if ( v53 )
        goto LABEL_36;
      v42 = *(_QWORD *)(v42 + 72);
      --i;
    }
    while ( i >= v21 );
    v20 = v142;
    if ( v142 != v42 )
    {
LABEL_36:
      i = v136;
      v32 = v138;
      goto LABEL_37;
    }
    v55 = v135;
    v56 = (_DWORD *)(v139 - 16);
    if ( v135 )
    {
      CmpLockKcbExclusive(v139 - 16);
    }
    else
    {
      if ( (v56[1] & 0x100000) != 0 )
        v56[16] = CmpLockTableAdd(v139 - 16, 0);
      v59 = KeAbPreAcquire((ULONG_PTR)(v56 + 12), 0LL, 0LL, v46);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v56 + 6, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v56 + 6, v59, (ULONG_PTR)(v56 + 12), (__int64)v58);
      if ( v59 )
        *(_BYTE *)(v59 + 26) |= 1u;
      _InterlockedIncrement(v56 + 14);
    }
    v60 = (*(_DWORD *)(*((_QWORD *)v56 + 9) + 4LL) >> 17) & 1;
    if ( v60 || (v56[1] & 0x20000) != 0 )
    {
      if ( !v55 )
      {
        CmpUnlockKcb(v56);
        v17 = a1;
        v67 = CmpGetConvKeyAtIndex(a1, v22, v136);
        v23 = v140;
        CmpUnlockHashEntry(v140, v67);
        v21 = v137;
        v18 = 1;
        v29 = v141;
        v28 = a5;
        v135 = 1;
        continue;
      }
      if ( v60 )
      {
        if ( *v56 )
        {
          v56[1] |= 0x20000u;
          CmpRemoveKeyHash(*((_QWORD *)v56 + 4), v56 + 4);
          *((_QWORD *)v56 + 3) = -1LL;
        }
        else
        {
          CmpRemoveFromDelayedClose(v56);
          CmpCleanUpKcbCacheWithLock((ULONG_PTR)v56);
        }
        CmpUnlockKcb(v56);
        i = v136;
LABEL_56:
        v23 = v140;
        goto LABEL_57;
      }
      if ( (v56[1] & 0x20000) != 0 )
      {
        CmpRemoveKeyHash(*((_QWORD *)v56 + 4), v56 + 4);
        CmpUnlockKcb(v56);
        v112 = CmpGetConvKeyAtIndex(a1, v22, v136);
        CmpUnlockHashEntry(v140, v112);
        v113 = v20;
LABEL_183:
        CmpDereferenceKeyControlBlock(v113);
        return 3221225524LL;
      }
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
      v69 = *(_WORD *)a8 == 2;
      *(_WORD *)a8 -= 2;
      *(_QWORD *)(a8 + 8) = v68 + 1;
    }
    while ( !v69 );
  }
  v70 = v137;
  for ( i = v136; v70 <= i; ++v70 )
  {
    v71 = (_WORD *)CmpFindKeyNameAtIndex(v19, v22, v70);
    v58 = (_WORD *)(v73 + 2 * ((unsigned __int64)(unsigned __int16)*v71 >> 1));
    *(_QWORD *)(v72 + 8) = v58;
    v75 = v74 - *v71;
    *(_WORD *)v72 = v75;
    if ( v75 )
    {
      do
      {
        if ( *v58 != 92 )
          break;
        ++v58;
        v69 = v75 == 2;
        v75 -= 2;
        *(_QWORD *)(v72 + 8) = v58;
        *(_WORD *)v72 = v75;
      }
      while ( !v69 );
    }
  }
  v76 = *v56;
  v77 = *v56 + 1;
  if ( *v56 != -1 )
  {
    while ( 1 )
    {
      v78 = v76;
      v76 = _InterlockedCompareExchange(v56, v77, v76);
      if ( v78 == v76 )
        break;
      v77 = v76 + 1;
      if ( v76 == -1 )
        goto LABEL_111;
    }
    if ( (v56[2] & 1) == 0 )
      goto LABEL_96;
    v79 = 0;
    v80 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, (__int64)v58);
    v81 = v80;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v80);
    if ( v81 )
      *(_BYTE *)(v81 + 26) |= 1u;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
    if ( (v56[2] & 1) != 0 )
    {
      v83 = v56 + 54;
      v84 = *((_QWORD *)v56 + 27);
      v85 = (_QWORD *)*((_QWORD *)v56 + 28);
      if ( *(_DWORD **)(v84 + 8) != v56 + 54 || (_QWORD *)*v85 != v83 )
        __fastfail(3u);
      *v85 = v84;
      *(_QWORD *)(v84 + 8) = v85;
      *((_QWORD *)v56 + 28) = v56 + 54;
      *v83 = v83;
      _InterlockedOr(v134, 0);
      v56[2] &= ~1u;
      v79 = 1;
    }
    v86 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v87 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v87 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v87);
    __writecr8(v86);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    if ( v79 )
    {
      LODWORD(v57) = *v56;
      if ( *v56 <= 1u )
      {
LABEL_94:
        v89 = v56[4];
        v90 = *((_QWORD *)v56 + 4);
        CmpLockHashEntryExclusiveByKcb((ULONG_PTR)v56);
        CmpLockKcbExclusive(v56);
        CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v56);
        CmpUnlockKcb(v56);
        CmpUnlockHashEntry(v90, v89);
      }
      else
      {
        while ( 1 )
        {
          v88 = v57 - 1;
          v57 = (unsigned int)_InterlockedCompareExchange(v56, v57 - 1, v57);
          if ( (_DWORD)v57 == v88 + 1 )
            break;
          if ( (unsigned int)v57 <= 1 )
            goto LABEL_94;
        }
      }
    }
    else
    {
LABEL_96:
      if ( (v56[2] & 2) != 0 )
      {
        v91 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0LL, (__int64)v58);
        v92 = v91;
        v93 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v91);
        if ( v92 )
          *(_BYTE *)(v92 + 26) |= 1u;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = v93;
        v94 = v56[2];
        if ( (v94 & 2) != 0 )
        {
          v95 = v56 + 54;
          if ( (v94 & 4) != 0 )
          {
            **(_BYTE **)v95 = 1;
            v56[2] &= ~4u;
          }
          else
          {
            v96 = *(_BYTE **)v95;
            v97 = (_QWORD *)*((_QWORD *)v56 + 28);
            if ( *(_DWORD **)(*(_QWORD *)v95 + 8LL) != v95 || (_DWORD *)*v97 != v95 )
              __fastfail(3u);
            --CmpDelayedCloseElements;
            *v97 = v96;
            *((_QWORD *)v96 + 1) = v97;
            --qword_14077F048;
          }
          *((_QWORD *)v56 + 28) = v56 + 54;
          *(_QWORD *)v95 = v95;
          _InterlockedOr(v134, 0);
          v56[2] &= ~2u;
        }
        v98 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
        *(&CmpDelayedCloseTableLock + 1) = 0LL;
        v99 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
        if ( v99 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v99);
        __writecr8(v98);
        KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
      }
    }
  }
LABEL_111:
  if ( *((struct _KTHREAD **)v56 + 7) == KeGetCurrentThread() )
    *((_QWORD *)v56 + 7) = 0LL;
  else
    _InterlockedDecrement(v56 + 14);
  _m_prefetchw(v56 + 12);
  v100 = *((_QWORD *)v56 + 6);
  v101 = v100 - 16;
  if ( (v100 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v101 = 0LL;
  if ( (v100 & 2) != 0
    || (v102 = *((_QWORD *)v56 + 6),
        v102 != _InterlockedCompareExchange64((volatile signed __int64 *)v56 + 6, v101, v100)) )
  {
    ExfReleasePushLock((_QWORD *)v56 + 6, v57);
  }
  KeAbPostRelease((ULONG_PTR)(v56 + 12));
  if ( (v56[1] & 0x100000) != 0 )
    CmpLockTableRemove((__int64)v56, v56[16]);
  if ( (v56[1] & 0x80000) != 0 )
    CmpFreeKeyControlBlock(v56);
  v103 = *((_QWORD *)v56 + 4);
  *(_QWORD *)(*(_QWORD *)(v103 + 2800)
            + 24LL
            * (((101027 * (v56[4] ^ (v56[4] >> 9))) ^ ((unsigned int)(101027 * (v56[4] ^ (v56[4] >> 9))) >> 9)) & (*(_DWORD *)(v103 + 2808) - 1))
            + 8) = 0LL;
  v104 = (unsigned int)(101027 * (v56[4] ^ (v56[4] >> 9)));
  v105 = (__int64 *)(*(_QWORD *)(*((_QWORD *)v56 + 4) + 2800LL)
                   + 24LL
                   * (((unsigned int)v104 ^ ((unsigned int)(101027 * (v56[4] ^ (v56[4] >> 9))) >> 9)) & (*(_DWORD *)(*((_QWORD *)v56 + 4) + 2808LL) - 1)));
  _m_prefetchw(v105);
  v106 = *v105;
  v107 = *v105 - 16;
  if ( (*v105 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v107 = 0LL;
  if ( (v106 & 2) != 0 || (v108 = *v105, v108 != _InterlockedCompareExchange64(v105, v107, v106)) )
    ExfReleasePushLock(v105, v104);
  KeAbPostRelease((ULONG_PTR)v105);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v103 + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v103);
  CmpDereferenceKeyControlBlock(v142);
  v109 = *((_QWORD *)v56 + 4);
  *a7 = (__int64)v56;
  *a9 = v109;
  *a10 = v56[10];
LABEL_132:
  v110 = *a7;
  v111 = *(_DWORD *)(*a7 + 4);
  if ( (v111 & 0x10) != 0 )
  {
    *a6 = i + 1;
    return 0LL;
  }
  if ( (v111 & 0x100000) != 0 )
    *(_DWORD *)(v110 + 64) = CmpLockTableAdd(*a7, 0);
  v114 = KeAbPreAcquire(v110 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v110 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v110 + 48), v114, v110 + 48, v115);
  if ( v114 )
    *(_BYTE *)(v114 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v110 + 56));
  v116 = *(_QWORD *)(*a7 + 232);
  if ( v116 && !CmEqualTrans(a12, v116) )
    goto LABEL_184;
  v117 = *a7;
  v143 = 0LL;
  if ( (*(_DWORD *)(v117 + 4) & 0x20000) != 0 )
    goto LABEL_157;
  if ( a12 )
  {
    NextElement = CmListGetNextElement(v117 + 200, &v143, 32LL);
    if ( NextElement )
    {
      while ( 1 )
      {
        v120 = *(_DWORD *)(NextElement + 68);
        if ( v120 == 2 || v120 == 11 )
          break;
        NextElement = CmListGetNextElement(v119 + 200, &v143, 32LL);
        if ( !NextElement )
          goto LABEL_149;
      }
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a12) )
      {
LABEL_157:
        if ( a12 )
        {
          if ( (*(_DWORD *)(*a7 + 4) & 0x20000) == 0 )
          {
            v121 = a5;
            if ( a5 == i + 1 )
            {
              if ( a13 )
              {
                CmpUnlockKcb((PVOID)*a7);
                CmpLockTwoKcbsExclusive(*a7, *(_QWORD *)(*a7 + 72));
                if ( (unsigned __int8)CmRmIsKCBDeleted(*(_QWORD *)(*a7 + 72), a12)
                  || (*(_DWORD *)(*a7 + 4) & 0x20000) != 0 )
                {
                  v129 = *a7;
                }
                else
                {
                  KCBCacheSecurity = CmGetKCBCacheSecurity(*(_QWORD *)(*a7 + 72), a12);
                  if ( (*(_WORD *)(*a7 + 186) & 0x200) == 0
                    || (IsSystemEntity = CmpIsSystemEntity((int *)(a15 + 16)), ClientToken = 0LL, IsSystemEntity) )
                  {
                    ClientToken = a16[2].ClientToken;
                  }
                  v128 = SeAssignSecurity(
                           (PSECURITY_DESCRIPTOR)(KCBCacheSecurity + 32),
                           ClientToken,
                           &NewDescriptor,
                           1u,
                           a16 + 1,
                           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                           *((POOL_TYPE *)CmKeyObjectType + 25));
                  v129 = *a7;
                  if ( v128 >= 0 )
                  {
                    v130 = NewDescriptor;
                    v122 = CmpUndoDeleteKeyForTransEx(v129);
                    if ( v130 )
                      ExFreePoolWithTag(v130, 0);
                    v129 = *a7;
                    if ( v122 >= 0 )
                    {
                      v131 = *(void **)(v129 + 72);
                      *a14 = 1;
                      CmpUnlockKcb(v131);
                      goto LABEL_150;
                    }
                  }
                }
                CmpUnlockTwoKcbs(v129, *(_QWORD *)(v129 + 72));
                goto LABEL_182;
              }
            }
          }
        }
LABEL_184:
        CmpUnlockKcb((PVOID)*a7);
LABEL_182:
        v113 = *a7;
        goto LABEL_183;
      }
    }
  }
LABEL_149:
  v121 = a5;
  v122 = 0;
LABEL_150:
  v123 = i + 1;
  if ( v121 == i + 1 )
  {
    *a11 = 1;
  }
  else
  {
    v124 = *a7;
    if ( *(struct _KTHREAD **)(*a7 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v124 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v124 + 56));
    _m_prefetchw((const void *)(v124 + 48));
    v132 = *(_QWORD *)(v124 + 48);
    if ( (v132 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v16 = v132 - 16;
    if ( (v132 & 2) != 0
      || (v133 = *(_QWORD *)(v124 + 48),
          v133 != _InterlockedCompareExchange64((volatile signed __int64 *)(v124 + 48), v16, v132)) )
    {
      ExfReleasePushLock((_QWORD *)(v124 + 48), v116);
    }
    KeAbPostRelease(v124 + 48);
    if ( (*(_DWORD *)(v124 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v124, *(_DWORD *)(v124 + 64));
    if ( (*(_DWORD *)(v124 + 4) & 0x80000) != 0 )
    {
      CmpFreeKeyControlBlock((PVOID)v124);
      *a6 = v123;
      return (unsigned int)v122;
    }
  }
  *a6 = v123;
  return (unsigned int)v122;
}
