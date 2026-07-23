/*
 * XREFs of CmRestoreKey @ 0x14060C300
 * Callers:
 *     NtRestoreKey @ 0x1405FA624 (NtRestoreKey.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpLogTransactionAborted @ 0x140135C24 (CmpLogTransactionAborted.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmpTraceHiveRestoreStart @ 0x1405FBEF8 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x1405FC008 (CmpTraceHiveRestoreStop.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14060D8C4 (CmpRefreshHive.c)
 *     CmpDeleteTree @ 0x14060E29C (CmpDeleteTree.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3)
{
  char v3; // r12
  __int64 v7; // r15
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // rsi
  int v10; // edi
  int HiveVolatile; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // eax
  unsigned int v19; // r12d
  __int64 v20; // rbx
  char v21; // bl
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char IsKeyDeletedForKeyBody; // al
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // ebx
  _WORD *v40; // rax
  unsigned int v41; // r13d
  int *v42; // r15
  _WORD *v43; // rbx
  char v44; // al
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // rax
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v59; // [rsp+28h] [rbp-D8h]
  char v60; // [rsp+60h] [rbp-A0h]
  unsigned int v61; // [rsp+64h] [rbp-9Ch]
  __int64 v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  int v65; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v66[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v67[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v69[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  PVOID *v72; // [rsp+B8h] [rbp-48h] BYREF
  int v73; // [rsp+C0h] [rbp-40h]
  _DWORD v74[2]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v75[2]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v76; // [rsp+D8h] [rbp-28h]
  _WORD *v77; // [rsp+E0h] [rbp-20h]
  _QWORD *v78[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v79[5]; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR v80[44]; // [rsp+120h] [rbp+20h] BYREF

  v3 = 0;
  v65 = a3;
  v77 = 0LL;
  v75[1] = 0;
  v75[0] = -1;
  v70 = 0xFFFFFFFFLL;
  v67[0] = -1;
  v69[0] = -1;
  v66[0] = -1;
  v7 = 0LL;
  v68 = 0LL;
  v67[1] = 0;
  v69[1] = 0;
  v64 = 0LL;
  v66[1] = 0;
  memset(v80, 0, sizeof(v80));
  v8 = a1[1];
  v63 = 0;
  v60 = 0;
  v9 = *(_QWORD *)(v8 + 24);
  if ( (*(_DWORD *)(v9 + 144) & 0x100000) != 0 )
  {
    v10 = -1073741790;
    goto LABEL_125;
  }
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_125;
  }
  if ( a1[7] || a1[8] )
  {
    v10 = -1073741811;
    goto LABEL_117;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(a1, a2);
LABEL_9:
    v10 = HiveVolatile;
    goto LABEL_125;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(a1);
    goto LABEL_9;
  }
  v78[1] = v78;
  v78[0] = v78;
  memset(v79, 0, 0x20uLL);
  v79[0] = a2;
  v10 = CmpInitializeHive((ULONG_PTR *)&v64, 2u, 0, 0, 0LL, (__int64)v79, 0LL, 17367041, 0LL, 0LL, 0LL, v80);
  if ( v10 < 0 )
    goto LABEL_125;
  CmpLockRegistryFreezeAware(0);
  CmpLockKcbShared(v8);
  v12 = *(_DWORD *)(v8 + 32);
  v61 = v12;
  if ( *(_WORD *)(v8 + 58) )
  {
    CmpLogUnsupportedOperation(0x11u);
    v10 = -1073741822;
LABEL_15:
    v13 = v64;
    goto LABEL_41;
  }
  if ( CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL) )
  {
    v10 = -1073741535;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v8 + 57) == 1 || v9 == CmpMasterHive )
  {
    v10 = -1073741790;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v9 + 4112) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_15;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 2848), 1u);
  v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v12, v67);
  v62 = v14;
  v7 = v14;
  if ( !v14 )
  {
    v13 = v64;
    v10 = -1073741670;
LABEL_40:
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
LABEL_41:
    CmpUnlockKcb((char *)v8);
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v13);
LABEL_119:
    if ( v7 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v67);
    goto LABEL_121;
  }
  if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(v14 + 16);
  v16 = v12;
  v13 = v64;
  v76 = v16 >> 31;
  v17 = CmpCopyKeyPartial(v64, *(unsigned int *)(*(_QWORD *)(v64 + 64) + 36LL), v9, v15, 6, v59, v16 >> 31);
  if ( v17 == -1 )
  {
    v10 = -1073741670;
LABEL_39:
    v7 = v62;
    goto LABEL_40;
  }
  v18 = HvReallocateCell(v9, v17, (unsigned int)*(unsigned __int16 *)(v62 + 72) + 76, 1, &v68, &v70);
  v19 = v18;
  if ( v18 == -1 )
  {
    v13 = v64;
LABEL_36:
    v10 = -1073741670;
    if ( (unsigned __int8)CmpDeleteTree(v9, v17) )
      CmpFreeKeyByCell(v9, v17, 0);
    v3 = 0;
    goto LABEL_39;
  }
  v20 = v68;
  v17 = v18;
  memmove((void *)(v68 + 76), (const void *)(v62 + 76), *(unsigned __int16 *)(v62 + 72));
  *(_WORD *)(v20 + 72) = *(_WORD *)(v62 + 72);
  if ( (*(_BYTE *)(v62 + 2) & 0x20) != 0 )
    *(_WORD *)(v20 + 2) |= 0x20u;
  else
    *(_WORD *)(v68 + 2) &= ~0x20u;
  v13 = v64;
  if ( !CmpCopySyncTree(v64, *(_DWORD *)(*(_QWORD *)(v64 + 64) + 36LL), v9, v19, 2, 0) )
    goto LABEL_36;
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
  CmpUnlockKcb((char *)v8);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v67);
  v7 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v70);
  v68 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v21 = v65;
  while ( 1 )
  {
    if ( v60 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    }
    v60 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
LABEL_112:
      v10 = -1073741431;
LABEL_113:
      if ( (unsigned __int8)CmpDeleteTree(v9, v19) )
        CmpFreeKeyByCell(v9, v19, 0);
      CmpUnlockRegistry();
      CmpDestroyTemporaryHive(v64);
      v3 = v60;
      goto LABEL_117;
    }
    v60 = 1;
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)a1, 0LL);
    LOBYTE(v30) = 0;
    if ( IsKeyDeletedForKeyBody )
      goto LABEL_61;
    if ( v61 != *(_DWORD *)(v8 + 32) )
    {
      v10 = -1073741444;
      goto LABEL_113;
    }
    if ( (*(_DWORD *)(v8 + 4) & 0x40000) != 0 )
    {
      v10 = -1073740763;
      goto LABEL_113;
    }
    if ( *(_BYTE *)(v9 + 4112) == 1 )
      goto LABEL_112;
    HIDWORD(v71) = 0;
    v72 = 0LL;
    if ( !*(_DWORD *)(v8 + 240)
      || (v31 = CmpSnapshotTxOwnerArray(v8 + 240, (char *)&v71 + 4, &v72), v30 = 0LL, v10 = v31, v31 < 0) )
    {
      if ( !*(_DWORD *)(v8 + 256) )
        break;
      v32 = CmpSnapshotTxOwnerArray(v8 + 256, (char *)&v71 + 4, &v72);
      v30 = 0LL;
      v10 = v32;
      if ( v32 < 0 )
        break;
    }
LABEL_52:
    CmpLogTransactionAborted(v8, 7u, v30, HIDWORD(v71));
    CmpUnlockRegistry();
    v10 = CmpRollbackTransactionArray(HIDWORD(v71), v72, 0LL, &v63);
    CmpLockRegistryFreezeAware(1);
    if ( v10 < 0 )
      goto LABEL_113;
  }
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0;
  if ( (v21 & 8) != 0 )
  {
    v33 = *(_QWORD *)(v8 + 184);
    if ( v33 )
    {
      if ( *(_QWORD *)(v33 + 32) != v33 + 32 )
      {
        CmpLogUnsupportedOperation(4u);
        goto LABEL_61;
      }
    }
  }
  if ( (unsigned int)CmpSearchForOpenSubKeys(v8, (v21 & 8) != 0, v30, &v71) )
  {
    if ( (_DWORD)v71 != -1073741267 )
      goto LABEL_61;
    goto LABEL_52;
  }
  if ( *(_DWORD *)v8 != 1 && (v21 & 8) == 0 )
  {
LABEL_61:
    v10 = -1073741535;
    goto LABEL_113;
  }
  if ( !HvpMarkCellDirty(v9, v19, 0) )
  {
    v10 = -1073741443;
    goto LABEL_113;
  }
  v34 = v61;
  v68 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v61, &v70);
  if ( !v68 )
  {
LABEL_68:
    v10 = -1073741670;
    goto LABEL_113;
  }
  v35 = *(_DWORD *)(v68 + 16);
  if ( (*(_BYTE *)(v68 + 2) & 4) != 0 )
  {
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(CmpMasterHive + 8))(CmpMasterHive, v35, v69);
    if ( !v36 )
    {
      v10 = -1073741670;
      v7 = 0LL;
      goto LABEL_113;
    }
    *(_DWORD *)(v36 + 28) = v19;
    (*(void (__fastcall **)(__int64, _DWORD *))(CmpMasterHive + 16))(CmpMasterHive, v69);
    v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v19, v67);
    if ( !v37 )
    {
LABEL_73:
      v10 = -1073741670;
      v7 = v37;
      goto LABEL_113;
    }
    *(_DWORD *)(v37 + 16) = v35;
    *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v19;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v67);
    v7 = 0LL;
  }
  else
  {
    v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v35, v69);
    v37 = 0LL;
    if ( !v38 )
      goto LABEL_73;
    v65 = *(_DWORD *)(v38 + 4LL * (int)v76 + 28);
    v39 = v65;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v69);
    v40 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, v39, v75);
    v77 = v40;
    if ( !v40 )
    {
      v10 = -1073741670;
      v7 = 0LL;
      goto LABEL_113;
    }
    if ( *v40 == 26994 )
    {
      v41 = (unsigned __int16)v40[1];
      v42 = (int *)(v40 + 2);
    }
    else
    {
      v41 = 1;
      v42 = &v65;
    }
    v63 = 0;
    if ( v41 )
    {
      while ( 1 )
      {
        v43 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v9 + 8))(v9, (unsigned int)*v42, v66);
        v37 = 0LL;
        if ( !v43 )
          goto LABEL_73;
        v44 = HvpMarkCellDirty(v9, (unsigned int)*v42, 0);
        v45 = 0LL;
        if ( !v44 )
          break;
        v46 = (unsigned __int16)v43[1];
        v47 = 0LL;
        if ( ((*v43 - 26220) & 0xFDFF) != 0 )
        {
          if ( v43[1] )
          {
            v45 = v61;
            v48 = v43 + 2;
            while ( *v48 != v61 )
            {
              v47 = (unsigned int)(v47 + 1);
              ++v48;
              if ( (unsigned int)v47 >= v46 )
                goto LABEL_94;
            }
            *(_DWORD *)&v43[2 * v47 + 2] = v19;
LABEL_97:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v66);
LABEL_98:
            v7 = 0LL;
            goto LABEL_102;
          }
        }
        else if ( v43[1] )
        {
          v45 = v61;
          v49 = v43 + 2;
          while ( *v49 != v61 )
          {
            v47 = (unsigned int)(v47 + 1);
            v49 += 2;
            if ( (unsigned int)v47 >= v46 )
              goto LABEL_94;
          }
          *(_DWORD *)&v43[4 * v47 + 2] = v19;
          goto LABEL_97;
        }
LABEL_94:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v9 + 16))(v9, v66, v45);
        ++v42;
        if ( ++v63 >= v41 )
          goto LABEL_98;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(v9 + 16))(v9, v66, 0LL);
      v7 = 0LL;
      v10 = -1073741443;
      goto LABEL_113;
    }
    v7 = 0LL;
LABEL_102:
    v34 = v61;
  }
  *(_DWORD *)(v8 + 32) = v19;
  CmpCleanUpKcbValueCache(v8);
  v50 = *(unsigned int *)(v8 + 32);
  v74[0] = -1;
  v74[1] = 0;
  v51 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *))(*(_QWORD *)(v8 + 24) + 8LL))(
          *(_QWORD *)(v8 + 24),
          v50,
          v74);
  v52 = v51;
  if ( !v51 )
    goto LABEL_68;
  v53 = *(unsigned int *)(v51 + 40);
  v54 = *(_DWORD *)(v51 + 36);
  *(_QWORD *)(v8 + 96) = v53;
  *(_DWORD *)(v8 + 88) = v54;
  *(_WORD *)(v8 + 178) = *(_WORD *)(v52 + 2);
  CmpAssignSecurityToKcb(v8, *(unsigned int *)(v52 + 44), 0LL, 0, 0);
  CmpCleanUpSubKeyInfo(v8);
  *(_QWORD *)(v8 + 160) = *(_QWORD *)(v52 + 4);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v52 + 52);
  *(_WORD *)(v8 + 170) = *(_WORD *)(v52 + 60);
  *(_DWORD *)(v8 + 172) = *(_DWORD *)(v52 + 64);
  *(_DWORD *)(v8 + 176) ^= (*(_DWORD *)(v8 + 176) ^ *(unsigned __int16 *)(v52 + 54)) & 0xF;
  *(_DWORD *)(v8 + 176) ^= ((unsigned __int8)*(_DWORD *)(v8 + 176) ^ (unsigned __int8)*(_WORD *)(v52 + 54)) & 0xF0;
  *(_BYTE *)(v8 + 177) = *(_BYTE *)(v52 + 55);
  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), v74);
  *(_WORD *)(v8 + 4) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v9, v34) )
    CmpFreeKeyByCell(v9, v34, 0);
  CmpReportNotify(v8, *(_QWORD *)(v8 + 24), *(_DWORD *)(v8 + 32), 0LL, 1, (__int64)v78);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyTemporaryHive(v64);
  CmpSignalDeferredPosts(v78);
  v3 = 1;
LABEL_117:
  if ( v77 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v75);
    goto LABEL_119;
  }
LABEL_121:
  if ( v68 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v70);
  if ( v3 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v55, v56, v57);
  }
LABEL_125:
  CmpTraceHiveRestoreStop(v10);
  return (unsigned int)v10;
}
