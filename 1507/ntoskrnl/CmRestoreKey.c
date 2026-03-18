/*
 * XREFs of CmRestoreKey @ 0x140660D14
 * Callers:
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x140429FE8 (CmpReportNotify.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpTraceHiveRestoreStart @ 0x1406534C8 (CmpTraceHiveRestoreStart.c)
 *     CmpTraceHiveRestoreStop @ 0x1406535D8 (CmpTraceHiveRestoreStop.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 *     CmpDeleteTree @ 0x14066483C (CmpDeleteTree.c)
 */

__int64 __fastcall CmRestoreKey(_QWORD *a1, void *a2, int a3)
{
  ULONG_PTR v6; // r14
  ULONG_PTR v7; // rsi
  int v8; // edi
  int HiveVolatile; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  unsigned int v14; // r15d
  ULONG_PTR v15; // r13
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // r9d
  __int64 v19; // rax
  unsigned int v20; // r15d
  unsigned int v21; // eax
  unsigned int v22; // r12d
  size_t v23; // r8
  const void *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r9
  char v28; // r13
  char v29; // r8
  unsigned __int8 v30; // bl
  unsigned int v31; // r15d
  char v32; // r13
  unsigned __int64 v33; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v35; // ax
  struct _KTHREAD *v36; // rax
  unsigned __int64 v37; // rtt
  int v38; // eax
  __int64 v39; // r9
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  unsigned int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rcx
  unsigned int v53; // ebx
  _WORD *v54; // rax
  unsigned int v55; // r13d
  unsigned int *v56; // r15
  _WORD *v57; // rbx
  char v58; // al
  __int64 v59; // r8
  unsigned int v60; // edx
  __int64 v61; // rax
  _DWORD *v62; // rcx
  _DWORD *v63; // rcx
  unsigned __int64 v64; // rtt
  struct _KTHREAD *v65; // rcx
  __int16 v66; // ax
  char v68; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+64h] [rbp-9Ch] BYREF
  int v71; // [rsp+68h] [rbp-98h] BYREF
  int v72; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-90h]
  int v74; // [rsp+74h] [rbp-8Ch] BYREF
  int v75; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v76; // [rsp+7Ch] [rbp-84h]
  __int64 v77; // [rsp+80h] [rbp-80h] BYREF
  PKENLISTMENT *v78; // [rsp+88h] [rbp-78h] BYREF
  __int64 v79; // [rsp+90h] [rbp-70h] BYREF
  int v80; // [rsp+98h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h]
  int v82; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v84; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v85[3]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD *v86; // [rsp+D8h] [rbp-28h]
  _QWORD v87[4]; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v88[44]; // [rsp+100h] [rbp+0h] BYREF

  v74 = a3;
  v82 = -1;
  v86 = 0LL;
  v79 = 0LL;
  v72 = -1;
  v81 = 0LL;
  v71 = -1;
  v75 = -1;
  BugCheckParameter2 = 0LL;
  v70 = -1;
  memset(v88, 0, sizeof(v88));
  v6 = a1[1];
  v80 = 0;
  v7 = *(_QWORD *)(v6 + 32);
  CmpTraceHiveRestoreStart(a2, a3);
  if ( (a3 & 0xFFFFFFFD) != 0 && (a3 & 2) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_121;
  }
  if ( a1[7] || a1[8] )
  {
    v8 = -1073741811;
    v28 = 0;
    goto LABEL_108;
  }
  if ( (a3 & 1) != 0 )
  {
    HiveVolatile = CmpLoadHiveVolatile(v6, a2);
LABEL_7:
    v8 = HiveVolatile;
    goto LABEL_121;
  }
  if ( (a3 & 2) != 0 )
  {
    HiveVolatile = CmpRefreshHive(v6);
    goto LABEL_7;
  }
  v85[1] = v85;
  v85[0] = v85;
  memset(v87, 0, sizeof(v87));
  v87[0] = a2;
  v8 = CmpInitializeHive(&BugCheckParameter2, 2u, 0, 0, 0LL, (__int64)v87, 0LL, 17367041, 0LL, 0LL, 0LL, v88);
  if ( v8 < 0 )
    goto LABEL_121;
  CmpLockRegistryFreezeAware(0);
  CmpLockKcbShared(v6, v10, v11, v12);
  v13 = (*(_DWORD *)(v6 + 4) & 0x20000) == 0;
  v14 = *(_DWORD *)(v6 + 40);
  v15 = BugCheckParameter2;
  v76 = v14;
  if ( !v13 )
  {
    v8 = -1073741535;
    goto LABEL_31;
  }
  if ( v7 == CmpMasterHive )
  {
    v8 = -1073741790;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(v7 + 4112) == 1 )
  {
    v8 = -1073741431;
    goto LABEL_31;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 2848), 1u);
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v14, &v71);
  v81 = v16;
  v17 = v16;
  if ( !v16
    || ((*(_BYTE *)(v16 + 2) & 4) == 0 ? (v18 = *(_DWORD *)(v16 + 16)) : (v18 = -1),
        v19 = *(_QWORD *)(v15 + 64),
        LODWORD(v69) = v14 >> 31,
        v73 = v14 >> 31,
        v20 = CmpCopyKeyPartial(v15, *(unsigned int *)(v19 + 36), v7, v18, 6, v68, v69),
        v20 == -1) )
  {
    v8 = -1073741670;
LABEL_30:
    ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
LABEL_31:
    CmpUnlockKcb((char *)v6);
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v15);
    v28 = 0;
LABEL_110:
    if ( v81 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v71);
    goto LABEL_112;
  }
  v21 = HvReallocateCell(v7, v20, (unsigned int)*(unsigned __int16 *)(v17 + 72) + 76, 1, &v79, &v72);
  v22 = v21;
  if ( v21 == -1 )
    goto LABEL_28;
  v23 = *(unsigned __int16 *)(v17 + 72);
  v24 = (const void *)(v17 + 76);
  v25 = v79;
  v20 = v21;
  memmove((void *)(v79 + 76), v24, v23);
  v26 = v81;
  *(_WORD *)(v25 + 72) = *(_WORD *)(v81 + 72);
  if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
    *(_WORD *)(v25 + 2) |= 0x20u;
  else
    *(_WORD *)(v79 + 2) &= ~0x20u;
  if ( !CmpCopySyncTree(v15, *(_DWORD *)(*(_QWORD *)(v15 + 64) + 36LL), v7, v22, 2, 0) )
  {
LABEL_28:
    v8 = -1073741670;
    if ( (unsigned __int8)CmpDeleteTree(v7, v20) )
      CmpFreeKeyByCell(v7, v20, 0, v27);
    goto LABEL_30;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 2848));
  CmpUnlockKcb((char *)v6);
  CmpUnlockRegistry();
  (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v71);
  v81 = 0LL;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v72);
  v79 = 0LL;
  CmpLockRegistryFreezeAware(1);
  v30 = v74;
  v31 = v76;
  v32 = 0;
  while ( 1 )
  {
    if ( v32 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v33 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v33 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      CurrentThread = KeGetCurrentThread();
      v35 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v35;
      if ( !v35
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v36 = KeGetCurrentThread();
    v28 = 0;
    --v36->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v37 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v37 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
      && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
    {
      v40 = KeGetCurrentThread();
      v41 = v40->KernelApcDisable + 1;
      v40->KernelApcDisable = v41;
      if ( !v41
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
        && !v40->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v8 = -1073741431;
      goto LABEL_56;
    }
    v38 = *(_DWORD *)(v6 + 4);
    v32 = 1;
    if ( (v38 & 0x20000) != 0 )
      goto LABEL_54;
    if ( v31 != *(_DWORD *)(v6 + 40) )
    {
      v8 = -1073741444;
LABEL_55:
      v28 = 1;
LABEL_56:
      if ( (unsigned __int8)CmpDeleteTree(v7, v22) )
        CmpFreeKeyByCell(v7, v22, 0, v39);
      CmpUnlockRegistry();
      CmpDestroyTemporaryHive(BugCheckParameter2);
      goto LABEL_108;
    }
    if ( (v38 & 0x40000) != 0 )
    {
      v8 = -1073740763;
      goto LABEL_55;
    }
    if ( *(_BYTE *)(v7 + 4112) == 1 )
    {
      v8 = -1073741431;
      goto LABEL_55;
    }
    HIDWORD(v77) = 0;
    v78 = 0LL;
    if ( !*(_DWORD *)(v6 + 240) || (v8 = CmpSnapshotTxOwnerArray(v6 + 240, (char *)&v77 + 4, &v78), v8 < 0) )
    {
      if ( !*(_DWORD *)(v6 + 256) )
        break;
      v8 = CmpSnapshotTxOwnerArray(v6 + 256, (char *)&v77 + 4, &v78);
      if ( v8 < 0 )
        break;
    }
LABEL_48:
    CmpUnlockRegistry();
    v8 = CmpRollbackTransactionArray(HIDWORD(v77), v78, 0LL, &v80);
    CmpLockRegistryFreezeAware(1);
    if ( v8 < 0 )
      goto LABEL_55;
  }
  v78 = 0LL;
  v77 = 0LL;
  if ( (unsigned int)CmpSearchForOpenSubKeys(v6, (v30 >> 3) & 1, v29, &v77) )
  {
    if ( (_DWORD)v77 != -1073741267 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_DWORD *)v6 != 1 && (v30 & 8) == 0 )
  {
LABEL_54:
    v8 = -1073741535;
    goto LABEL_55;
  }
  if ( !HvpMarkCellDirty(v7, v22, 0, 0LL) )
    goto LABEL_67;
  v79 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v31, &v72);
  if ( !v79 )
    goto LABEL_69;
  v42 = *(_DWORD *)(v79 + 16);
  if ( (*(_BYTE *)(v79 + 2) & 4) != 0 )
  {
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(CmpMasterHive + 8))(CmpMasterHive, v42, &v75);
    if ( !v43 )
      goto LABEL_69;
    *(_DWORD *)(v43 + 28) = v22;
    (*(void (__fastcall **)(__int64, int *))(CmpMasterHive + 16))(CmpMasterHive, &v75);
    v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v22, &v71);
    v81 = v44;
    if ( !v44 )
      goto LABEL_69;
    *(_DWORD *)(v44 + 16) = v42;
    *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) = v22;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v71);
    v81 = 0LL;
  }
  else
  {
    v52 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v42, &v75);
    if ( !v52 )
      goto LABEL_69;
    v84 = *(_DWORD *)(v52 + 4LL * (int)v73 + 28);
    v53 = v84;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v75);
    v54 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v53, &v82);
    v86 = v54;
    if ( !v54 )
      goto LABEL_69;
    if ( *v54 == 26994 )
    {
      v55 = (unsigned __int16)v54[1];
      v56 = (unsigned int *)(v54 + 2);
    }
    else
    {
      v55 = 1;
      v56 = &v84;
    }
    v73 = 0;
    if ( v55 )
    {
      while ( 1 )
      {
        v57 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *v56, &v70);
        if ( !v57 )
          goto LABEL_69;
        v58 = HvpMarkCellDirty(v7, *v56, 0, 0LL);
        v59 = 0LL;
        if ( !v58 )
          break;
        v60 = (unsigned __int16)v57[1];
        v61 = 0LL;
        if ( ((*v57 - 26220) & 0xFDFF) != 0 )
        {
          if ( v57[1] )
          {
            v59 = v76;
            v62 = v57 + 2;
            while ( *v62 != v76 )
            {
              v61 = (unsigned int)(v61 + 1);
              ++v62;
              if ( (unsigned int)v61 >= v60 )
                goto LABEL_98;
            }
            *(_DWORD *)&v57[2 * v61 + 2] = v22;
LABEL_101:
            (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v70);
            goto LABEL_74;
          }
        }
        else if ( v57[1] )
        {
          v59 = v76;
          v63 = v57 + 2;
          while ( *v63 != v76 )
          {
            v61 = (unsigned int)(v61 + 1);
            v63 += 2;
            if ( (unsigned int)v61 >= v60 )
              goto LABEL_98;
          }
          *(_DWORD *)&v57[4 * v61 + 2] = v22;
          goto LABEL_101;
        }
LABEL_98:
        (*(void (__fastcall **)(ULONG_PTR, int *, __int64))(v7 + 16))(v7, &v70, v59);
        ++v56;
        if ( ++v73 >= v55 )
          goto LABEL_74;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *, _QWORD))(v7 + 16))(v7, &v70, 0LL);
LABEL_67:
      v8 = -1073741443;
      goto LABEL_55;
    }
  }
LABEL_74:
  *(_DWORD *)(v6 + 40) = v22;
  CmpCleanUpKcbValueCache(v6);
  v45 = *(unsigned int *)(v6 + 40);
  v46 = *(_QWORD *)(v6 + 32);
  v74 = -1;
  v47 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v46 + 8))(v46, v45, &v74);
  v48 = v47;
  if ( !v47 )
  {
LABEL_69:
    v8 = -1073741670;
    goto LABEL_55;
  }
  *(_DWORD *)(v6 + 96) = *(_DWORD *)(v47 + 36);
  *(_QWORD *)(v6 + 104) = *(unsigned int *)(v47 + 40);
  *(_WORD *)(v6 + 186) = *(_WORD *)(v47 + 2);
  CmpAssignSecurityToKcb(v6, *(unsigned int *)(v47 + 44), 0LL, 0LL, 0);
  CmpCleanUpSubKeyInfo(v6);
  *(_QWORD *)(v6 + 168) = *(_QWORD *)(v48 + 4);
  *(_WORD *)(v6 + 176) = *(_WORD *)(v48 + 52);
  *(_WORD *)(v6 + 178) = *(_WORD *)(v48 + 60);
  *(_DWORD *)(v6 + 180) = *(_DWORD *)(v48 + 64);
  *(_DWORD *)(v6 + 184) ^= (*(_DWORD *)(v6 + 184) ^ *(unsigned __int16 *)(v48 + 54)) & 0xF;
  *(_DWORD *)(v6 + 184) ^= ((unsigned __int8)*(_DWORD *)(v6 + 184) ^ (unsigned __int8)*(_WORD *)(v48 + 54)) & 0xF0;
  *(_BYTE *)(v6 + 185) = *(_BYTE *)(v48 + 55);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v74);
  v49 = v76;
  v50 = v76;
  *(_WORD *)(v6 + 4) = 64;
  if ( (unsigned __int8)CmpDeleteTree(v7, v50) )
    CmpFreeKeyByCell(v7, v49, 0, v51);
  CmpReportNotify(v6, *(_QWORD *)(v6 + 32), *(_DWORD *)(v6 + 40), 0LL, 1, (__int64)v85);
  if ( !BYTE5(NlsMbCodePageTag) )
  {
    CmpGlobalQuotaAllowed = CmpGlobalQuota;
    BYTE5(NlsMbCodePageTag) = 1;
  }
  CmpUnlockRegistry();
  CmpDestroyTemporaryHive(BugCheckParameter2);
  CmpSignalDeferredPosts(v85);
  v28 = 1;
LABEL_108:
  if ( v86 )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v82);
    goto LABEL_110;
  }
LABEL_112:
  if ( v79 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v72);
  if ( v28 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v64 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v64 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v65 = KeGetCurrentThread();
    v66 = v65->KernelApcDisable + 1;
    v65->KernelApcDisable = v66;
    if ( !v66
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v65->ApcState.ApcListHead[0].Flink != &v65->152
      && !v65->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
LABEL_121:
  CmpTraceHiveRestoreStop(v8);
  return (unsigned int)v8;
}
