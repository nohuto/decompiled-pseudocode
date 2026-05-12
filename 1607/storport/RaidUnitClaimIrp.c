/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0004D00
 * Callers:
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0009EA8 (RaidUnitReenablePendingTimer.c)
 *     GetSrbScsiData @ 0x1C0018B7C (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0019460 (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C001A3E8 (TranslateToExtendedSrb.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0034528 (RaidGetSystemAddressForMdl.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0038F9C (StorpDataInBufferAllocateMdlAndLockPages.c)
 *     Template_qcq @ 0x1C00391D4 (Template_qcq.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 BidirectionalData; // rax
  __int64 v16; // r11
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned __int8 v19; // dl
  __int64 v20; // rcx
  char v21; // dl
  int v22; // ecx
  unsigned __int8 v23; // al
  bool v24; // zf
  int v25; // eax
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  char v29; // al
  __int64 v30; // r14
  __int64 v31; // rcx
  int v32; // eax
  char *v33; // rcx
  char v34; // r15
  __int64 v35; // rbp
  __int64 v36; // rax
  unsigned __int8 v37; // al
  unsigned int v38; // r14d
  int v39; // r12d
  __int64 v40; // r13
  char *SrbScsiData; // rax
  __int64 v42; // rdx
  int v43; // eax
  char v44; // al
  __int64 v45; // rax
  unsigned __int8 v46; // r11
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 i; // r10
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // r15
  unsigned int v56; // r12d
  __int64 v57; // r14
  char *v58; // rax
  char *v59; // rax
  __int64 v60; // rcx
  int SystemAddressForMdl; // r14d
  __int64 v62; // rax
  struct _MDL *v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // r13
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  unsigned int v69; // edi
  __int64 v70; // rax
  ULONGLONG UnbiasedInterruptTime; // r14
  __int64 v72; // rbx
  _DWORD *v73; // r15
  USHORT CurrentNodeNumber; // ax
  __int64 v75; // rbp
  int v76; // edi
  _QWORD *v77; // rax
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  __int64 v82; // rdx
  int v83; // ecx
  int v84; // r9d
  signed __int32 v85; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v86; // rcx
  ULONG v87; // edi
  ULONG v88; // ebp
  int v89; // r14d
  char v90; // [rsp+30h] [rbp-C8h]
  char v91[7]; // [rsp+31h] [rbp-C7h] BYREF
  __int64 v92; // [rsp+38h] [rbp-C0h]
  __int64 v93; // [rsp+40h] [rbp-B8h]
  char *v94; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v95; // [rsp+50h] [rbp-A8h]
  __int64 v96; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v97; // [rsp+60h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v99; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v100[12]; // [rsp+98h] [rbp-60h] BYREF
  int v101; // [rsp+A4h] [rbp-54h]

  v4 = *(_QWORD *)(a4 + 16);
  v5 = a2;
  v93 = a2;
  v92 = a4;
  v7 = 0LL;
  v97 = 0LL;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = 0LL;
  v90 = 0;
  v10 = 0LL;
  *(_QWORD *)v100 = 0LL;
  v91[0] = 0;
  v11 = *(_QWORD *)(v8 + 8);
  v96 = 0LL;
  if ( *(_BYTE *)(v11 + 2) == 40 )
  {
    v12 = v11 + *(unsigned int *)(v11 + 52);
    v97 = v11;
    v7 = v11;
    *(_WORD *)v12 = 1;
    *(_DWORD *)(v12 + 4) = 4;
    *(_BYTE *)(v12 + 8) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v12 + 9) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v12 + 10) = *(_BYTE *)(a1 + 90);
    v13 = *(_QWORD *)(v11 + 80);
    v14 = *(_QWORD *)(v11 + 64);
    GetSrbScsiData(v11, 0, 0, 0, 0LL, (__int64)v91);
    BidirectionalData = RaidSrbExGetBidirectionalData(v11);
    v16 = BidirectionalData;
    if ( BidirectionalData )
    {
      v17 = *(_QWORD *)(BidirectionalData + 16);
      if ( v17 )
      {
        if ( *(_BYTE *)(v11 + 2) != 40 )
          goto LABEL_11;
        v18 = *(_DWORD *)(v11 + 56);
        if ( !v18 )
          goto LABEL_11;
        v19 = 0;
        while ( 1 )
        {
          v20 = *(unsigned int *)(v11 + 4LL * v19 + 120);
          if ( (unsigned int)v20 >= 0x80 && (unsigned int)v20 < *(_DWORD *)(v11 + 16) && *(_DWORD *)(v20 + v11) == 160 )
            break;
          if ( ++v19 >= v18 )
            goto LABEL_11;
        }
        v10 = *(_QWORD *)(v20 + v11 + 8);
        if ( v10 )
        {
          v9 = *(_QWORD *)(BidirectionalData + 16);
          v96 = *(_QWORD *)(v20 + v11 + 8);
        }
        else
        {
LABEL_11:
          v21 = 0;
          v22 = *(_DWORD *)(*(_QWORD *)(v93 + 184) + 24LL);
          if ( v22 == 315412 || v22 == 315464 )
            v21 = 1;
          v9 = *(_QWORD *)(BidirectionalData + 16);
          if ( v21 )
            v23 = *(_BYTE *)(v93 + 64);
          else
            v23 = 0;
          result = StorpDataInBufferAllocateMdlAndLockPages(&v96, *(unsigned int *)(v16 + 8), v17, v23);
          if ( (int)result < 0 )
            return result;
          v10 = v96;
        }
      }
    }
    v5 = v93;
  }
  else
  {
    v13 = *(_QWORD *)(v11 + 48);
    v14 = *(_QWORD *)(v11 + 24);
    *(_BYTE *)(v11 + 6) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v11 + 5) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v11 + 7) = *(_BYTE *)(a1 + 90);
    v91[0] = *(_BYTE *)(v11 + 11);
    v27 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v27 + 402) == 1 )
    {
      v28 = *(_QWORD *)(v4 + 760);
      if ( !v28 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        result = 3221225626LL;
        *(_DWORD *)(v11 + 64) = -1073741670;
        return result;
      }
      result = TranslateToExtendedSrb(
                 v28,
                 v11,
                 *(_DWORD *)(v4 + 744),
                 v28,
                 a3,
                 *(_BYTE *)(*(_QWORD *)(v27 + 528) + 184LL) >> 7);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = result;
        return result;
      }
      v7 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      v5 = v93;
      *(_QWORD *)(v4 + 752) = v11;
      *(_QWORD *)v100 = v11;
      v11 = v7;
      v97 = v7;
      v90 = 1;
      *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL) = v7;
    }
  }
  v24 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v4 + 160) = v5;
  *(_QWORD *)(v4 + 168) = v11;
  *(_QWORD *)(v4 + 224) = a1;
  *(_QWORD *)(v4 + 104) = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v4 + 136) = v10;
  if ( !v24 )
  {
    IoGetActivityIdIrp(v5, v4 + 728);
    v5 = v93;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
  {
    if ( *(_BYTE *)(v11 + 2) == 40 )
      v25 = *(_DWORD *)(v7 + 96);
    else
      v25 = *(_DWORD *)(v11 + 56);
    *(_DWORD *)(v4 + 18) = v25;
  }
  else
  {
    *(_BYTE *)(v4 + 20) = -1;
    *(_WORD *)(v4 + 18) = -1;
  }
  v29 = *(_BYTE *)(v4 + 16);
  *(_QWORD *)(v4 + 192) = v9;
  v30 = v92;
  *(_BYTE *)(v4 + 16) = v29 & 0xE3 | 4;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 176) = v13;
  *(_QWORD *)(v4 + 184) = v14;
  if ( *(_BYTE *)(v11 + 2) == 40 )
  {
    *(_QWORD *)(v7 + 96) = v4;
    *(_DWORD *)(v7 + 32) = *(_DWORD *)v30;
  }
  else
  {
    *(_QWORD *)(v11 + 48) = v4;
    *(_BYTE *)(v11 + 8) = *(_BYTE *)v30;
  }
  v31 = *(_QWORD *)(v30 + 8);
  v32 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7;
  if ( *(_BYTE *)(v11 + 2) == 40 )
  {
    if ( (v32 & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(v11 + 104) = v31;
  }
  else if ( (v32 & 0xFFFFFFF8) != 0 )
  {
    *(_QWORD *)(v11 + 56) = v31;
  }
  v33 = *(char **)(a1 + 24);
  v34 = 0;
  v94 = v33;
  if ( *(_QWORD *)(v5 + 8) )
  {
    v35 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
    if ( *(_BYTE *)(v35 + 2) == 40 )
      v36 = *(_QWORD *)(v35 + 96);
    else
      v36 = *(_QWORD *)(v35 + 48);
    v95 = v36;
    v37 = *(_BYTE *)(v35 + 2);
    if ( v37 == 40 )
    {
      v38 = *(_DWORD *)(v35 + 20);
      v39 = *(_DWORD *)(v35 + 24);
      v40 = *(_QWORD *)(v35 + 64);
      if ( !v38 )
      {
        SrbScsiData = (char *)GetSrbScsiData(v35, 0, 0, 0, 0LL, 0LL);
        v33 = v94;
        v5 = v93;
        if ( SrbScsiData )
          v34 = *SrbScsiData;
      }
    }
    else
    {
      v39 = *(_DWORD *)(v35 + 12);
      v40 = *(_QWORD *)(v35 + 24);
      v38 = v37;
      if ( !v37 )
        v34 = *(_BYTE *)(v35 + 72);
    }
    if ( (v39 & 0xC0) == 0 )
      goto LABEL_68;
    v42 = v95;
    if ( !v40 && !*(_QWORD *)(v95 + 104) )
      goto LABEL_68;
    if ( v38 > 0x17 || (v43 = 8389124, !_bittest(&v43, v38)) )
    {
      v44 = v33[393];
      if ( v44 != 3 && ((unsigned __int8)(v44 - 1) > 1u || !v38 && ((v34 - 8) & 0x5D) == 0) )
      {
        if ( v33[4450] )
        {
          if ( *(_BYTE *)(v35 + 2) == 40 )
          {
            v45 = RaidSrbExGetBidirectionalData(v35);
            v30 = v92;
            *(_QWORD *)(v35 + 64) = 0LL;
            if ( v45 )
              *(_QWORD *)(v45 + 16) = 0LL;
            goto LABEL_69;
          }
          *(_QWORD *)(v35 + 24) = 0LL;
        }
        goto LABEL_68;
      }
    }
    v55 = *(_QWORD *)(v95 + 104);
    v56 = 16;
    v57 = *(_QWORD *)(v95 + 184);
    if ( !*(_BYTE *)(v5 + 64) )
      v56 = 32;
    if ( (*(_BYTE *)(v55 + 10) & 5) != 0 )
    {
      v58 = *(char **)(v55 + 24);
    }
    else
    {
      v58 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v55, 0, MmCached, 0LL, 0, v56 | 0x40000000);
      v42 = v95;
    }
    if ( v58 )
    {
      if ( v57 )
        v57 = v57 - *(unsigned int *)(v55 + 44) - *(_QWORD *)(v55 + 32);
      v59 = &v58[v57];
      v24 = *(_BYTE *)(v35 + 2) == 40;
      v94 = v59;
      if ( v24 )
        *(_QWORD *)(v35 + 64) = v59;
      else
        *(_QWORD *)(v35 + 24) = v59;
      v60 = *(_QWORD *)(v42 + 136);
      if ( !v60 )
        goto LABEL_68;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v60, *(_QWORD *)(v42 + 192), v56, &v94);
      if ( SystemAddressForMdl >= 0 )
      {
        v62 = RaidSrbExGetBidirectionalData(v35);
        *(_QWORD *)(v62 + 16) = v94;
      }
      if ( SystemAddressForMdl != -1073741670 )
      {
LABEL_68:
        v30 = v92;
        goto LABEL_69;
      }
    }
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      if ( !v90 )
      {
        *(_DWORD *)(v97 + 44) = -1073741670;
LABEL_103:
        v63 = *(struct _MDL **)(v4 + 136);
        if ( v63 )
        {
          MmUnlockPages(v63);
          IoFreeMdl(*(PMDL *)(v4 + 136));
          *(_QWORD *)(v4 + 136) = 0LL;
        }
        return 3221225626LL;
      }
    }
    else if ( !v90 )
    {
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(v4 + 176);
      goto LABEL_102;
    }
    v11 = *(_QWORD *)v100;
    *(_QWORD *)(*(_QWORD *)(v93 + 184) + 8LL) = *(_QWORD *)v100;
LABEL_102:
    *(_DWORD *)(v11 + 64) = -1073741670;
    goto LABEL_103;
  }
LABEL_69:
  v46 = v91[0];
  if ( v91[0] <= *(_BYTE *)(a1 + 1444) )
    v46 = *(_BYTE *)(a1 + 1444);
  v47 = *(_QWORD *)(v4 + 168);
  v48 = *(_QWORD *)(v30 + 24);
  if ( *(_BYTE *)(v47 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v47 + 20) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v47 + 56); i = (unsigned int)(i + 1) )
      {
        v50 = *(unsigned int *)(v47 + 4 * i + 120);
        if ( (unsigned int)v50 < 0x80 )
          continue;
        v51 = *(unsigned int *)(v47 + 16);
        if ( (unsigned int)v50 > (unsigned int)v51 )
          continue;
        v52 = (unsigned int)v50;
        v53 = *(_DWORD *)(v47 + v50) - 64;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            if ( v54 != 1 || v52 + 40 > v51 )
              continue;
            *(_QWORD *)(v4 + 200) = *(_QWORD *)(v47 + v52 + 24);
            *(_BYTE *)(v4 + 208) = *(_BYTE *)(v47 + v52 + 9);
            *(_QWORD *)(v47 + v52 + 24) = v48;
            goto LABEL_110;
          }
          v64 = v52 + 56;
        }
        else
        {
          v64 = v52 + 40;
        }
        if ( v64 <= v51 )
        {
          *(_QWORD *)(v4 + 200) = *(_QWORD *)(v47 + v52 + 16);
          *(_BYTE *)(v4 + 208) = *(_BYTE *)(v47 + v52 + 9);
          *(_QWORD *)(v47 + v52 + 16) = v48;
LABEL_110:
          *(_BYTE *)(v47 + v52 + 9) = v46;
          *(_BYTE *)(v4 + 16) |= 0x20u;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v4 + 200) = *(_QWORD *)(v47 + 32);
    *(_BYTE *)(v4 + 208) = *(_BYTE *)(v47 + 11);
    *(_QWORD *)(v47 + 32) = v48;
    *(_BYTE *)(v47 + 11) = v46;
    *(_BYTE *)(v4 + 16) |= 0x20u;
  }
  v65 = v93;
  v66 = *(_QWORD *)(*(_QWORD *)(v93 + 184) + 8LL);
  if ( *(_BYTE *)(v66 + 2) == 40 )
    v67 = *(_QWORD *)(v66 + 96);
  else
    v67 = *(_QWORD *)(v66 + 48);
  v68 = *(_QWORD *)(v67 + 168);
  if ( *(_BYTE *)(v68 + 2) == 40 )
    v69 = *(_DWORD *)(v68 + 40);
  else
    v69 = *(_DWORD *)(v68 + 20);
  if ( !*(_BYTE *)(a1 + 2552) && v69 <= 2 )
    v69 = 3;
  v70 = *(_QWORD *)(a1 + 24);
  if ( v70 && *(_QWORD *)(v70 + 5000) || (**(_DWORD **)(a1 + 208) & 1) != 0 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  else
    UnbiasedInterruptTime = 0LL;
  *(_BYTE *)(v67 + 16) |= 2u;
  v72 = v67 + 48;
  v73 = *(_DWORD **)(a1 + 208);
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  *(_QWORD *)(v72 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v72 + 36) = CurrentNodeNumber;
  v75 = (__int64)&v73[14 * CurrentNodeNumber + 16];
  if ( v69 - 1 > 0xFFFFFFFC )
    v69 = 10;
  v76 = 2 * v69;
  *(_DWORD *)(v72 + 32) = v76;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v75 + 40), &LockHandle);
  v77 = *(_QWORD **)(v75 + 8);
  if ( *v77 != v75 )
    __fastfail(3u);
  *(_QWORD *)v72 = v75;
  *(_QWORD *)(v72 + 8) = v77;
  *v77 = v72;
  *(_QWORD *)(v75 + 8) = v72;
  if ( *(_DWORD *)(v75 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v75 + 48) = v76;
  if ( (*v73 & 1) != 0 )
  {
    v78 = v75 + 16;
    v79 = *(_QWORD *)(v75 + 24);
    if ( v79 == v75 + 16 )
    {
LABEL_138:
      v80 = *(_QWORD *)v78;
      v81 = (_QWORD *)(v72 + 16);
      if ( *(_QWORD *)(*(_QWORD *)v78 + 8LL) != v78 )
        __fastfail(3u);
      *v81 = v80;
      *(_QWORD *)(v72 + 24) = v78;
      *(_QWORD *)(v80 + 8) = v81;
      *(_QWORD *)v78 = v81;
      *(_DWORD *)(v72 + 48) |= 1u;
    }
    else
    {
      while ( *(_QWORD *)(v72 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v72 + 32)) < *(_QWORD *)(v79 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v79 + 16)) )
      {
        v79 = *(_QWORD *)(v79 + 8);
        if ( v79 == v78 )
          goto LABEL_138;
      }
      *(_QWORD *)(v72 + 16) = *(_QWORD *)v79;
      *(_QWORD *)(*(_QWORD *)v79 + 8LL) = v72 + 16;
      *(_QWORD *)v79 = v72 + 16;
      *(_DWORD *)(v72 + 48) |= 1u;
      *(_QWORD *)(v72 + 24) = v79;
    }
  }
  else
  {
    *(_DWORD *)(v72 + 48) &= ~1u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    memset(v100, 0, sizeof(v100));
    v101 = 0;
    IoGetActivityIdIrp(v65, v100);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x800000) != 0 )
      Template_qcq(v83, v82, (unsigned int)v100, v84, 3);
  }
  if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
  {
    v85 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1456) + 56LL));
    if ( *(_BYTE *)(a1 + 2580) )
    {
      LOBYTE(v82) = 1;
      RaidUnitReenablePendingTimer(a1, v82);
      v86 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1448);
      *(_BYTE *)(a1 + 2580) = 0;
      ExReleaseRundownProtectionCacheAware(v86);
    }
    else
    {
      if ( v85 == 1 )
      {
        v87 = 2000;
        v88 = 300;
        if ( *(_BYTE *)(a1 + 2552) )
        {
          v87 = 500;
          v88 = 50;
          v89 = 1;
        }
        else
        {
          v89 = 4;
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &v99);
        if ( (*(_BYTE *)(a1 + 153) & 0x20) != 0 )
        {
          KeSetCoalescableTimer((PKTIMER)(a1 + 664), (LARGE_INTEGER)(-10000LL * v87), v87, v88, (PKDPC)(a1 + 728));
          *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) = v89;
          *(_BYTE *)(a1 + 153) &= ~0x20u;
        }
        KeReleaseInStackQueuedSpinLock(&v99);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    }
  }
  else if ( *(_BYTE *)(a1 + 2580) )
  {
    LOBYTE(v82) = 1;
    RaidUnitReenablePendingTimer(a1, v82);
    *(_BYTE *)(a1 + 2580) = 0;
  }
  return 0LL;
}
