/*
 * XREFs of CmDeleteValueKey @ 0x1403F9CF4
 * Callers:
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     sub_1406AF7F8 @ 0x1406AF7F8 (sub_1406AF7F8.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000AA14 (CmpTransEnlistUowInCmTrans.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
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
 *     CmpMarkValueDataDirty @ 0x1403FF334 (CmpMarkValueDataDirty.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404008CC (CmpFreeValueData.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14043F0C0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpRemoveValueFromList @ 0x1404BFE84 (CmpRemoveValueFromList.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1404C6364 (CmpCloneKCBValueListForTrans.c)
 *     CmpIsValueTombstone @ 0x1404CD800 (CmpIsValueTombstone.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpReportNotify @ 0x1404F7C30 (CmpReportNotify.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpSetValueKeyTombstone @ 0x1405FF3F4 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140602C04 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpGetValueForAudit @ 0x14060B408 (CmpGetValueForAudit.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  char v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  int started; // edi
  unsigned int v16; // r15d
  __int64 v17; // rdi
  __int16 v18; // r12
  __int64 KcbAtLayerHeight; // r14
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdi
  void *v23; // rbx
  char v24; // r14
  PVOID v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // r14
  __int64 v31; // r12
  ULONG_PTR v32; // rdx
  ULONG_PTR v33; // rcx
  int v34; // eax
  int v35; // r8d
  __int64 v36; // rdx
  _QWORD *UnitOfWork; // rax
  _QWORD *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // al
  unsigned int v44; // eax
  ULONG_PTR v45; // rdx
  __int16 v46; // [rsp+49h] [rbp-98h]
  PVOID P; // [rsp+50h] [rbp-91h]
  char v48; // [rsp+58h] [rbp-89h] BYREF
  BOOLEAN v49; // [rsp+59h] [rbp-88h]
  int v50; // [rsp+5Ch] [rbp-85h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-7Dh] BYREF
  __int64 v53; // [rsp+68h] [rbp-79h]
  char v54[8]; // [rsp+70h] [rbp-71h] BYREF
  int v55; // [rsp+78h] [rbp-69h] BYREF
  __int64 v56; // [rsp+80h] [rbp-61h] BYREF
  _WORD v57[16]; // [rsp+88h] [rbp-59h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-39h] BYREF
  char v59[8]; // [rsp+B0h] [rbp-31h] BYREF
  _QWORD *v60[2]; // [rsp+B8h] [rbp-29h] BYREF
  char v61[8]; // [rsp+C8h] [rbp-19h] BYREF
  PVOID v62; // [rsp+D0h] [rbp-11h] BYREF
  PVOID v63[12]; // [rsp+D8h] [rbp-9h] BYREF

  v4 = a1;
  v60[1] = v60;
  v5 = 0;
  v60[0] = v60;
  memset(v57, 0, sizeof(v57));
  v57[1] = -1;
  v6 = 0LL;
  v46 = 0;
  v7 = 0LL;
  P = 0LL;
  v48 = 0;
  v55 = 0;
  v56 = 0LL;
  HvpGetCellContextReinitialize((__int64)v59);
  HvpGetCellContextReinitialize((__int64)v61);
  v53 = 0LL;
  HvpGetCellContextReinitialize((__int64)v54);
  v50 = -1;
  v52 = -1;
  memset(v63, 0, 0x20uLL);
  v62 = 0LL;
LABEL_2:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v49 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v49 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    started = -1073741431;
LABEL_117:
    v23 = P;
LABEL_121:
    v24 = v46;
    goto LABEL_29;
  }
  v12 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry();
  v6 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 144LL) & 0x100000) != 0 )
  {
    started = -1073741790;
    goto LABEL_26;
  }
  started = CmpStartKcbStackForTopLayerKcb(v57, v6);
  if ( started < 0 )
    goto LABEL_119;
  CmpLockKcbStackTopExclusiveRestShared(v57);
  HIBYTE(v46) = 1;
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
LABEL_115:
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_26;
    }
    started = CmpTransSearchAddTransFromKeyBody(v4, &v56);
    if ( started < 0 )
      goto LABEL_119;
    LODWORD(v13) = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 144LL);
    if ( (v13 & 2) != 0 )
    {
      started = -1072103423;
LABEL_26:
      v23 = P;
      goto LABEL_27;
    }
  }
  v16 = v50;
  while ( 1 )
  {
    v17 = v56;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, v56) )
      goto LABEL_115;
    if ( v17 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      P = UnitOfWork;
      v38 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v24 = v46;
        started = -1073741670;
        v5 = 1;
        goto LABEL_32;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v6);
      started = CmpTransEnlistUowInCmTrans(v38, v17);
      if ( started < 0 )
      {
        v23 = v38;
        goto LABEL_120;
      }
      if ( !(unsigned __int8)CmpLockIXLockIntent(v6 + 240, v38)
        || !(unsigned __int8)CmpLockIXLockExclusive(v6 + 256, v38, 1LL) )
      {
        started = -1072103423;
        v23 = v38;
        goto LABEL_27;
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL), 1u);
      v17 = v56;
      v24 = 1;
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v6, v56, &v48) )
      {
        v23 = P;
        started = -1073741670;
        goto LABEL_28;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
      LOBYTE(v46) = 0;
      goto LABEL_12;
    }
    if ( *(int *)(v6 + 240) < 0 )
    {
      v39 = v6 + 240;
      goto LABEL_89;
    }
    if ( *(_DWORD *)(v6 + 256) )
    {
      v39 = v6 + 256;
LABEL_89:
      started = CmpSnapshotTxOwnerArray(v39, &v51, &v58);
      if ( started < 0 )
      {
LABEL_119:
        v23 = P;
LABEL_120:
        v5 = 1;
        goto LABEL_121;
      }
      CmpLogTransactionAborted(v6, 1u, v14, v51);
      CmpUnlockKcbStack(v57);
      HIBYTE(v46) = 0;
      CmpCleanupKcbStack(v57);
      memset(v57, 0, sizeof(v57));
      v57[1] = -1;
      CmpUnlockRegistry();
      v5 = 0;
      started = CmpRollbackTransactionArray(v51, v58, 0LL, &v55);
      if ( started < 0 )
        goto LABEL_117;
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v40, v41, v42);
      goto LABEL_2;
    }
LABEL_12:
    v18 = *(_WORD *)(v6 + 58);
    if ( v18 < 0 )
    {
LABEL_23:
      v22 = v53;
      goto LABEL_24;
    }
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v57, (unsigned __int16)v18);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, a1) == 1 )
      {
LABEL_22:
        v16 = v50;
        goto LABEL_23;
      }
      v20 = *(unsigned int *)(v13 + 32);
      if ( (_DWORD)v20 == -1 )
      {
        --v18;
        goto LABEL_21;
      }
      if ( v17 && *(_QWORD *)(KcbAtLayerHeight + 280) == v17 )
      {
        started = CmpFindNameInListWithStatus(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    (int)KcbAtLayerHeight + 272,
                    (_DWORD)a2,
                    0,
                    (__int64)&v52,
                    (__int64)&v50);
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                *(_QWORD *)(KcbAtLayerHeight + 24),
                v20,
                v61);
        started = CmpFindNameInListWithStatus(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    v21 + 36,
                    (_DWORD)a2,
                    0,
                    (__int64)&v52,
                    (__int64)&v50);
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
          *(_QWORD *)(KcbAtLayerHeight + 24),
          v61);
      }
      if ( started >= 0 )
        break;
      if ( started != -1073741772 )
        goto LABEL_119;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, a1) )
        goto LABEL_22;
      --v18;
LABEL_21:
      if ( v18 < 0 )
        goto LABEL_22;
      v17 = v56;
    }
    v16 = v50;
    v22 = KcbAtLayerHeight;
    v53 = KcbAtLayerHeight;
LABEL_24:
    if ( v16 == -1 )
    {
      started = -1073741772;
      goto LABEL_26;
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v22 + 24) + 8LL))(
            *(_QWORD *)(v22 + 24),
            v16,
            v54);
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v22 + 24), v30) )
    {
      started = -1073741772;
      goto LABEL_111;
    }
    (*(void (__fastcall **)(__int64, char *))(v14 + 16))(v13, v54);
    v30 = 0LL;
    if ( *(_DWORD *)(v6 + 32) != -1 )
      break;
    CmpUnlockKcbStack(v57);
    HIBYTE(v46) = 0;
    started = CmpPromoteKey((__int64)v57, 0, 1);
    if ( started < 0 )
      goto LABEL_119;
    v4 = a1;
    HIBYTE(v46) = 1;
  }
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL), 1u);
  v31 = v56;
  LOBYTE(v46) = 1;
  if ( !v56 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32)) )
  {
    v24 = 1;
    started = -1073741443;
    v23 = P;
    v5 = 1;
    goto LABEL_29;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v6 + 24) + 8LL))(
         *(_QWORD *)(v6 + 24),
         *(unsigned int *)(v6 + 32),
         v59);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v6 + 24), v7, *(unsigned int *)(v6 + 32));
  if ( !a4 )
    goto LABEL_55;
  started = CmpSnapshotKcbStackSecurity(v57, v31, 843140419LL, &v62);
  if ( started < 0 || (started = CmpGetValueForAudit(*(_QWORD *)(v53 + 24), v16, v63, 826363203LL), started < 0) )
  {
LABEL_97:
    v23 = P;
    goto LABEL_67;
  }
  v22 = v53;
LABEL_55:
  if ( v31 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v6 + 24) + 16LL))(*(_QWORD *)(v6 + 24), v59);
    v7 = 0LL;
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
    LOBYTE(v46) = 0;
    v23 = P;
    *((_DWORD *)P + 17) = 6;
    *((_DWORD *)P + 22) = v16;
    started = CmAddLogForAction(P);
    if ( started < 0 )
      goto LABEL_120;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL), 1u);
    CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), v52, v6 + 272);
    goto LABEL_64;
  }
  v32 = *(unsigned int *)(v6 + 32);
  v33 = *(_QWORD *)(v6 + 24);
  if ( *(_WORD *)(v6 + 58) )
  {
    v43 = HvpMarkCellDirty(v33, v32);
    if ( v6 == v22 )
    {
      if ( v43 && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v16) )
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v6 + 24) + 8LL))(
                *(_QWORD *)(v6 + 24),
                v16,
                v54);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v6 + 24)) )
        {
          CmpFreeValueData(*(_QWORD *)(v6 + 24), *(unsigned int *)(v30 + 8));
          *(_DWORD *)(v30 + 8) = -1;
          *(_WORD *)(v30 + 16) |= 2u;
          *(_DWORD *)(v30 + 12) = 0;
          *(_DWORD *)(v30 + 4) = 0;
          *(_QWORD *)(v7 + 4) = v12;
          *(_QWORD *)(v6 + 160) = v12;
          goto LABEL_63;
        }
        goto LABEL_98;
      }
      goto LABEL_96;
    }
    if ( !v43 )
    {
LABEL_96:
      started = -1073741443;
      goto LABEL_97;
    }
    started = CmpSetValueKeyTombstone(
                *(_QWORD *)(v6 + 24),
                v7,
                (_DWORD)a2,
                *(_DWORD *)(v7 + 36),
                *(_DWORD *)(v6 + 32) >> 31);
    if ( started < 0 )
      goto LABEL_97;
    *(_QWORD *)(v7 + 4) = v12;
    *(_QWORD *)(v6 + 160) = v12;
    v44 = (unsigned __int16)*a2;
    if ( *(_DWORD *)(v7 + 60) < v44 )
    {
      *(_DWORD *)(v7 + 60) = v44;
      *(_WORD *)(v6 + 170) = *a2;
    }
LABEL_63:
    CmpCleanUpKcbValueCache(v6);
    v34 = *(_DWORD *)(v7 + 36);
    *(_QWORD *)(v6 + 96) = *(unsigned int *)(v7 + 40);
    *(_DWORD *)(v6 + 88) = v34;
LABEL_64:
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
    v35 = *(_DWORD *)(v6 + 32);
    v36 = *(_QWORD *)(v6 + 24);
    started = 0;
    LOBYTE(v46) = 0;
    v23 = 0LL;
    v48 = 0;
    CmpReportNotify(v6, v36, v35, v31, 4, (__int64)v60);
    goto LABEL_65;
  }
  if ( !(unsigned __int8)HvpMarkCellDirty(v33, v32)
    || !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v7 + 40))
    || !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v16) )
  {
    goto LABEL_96;
  }
  v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v22 + 24) + 8LL))(
          *(_QWORD *)(v22 + 24),
          v16,
          v54);
  if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v22 + 24)) )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v22 + 24) + 16LL))(*(_QWORD *)(v22 + 24), v54);
    v30 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), v52, v7 + 36);
    CmpFreeValue(*(_QWORD *)(v6 + 24), v16);
    *(_QWORD *)(v7 + 4) = v12;
    *(_QWORD *)(v6 + 160) = v12;
    if ( !*(_DWORD *)(v7 + 36) )
    {
      *(_DWORD *)(v7 + 60) = 0;
      *(_WORD *)(v6 + 170) = 0;
      *(_DWORD *)(v7 + 64) = 0;
      *(_DWORD *)(v6 + 172) = 0;
    }
    goto LABEL_63;
  }
LABEL_98:
  started = -1073741443;
LABEL_111:
  v23 = P;
LABEL_65:
  if ( v30 )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v53 + 24) + 16LL))(*(_QWORD *)(v53 + 24), v54);
LABEL_67:
  if ( v7 )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v6 + 24) + 16LL))(*(_QWORD *)(v6 + 24), v59);
LABEL_27:
  v24 = v46;
LABEL_28:
  v5 = 1;
LABEL_29:
  if ( v23 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v23);
    ExFreePoolWithTag(v23, 0x77554D43u);
  }
  v4 = a1;
LABEL_32:
  if ( v48 )
  {
    v45 = *(unsigned int *)(v6 + 276);
    if ( (_DWORD)v45 != -1 )
      HvFreeCell(*(_QWORD *)(v6 + 24), v45);
    *(_DWORD *)(v6 + 276) = -1;
    *(_DWORD *)(v6 + 272) = 0;
    *(_QWORD *)(v6 + 280) = 0LL;
  }
  if ( v24 )
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 2848LL));
  if ( HIBYTE(v46) )
    CmpUnlockKcbStack(v57);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v60[0] != v60 )
    CmpSignalDeferredPosts(v60);
  v25 = v62;
  if ( started >= 0 && a4 && v62 )
    SeAdtRegistryValueChangedAuditAlarm(v13, (_DWORD)v62, v14, (_DWORD)a2, v4, a3, (__int64)v63, 2);
  if ( v63[1] )
    CmpFreeTransientPoolWithTag(v63[1], 0x34414D43u);
  if ( v25 )
    CmpFreeTransientPoolWithTag(v25, 0x33414D43u);
  if ( v49 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
  }
  CmpCleanupKcbStack(v57);
  return (unsigned int)started;
}
