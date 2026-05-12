/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0004DF0
 * Callers:
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006DD4 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0007300 (RaidSrbExGetBidirectionalData.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000758C (RaidUnitReenablePendingTimer.c)
 *     TranslateToExtendedSrb @ 0x1C0014EB4 (TranslateToExtendedSrb.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0031208 (RaidGetSystemAddressForMdl.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0035ECC (StorpDataInBufferAllocateMdlAndLockPages.c)
 *     Template_qcq @ 0x1C0036104 (Template_qcq.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v12; // rbx
  bool v13; // zf
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  int v19; // eax
  char *v20; // r8
  char v21; // dl
  __int64 v22; // r14
  _QWORD *v23; // r10
  unsigned __int8 v24; // al
  int v25; // r12d
  __int64 v26; // rcx
  unsigned int v27; // r15d
  int v28; // eax
  char v29; // al
  __int64 v30; // r12
  unsigned int v31; // edx
  __int64 v32; // r15
  char *v33; // rax
  char *v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int v42; // r14d
  __int64 v43; // rax
  ULONGLONG UnbiasedInterruptTime; // r12
  __int64 v45; // rbx
  _DWORD *v46; // r15
  USHORT CurrentNodeNumber; // ax
  __int64 v48; // rsi
  int v49; // r14d
  _QWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // r9d
  __int64 result; // rax
  __int64 v55; // rcx
  __int64 BidirectionalData; // rax
  __int64 v57; // r10
  __int64 v58; // r8
  char v59; // r9
  int v60; // edx
  unsigned __int8 v61; // al
  __int64 v62; // r9
  __int64 v63; // rax
  int v64; // eax
  char *SrbScsiData; // rax
  __int64 v66; // rax
  int SystemAddressForMdl; // r15d
  __int64 v68; // rax
  struct _MDL *v69; // rcx
  __int64 v70; // r11
  __int64 v71; // rcx
  unsigned __int64 v72; // r10
  __int64 v73; // rsi
  int v74; // ecx
  int v75; // ecx
  __int64 v76; // rdx
  __int64 *v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  signed __int32 v80; // ecx
  char v81; // [rsp+30h] [rbp-A8h]
  char v82[7]; // [rsp+31h] [rbp-A7h] BYREF
  __int64 v83; // [rsp+38h] [rbp-A0h]
  __int64 v84; // [rsp+40h] [rbp-98h]
  char *v85; // [rsp+48h] [rbp-90h] BYREF
  _QWORD *v86; // [rsp+50h] [rbp-88h]
  __int64 v87; // [rsp+58h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v89[12]; // [rsp+78h] [rbp-60h] BYREF
  int v90; // [rsp+84h] [rbp-54h]

  v4 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  v7 = 0LL;
  v84 = 0LL;
  v9 = 0LL;
  v81 = 0;
  v10 = *(_QWORD *)(v4 + 8);
  v12 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)v89 = 0LL;
  v82[0] = 0;
  v13 = *(_BYTE *)(v10 + 2) == 40;
  v83 = 0LL;
  v87 = 0LL;
  if ( v13 )
  {
    v55 = v10 + *(unsigned int *)(v10 + 52);
    v84 = v10;
    *(_WORD *)v55 = 1;
    *(_DWORD *)(v55 + 4) = 4;
    *(_BYTE *)(v55 + 8) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v55 + 9) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v55 + 10) = *(_BYTE *)(a1 + 90);
    v14 = *(_QWORD *)(v10 + 80);
    v15 = *(_QWORD *)(v10 + 64);
    GetSrbScsiData(v10, 0, 0, 0, 0LL, (__int64)v82);
    BidirectionalData = RaidSrbExGetBidirectionalData(v10);
    v57 = BidirectionalData;
    if ( BidirectionalData && (v58 = *(_QWORD *)(BidirectionalData + 16)) != 0 )
    {
      v59 = 0;
      v60 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
      if ( v60 == 315412 || v60 == 315464 )
        v59 = 1;
      v83 = *(_QWORD *)(BidirectionalData + 16);
      if ( v59 )
        v61 = *(_BYTE *)(a2 + 64);
      else
        v61 = 0;
      result = StorpDataInBufferAllocateMdlAndLockPages(&v87, *(unsigned int *)(v57 + 8), v58, v61);
      if ( (int)result < 0 )
        return result;
      v7 = v87;
      v9 = v83;
    }
    else
    {
      v9 = 0LL;
    }
    v6 = v10;
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 48);
    v15 = *(_QWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 89);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 88);
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(a1 + 90);
    v82[0] = *(_BYTE *)(v10 + 11);
    v16 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v16 + 402) == 1 )
    {
      v62 = *(_QWORD *)(v12 + 760);
      if ( !v62 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        result = 3221225626LL;
        *(_DWORD *)(v10 + 64) = -1073741670;
        return result;
      }
      result = TranslateToExtendedSrb(
                 v62,
                 v10,
                 *(_DWORD *)(v12 + 744),
                 v62,
                 a3,
                 *(_BYTE *)(*(_QWORD *)(v16 + 528) + 184LL) >> 7);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = result;
        return result;
      }
      v6 = *(_QWORD *)(v12 + 760);
      v9 = 0LL;
      *(_BYTE *)(v12 + 16) |= 0x40u;
      *(_QWORD *)(v12 + 752) = v10;
      v63 = *(_QWORD *)(a2 + 184);
      *(_QWORD *)v89 = v10;
      v10 = v6;
      v84 = v6;
      v81 = 1;
      *(_QWORD *)(v63 + 8) = v6;
    }
  }
  v13 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v12 + 160) = a2;
  *(_QWORD *)(v12 + 168) = v10;
  *(_QWORD *)(v12 + 224) = a1;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v12 + 136) = v7;
  if ( !v13 )
  {
    IoGetActivityIdIrp(a2, v12 + 728);
    v9 = v83;
    v6 = v84;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
  {
    if ( *(_BYTE *)(v10 + 2) == 40 )
      v64 = *(_DWORD *)(v6 + 96);
    else
      v64 = *(_DWORD *)(v10 + 56);
    *(_DWORD *)(v12 + 18) = v64;
  }
  else
  {
    *(_BYTE *)(v12 + 20) = -1;
    *(_WORD *)(v12 + 18) = -1;
  }
  v17 = *(_BYTE *)(v12 + 16);
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 176) = v14;
  *(_BYTE *)(v12 + 16) = v17 & 0xE3 | 4;
  *(_QWORD *)(v12 + 184) = v15;
  *(_QWORD *)(v12 + 192) = v9;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    *(_QWORD *)(v6 + 96) = v12;
    *(_DWORD *)(v6 + 32) = *(_DWORD *)a4;
  }
  else
  {
    *(_QWORD *)(v10 + 48) = v12;
    *(_BYTE *)(v10 + 8) = *(_BYTE *)a4;
  }
  v18 = *(_QWORD *)(a4 + 8);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    if ( (v19 & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(v10 + 104) = v18;
  }
  else if ( (v19 & 0xFFFFFFF8) != 0 )
  {
    *(_QWORD *)(v10 + 56) = v18;
  }
  v20 = *(char **)(a1 + 24);
  v21 = 0;
  v13 = *(_QWORD *)(a2 + 8) == 0LL;
  v85 = v20;
  if ( !v13 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v23 = *(_BYTE *)(v22 + 2) == 40 ? *(_QWORD **)(v22 + 96) : *(_QWORD **)(v22 + 48);
    v24 = *(_BYTE *)(v22 + 2);
    v86 = v23;
    if ( v24 == 40 )
    {
      v27 = *(_DWORD *)(v22 + 20);
      v26 = *(_QWORD *)(v22 + 64);
      v25 = *(_DWORD *)(v22 + 24);
      v83 = v26;
      if ( !v27 )
      {
        SrbScsiData = (char *)GetSrbScsiData(v22, 0, 0, 0, 0LL, 0LL);
        v26 = v83;
        v20 = v85;
        v23 = v86;
        if ( SrbScsiData )
          v21 = *SrbScsiData;
        else
          v21 = 0;
      }
    }
    else
    {
      v25 = *(_DWORD *)(v22 + 12);
      v26 = *(_QWORD *)(v22 + 24);
      v27 = v24;
      if ( !v24 )
        v21 = *(_BYTE *)(v22 + 72);
    }
    if ( (v25 & 0xC0) != 0 && (v26 || v23[13]) )
    {
      if ( v27 > 0x17 || (v28 = 8389124, !_bittest(&v28, v27)) )
      {
        v29 = v20[393];
        if ( v29 != 3 && ((unsigned __int8)(v29 - 1) > 1u || !v27 && ((v21 - 8) & 0x5D) == 0) )
        {
          if ( v20[4450] )
          {
            if ( *(_BYTE *)(v22 + 2) == 40 )
            {
              v66 = RaidSrbExGetBidirectionalData(v22);
              *(_QWORD *)(v22 + 64) = 0LL;
              if ( v66 )
                *(_QWORD *)(v66 + 16) = 0LL;
            }
            else
            {
              *(_QWORD *)(v22 + 24) = 0LL;
            }
          }
          goto LABEL_34;
        }
      }
      v30 = v23[13];
      v31 = 16;
      v32 = v23[23];
      if ( !*(_BYTE *)(a2 + 64) )
        v31 = 32;
      LODWORD(v83) = v31;
      if ( (*(_BYTE *)(v30 + 10) & 5) != 0 )
      {
        v33 = *(char **)(v30 + 24);
      }
      else
      {
        v33 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v30, 0, MmCached, 0LL, 0, v31 | 0x40000000);
        v31 = v83;
        v23 = v86;
      }
      if ( !v33 )
        goto LABEL_105;
      if ( v32 )
        v32 = v32 - *(unsigned int *)(v30 + 44) - *(_QWORD *)(v30 + 32);
      v34 = &v33[v32];
      v13 = *(_BYTE *)(v22 + 2) == 40;
      v85 = v34;
      if ( v13 )
        *(_QWORD *)(v22 + 64) = v34;
      else
        *(_QWORD *)(v22 + 24) = v34;
      v35 = v23[17];
      if ( v35 )
      {
        SystemAddressForMdl = RaidGetSystemAddressForMdl(v35, v23[24], v31, &v85);
        if ( SystemAddressForMdl >= 0 )
        {
          v68 = RaidSrbExGetBidirectionalData(v22);
          *(_QWORD *)(v68 + 16) = v85;
        }
        if ( SystemAddressForMdl == -1073741670 )
        {
LABEL_105:
          if ( *(_BYTE *)(v10 + 2) == 40 )
          {
            if ( !v81 )
            {
              *(_DWORD *)(v84 + 44) = -1073741670;
LABEL_112:
              v69 = *(struct _MDL **)(v12 + 136);
              if ( v69 )
              {
                MmUnlockPages(v69);
                IoFreeMdl(*(PMDL *)(v12 + 136));
                *(_QWORD *)(v12 + 136) = 0LL;
              }
              return 3221225626LL;
            }
          }
          else if ( !v81 )
          {
            *(_QWORD *)(v10 + 48) = *(_QWORD *)(v12 + 176);
LABEL_111:
            *(_DWORD *)(v10 + 64) = -1073741670;
            goto LABEL_112;
          }
          v10 = *(_QWORD *)v89;
          *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = *(_QWORD *)v89;
          goto LABEL_111;
        }
      }
    }
  }
LABEL_34:
  if ( v82[0] > *(_BYTE *)(a1 + 1444) )
    v36 = v82[0];
  else
    v36 = *(_BYTE *)(a1 + 1444);
  v37 = *(_QWORD *)(v12 + 168);
  v38 = *(_QWORD *)(a4 + 24);
  if ( *(_BYTE *)(v37 + 2) != 40 )
  {
    *(_QWORD *)(v12 + 200) = *(_QWORD *)(v37 + 32);
    *(_BYTE *)(v12 + 208) = *(_BYTE *)(v37 + 11);
    *(_QWORD *)(v37 + 32) = v38;
    *(_BYTE *)(v37 + 11) = v36;
    *(_BYTE *)(v12 + 16) |= 0x20u;
    goto LABEL_38;
  }
  if ( !*(_DWORD *)(v37 + 20) )
  {
    v70 = 0LL;
    if ( *(_DWORD *)(v37 + 56) )
    {
      while ( 1 )
      {
        v71 = *(unsigned int *)(v37 + 4 * v70 + 120);
        if ( (unsigned int)v71 < 0x80 )
          goto LABEL_130;
        v72 = *(unsigned int *)(v37 + 16);
        if ( (unsigned int)v71 > (unsigned int)v72 )
          goto LABEL_130;
        v73 = (unsigned int)v71;
        v74 = *(_DWORD *)(v71 + v37) - 64;
        if ( v74 )
          break;
        if ( v73 + 40 <= v72 )
          goto LABEL_128;
LABEL_130:
        v70 = (unsigned int)(v70 + 1);
        if ( (unsigned int)v70 >= *(_DWORD *)(v37 + 56) )
          goto LABEL_38;
      }
      v75 = v74 - 1;
      if ( v75 )
      {
        if ( v75 != 1 || v73 + 40 > v72 )
          goto LABEL_130;
        *(_QWORD *)(v12 + 200) = *(_QWORD *)(v73 + v37 + 24);
        *(_BYTE *)(v12 + 208) = *(_BYTE *)(v73 + v37 + 9);
        *(_QWORD *)(v73 + v37 + 24) = v38;
      }
      else
      {
        if ( v73 + 56 > v72 )
          goto LABEL_130;
LABEL_128:
        *(_QWORD *)(v12 + 200) = *(_QWORD *)(v73 + v37 + 16);
        *(_BYTE *)(v12 + 208) = *(_BYTE *)(v73 + v37 + 9);
        *(_QWORD *)(v73 + v37 + 16) = v38;
      }
      *(_BYTE *)(v73 + v37 + 9) = v36;
      *(_BYTE *)(v12 + 16) |= 0x20u;
      goto LABEL_130;
    }
  }
LABEL_38:
  v39 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v39 + 2) == 40 )
    v40 = *(_QWORD *)(v39 + 96);
  else
    v40 = *(_QWORD *)(v39 + 48);
  v41 = *(_QWORD *)(v40 + 168);
  if ( *(_BYTE *)(v41 + 2) == 40 )
    v42 = *(_DWORD *)(v41 + 40);
  else
    v42 = *(_DWORD *)(v41 + 20);
  if ( v42 <= 2 && !*(_BYTE *)(a1 + 2528) )
    v42 = 3;
  v43 = *(_QWORD *)(a1 + 24);
  if ( v43 && *(_QWORD *)(v43 + 5000) || (**(_DWORD **)(a1 + 200) & 1) != 0 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  else
    UnbiasedInterruptTime = 0LL;
  *(_BYTE *)(v40 + 16) |= 2u;
  v45 = v40 + 48;
  v46 = *(_DWORD **)(a1 + 200);
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v48 = (__int64)&v46[14 * CurrentNodeNumber + 16];
  if ( v42 - 1 > 0xFFFFFFFC )
    v42 = 10;
  v49 = 2 * v42;
  *(_QWORD *)(v45 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v45 + 32) = v49;
  *(_DWORD *)(v45 + 36) = CurrentNodeNumber;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v48 + 40), &LockHandle);
  v50 = *(_QWORD **)(v48 + 8);
  *(_QWORD *)v45 = v48;
  *(_QWORD *)(v45 + 8) = v50;
  if ( *v50 != v48 )
    __fastfail(3u);
  *v50 = v45;
  *(_QWORD *)(v48 + 8) = v45;
  if ( *(_DWORD *)(v48 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v48 + 48) = v49;
  if ( (*v46 & 1) != 0 )
  {
    v76 = *(_QWORD *)(v48 + 24);
    v77 = (__int64 *)(v48 + 16);
    if ( (__int64 *)v76 == v77 )
    {
LABEL_140:
      v78 = *v77;
      v79 = v45 + 16;
      *(_QWORD *)(v45 + 16) = *v77;
      *(_QWORD *)(v45 + 24) = v77;
      if ( *(__int64 **)(v78 + 8) != v77 )
        __fastfail(3u);
      *(_QWORD *)(v78 + 8) = v79;
      *v77 = v79;
    }
    else
    {
      while ( *(_QWORD *)(v45 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v45 + 32)) < *(_QWORD *)(v76 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v76 + 16)) )
      {
        v76 = *(_QWORD *)(v76 + 8);
        if ( (__int64 *)v76 == v77 )
          goto LABEL_140;
      }
      *(_QWORD *)(v45 + 16) = *(_QWORD *)v76;
      *(_QWORD *)(*(_QWORD *)v76 + 8LL) = v45 + 16;
      *(_QWORD *)v76 = v45 + 16;
      *(_QWORD *)(v45 + 24) = v76;
    }
    *(_DWORD *)(v45 + 48) |= 1u;
  }
  else
  {
    *(_DWORD *)(v45 + 48) &= ~1u;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    memset(v89, 0, sizeof(v89));
    v90 = 0;
    IoGetActivityIdIrp(a2, v89);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
      Template_qcq(v52, v51, (unsigned int)v89, v53, 3);
  }
  if ( *(char *)(a1 + 145) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
  {
    v80 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1456) + 56LL));
    if ( *(_BYTE *)(a1 + 2556) )
    {
      LOBYTE(v51) = 1;
      RaidUnitReenablePendingTimer(a1, v51);
      *(_BYTE *)(a1 + 2556) = 0;
    }
    else if ( v80 == 1 )
    {
      RaidUnitReenablePendingTimer(a1, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  else if ( *(_BYTE *)(a1 + 2556) )
  {
    LOBYTE(v51) = 1;
    RaidUnitReenablePendingTimer(a1, v51);
    *(_BYTE *)(a1 + 2556) = 0;
  }
  return 0LL;
}
