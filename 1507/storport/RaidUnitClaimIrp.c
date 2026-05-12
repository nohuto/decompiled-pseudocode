/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0003EF0
 * Callers:
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     RaidUnitReenablePendingTimer @ 0x1C002BCC0 (RaidUnitReenablePendingTimer.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C002E690 (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C002EBEC (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C00300CC (RaidGetSystemAddressForMdl.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0034410 (StorpDataInBufferAllocateMdlAndLockPages.c)
 *     Template_qcq @ 0x1C003458C (Template_qcq.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _DWORD *v6; // r9
  char v7; // r11
  __int64 v8; // rbp
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbx
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rcx
  int v20; // eax
  char *v21; // r8
  char v22; // dl
  __int64 v23; // rbp
  _QWORD *v24; // r10
  unsigned __int8 v25; // al
  int v26; // r12d
  __int64 v27; // rcx
  unsigned int v28; // r14d
  int v29; // eax
  char v30; // al
  __int64 v31; // r12
  unsigned int v32; // edx
  __int64 v33; // r14
  char *v34; // rax
  char *v35; // rax
  __int64 v36; // rcx
  unsigned __int8 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r14
  __int64 v41; // r14
  __int64 v42; // rax
  unsigned int v43; // ebp
  __int64 v44; // rax
  ULONGLONG UnbiasedInterruptTime; // r12
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 CurrentNodeNumber; // rcx
  __int64 v49; // rdi
  _QWORD *v50; // rax
  __int64 *v51; // rdx
  __int64 result; // rax
  char *v53; // rcx
  __int64 BidirectionalData; // rax
  __int64 v55; // r10
  __int64 v56; // r8
  char v57; // r9
  int v58; // edx
  unsigned __int8 v59; // al
  __int64 v60; // r9
  __int64 v61; // rax
  int v62; // eax
  char *SrbScsiData; // rax
  __int64 v64; // rax
  int SystemAddressForMdl; // r14d
  __int64 v66; // rax
  struct _MDL *v67; // rcx
  __int64 v68; // r11
  __int64 v69; // rcx
  unsigned __int64 v70; // r10
  __int64 v71; // rdi
  int v72; // ecx
  int v73; // ecx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 *v76; // r14
  int v77; // edx
  int v78; // ecx
  int v79; // r9d
  char v80; // [rsp+30h] [rbp-A8h]
  char v81[7]; // [rsp+31h] [rbp-A7h] BYREF
  __int64 v82; // [rsp+38h] [rbp-A0h]
  _DWORD *v83; // [rsp+40h] [rbp-98h]
  char *v84; // [rsp+48h] [rbp-90h] BYREF
  _QWORD *v85; // [rsp+50h] [rbp-88h]
  __int64 v86; // [rsp+58h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v88[12]; // [rsp+78h] [rbp-60h] BYREF
  int v89; // [rsp+84h] [rbp-54h]

  v4 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v83 = 0LL;
  v80 = 0;
  v10 = *(_DWORD **)(v4 + 8);
  v11 = 0LL;
  v12 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)v88 = 0LL;
  v81[0] = 0;
  v14 = *((_BYTE *)v10 + 2) == 40;
  v82 = 0LL;
  v86 = 0LL;
  if ( v14 )
  {
    v53 = (char *)v10 + (unsigned int)v10[13];
    v83 = v10;
    *(_WORD *)v53 = 1;
    *((_DWORD *)v53 + 1) = 4;
    v53[8] = *(_BYTE *)(a1 + 88);
    v53[9] = *(_BYTE *)(a1 + 89);
    v53[10] = *(_BYTE *)(a1 + 90);
    v15 = *((_QWORD *)v10 + 10);
    v16 = *((_QWORD *)v10 + 8);
    GetSrbScsiData((_DWORD)v10, 0, 0, 0, 0LL, (__int64)v81);
    BidirectionalData = RaidSrbExGetBidirectionalData(v10);
    v55 = BidirectionalData;
    if ( BidirectionalData && (v56 = *(_QWORD *)(BidirectionalData + 16)) != 0 )
    {
      v57 = 0;
      v58 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
      if ( v58 == 315412 || v58 == 315464 )
        v57 = 1;
      v82 = *(_QWORD *)(BidirectionalData + 16);
      if ( v57 )
        v59 = *(_BYTE *)(a2 + 64);
      else
        v59 = 0;
      result = StorpDataInBufferAllocateMdlAndLockPages(&v86, *(unsigned int *)(v55 + 8), v56, v59);
      if ( (int)result < 0 )
        return result;
      v8 = v86;
      v11 = v82;
    }
    else
    {
      v11 = 0LL;
    }
    v6 = v10;
    v7 = 0;
  }
  else
  {
    v15 = *((_QWORD *)v10 + 6);
    v16 = *((_QWORD *)v10 + 3);
    *((_BYTE *)v10 + 6) = *(_BYTE *)(a1 + 89);
    *((_BYTE *)v10 + 5) = *(_BYTE *)(a1 + 88);
    *((_BYTE *)v10 + 7) = *(_BYTE *)(a1 + 90);
    v81[0] = *((_BYTE *)v10 + 11);
    v17 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v17 + 402) == 1 )
    {
      v60 = *(_QWORD *)(v12 + 744);
      if ( !v60 )
      {
        *((_BYTE *)v10 + 3) = 48;
        result = 3221225626LL;
        v10[16] = -1073741670;
        return result;
      }
      result = TranslateToExtendedSrb(
                 v60,
                 (_DWORD)v10,
                 *(_DWORD *)(v12 + 728),
                 v60,
                 a3,
                 *(_BYTE *)(*(_QWORD *)(v17 + 528) + 184LL) >> 7);
      if ( (int)result < 0 )
      {
        *((_BYTE *)v10 + 3) = 48;
        v10[16] = result;
        return result;
      }
      v6 = *(_DWORD **)(v12 + 744);
      v7 = 1;
      *(_BYTE *)(v12 + 16) |= 0x40u;
      v11 = 0LL;
      *(_QWORD *)(v12 + 736) = v10;
      v61 = *(_QWORD *)(a2 + 184);
      *(_QWORD *)v88 = v10;
      v10 = v6;
      v83 = v6;
      v80 = 1;
      *(_QWORD *)(v61 + 8) = v6;
    }
  }
  v14 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v12 + 152) = a2;
  *(_QWORD *)(v12 + 160) = v10;
  *(_QWORD *)(v12 + 216) = a1;
  *(_QWORD *)(v12 + 96) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v12 + 128) = v8;
  if ( !v14 )
  {
    IoGetActivityIdIrp(a2, v12 + 712);
    v11 = v82;
    v6 = v83;
    v7 = v80;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
  {
    if ( *((_BYTE *)v10 + 2) == 40 )
      v62 = v6[24];
    else
      v62 = v10[14];
    *(_DWORD *)(v12 + 18) = v62;
  }
  else
  {
    *(_BYTE *)(v12 + 20) = -1;
    *(_WORD *)(v12 + 18) = -1;
  }
  v18 = *(_BYTE *)(v12 + 16);
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_QWORD *)(v12 + 168) = v15;
  *(_BYTE *)(v12 + 16) = v18 & 0xE3 | 4;
  *(_QWORD *)(v12 + 176) = v16;
  *(_QWORD *)(v12 + 184) = v11;
  if ( *((_BYTE *)v10 + 2) == 40 )
  {
    *((_QWORD *)v6 + 12) = v12;
    v6[8] = *(_DWORD *)a4;
  }
  else
  {
    *((_QWORD *)v10 + 6) = v12;
    *((_BYTE *)v10 + 8) = *(_BYTE *)a4;
  }
  v19 = *(_QWORD *)(a4 + 8);
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7;
  if ( *((_BYTE *)v10 + 2) == 40 )
  {
    if ( (v20 & 0xFFFFFFF8) != 0 )
      *((_QWORD *)v10 + 13) = v19;
  }
  else if ( (v20 & 0xFFFFFFF8) != 0 )
  {
    *((_QWORD *)v10 + 7) = v19;
  }
  v21 = *(char **)(a1 + 24);
  v22 = 0;
  v14 = *(_QWORD *)(a2 + 8) == 0LL;
  v84 = v21;
  if ( !v14 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v24 = *(_BYTE *)(v23 + 2) == 40 ? *(_QWORD **)(v23 + 96) : *(_QWORD **)(v23 + 48);
    v25 = *(_BYTE *)(v23 + 2);
    v85 = v24;
    if ( v25 == 40 )
    {
      v28 = *(_DWORD *)(v23 + 20);
      v27 = *(_QWORD *)(v23 + 64);
      v26 = *(_DWORD *)(v23 + 24);
      v82 = v27;
      if ( !v28 )
      {
        SrbScsiData = (char *)GetSrbScsiData(v23, 0, 0, 0, 0LL, 0LL);
        v27 = v82;
        v21 = v84;
        v24 = v85;
        v6 = v83;
        v7 = v80;
        if ( SrbScsiData )
          v22 = *SrbScsiData;
        else
          v22 = 0;
      }
    }
    else
    {
      v26 = *(_DWORD *)(v23 + 12);
      v27 = *(_QWORD *)(v23 + 24);
      v28 = v25;
      if ( !v25 )
        v22 = *(_BYTE *)(v23 + 72);
    }
    if ( (v26 & 0xC0) != 0 && (v27 || v24[12]) )
    {
      if ( v28 > 0x17 || (v29 = 8389124, !_bittest(&v29, v28)) )
      {
        v30 = v21[393];
        if ( v30 != 3 && ((unsigned __int8)(v30 - 1) > 1u || !v28 && ((v22 - 8) & 0x5D) == 0) )
        {
          if ( v21[4450] )
          {
            if ( *(_BYTE *)(v23 + 2) == 40 )
            {
              v64 = RaidSrbExGetBidirectionalData(v23);
              *(_QWORD *)(v23 + 64) = 0LL;
              if ( v64 )
                *(_QWORD *)(v64 + 16) = 0LL;
            }
            else
            {
              *(_QWORD *)(v23 + 24) = 0LL;
            }
          }
          goto LABEL_34;
        }
      }
      v31 = v24[12];
      v32 = 16;
      v33 = v24[22];
      if ( !*(_BYTE *)(a2 + 64) )
        v32 = 32;
      LODWORD(v82) = v32;
      if ( (*(_BYTE *)(v31 + 10) & 5) != 0 )
      {
        v34 = *(char **)(v31 + 24);
      }
      else
      {
        v34 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, v32 | 0x40000000);
        v32 = v82;
        v24 = v85;
        v6 = v83;
        v7 = v80;
      }
      if ( !v34 )
      {
LABEL_101:
        if ( *((_BYTE *)v10 + 2) == 40 )
        {
          if ( !v7 )
          {
            v6[11] = -1073741670;
LABEL_108:
            v67 = *(struct _MDL **)(v12 + 128);
            if ( v67 )
            {
              MmUnlockPages(v67);
              IoFreeMdl(*(PMDL *)(v12 + 128));
              *(_QWORD *)(v12 + 128) = 0LL;
            }
            return 3221225626LL;
          }
        }
        else if ( !v7 )
        {
          *((_QWORD *)v10 + 6) = *(_QWORD *)(v12 + 168);
LABEL_107:
          v10[16] = -1073741670;
          goto LABEL_108;
        }
        v10 = *(_DWORD **)v88;
        *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = *(_QWORD *)v88;
        goto LABEL_107;
      }
      if ( v33 )
        v33 = v33 - *(unsigned int *)(v31 + 44) - *(_QWORD *)(v31 + 32);
      v35 = &v34[v33];
      v14 = *(_BYTE *)(v23 + 2) == 40;
      v84 = v35;
      if ( v14 )
        *(_QWORD *)(v23 + 64) = v35;
      else
        *(_QWORD *)(v23 + 24) = v35;
      v36 = v24[16];
      if ( v36 )
      {
        SystemAddressForMdl = RaidGetSystemAddressForMdl(v36, v24[23], v32, &v84);
        if ( SystemAddressForMdl >= 0 )
        {
          v66 = RaidSrbExGetBidirectionalData(v23);
          *(_QWORD *)(v66 + 16) = v84;
        }
        if ( SystemAddressForMdl == -1073741670 )
        {
          v6 = v83;
          v7 = v80;
          goto LABEL_101;
        }
      }
    }
  }
LABEL_34:
  if ( v81[0] > *(_BYTE *)(a1 + 1428) )
    v37 = v81[0];
  else
    v37 = *(_BYTE *)(a1 + 1428);
  v38 = *(_QWORD *)(v12 + 160);
  v39 = *(_QWORD *)(a4 + 24);
  if ( *(_BYTE *)(v38 + 2) != 40 )
  {
    *(_QWORD *)(v12 + 192) = *(_QWORD *)(v38 + 32);
    *(_BYTE *)(v12 + 200) = *(_BYTE *)(v38 + 11);
    *(_QWORD *)(v38 + 32) = v39;
    *(_BYTE *)(v38 + 11) = v37;
    *(_BYTE *)(v12 + 16) |= 0x20u;
    goto LABEL_38;
  }
  if ( !*(_DWORD *)(v38 + 20) )
  {
    v68 = 0LL;
    if ( *(_DWORD *)(v38 + 56) )
    {
      while ( 1 )
      {
        v69 = *(unsigned int *)(v38 + 4 * v68 + 120);
        if ( (unsigned int)v69 < 0x80 )
          goto LABEL_126;
        v70 = *(unsigned int *)(v38 + 16);
        if ( (unsigned int)v69 > (unsigned int)v70 )
          goto LABEL_126;
        v71 = (unsigned int)v69;
        v72 = *(_DWORD *)(v69 + v38) - 64;
        if ( v72 )
          break;
        if ( v71 + 40 <= v70 )
          goto LABEL_124;
LABEL_126:
        v68 = (unsigned int)(v68 + 1);
        if ( (unsigned int)v68 >= *(_DWORD *)(v38 + 56) )
          goto LABEL_38;
      }
      v73 = v72 - 1;
      if ( v73 )
      {
        if ( v73 != 1 || v71 + 40 > v70 )
          goto LABEL_126;
        *(_QWORD *)(v12 + 192) = *(_QWORD *)(v71 + v38 + 24);
        *(_BYTE *)(v12 + 200) = *(_BYTE *)(v71 + v38 + 9);
        *(_QWORD *)(v71 + v38 + 24) = v39;
      }
      else
      {
        if ( v71 + 56 > v70 )
          goto LABEL_126;
LABEL_124:
        *(_QWORD *)(v12 + 192) = *(_QWORD *)(v71 + v38 + 16);
        *(_BYTE *)(v12 + 200) = *(_BYTE *)(v71 + v38 + 9);
        *(_QWORD *)(v71 + v38 + 16) = v39;
      }
      *(_BYTE *)(v71 + v38 + 9) = v37;
      *(_BYTE *)(v12 + 16) |= 0x20u;
      goto LABEL_126;
    }
  }
LABEL_38:
  v40 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v40 + 2) == 40 )
    v41 = *(_QWORD *)(v40 + 96);
  else
    v41 = *(_QWORD *)(v40 + 48);
  v42 = *(_QWORD *)(v41 + 160);
  if ( *(_BYTE *)(v42 + 2) == 40 )
    v43 = *(_DWORD *)(v42 + 40);
  else
    v43 = *(_DWORD *)(v42 + 20);
  if ( v43 <= 2 )
    v43 = 3;
  v44 = *(_QWORD *)(a1 + 24);
  if ( v44 && *(_QWORD *)(v44 + 5000) )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  else
    UnbiasedInterruptTime = 0LL;
  *(_BYTE *)(v41 + 16) |= 2u;
  v46 = v41 + 48;
  v47 = *(_QWORD *)(a1 + 200);
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v49 = v47 + 56 * CurrentNodeNumber;
  if ( v43 - 1 > 0xFFFFFFFC )
    v43 = 10;
  *(_DWORD *)(v46 + 36) = CurrentNodeNumber;
  *(_DWORD *)(v46 + 32) = v43;
  *(_QWORD *)(v46 + 40) = UnbiasedInterruptTime;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v49 + 40), &LockHandle);
  v50 = *(_QWORD **)(v49 + 8);
  *(_QWORD *)v46 = v49;
  *(_QWORD *)(v46 + 8) = v50;
  if ( *v50 != v49 )
    __fastfail(3u);
  *v50 = v46;
  *(_QWORD *)(v49 + 8) = v46;
  if ( *(_DWORD *)(v49 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v49 + 48) = v43;
  v51 = (__int64 *)(v49 + 16);
  if ( *(_QWORD *)(v49 + 16) )
  {
    v74 = *(_QWORD *)(v49 + 24);
    if ( (__int64 *)v74 == v51 )
    {
LABEL_134:
      v75 = *v51;
      v76 = (__int64 *)(v46 + 16);
      *v76 = *v51;
      v76[1] = (__int64)v51;
      if ( *(__int64 **)(v75 + 8) != v51 )
        __fastfail(3u);
      *(_QWORD *)(v75 + 8) = v76;
      *v51 = (__int64)v76;
    }
    else
    {
      while ( *(_QWORD *)(v46 + 40) + (unsigned __int64)(unsigned int)(10000000 * *(_DWORD *)(v46 + 32)) < *(_QWORD *)(v74 + 24) + (unsigned __int64)(unsigned int)(10000000 * *(_DWORD *)(v74 + 16)) )
      {
        v74 = *(_QWORD *)(v74 + 8);
        if ( (__int64 *)v74 == v51 )
          goto LABEL_134;
      }
      *(_QWORD *)(v46 + 16) = *(_QWORD *)v74;
      *(_QWORD *)(*(_QWORD *)v74 + 8LL) = v46 + 16;
      *(_QWORD *)v74 = v46 + 16;
      *(_QWORD *)(v46 + 24) = v74;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    memset(v88, 0, sizeof(v88));
    v89 = 0;
    IoGetActivityIdIrp(a2, v88);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
      Template_qcq(v78, v77, (unsigned int)v88, v79, 3);
  }
  if ( *(char *)(a1 + 145) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1440) + 56LL)) == 1 )
      RaidUnitReenablePendingTimer(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
  }
  return 0LL;
}
