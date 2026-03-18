/*
 * XREFs of CmRestoreKey @ 0x1405E95A4
 * Callers:
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpLogTransactionAborted @ 0x1401AA55C (CmpLogTransactionAborted.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403DF288 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403DFE54 (CmpAssignSecurityToKcb.c)
 *     CmpReportNotify @ 0x1403F4FC4 (CmpReportNotify.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     CmpDeleteTree @ 0x14050FC98 (CmpDeleteTree.c)
 *     CmpTraceHiveRestoreStart @ 0x1405DDF9C (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x1405DE0AC (CmpTraceHiveRestoreStop.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3)
{
  char v3; // r15
  __int64 v7; // r12
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rsi
  int v10; // edi
  int HiveVolatile; // eax
  unsigned int v12; // ebx
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rbx
  char v21; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r8
  int v24; // eax
  unsigned int v25; // r13d
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  _WORD *v31; // rax
  unsigned int v32; // r13d
  unsigned int *v33; // r12
  _WORD *v34; // rbx
  unsigned int v35; // edx
  __int64 v36; // rax
  _DWORD *v37; // rcx
  __int64 v38; // rax
  _DWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rbx
  char v45; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v46; // [rsp+30h] [rbp-D0h]
  char v47; // [rsp+60h] [rbp-A0h]
  unsigned int v48; // [rsp+64h] [rbp-9Ch]
  __int64 v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+70h] [rbp-90h] BYREF
  int v51; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h] BYREF
  int v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  PKENLISTMENT *v56; // [rsp+90h] [rbp-70h] BYREF
  int v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h] BYREF
  int v59; // [rsp+A8h] [rbp-58h] BYREF
  int v60; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v61; // [rsp+B0h] [rbp-50h]
  unsigned int v62; // [rsp+B4h] [rbp-4Ch] BYREF
  _QWORD *v63[2]; // [rsp+B8h] [rbp-48h] BYREF
  _WORD *v64; // [rsp+C8h] [rbp-38h]
  _QWORD v65[4]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR v66[44]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  v64 = 0LL;
  v59 = -1;
  v58 = 0LL;
  v57 = -1;
  v53 = -1;
  v54 = -1;
  v7 = 0LL;
  BugCheckParameter2 = 0LL;
  v51 = -1;
  memset(v66, 0, sizeof(v66));
  v8 = a1[1];
  v50 = 0;
  v9 = *(_QWORD *)(v8 + 32);
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_114;
  }
  if ( a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_106;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(v8, a2);
LABEL_7:
    v10 = HiveVolatile;
    goto LABEL_114;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(v8);
    goto LABEL_7;
  }
  v63[1] = v63;
  v63[0] = v63;
  memset(v65, 0, sizeof(v65));
  v65[0] = a2;
  v10 = CmpInitializeHive(&BugCheckParameter2, 2u, 0, 0, 0LL, (__int64)v65, 0LL, 16777217, 0LL, 0LL, 0LL, v66);
  if ( v10 < 0 )
    goto LABEL_114;
  CmpLockRegistryFreezeAware(0);
  CmpLockKcbShared(v8);
  v12 = *(_DWORD *)(v8 + 40);
  v48 = v12;
  if ( (*(_DWORD *)(v8 + 4) & 0x20000) != 0 )
  {
    v10 = -1073741535;
LABEL_13:
    v13 = BugCheckParameter2;
    goto LABEL_36;
  }
  if ( v9 == CmpMasterHive )
  {
    v10 = -1073741790;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v9 + 4112) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_13;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 2848), 1u);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v12, &v53);
  v49 = v14;
  v7 = v14;
  if ( !v14 )
  {
    v13 = BugCheckParameter2;
    v10 = -1073741670;
LABEL_35:
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
LABEL_36:
    CmpUnlockKcb((char *)v8);
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v13);
LABEL_108:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v53);
    goto LABEL_110;
  }
  if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(v14 + 16);
  v16 = v12;
  v13 = BugCheckParameter2;
  LODWORD(v46) = v16 >> 31;
  v61 = v16 >> 31;
  v17 = CmpCopyKeyPartial(
          BugCheckParameter2,
          *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
          v9,
          v15,
          6,
          v45,
          v46);
  if ( v17 == -1 )
  {
    v10 = -1073741670;
LABEL_34:
    v7 = v49;
    goto LABEL_35;
  }
  v18 = HvReallocateCell(v9, v17, (unsigned int)*(unsigned __int16 *)(v49 + 72) + 76, 1, &v58, &v57);
  v19 = v18;
  if ( v18 == -1 )
  {
    v13 = BugCheckParameter2;
LABEL_31:
    v10 = -1073741670;
    if ( CmpDeleteTree(v9, v17) )
      CmpFreeKeyByCell(v9, v17, 0);
    v3 = 0;
    goto LABEL_34;
  }
  v20 = v58;
  v17 = v18;
  memmove((void *)(v58 + 76), (const void *)(v49 + 76), *(unsigned __int16 *)(v49 + 72));
  *(_WORD *)(v20 + 72) = *(_WORD *)(v49 + 72);
  if ( (*(_BYTE *)(v49 + 2) & 0x20) != 0 )
    *(_WORD *)(v20 + 2) |= 0x20u;
  else
    *(_WORD *)(v58 + 2) &= ~0x20u;
  v13 = BugCheckParameter2;
  if ( !CmpCopySyncTree(BugCheckParameter2, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL), v9, v19, 2, 0) )
    goto LABEL_31;
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
  CmpUnlockKcb((char *)v8);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v53);
  v7 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v57);
  v58 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v21 = 0;
  while ( 1 )
  {
    if ( v21 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    v47 = 0;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_101:
      v10 = -1073741431;
LABEL_102:
      if ( CmpDeleteTree(v9, v19) )
        CmpFreeKeyByCell(v9, v19, 0);
      CmpUnlockRegistry();
      CmpDestroyTemporaryHive(BugCheckParameter2);
      goto LABEL_92;
    }
    v24 = *(_DWORD *)(v8 + 4);
    v21 = 1;
    v47 = 1;
    if ( (v24 & 0x20000) != 0 )
      goto LABEL_99;
    if ( v48 != *(_DWORD *)(v8 + 40) )
    {
      v10 = -1073741444;
      goto LABEL_102;
    }
    if ( (v24 & 0x40000) != 0 )
    {
      v10 = -1073740763;
      goto LABEL_102;
    }
    if ( *(_BYTE *)(v9 + 4112) == 1 )
      goto LABEL_101;
    HIDWORD(v55) = 0;
    v56 = 0LL;
    if ( !*(_DWORD *)(v8 + 240) || (v10 = CmpSnapshotTxOwnerArray(v8 + 240, (char *)&v55 + 4, &v56), v10 < 0) )
    {
      if ( !*(_DWORD *)(v8 + 256) )
        break;
      v10 = CmpSnapshotTxOwnerArray(v8 + 256, (char *)&v55 + 4, &v56);
      if ( v10 < 0 )
        break;
    }
LABEL_51:
    CmpLogTransactionAborted(v8, 7u, v23, HIDWORD(v55));
    CmpUnlockRegistry();
    v10 = CmpRollbackTransactionArray(HIDWORD(v55), v56, 0LL, &v50);
    CmpLockRegistryFreezeAware(1);
    if ( v10 < 0 )
      goto LABEL_102;
  }
  v56 = 0LL;
  v55 = 0LL;
  if ( (unsigned int)CmpSearchForOpenSubKeys(v8, ((unsigned __int8)a3 >> 3) & 1, v23, &v55) )
  {
    if ( (_DWORD)v55 != -1073741267 )
      goto LABEL_99;
    goto LABEL_51;
  }
  if ( *(_DWORD *)v8 != 1 && (a3 & 8) == 0 )
  {
LABEL_99:
    v10 = -1073741535;
    goto LABEL_102;
  }
  if ( !HvpMarkCellDirty(v9, v19, 0) )
  {
    v10 = -1073741443;
    goto LABEL_102;
  }
  v25 = v48;
  v58 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v48, &v57);
  if ( !v58 )
  {
LABEL_58:
    v10 = -1073741670;
    goto LABEL_102;
  }
  v26 = *(_DWORD *)(v58 + 16);
  if ( (*(_BYTE *)(v58 + 2) & 4) == 0 )
  {
    v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v26, &v54);
    if ( v29
      && (v62 = *(_DWORD *)(v29 + 4LL * (int)v61 + 28),
          v30 = v62,
          (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v54),
          v31 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v30, &v59),
          (v64 = v31) != 0LL) )
    {
      if ( *v31 == 26994 )
      {
        v32 = (unsigned __int16)v31[1];
        v33 = (unsigned int *)(v31 + 2);
      }
      else
      {
        v32 = 1;
        v33 = &v62;
      }
      v50 = 0;
      if ( !v32 )
      {
LABEL_85:
        v25 = v48;
        v7 = 0LL;
        goto LABEL_86;
      }
      while ( 1 )
      {
        v34 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, *v33, &v51);
        if ( !v34 )
          goto LABEL_61;
        if ( !HvpMarkCellDirty(v9, *v33, 0) )
          break;
        v35 = (unsigned __int16)v34[1];
        if ( ((*v34 - 26220) & 0xFDFF) != 0 )
        {
          v36 = 0LL;
          if ( v34[1] )
          {
            v37 = v34 + 2;
            while ( *v37 != v48 )
            {
              v36 = (unsigned int)(v36 + 1);
              ++v37;
              if ( (unsigned int)v36 >= v35 )
                goto LABEL_84;
            }
            *(_DWORD *)&v34[2 * v36 + 2] = v19;
LABEL_94:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v51);
            goto LABEL_85;
          }
        }
        else
        {
          v38 = 0LL;
          if ( v34[1] )
          {
            v39 = v34 + 2;
            while ( *v39 != v48 )
            {
              v38 = (unsigned int)(v38 + 1);
              v39 += 2;
              if ( (unsigned int)v38 >= v35 )
                goto LABEL_84;
            }
            *(_DWORD *)&v34[4 * v38 + 2] = v19;
            goto LABEL_94;
          }
        }
LABEL_84:
        (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v51);
        ++v33;
        if ( ++v50 >= v32 )
          goto LABEL_85;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v51);
      v10 = -1073741443;
    }
    else
    {
LABEL_61:
      v10 = -1073741670;
    }
    v7 = 0LL;
    goto LABEL_102;
  }
  v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(CmpMasterHive + 8))(CmpMasterHive, v26, &v54);
  if ( !v27 )
    goto LABEL_61;
  *(_DWORD *)(v27 + 28) = v19;
  (*(void (__fastcall **)(ULONG_PTR, int *))(CmpMasterHive + 16))(CmpMasterHive, &v54);
  v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v9 + 8))(v9, v19, &v53);
  if ( !v28 )
  {
    v10 = -1073741670;
    v7 = 0LL;
    goto LABEL_102;
  }
  *(_DWORD *)(v28 + 16) = v26;
  *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v19;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v53);
  v7 = 0LL;
LABEL_86:
  *(_DWORD *)(v8 + 40) = v19;
  CmpCleanUpKcbValueCache(v8);
  v40 = *(unsigned int *)(v8 + 40);
  v41 = *(_QWORD *)(v8 + 32);
  v60 = -1;
  v42 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v41 + 8))(v41, v40, &v60);
  v43 = v42;
  if ( !v42 )
    goto LABEL_58;
  *(_DWORD *)(v8 + 96) = *(_DWORD *)(v42 + 36);
  *(_QWORD *)(v8 + 104) = *(unsigned int *)(v42 + 40);
  *(_WORD *)(v8 + 186) = *(_WORD *)(v42 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v42 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8);
  *(_QWORD *)(v8 + 168) = *(_QWORD *)(v43 + 4);
  *(_WORD *)(v8 + 176) = *(_WORD *)(v43 + 52);
  *(_WORD *)(v8 + 178) = *(_WORD *)(v43 + 60);
  *(_DWORD *)(v8 + 180) = *(_DWORD *)(v43 + 64);
  *(_DWORD *)(v8 + 184) ^= (*(_DWORD *)(v8 + 184) ^ *(unsigned __int16 *)(v43 + 54)) & 0xF;
  *(_DWORD *)(v8 + 184) ^= ((unsigned __int8)*(_DWORD *)(v8 + 184) ^ (unsigned __int8)*(_WORD *)(v43 + 54)) & 0xF0;
  *(_BYTE *)(v8 + 185) = *(_BYTE *)(v43 + 55);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v8 + 32) + 16LL))(*(_QWORD *)(v8 + 32), &v60);
  *(_WORD *)(v8 + 4) = 64;
  if ( CmpDeleteTree(v9, v25) )
    CmpFreeKeyByCell(v9, v25, 0);
  CmpReportNotify(v8, *(_QWORD *)(v8 + 32), *(_DWORD *)(v8 + 40), 0LL, 1, (__int64)v63);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyTemporaryHive(BugCheckParameter2);
  CmpSignalDeferredPosts(v63);
LABEL_92:
  v3 = v47;
LABEL_106:
  if ( v64 )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v59);
    goto LABEL_108;
  }
LABEL_110:
  if ( v58 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &v57);
  if ( v3 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_114:
  CmpTraceHiveRestoreStop(v10);
  return (unsigned int)v10;
}
