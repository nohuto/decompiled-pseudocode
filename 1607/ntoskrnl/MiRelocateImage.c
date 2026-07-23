/*
 * XREFs of MiRelocateImage @ 0x140507390
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140021128 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14002119C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiGetControlAreaPartition @ 0x1400268DC (MiGetControlAreaPartition.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiGetImageBitMapInfo @ 0x14007CAFC (MiGetImageBitMapInfo.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1400A8BEC (MiZeroCfgSystemWideBitmap.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PsSetSystemPagePriorityThread @ 0x1400FAE60 (PsSetSystemPagePriorityThread.c)
 *     MiLegacyImageArchitecture @ 0x1400FBB14 (MiLegacyImageArchitecture.c)
 *     PsRevertToUserPagePriorityThread @ 0x1400FBC40 (PsRevertToUserPagePriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiSetDeleteOnClose @ 0x1401DF1A8 (MiSetDeleteOnClose.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1401F4728 (MiDeleteDirectMapFixupPfn.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14046D398 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 *     MiScanRelocationPage @ 0x140507FA0 (MiScanRelocationPage.c)
 *     MiCompressRelocations @ 0x1405082F0 (MiCompressRelocations.c)
 *     MiLogRelocationFaults @ 0x1405086C0 (MiLogRelocationFaults.c)
 *     MiParseImageCfgBits @ 0x140508740 (MiParseImageCfgBits.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     MiFreeRelocations @ 0x14052D194 (MiFreeRelocations.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     SeSetImageBaseAddress @ 0x14068CA84 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r13
  int v15; // r8d
  unsigned __int64 v16; // r12
  __int16 v17; // ax
  unsigned int v18; // eax
  unsigned int v19; // r11d
  SIZE_T v20; // rbx
  unsigned int v21; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v23; // r14
  _QWORD *v25; // rcx
  int v26; // ebx
  int updated; // esi
  PVOID v28; // rbx
  int *v29; // r8
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rsi
  unsigned int v33; // r15d
  size_t v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // r12
  unsigned int v38; // ebx
  unsigned int v39; // r15d
  unsigned int v40; // ecx
  __int64 v41; // rsi
  unsigned __int64 v42; // rbx
  unsigned int v43; // ecx
  int v44; // r9d
  int v45; // eax
  unsigned int v46; // r12d
  __int64 *v47; // r9
  unsigned int v48; // r8d
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned int v51; // ecx
  unsigned __int16 v52; // r8
  _WORD *v53; // rdx
  unsigned int v54; // ecx
  _QWORD *v55; // rcx
  _QWORD *v56; // r12
  __int64 v57; // rbx
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  _QWORD *v60; // rcx
  _QWORD *v61; // r10
  __int64 ControlAreaPartition; // rax
  unsigned int v63; // r11d
  unsigned __int64 v64; // r15
  _BYTE *v65; // rax
  _BYTE *v66; // rbx
  _QWORD *v67; // rcx
  unsigned __int64 v68; // rsi
  __int64 v69; // r12
  unsigned int SessionId; // esi
  __int64 v71; // rdx
  unsigned int v72; // ecx
  int v73; // r8d
  int v74; // r10d
  char v75; // al
  bool v76; // cl
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rbx
  __int64 PteAddress; // rax
  struct _KTHREAD *v80; // r12
  _BYTE *v81; // rax
  _BYTE *v82; // r15
  void *v83; // rcx
  _QWORD *v84; // rcx
  _QWORD *v85; // rbx
  _QWORD *v86; // rbx
  __int64 v87; // rcx
  int v88; // [rsp+30h] [rbp-148h]
  unsigned int v89; // [rsp+34h] [rbp-144h]
  unsigned int Size; // [rsp+3Ch] [rbp-13Ch]
  int Size_4; // [rsp+40h] [rbp-138h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-130h]
  unsigned int v94; // [rsp+50h] [rbp-128h]
  unsigned int v95; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v96; // [rsp+5Ch] [rbp-11Ch]
  _QWORD *v97; // [rsp+60h] [rbp-118h]
  unsigned int v98; // [rsp+68h] [rbp-110h]
  PVOID P; // [rsp+70h] [rbp-108h]
  __int64 v100; // [rsp+78h] [rbp-100h]
  unsigned __int64 v101; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+88h] [rbp-F0h]
  _QWORD *v103; // [rsp+90h] [rbp-E8h]
  _QWORD *v104; // [rsp+98h] [rbp-E0h]
  __int64 v105; // [rsp+A0h] [rbp-D8h]
  __int64 v106; // [rsp+A8h] [rbp-D0h] BYREF
  PRTL_BITMAP v107; // [rsp+B0h] [rbp-C8h] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v109[2]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-A8h] BYREF
  int v111; // [rsp+D8h] [rbp-A0h]
  ULONG StartingIndex; // [rsp+120h] [rbp-58h] BYREF
  ULONG NumberToClear; // [rsp+124h] [rbp-54h]
  int v114; // [rsp+128h] [rbp-50h]
  char v115; // [rsp+12Ch] [rbp-4Ch]
  bool v116; // [rsp+12Dh] [rbp-4Bh]

  v97 = (_QWORD *)a1;
  v9 = 2;
  v102 = *(_QWORD *)(a1 + 56);
  if ( !MiLegacyImageArchitecture(*(_WORD *)(v102 + 48)) )
    goto LABEL_4;
  v9 = 34;
  if ( (*(_BYTE *)(v10 + 44) & 1) != 0 )
    return 0LL;
  v11 = 0;
  v88 = 0;
  if ( (*(_WORD *)(v10 + 46) & 0x1000) != 0 )
  {
LABEL_4:
    v11 = -1073741701;
    v88 = -1073741701;
  }
  v12 = *(unsigned int *)(a2 + 88);
  v95 = v12;
  v13 = *(unsigned int *)(a2 + 92);
  Size = *(_DWORD *)(a2 + 92);
  v96 = Size;
  if ( (_DWORD)v12 )
  {
    if ( !(_DWORD)v13 )
      return v11;
  }
  else
  {
    if ( (_DWORD)v13 )
      return v11;
    v9 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v14 = *(_QWORD *)a1;
  v105 = v14;
  v103 = *(_QWORD **)(v14 + 96);
  v15 = 8;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    v15 = 4;
  if ( (a3 & 0xFFF) > 4096 - v15 || ((v15 - 1) & a3) != 0 )
    return v11;
  if ( v15 == 4 )
    a3 |= 1u;
  v16 = *(_QWORD *)(a1 + 32);
  if ( (v9 & 0x20) != 0 && !a4 )
  {
    v17 = *(_WORD *)(v102 + 46);
    if ( (v17 & 0x40) == 0 && MmRegistryState != -1 && (v17 & 0x1000) == 0 )
      return 0LL;
  }
  v18 = *(_DWORD *)(a1 + 8);
  v19 = v18;
  v89 = v18;
  if ( ((v9 >> 1) & 1) == 0 )
  {
    v19 = (a3 >> 12) + 1;
    v89 = v19;
  }
  v98 = v18 << 12;
  if ( (int)v13 + (int)v12 > v18 << 12
    || ((v9 >> 1) & 1) != 0 && ((int)v13 + (int)v12 <= (unsigned int)v12 || v16 + v12 <= v16 || v12 + v16 + v13 <= v16) )
  {
    return v11;
  }
  v20 = v13 + 88 + 8LL * v19;
  v101 = 0LL;
  v21 = v9 & 0xFFFFFFF6;
  v100 = 0LL;
  P = 0LL;
  v111 = 0;
  Size_4 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x65526D4Du);
  v23 = PoolWithTag;
  v104 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v25 = PoolWithTag;
  do
    v25 += 512;
  while ( v25 < (_QWORD *)((char *)PoolWithTag + v20) );
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 68) = 0;
  PoolWithTag[1] = 0LL;
  PoolWithTag[7] = v89;
  PoolWithTag[9] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[10] = 0LL;
  PoolWithTag[3] = 0LL;
  if ( (v21 & 2) != 0 )
  {
    if ( (int)MiMapImageInSystemSpace(v14, 3LL, &v110) < 0 )
    {
      ExFreePoolWithTag(v23, 0);
      MiSetDeleteOnClose(v14, 0);
      return 0LL;
    }
    v26 = v110;
    v100 = v110;
    Size_4 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
    v21 |= 1u;
    updated = MiParseImageCfgBits(v14, v26, v111 << 12, a2);
    if ( updated < 0 )
    {
LABEL_160:
      ExFreePoolWithTag(v23, 0);
      goto LABEL_161;
    }
    v28 = P;
    v23[9] = P;
  }
  else
  {
    v28 = P;
  }
  updated = MiSelectImageBase((__int64)v23, (__int64)v97, a4, a6, &v101);
  if ( updated < 0 )
  {
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    ExFreePoolWithTag(v23, 0);
    if ( !a4 )
      updated = v88;
    goto LABEL_161;
  }
  v29 = (int *)v28;
  v30 = v101;
  updated = MiUpdateCfgSystemWideBitmap((__int64 *)v14, v101, v29);
  if ( updated >= 0 )
  {
    *((_DWORD *)v23 + 16) = a3;
    v31 = v30 - v16;
    v23[5] = v30 - v16;
    if ( a5 != -1 )
      v31 = v30 - a5;
    v23[6] = v31;
    if ( v30 == v16 && !a6 )
      goto LABEL_131;
    v32 = v23 + 11;
    *v23 = v23 + 11;
    v33 = v89;
    v34 = v89;
    memset(v23 + 11, 0, v34 * 8);
    v37 = (unsigned __int64)&v23[v34 + 11];
    v23[4] = v37;
    v21 |= 4u;
    if ( (v21 & 2) != 0 )
    {
      memmove(&v32[v34], (const void *)(v100 + v95), Size);
      v38 = 0;
      v94 = 0;
      v39 = v96;
      v21 &= ~0x10u;
      v40 = 0;
      if ( v96 )
      {
        while ( v39 >= 0xA )
        {
          v41 = *(unsigned int *)(v37 + 4);
          if ( (unsigned int)v41 > v39 || (v41 & 1) != 0 || (unsigned int)v41 < 8 )
            goto LABEL_80;
          v42 = *(unsigned int *)v37;
          if ( (v42 & 0xFFF) != 0 )
            v21 &= ~4u;
          if ( (int)v42 + 4096 < (unsigned int)v42 || (int)v42 + 4096 > v98 || (unsigned int)v42 < v40 )
            goto LABEL_80;
          if ( (_DWORD)v41 == 8 )
          {
            v39 -= 8;
            v37 += 8LL;
            v21 &= ~4u;
          }
          else
          {
            if ( (MiFlags & 0x10000) != 0
              && (*(_DWORD *)(v14 + 92) & 0xC000000) != 0
              && (*(_BYTE *)(MiOffsetToProtos((_DWORD *)v14, *(unsigned int *)v37, v109) + 32) & 4) != 0 )
            {
              updated = -1073741701;
              goto LABEL_131;
            }
            v43 = v94;
            if ( (unsigned int)v42 >> 12 > v94 )
              v43 = (unsigned int)v42 >> 12;
            v94 = v43;
            v23[(v42 >> 12) + 11] |= v37;
            v44 = v37 + 8;
            v37 += v41;
            v39 -= v41;
            v45 = MiScanRelocationPage(v100, v42, (unsigned int)(v41 - 8) >> 1, v44, v14, (__int64)v23);
            updated = v45;
            if ( v45 < 0 )
            {
              v46 = 1;
              if ( v45 == -1073741207 )
              {
                updated = 0;
              }
              else if ( v45 == -1073741701 )
              {
                updated = v88;
              }
              goto LABEL_132;
            }
            v21 |= 0x10u;
            v40 = (v42 & 0xFFFFF000) + 4096;
          }
          if ( !v39 )
          {
            v38 = v94;
            v32 = v23 + 11;
            goto LABEL_83;
          }
        }
        if ( v39 != 8 )
          goto LABEL_80;
        v38 = v94;
        v32 = v23 + 11;
      }
LABEL_83:
      MiUnmapImageInSystemSpace(&v110);
      PsRevertToUserPagePriorityThread((__int64)CurrentThread, Size_4);
      LOBYTE(v21) = v21 & 0xFE;
      v47 = (__int64 *)v23[2];
      if ( v47 )
      {
        while ( 1 )
        {
          v48 = *((_DWORD *)v47 + 3);
          v49 = v32[(unsigned __int64)v48 >> 12];
          if ( v48 >> 12 > v38 )
            v38 = *((_DWORD *)v47 + 3) >> 12;
          if ( v49 > 1 )
          {
            v50 = v49 & 0xFFFFFFFFFFFFFFFEuLL;
            v51 = *(_DWORD *)(v50 + 4) - 8;
            v52 = v48 & 0xFFF;
            v53 = (_WORD *)(v50 + 8);
            v54 = v51 >> 1;
            if ( v54 )
              break;
          }
LABEL_91:
          v47 = (__int64 *)*v47;
          if ( !v47 )
            goto LABEL_92;
        }
        while ( (*v53 & 0xF000) == 0 || (unsigned __int16)(*v53 & 0xFFF) >= v52 )
        {
          ++v53;
          if ( !--v54 )
            goto LABEL_91;
        }
LABEL_80:
        updated = v88;
        goto LABEL_131;
      }
LABEL_92:
      MiLogRelocationFaults(v14, &v95, v23);
      v23[7] = v38 + 1;
      if ( (v21 & 0x14) == 0x14 )
      {
        v23 = (_QWORD *)MiCompressRelocations(v23);
        v32 = v23 + 11;
      }
      v33 = v89;
    }
    v55 = &v32[(unsigned __int64)*((unsigned int *)v23 + 16) >> 12];
    *v55 |= 1uLL;
    v56 = v97;
    if ( (*(_DWORD *)(v14 + 56) & 0x40000000) != 0 )
    {
      v57 = v97[8];
      if ( v33 > *((_DWORD *)v23 + 14) )
        v33 = *((_DWORD *)v23 + 14);
      v58 = 0LL;
      if ( v33 )
      {
        do
        {
          if ( *v32 )
          {
            v59 = MI_READ_PTE_LOCK_FREE(v57 + 8 * v58);
            v109[1] = v59;
            if ( (v59 & 0x800) != 0 )
            {
              v60 = (_QWORD *)(48 * ((MiReverseSwizzleInvalidPte(v59) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
              *v60 = 0LL;
              if ( v23[10] )
                *v61 = v60;
              else
                v23[10] = v60;
            }
          }
          v58 = (unsigned int)(v58 + 1);
          ++v32;
        }
        while ( (unsigned int)v58 < v33 );
        v14 = v105;
        v56 = v97;
      }
      ControlAreaPartition = MiGetControlAreaPartition(v14, v35, v36, v58);
      v64 = v63;
      if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v63, 0) )
      {
        v23[10] = 0LL;
        updated = -1073741670;
        goto LABEL_131;
      }
      _InterlockedExchangeAdd64(&qword_140327958, v64);
      --CurrentThread->SpecialApcDisable;
      v65 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v56 + 5), 0LL, 0);
      v66 = v65;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v56 + 10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v56 + 5, v65, (ULONG_PTR)(v56 + 5));
      if ( v66 )
        v66[26] |= 1u;
      v56[2] += v64;
      if ( (_InterlockedExchangeAdd64(v56 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v56 + 5);
      KeAbPostRelease((ULONG_PTR)(v56 + 5));
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    LOBYTE(v21) = v21 | 8;
    MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v23);
    v67 = v103;
    *v103 = v23;
    v68 = v101;
    v56[4] = v101;
    v69 = v102;
    *(_QWORD *)v102 += v23[5];
    *(_DWORD *)(v14 + 92) |= 0x80000000;
    if ( (*(_DWORD *)(v14 + 56) & 0x800) != 0 )
    {
      MiSetDeleteOnClose(v14, 0);
      v67 = v103;
    }
    if ( (MiFlags & 0x80000) == 0
      || (*(_DWORD *)(v14 + 92) & 0xC000000) == 0
      || (updated = SeSetImageBaseAddress(v67[1] & 0xFFFFFFFFFFFFFFF8uLL, v68), updated >= 0) )
    {
      if ( a4 )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      if ( a6 == 1 )
      {
        updated = 0;
      }
      else
      {
        if ( (*(_DWORD *)(v14 + 56) & 0x40000000) != 0 )
          MiWalkEntireImage((__int64 *)v14, 0LL, 8, SessionId);
        updated = MiWalkEntireImage((__int64 *)v14, 0LL, 2, SessionId);
      }
    }
    MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, (__int64)v23);
    if ( updated >= 0 && !a6 )
      *(_BYTE *)(v69 + 51) |= 4u;
LABEL_131:
    v46 = 1;
LABEL_132:
    if ( (v21 & 8) != 0 )
      goto LABEL_161;
    v71 = *(unsigned int *)(v14 + 88);
    StartingIndex = *(_DWORD *)(v14 + 88);
    v72 = *(_DWORD *)(v14 + 92);
    v73 = (unsigned __int16)v72;
    NumberToClear = (unsigned __int16)v72;
    v74 = (v72 >> 29) & 3;
    v114 = v74;
    if ( (*(_DWORD *)(v14 + 56) & 0x10000000) != 0 )
    {
      v75 = 1;
      v76 = (v72 & 0x2000000) != 0;
      v116 = v76;
    }
    else
    {
      v75 = 0;
      v76 = v116;
    }
    v115 = v75;
    if ( v23[5] )
    {
      if ( (_DWORD)v71 != -1 )
      {
        if ( v75 == 1 )
        {
          v77 = (v71 - 0x80000000LL) << 16;
          if ( v76 )
          {
            v78 = (unsigned int)(v73 << 16);
            if ( v77 < qword_140326950 || v77 >= qword_140326950 + 0x8000000000LL )
              v46 = 0;
            PteAddress = MiGetPteAddress(v77);
            MiReleaseDriverPtes(v46, PteAddress, (unsigned int)(v78 >> 12));
          }
        }
        else
        {
          MiGetImageBitMapInfo(v74, &v107, &v106, 0LL);
          MiZeroCfgSystemWideBitmap(
            (__int64)&StartingIndex,
            v106 - ((StartingIndex + (unsigned __int64)NumberToClear) << 16));
          v80 = KeGetCurrentThread();
          --v80->SpecialApcDisable;
          v81 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326750, 0LL, 0);
          v82 = v81;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140326750, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_140326750, v81, (ULONG_PTR)&qword_140326750);
          if ( v82 )
            v82[26] |= 1u;
          if ( BitMapHeader )
            RtlClearBits(BitMapHeader, StartingIndex, NumberToClear);
          RtlClearBits(v107, StartingIndex, NumberToClear);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326750, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326750);
          KeAbPostRelease((ULONG_PTR)&qword_140326750);
          KiLeaveGuardedRegionUnsafe((__int64)v80);
        }
      }
      *(_DWORD *)(v14 + 88) = -1;
    }
    v83 = (void *)v23[9];
    if ( v83 )
      ExFreePoolWithTag(v83, 0);
    v84 = (_QWORD *)v23[2];
    if ( v84 )
    {
      do
      {
        v85 = (_QWORD *)*v84;
        ExFreePoolWithTag(v84, 0);
        v84 = v85;
      }
      while ( v85 );
    }
    v86 = (_QWORD *)v23[10];
    while ( v86 )
    {
      v87 = (__int64)v86;
      v86 = (_QWORD *)*v86;
      MiDeleteDirectMapFixupPfn(v87);
    }
    goto LABEL_160;
  }
  MiFreeRelocations(v14, v23);
LABEL_161:
  if ( (v21 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(&v110);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, Size_4);
  }
  return (unsigned int)updated;
}
