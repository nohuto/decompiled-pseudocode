/*
 * XREFs of CmpFlushHive @ 0x14044B9C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x1401170FC (CmpDoFlushAll.c)
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x1403DE1A0 (CmpDoFlushNextHive.c)
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmpTransMgrSyncHive @ 0x1404C4668 (CmpTransMgrSyncHive.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x140038EB0 (CmpArmLazyWriter.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     RtlMergeBitMaps @ 0x1400E1998 (RtlMergeBitMaps.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvFreeDirtyData @ 0x1403BA3D4 (HvFreeDirtyData.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvWriteLogFile @ 0x1403D27F0 (HvWriteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1403D4084 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpGenerateFlushControlData @ 0x1403D4100 (CmpGenerateFlushControlData.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1403D43F4 (HvpLogTypeToLogArrayIndex.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     HvUpdateUnreconciledVector @ 0x1404A5B34 (HvUpdateUnreconciledVector.c)
 *     CmpLogFlushPhaseEnd @ 0x1404B6844 (CmpLogFlushPhaseEnd.c)
 *     CmpLogFlushPhaseStart @ 0x1404B77AC (CmpLogFlushPhaseStart.c)
 *     HvFreeUnreconciledData @ 0x1404B9E34 (HvFreeUnreconciledData.c)
 *     CmpReleaseWriteQueue @ 0x1404BDCDC (CmpReleaseWriteQueue.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404BF534 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvSwapLogFiles @ 0x1404BF75C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1404C2844 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404C4358 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1404C4490 (HvResetLogFileStatusAll.c)
 *     CmpBoostActiveHiveWriter @ 0x1404C5F60 (CmpBoostActiveHiveWriter.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405E3728 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x1405E68E8 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x1405E69A4 (HvFoldBackUnreconciledData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  int v2; // esi
  unsigned int v3; // ebx
  __int64 v5; // r12
  int v6; // eax
  REGHANDLE v7; // rbx
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // r13d
  char v15; // al
  struct _FAST_MUTEX *v16; // rcx
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // esi
  unsigned int v22; // r13d
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _KEVENT *v28; // rax
  struct _ERESOURCE *v29; // rcx
  __int64 v30; // rdx
  struct _KEVENT *v31; // r15
  struct _KEVENT *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // r9d
  _DWORD *v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  ULONGLONG v47; // rax
  unsigned int v48; // r9d
  __int64 v49; // rax
  unsigned int v50; // r9d
  ULONGLONG v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // r9d
  __int64 v55; // rax
  REGHANDLE v56; // rcx
  int v57; // eax
  unsigned int v58; // ebx
  __int64 v59; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v61; // rbx
  struct _LIST_ENTRY *v62; // rbx
  struct _LIST_ENTRY *v63; // rbx
  struct _LIST_ENTRY *v64; // rbx
  struct _LIST_ENTRY *v65; // rbx
  __int16 v66; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v67; // [rsp+38h] [rbp-C8h] BYREF
  int v68; // [rsp+3Ch] [rbp-C4h]
  int v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+48h] [rbp-B8h]
  unsigned int v71; // [rsp+4Ch] [rbp-B4h]
  int v72; // [rsp+58h] [rbp-A8h]
  unsigned int v73; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v74; // [rsp+60h] [rbp-A0h]
  int v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+78h] [rbp-88h] BYREF
  int v78; // [rsp+80h] [rbp-80h] BYREF
  int v79; // [rsp+84h] [rbp-7Ch] BYREF
  int v80; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR v82; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+138h] [rbp+38h]
  __int64 v88; // [rsp+140h] [rbp+40h]
  _DWORD v89[2]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD *v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  __int64 v92; // [rsp+160h] [rbp+60h]
  _DWORD v93[2]; // [rsp+168h] [rbp+68h] BYREF
  int *v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v96; // [rsp+180h] [rbp+80h] BYREF
  int *v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  int *v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  EVENT_DATA_DESCRIPTOR v101; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v102; // [rsp+1E0h] [rbp+E0h]
  __int64 v103; // [rsp+1E8h] [rbp+E8h]

  v2 = 0;
  v3 = a2;
  v73 = 0;
  LODWORD(v5) = 0;
  if ( stru_1402CFD30.LevelPlus1 > 4 )
  {
    v76 = a2;
    v86 = v89;
    v88 = *(_QWORD *)(BugCheckParameter2 + 3032);
    v89[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
    v90 = v93;
    v92 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v93[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
    v94 = (int *)&v76;
    v87 = 2LL;
    v89[1] = 0;
    v91 = 2LL;
    v93[1] = 0;
    v95 = 4LL;
    TlgWrite(&stru_1402CFD30, &unk_14025353C, 0LL, 0LL, 7u, &pData);
  }
  v77 = v3;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v47 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v48 = 0;
    v66 = 0;
    if ( v47 )
    {
      UserData[0].Ptr = v47;
      v48 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
      UserData[0].Reserved = 0;
    }
    v49 = v48;
    v50 = v48 + 1;
    UserData[v49].Ptr = (ULONGLONG)&v66;
    *(_QWORD *)&UserData[v49].Size = 2LL;
    v51 = *(_QWORD *)(BugCheckParameter2 + 3032);
    if ( v51 )
    {
      v52 = v50++;
      UserData[v52].Ptr = v51;
      UserData[v52].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
      *(&UserData[0].Reserved + 1 * v52) = 0;
    }
    v53 = v50;
    v54 = v50 + 1;
    UserData[v53].Ptr = (ULONGLONG)&v66;
    *(_QWORD *)&UserData[v53].Size = 2LL;
    v55 = v54;
    UserData[v55].Ptr = (ULONGLONG)&v77;
    v56 = EtwpRegTraceHandle;
    *(_QWORD *)&UserData[v55].Size = 4LL;
    EtwWrite(v56, &EventDescriptor, 0LL, v54 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_5;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2664) )
  {
    LODWORD(v5) = -1073741811;
    goto LABEL_5;
  }
  if ( (v6 & 2) != 0 )
    v3 |= 0xCu;
  v9 = 0;
  v10 = v3 & 1;
  v72 = v10;
  v74 = (v3 & 0x10) != 0;
  while ( 1 )
  {
    if ( v10 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    if ( (v3 & 2) != 0 )
    {
      v11 = *(_DWORD *)(BugCheckParameter2 + 5488);
      if ( (v11 & 2) != 0 || (v3 & 4) == 0 && (v11 & 1) != 0 )
      {
LABEL_19:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        LODWORD(v5) = 0;
        goto LABEL_5;
      }
    }
    if ( (v3 & 4) != 0 && (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) != 0 )
      goto LABEL_86;
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) == 0 )
      break;
    if ( (v3 & 4) == 0 )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 88) || (v2 = 2, *(_BYTE *)(BugCheckParameter2 + 175)) )
        v2 = 1;
    }
    LODWORD(v5) = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5440, v3);
    if ( (int)v5 >= 0 )
      v9 += v2;
    v2 = 0;
LABEL_129:
    if ( v9 >= 2 )
      goto LABEL_5;
    v10 = v72;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v3, (int *)&v67);
  v12 = v67;
  v13 = 4LL;
  if ( stru_1402CFD30.LevelPlus1 > 4 )
  {
    v79 = v69;
    v97 = &v80;
    v99 = &v79;
    v80 = v67;
    v98 = 4LL;
    v100 = 4LL;
    TlgWrite(&stru_1402CFD30, &unk_1402534F1, 0LL, 0LL, 4u, &v96);
  }
  if ( (v12 & 0x358) == 0 )
    goto LABEL_19;
  if ( (v12 & 2) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 5488) |= 2u;
      v12 = v67;
      *(_QWORD *)(BugCheckParameter2 + 5464) = KeGetCurrentThread();
      goto LABEL_28;
    }
LABEL_86:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5464, v3);
    goto LABEL_129;
  }
  if ( (v12 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(v13, BugCheckParameter2 + 5464);
LABEL_28:
  if ( (v12 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) |= 1u;
    v12 = v67;
    *(_QWORD *)(BugCheckParameter2 + 5440) = KeGetCurrentThread();
  }
  v14 = (v12 >> 6) & 1;
  if ( (v12 & 8) == 0 )
  {
LABEL_33:
    if ( (v12 & 0x158) != 0 )
      v17 = HvStoreModifiedData(BugCheckParameter2, (v12 & 0x110) != 0, ((v12 >> 6) & 1) != 0);
    else
      v17 = 0;
    if ( v17 )
    {
      v57 = v17 - 1;
      if ( !v57 )
      {
        LODWORD(v5) = 0;
        LOBYTE(v21) = v68 | 2;
        goto LABEL_72;
      }
      LODWORD(v5) = -1073741823;
      if ( v57 == 1 )
        goto LABEL_133;
    }
    if ( (v12 & 0x80u) != 0 )
    {
      v58 = *(_DWORD *)(BugCheckParameter2 + 1400);
      v18 = *(_DWORD *)(BugCheckParameter2 + 5492);
      if ( v58 > v18 )
      {
        v19 = v58 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
LABEL_38:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        if ( (v12 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 1LL);
          v22 = v74;
          LODWORD(v5) = HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v19, v74);
          CmpLogFlushPhaseEnd(v59, 1LL, (unsigned int)v5);
          LOBYTE(v21) = v68;
          if ( (int)v5 < 0 )
            goto LABEL_57;
          v21 = v68 | 0x21;
          v68 |= 0x21u;
        }
        else
        {
          v21 = v68;
          v22 = v74;
        }
        if ( (v12 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 2LL);
          v5 = (unsigned int)HvWriteLogFile(BugCheckParameter2, 1, v23, &v73);
          CmpLogFlushPhaseEnd(v24, 2LL, v5);
          if ( (int)v5 < 0 )
            goto LABEL_57;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          v21 |= 2u;
          v68 = v21;
        }
        if ( (v12 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 3LL);
          LOBYTE(v39) = 1;
          v5 = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v39, v22);
          CmpLogFlushPhaseEnd(v40, 3LL, v5);
          if ( (int)v5 < 0 )
          {
            v12 |= 0x400u;
            goto LABEL_57;
          }
          v21 |= 0x20u;
          v68 = v21;
        }
        CmpLogFlushPhaseStart(v20, 4LL);
        if ( (v12 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 2904, BugCheckParameter2 + 2856);
          HvFreeDirtyData(BugCheckParameter2);
          v21 |= 4u;
          v68 = v21;
        }
        CmpLogFlushPhaseEnd(v25, 4LL, (unsigned int)v5);
        if ( (v12 & 0x20) != 0 )
        {
          HvSwapLogFiles(BugCheckParameter2, ((unsigned __int8)v69 >> 2) & 1);
          v21 |= 8u;
          v68 = v21;
        }
        if ( (v12 & 0x45) == 0x41 )
        {
          if ( v72 )
            CmpLockRegistry();
          else
            CmpLockRegistryFreezeAware(0);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
          v28 = (struct _KEVENT *)CmpReleaseWriteQueue(v27, BugCheckParameter2 + 5440);
          if ( (v21 & 2) != 0 )
          {
            if ( v28 )
            {
              do
              {
                Flink = v28[1].Header.WaitListHead.Flink;
                v28[1].Header.LockNV = v5;
                KeSetEvent(v28, 0, 0);
                v28 = (struct _KEVENT *)Flink;
              }
              while ( Flink );
            }
          }
          else if ( v28 )
          {
            do
            {
              v61 = v28[1].Header.WaitListHead.Flink;
              v28[1].Header.LockNV = -1073741823;
              KeSetEvent(v28, 0, 0);
              v28 = (struct _KEVENT *)v61;
            }
            while ( v61 );
          }
          v29 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
          v21 |= 0x10u;
          *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
          v68 = v21;
          ExReleaseResourceLite(v29);
          CmpUnlockRegistry();
        }
        if ( (v12 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v26, 5LL);
          LOBYTE(v33) = 1;
          v5 = (unsigned int)HvWriteHivePrimaryFile(BugCheckParameter2, v33, v22, v34);
          CmpLogFlushPhaseEnd(v35, 5LL, v5);
          if ( (int)v5 < 0 )
            goto LABEL_57;
          v21 |= 0x20u;
          v68 = v21;
        }
        if ( (v12 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v26, 6LL);
          LOBYTE(v41) = 1;
          LOBYTE(v42) = 1;
          v5 = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v42, v41, v22);
          CmpLogFlushPhaseEnd(v43, 6LL, v5);
          if ( (int)v5 < 0 )
            goto LABEL_57;
          v21 |= 0x20u;
          v68 = v21;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (v12 & 0x200) != 0 && (v21 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v26, 7LL);
          if ( CmpFileFlushAndPurge(BugCheckParameter2, 0) )
          {
            v21 |= 0x20u;
            v68 = v21;
          }
          CmpLogFlushPhaseEnd(v38, 7LL, (v68 & 0x20) == 0 ? 0xC0000001 : 0);
        }
LABEL_57:
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        if ( (int)v5 < 0 && (v12 & 0x80u) != 0 && (v21 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v18;
        if ( (v21 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
          *(_DWORD *)(BugCheckParameter2 + 5488) |= 4u;
        }
        if ( (int)v5 < 0 )
        {
          if ( (v21 & 2) != 0 && (v12 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 160) -= v73;
            --*(_DWORD *)(BugCheckParameter2 + 152);
            LOBYTE(v21) = v21 & 0xFD;
          }
          goto LABEL_63;
        }
        if ( (v12 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 5392) = KiQueryUnbiasedInterruptTime();
          if ( (v12 & 0x1000) != 0 )
            goto LABEL_112;
          CmpArmLazyWriter(1, 0LL, 0);
        }
        if ( (v12 & 0x1000) == 0 )
        {
LABEL_63:
          v14 = (v12 >> 6) & 1;
          if ( v14 )
          {
            v36 = *(_DWORD *)(BugCheckParameter2 + 2936);
            v37 = *(_DWORD **)(BugCheckParameter2 + 2928);
            if ( (int)v5 < 0 )
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v37, v36, 1);
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v37, v36, 0);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (v12 & 1) != 0 && (v21 & 0x10) == 0 )
              {
                HvResetLogFileStatusAll(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 160) = 0;
                if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2, v44, v45, v46) )
                  HvSwapLogFiles(BugCheckParameter2, 0LL);
              }
              else
              {
                v13 = *(unsigned int *)(BugCheckParameter2 + 148);
                if ( (unsigned int)(v13 - 4) <= 1 )
                {
                  v13 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v13 != 4));
                  *(_BYTE *)(v13 + BugCheckParameter2 + 172) = 0;
                }
              }
            }
          }
          if ( (v12 & 0x110) != 0 )
            HvFreeUnreconciledData(BugCheckParameter2);
          if ( (v12 & 8) != 0 && (v21 & 4) == 0 )
          {
            if ( (v21 & 2) != 0 )
            {
              if ( !v14 )
              {
                LOBYTE(v30) = 1;
                HvUpdateUnreconciledVector(BugCheckParameter2, v30);
              }
              HvFreeDirtyData(BugCheckParameter2);
            }
            else
            {
              HvFoldBackDirtyData(BugCheckParameter2);
            }
          }
          goto LABEL_72;
        }
LABEL_112:
        CmpArmLazyWriter(1, 0LL, 1);
        goto LABEL_63;
      }
      v12 &= ~0x80u;
    }
    v18 = v70;
    v19 = v71;
    goto LABEL_38;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v15 = HvpMarkDirty(BugCheckParameter2, 0, 4096, 0);
  v16 = *(struct _FAST_MUTEX **)(BugCheckParameter2 + 2840);
  if ( v15 )
  {
    ExReleaseFastMutexUnsafe(v16);
    goto LABEL_33;
  }
  ExReleaseFastMutexUnsafe(v16);
  LODWORD(v5) = -1073741823;
LABEL_133:
  LOBYTE(v21) = v68;
LABEL_72:
  if ( (v12 & 1) == 0 || (v21 & 0x10) != 0 )
  {
    v31 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
    v31 = (struct _KEVENT *)CmpReleaseWriteQueue(v13, BugCheckParameter2 + 5440);
  }
  if ( (v12 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~2u;
    v32 = (struct _KEVENT *)CmpReleaseWriteQueue(v13, BugCheckParameter2 + 5464);
  }
  else
  {
    v32 = 0LL;
  }
  if ( (v21 & 2) != 0 )
  {
    if ( v31 )
    {
      do
      {
        v62 = v31[1].Header.WaitListHead.Flink;
        v31[1].Header.LockNV = 0;
        KeSetEvent(v31, 0, 0);
        v31 = (struct _KEVENT *)v62;
      }
      while ( v62 );
    }
  }
  else if ( v31 )
  {
    do
    {
      v63 = v31[1].Header.WaitListHead.Flink;
      v31[1].Header.LockNV = -1073741823;
      KeSetEvent(v31, 0, 0);
      v31 = (struct _KEVENT *)v63;
    }
    while ( v63 );
  }
  if ( v14 )
  {
    if ( v32 )
    {
      do
      {
        v64 = v32[1].Header.WaitListHead.Flink;
        v32[1].Header.LockNV = v5;
        KeSetEvent(v32, 0, 0);
        v32 = (struct _KEVENT *)v64;
      }
      while ( v64 );
    }
  }
  else if ( v32 )
  {
    do
    {
      v65 = v32[1].Header.WaitListHead.Flink;
      v32[1].Header.LockNV = -1073741823;
      KeSetEvent(v32, 0, 0);
      v32 = (struct _KEVENT *)v65;
    }
    while ( v65 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
LABEL_5:
  v7 = EtwpRegTraceHandle;
  v75 = v5;
  v82 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v82) )
  {
    *(_QWORD *)&v83.Size = 4LL;
    v83.Ptr = (ULONGLONG)&v75;
    EtwWrite(v7, &v82, 0LL, 1u, &v83);
  }
  if ( stru_1402CFD30.LevelPlus1 > 4 )
  {
    v78 = v5;
    v102 = &v78;
    v103 = 4LL;
    TlgWrite(&stru_1402CFD30, &unk_1402534CE, 0LL, 0LL, 3u, &v101);
  }
  return (unsigned int)v5;
}
