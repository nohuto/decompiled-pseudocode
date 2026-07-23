/*
 * XREFs of CmSetValueKey @ 0x140402670
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmpSyncNextBackupHive @ 0x140604DDC (CmpSyncNextBackupHive.c)
 *     ExReArmFastCache @ 0x1406AE194 (ExReArmFastCache.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1406AF7F8 @ 0x1406AF7F8 (sub_1406AF7F8.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     CmpSwapValueInList @ 0x1400B2914 (CmpSwapValueInList.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     CmpLogTransactionAborted @ 0x140135C24 (CmpLogTransactionAborted.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpSetValueKeyNew @ 0x1404009D0 (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140401954 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpIsKeyStackSymlink @ 0x140402638 (CmpIsKeyStackSymlink.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpRemoveValueFromList @ 0x1404BFE84 (CmpRemoveValueFromList.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1404C6364 (CmpCloneKCBValueListForTrans.c)
 *     CmpIsValueTombstone @ 0x1404CD800 (CmpIsValueTombstone.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140602C04 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x14060B408 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(__int64 a1, UNICODE_STRING *a2, int a3, void *a4, size_t a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  char v8; // r14
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // r8
  int started; // edi
  char v18; // r14
  char v19; // r12
  __int64 v20; // r12
  int v21; // edi
  __int64 v22; // rdi
  int v23; // eax
  _QWORD *v24; // rbx
  PVOID v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // r14
  unsigned int *v31; // rdx
  int NameInListWithStatus; // eax
  unsigned int v33; // r15d
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  unsigned int Length; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // r8d
  __int64 v40; // rdx
  unsigned int v41; // r15d
  __int64 v42; // rax
  _QWORD *UnitOfWork; // rax
  _QWORD *v44; // r15
  int v45; // eax
  int v46; // edi
  ULONG_PTR v47; // rcx
  unsigned int *v48; // rbx
  unsigned int v49; // r12d
  _DWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  BOOL v56; // edi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  ULONG_PTR v60; // rdx
  int Srca; // [rsp+28h] [rbp-D1h]
  void *Src; // [rsp+28h] [rbp-D1h]
  size_t Size; // [rsp+30h] [rbp-C9h]
  size_t v64; // [rsp+38h] [rbp-C1h]
  char v65; // [rsp+48h] [rbp-B1h]
  __int16 v66; // [rsp+4Ah] [rbp-AFh] BYREF
  PVOID P; // [rsp+50h] [rbp-A9h]
  int v68; // [rsp+58h] [rbp-A1h]
  int v69; // [rsp+5Ch] [rbp-9Dh]
  unsigned int v70; // [rsp+60h] [rbp-99h] BYREF
  int v71; // [rsp+64h] [rbp-95h] BYREF
  unsigned int v72; // [rsp+68h] [rbp-91h] BYREF
  BOOL v73; // [rsp+6Ch] [rbp-8Dh]
  __int64 v74; // [rsp+70h] [rbp-89h] BYREF
  __int64 v75; // [rsp+78h] [rbp-81h] BYREF
  _WORD v76[16]; // [rsp+80h] [rbp-79h] BYREF
  _BYTE v77[8]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-51h] BYREF
  _BYTE v79[8]; // [rsp+B0h] [rbp-49h] BYREF
  _QWORD *v80[2]; // [rsp+B8h] [rbp-41h] BYREF
  PVOID v81; // [rsp+C8h] [rbp-31h] BYREF
  PVOID v82[13]; // [rsp+D0h] [rbp-29h] BYREF

  v7 = a1;
  v80[1] = v80;
  v8 = 0;
  v80[0] = v80;
  memset(v76, 0, sizeof(v76));
  v65 = 0;
  v76[1] = -1;
  v9 = 0LL;
  v66 = 0;
  P = 0LL;
  LODWORD(v74) = 0;
  v75 = 0LL;
  HvpGetCellContextReinitialize((__int64)v79);
  HvpGetCellContextReinitialize((__int64)v77);
  v71 = -1;
  v68 = -1;
  memset(v82, 0, 0x20uLL);
  v81 = 0LL;
  v73 = 0;
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LOBYTE(v69) = ExAcquireRundownProtection(&CmpShutdownRundown);
    if ( !(_BYTE)v69 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
      v24 = P;
      started = -1073741431;
      v19 = 0;
      goto LABEL_26;
    }
    v14 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(v7 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 144LL) & 0x100000) != 0 )
    {
LABEL_98:
      started = -1073741790;
LABEL_23:
      v24 = P;
LABEL_24:
      v19 = v65;
      goto LABEL_25;
    }
    started = CmpStartKcbStackForTopLayerKcb(v76, v9);
    if ( started < 0 )
    {
LABEL_134:
      v19 = v65;
      goto LABEL_135;
    }
    if ( *(_QWORD *)(v7 + 56) || *(_QWORD *)(v7 + 64) )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)v76);
      v19 = 1;
      v65 = 1;
      v18 = 1;
    }
    else
    {
      CmpLockKcbStackShared(v76);
      v65 = 1;
      v18 = 0;
      v19 = 1;
    }
    if ( !*(_QWORD *)(v7 + 56) && !*(_QWORD *)(v7 + 64) )
      goto LABEL_10;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, 0LL) )
    {
      started = (*(_BYTE *)(v7 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_132;
    }
    started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v7, &v75);
    if ( started < 0 )
    {
LABEL_135:
      v8 = 1;
      break;
    }
    v15 = *(_DWORD *)(*(_QWORD *)(v9 + 24) + 144LL);
    if ( (v15 & 2) != 0 )
    {
      started = -1072103423;
LABEL_132:
      v24 = P;
LABEL_25:
      v8 = 1;
      goto LABEL_26;
    }
LABEL_10:
    v20 = v75;
    while ( 1 )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, v20) )
      {
        started = (*(_BYTE *)(v7 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_23;
      }
      if ( *(_BYTE *)(v9 + 57) == 1 )
        goto LABEL_98;
      if ( v20 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        P = UnitOfWork;
        v44 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v19 = 1;
          started = -1073741670;
          v8 = 1;
          goto LABEL_28;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans(v44, v20);
        if ( started < 0 )
          goto LABEL_134;
        if ( !CmpLockIXLockIntent((unsigned int *)(v9 + 240), (__int64)v44) || !CmpLockIXLockExclusive(v9 + 256, v44, 1) )
        {
          started = -1072103423;
          goto LABEL_128;
        }
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
        LOBYTE(v66) = 1;
        if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v9, v20, (char *)&v66 + 1) )
        {
          started = -1073741670;
LABEL_128:
          v24 = v44;
          goto LABEL_24;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
        v7 = a1;
        LOBYTE(v66) = 0;
        goto LABEL_16;
      }
      if ( *(int *)(v9 + 240) < 0 )
        break;
      if ( *(_DWORD *)(v9 + 256) )
      {
        v51 = v9 + 256;
        goto LABEL_107;
      }
LABEL_16:
      if ( CmpIsKeyStackSymlink((__int64)v76) )
      {
        if ( a3 != 6 )
          goto LABEL_98;
        v21 = a5;
        if ( (a5 & 1) != 0
          || (unsigned int)a5 > 0xFFFF
          || !a2
          || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, a2, 1u)
          || (unsigned __int8)RtlIsSandboxedToken(0LL) )
        {
          goto LABEL_98;
        }
      }
      else
      {
        v21 = a5;
      }
      if ( *(_DWORD *)(v9 + 32) == -1 )
      {
        CmpUnlockKcbStack(v76);
        v65 = 0;
        started = CmpPromoteKey((__int64)v76, 0, 1);
        if ( started < 0 )
          goto LABEL_134;
        v65 = 1;
        v18 = 1;
      }
      else
      {
        if ( v18 )
        {
          v22 = (__int64)a2;
          goto LABEL_49;
        }
        Srca = v21;
        v22 = (__int64)a2;
        v23 = CmpCompareNewValueDataAgainstKCBCache(v9, (__int64)a2, a3, a4, Srca);
        if ( v23 != 1 )
        {
          if ( !v23 )
          {
            started = 0;
            goto LABEL_23;
          }
          v18 = 1;
          if ( *(struct _KTHREAD **)(v9 + 48) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(v9) )
          {
            CmpUnlockKcbStack(v76);
            CmpLockKcbStackTopExclusiveRestShared((__int64)v76);
            goto LABEL_10;
          }
          v20 = v75;
LABEL_49:
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
          LOBYTE(v66) = 1;
          if ( !v20 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v9 + 24), *(unsigned int *)(v9 + 32)) )
          {
            started = -1073741443;
            goto LABEL_23;
          }
          v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                  *(_QWORD *)(v9 + 24),
                  *(unsigned int *)(v9 + 32),
                  v79);
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 24), v30, *(_DWORD *)(v9 + 32));
          v31 = (unsigned int *)(v9 + 272);
          if ( !v20 )
            v31 = (unsigned int *)(v30 + 36);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v9 + 24),
                                   v31,
                                   v22,
                                   0,
                                   (__int64)&v72,
                                   (__int64)&v71);
          v15 = 0x80000000;
          started = NameInListWithStatus;
          if ( (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772 )
          {
            v33 = v71;
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(v76, v20, 859917635LL, &v81);
              if ( started < 0 )
                goto LABEL_124;
              if ( v33 == -1 )
              {
                v73 = 0;
              }
              else
              {
                v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                        *(_QWORD *)(v9 + 24),
                        v33,
                        v77);
                v56 = (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v9 + 24), v55) == 0;
                v73 = v56;
                (*(void (__fastcall **)(__int64, _BYTE *))(v58 + 16))(v57, v77);
                if ( v56 )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v9 + 24), v33, v82, 876694851LL);
                  if ( started < 0 )
                    goto LABEL_124;
                }
              }
            }
            v34 = *(_DWORD *)(v9 + 32) >> 31;
            if ( v20 )
            {
              LODWORD(Src) = a5;
              v45 = CmpAddValueKeyNew(*(_QWORD *)(v9 + 24), &a2->Length, a3, (char *)a4, (size_t)Src, 1u);
              v68 = v45;
              v46 = v45;
              if ( v45 == -1 )
              {
                started = -1073741670;
                v41 = -1;
                goto LABEL_125;
              }
              v47 = *(_QWORD *)(v9 + 24);
              v48 = (unsigned int *)(v9 + 272);
              if ( v33 == -1 )
              {
                v49 = *v48;
                started = CmpAddValueToListEx(v47, v45, *v48, 1u, (unsigned int *)(v9 + 272), 1);
                if ( started < 0 )
                  goto LABEL_124;
                v46 = v68;
              }
              else
              {
                v49 = v72;
                CmpSwapValueInList(v47, v45, v72, v9 + 272);
              }
              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
              v50 = P;
              LOBYTE(v66) = 0;
              if ( v33 == -1 )
              {
                *((_DWORD *)P + 17) = 4;
              }
              else
              {
                *((_DWORD *)P + 17) = 5;
                v50[22] = v33;
              }
              v50[18] = v34;
              v50[23] = v46;
              started = CmAddLogForAction(v50);
              if ( started < 0 )
              {
                if ( v30 )
                {
                  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v79);
                  v30 = 0LL;
                }
                ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL), 1u);
                v59 = *(_QWORD *)(v9 + 24);
                if ( v33 == -1 )
                  CmpRemoveValueFromList(v59, v49, v9 + 272);
                else
                  CmpSwapValueInList(v59, v33, v49, v9 + 272);
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
                LOBYTE(v66) = 0;
                goto LABEL_124;
              }
              LODWORD(v20) = v75;
            }
            else
            {
              if ( v33 == -1 )
              {
                v35 = a5;
                LODWORD(v64) = a5;
                started = CmpSetValueKeyNew(
                            *(_QWORD *)(v9 + 24),
                            v30,
                            (__int64)a2,
                            v72,
                            a3,
                            (__int64)a4,
                            v64,
                            *(_DWORD *)(v9 + 32) >> 31);
                if ( started < 0 )
                  goto LABEL_124;
              }
              else
              {
                v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 8LL))(
                        *(_QWORD *)(v9 + 24),
                        v33,
                        v77);
                LODWORD(Size) = a5;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 24), v33, v42, a3, (char *)a4, Size, v34);
                (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v77);
                if ( started < 0 )
                  goto LABEL_124;
                v35 = a5;
              }
              Length = a2->Length;
              if ( *(_DWORD *)(v30 + 60) < Length )
              {
                *(_DWORD *)(v30 + 60) = Length;
                *(_WORD *)(v9 + 170) = a2->Length;
              }
              if ( *(_DWORD *)(v30 + 64) < v35 )
              {
                *(_DWORD *)(v30 + 64) = v35;
                *(_DWORD *)(v9 + 172) = v35;
              }
              *(_QWORD *)(v30 + 4) = v14;
              *(_QWORD *)(v9 + 160) = v14;
              CmpCleanUpKcbValueCache(v9);
              v37 = *(_DWORD *)(v30 + 36);
              *(_QWORD *)(v9 + 96) = *(unsigned int *)(v30 + 40);
              v38 = *(_QWORD *)(v9 + 24);
              *(_DWORD *)(v9 + 88) = v37;
              ExReleaseResourceLite(*(PERESOURCE *)(v38 + 2848));
              LOBYTE(v66) = 0;
            }
            v39 = *(_DWORD *)(v9 + 32);
            v40 = *(_QWORD *)(v9 + 24);
            v24 = 0LL;
            v41 = -1;
            HIBYTE(v66) = 0;
            CmpReportNotify(v9, v40, v39, v20, 4, (__int64)v80);
            started = 0;
          }
          else
          {
LABEL_124:
            v41 = v68;
LABEL_125:
            v24 = P;
          }
          if ( v30 )
            (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), v79);
          if ( v41 != -1 )
            CmpFreeValue(*(_QWORD *)(v9 + 24), v41);
          goto LABEL_24;
        }
        CmpUnlockKcbStack(v76);
        CmpLockKcbStackTopExclusiveRestShared((__int64)v76);
      }
    }
    v51 = v9 + 240;
LABEL_107:
    v19 = 0;
    started = CmpSnapshotTxOwnerArray(v51, &v70, &v78);
    if ( started < 0 )
      goto LABEL_134;
    CmpLogTransactionAborted(v9, 1u, v16, v70);
    CmpUnlockKcbStack(v76);
    v65 = 0;
    CmpCleanupKcbStack(v76);
    memset(v76, 0, sizeof(v76));
    v76[1] = -1;
    CmpUnlockRegistry();
    v8 = 0;
    started = CmpRollbackTransactionArray(v70, v78, 0LL, &v74);
    if ( started >= 0 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v52, v53, v54);
      continue;
    }
    break;
  }
  v24 = P;
LABEL_26:
  if ( v24 )
  {
    CmpRundownUnitOfWork(v24);
    ExFreePoolWithTag(v24, 0x77554D43u);
  }
LABEL_28:
  if ( HIBYTE(v66) )
  {
    v60 = *(unsigned int *)(v9 + 276);
    if ( (_DWORD)v60 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 24), v60);
    *(_DWORD *)(v9 + 276) = -1;
    *(_DWORD *)(v9 + 272) = 0;
    *(_QWORD *)(v9 + 280) = 0LL;
  }
  if ( (_BYTE)v66 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 24) + 2848LL));
  if ( v19 )
    CmpUnlockKcbStack(v76);
  if ( v8 )
    CmpUnlockRegistry();
  if ( v80[0] != v80 )
    CmpSignalDeferredPosts(v80);
  v25 = v81;
  if ( started >= 0 && a7 && v81 )
  {
    v82[2] = (PVOID)__PAIR64__(a5, a3);
    v82[3] = a4;
    SeAdtRegistryValueChangedAuditAlarm(v15, (_DWORD)v81, v16, (_DWORD)a2, a1, a6, (__int64)v82, v73);
  }
  if ( v82[1] )
    CmpFreeTransientPoolWithTag(v82[1], 0x34414D43u);
  if ( v25 )
    CmpFreeTransientPoolWithTag(v25, 0x33414D43u);
  if ( (_BYTE)v69 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
  }
  CmpCleanupKcbStack(v76);
  return (unsigned int)started;
}
