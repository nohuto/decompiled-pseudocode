/*
 * XREFs of CmpFlushHive @ 0x1403F8F8C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x1401264A8 (CmpDoFlushAll.c)
 *     CmpDoFlushNextHive @ 0x1403FA454 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x1404BDEEC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404BE040 (CmpTransMgrSyncHive.c)
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x140602C74 (CmFreezeRegistry.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlMergeBitMaps @ 0x14009C590 (RtlMergeBitMaps.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvWriteLogFile @ 0x1403F4934 (HvWriteLogFile.c)
 *     CmpWakeWriteQueueWaiters @ 0x1403F7ED0 (CmpWakeWriteQueueWaiters.c)
 *     CmpLogFlushPhaseStart @ 0x1403F88A4 (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x1403F8918 (CmpLogFlushPhaseEnd.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpBoostActiveHiveWriter @ 0x14047C198 (CmpBoostActiveHiveWriter.c)
 *     HvSwapLogFiles @ 0x14047D3FC (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14047D5E4 (HvIsCurrentLogSwappable.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14047F7CC (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpGenerateFlushControlData @ 0x14047F848 (CmpGenerateFlushControlData.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvUpdateUnreconciledVector @ 0x1404AA750 (HvUpdateUnreconciledVector.c)
 *     HvFreeUnreconciledData @ 0x1404C5F3C (HvFreeUnreconciledData.c)
 *     CmpReleaseWriteQueue @ 0x1404C9704 (CmpReleaseWriteQueue.c)
 *     HvResetLogFileStatusAll @ 0x1404D2BE8 (HvResetLogFileStatusAll.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404D2C40 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvFreeDirtyData @ 0x14051A35C (HvFreeDirtyData.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140603194 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x140605EF4 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140605FB0 (HvFoldBackUnreconciledData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  int v2; // esi
  unsigned int v3; // edi
  int valid; // r14d
  int v6; // eax
  REGHANDLE v7; // rbx
  unsigned int v9; // r15d
  int v10; // r13d
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rcx
  int v14; // r15d
  char v15; // al
  struct _FAST_MUTEX *v16; // rcx
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // edi
  __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _KEVENT *v27; // r12
  struct _KEVENT *v28; // rsi
  LONG v29; // edx
  LONG v30; // edx
  __int64 v31; // rcx
  struct _KEVENT *v32; // rcx
  LONG v33; // edx
  struct _ERESOURCE *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // r9d
  _DWORD *v38; // r8
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONGLONG v44; // rax
  unsigned int v45; // r9d
  __int64 v46; // rax
  unsigned int v47; // r9d
  ULONGLONG v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // r9d
  __int64 v52; // rax
  REGHANDLE v53; // rcx
  int v54; // eax
  unsigned int v55; // edi
  __int64 v56; // rcx
  __int16 v57; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+3Ch] [rbp-C4h]
  int v60; // [rsp+40h] [rbp-C0h]
  unsigned int v61; // [rsp+48h] [rbp-B8h]
  unsigned int v62; // [rsp+4Ch] [rbp-B4h]
  BOOL v63; // [rsp+58h] [rbp-A8h]
  unsigned int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v65; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-90h] BYREF
  int v68; // [rsp+74h] [rbp-8Ch] BYREF
  int v69; // [rsp+78h] [rbp-88h] BYREF
  int v70; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v72; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  _DWORD v79[2]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  __int64 v82; // [rsp+160h] [rbp+60h]
  _DWORD v83[2]; // [rsp+168h] [rbp+68h] BYREF
  int *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v86; // [rsp+180h] [rbp+80h] BYREF
  int *v87; // [rsp+1A0h] [rbp+A0h]
  int v88; // [rsp+1A8h] [rbp+A8h]
  int v89; // [rsp+1ACh] [rbp+ACh]
  int *v90; // [rsp+1B0h] [rbp+B0h]
  int v91; // [rsp+1B8h] [rbp+B8h]
  int v92; // [rsp+1BCh] [rbp+BCh]
  EVENT_DATA_DESCRIPTOR v93; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v94; // [rsp+1E0h] [rbp+E0h]
  int v95; // [rsp+1E8h] [rbp+E8h]
  int v96; // [rsp+1ECh] [rbp+ECh]

  v2 = 0;
  v3 = a2;
  v64 = 0;
  valid = 0;
  if ( stru_1402F34E0.LevelPlus1 > 4 )
  {
    v65 = a2;
    v76 = v79;
    v78 = *(_QWORD *)(BugCheckParameter2 + 3032);
    v79[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
    v80 = v83;
    v82 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v83[0] = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
    v84 = (int *)&v65;
    v77 = 2LL;
    v79[1] = 0;
    v81 = 2LL;
    v83[1] = 0;
    v85 = 4LL;
    TlgWrite(&stru_1402F34E0, &unk_14027ADFC, 0LL, 0LL, 7u, &pData);
  }
  v66 = v3;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v44 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v45 = 0;
    v57 = 0;
    if ( v44 )
    {
      UserData[0].Ptr = v44;
      v45 = 1;
      UserData[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
      UserData[0].Reserved = 0;
    }
    v46 = v45;
    v47 = v45 + 1;
    UserData[v46].Ptr = (ULONGLONG)&v57;
    *(_QWORD *)&UserData[v46].Size = 2LL;
    v48 = *(_QWORD *)(BugCheckParameter2 + 3032);
    if ( v48 )
    {
      v49 = v47++;
      UserData[v49].Ptr = v48;
      UserData[v49].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
      *(&UserData[0].Reserved + 1 * v49) = 0;
    }
    v50 = v47;
    v51 = v47 + 1;
    UserData[v50].Ptr = (ULONGLONG)&v57;
    *(_QWORD *)&UserData[v50].Size = 2LL;
    v52 = v51;
    UserData[v52].Ptr = (ULONGLONG)&v66;
    v53 = EtwpRegTraceHandle;
    *(_QWORD *)&UserData[v52].Size = 4LL;
    EtwWrite(v53, &EventDescriptor, 0LL, v51 + 1, UserData);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_5;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2664) )
  {
    valid = -1073741811;
    goto LABEL_5;
  }
  if ( (v6 & 2) != 0 )
    v3 |= 0xCu;
  v9 = 0;
  v10 = v3 & 1;
  v63 = (v3 & 0x10) != 0;
  while ( 1 )
  {
    if ( (v3 & 1) != 0 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    if ( (v3 & 2) != 0 )
    {
      v11 = *(_DWORD *)(BugCheckParameter2 + 5488);
      if ( (v11 & 2) != 0 || (v3 & 4) == 0 && (v11 & 1) != 0 )
      {
LABEL_19:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        valid = 0;
        goto LABEL_5;
      }
    }
    if ( (v3 & 4) == 0 || (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
      break;
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5464, v3);
LABEL_126:
    if ( v9 >= 2 )
      goto LABEL_5;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) != 0 )
  {
    if ( (v3 & 4) == 0 )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 88) || (v2 = 2, *(_BYTE *)(BugCheckParameter2 + 175)) )
        v2 = 1;
    }
    valid = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5440, v3);
    if ( valid >= 0 )
      v9 += v2;
LABEL_125:
    v2 = 0;
    goto LABEL_126;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v3, &v58);
  v12 = v58;
  v13 = 4LL;
  if ( stru_1402F34E0.LevelPlus1 > 4 )
  {
    v89 = 0;
    v92 = 0;
    v68 = v60;
    v87 = (int *)&v67;
    v90 = &v68;
    v67 = v58;
    v88 = 4;
    v91 = 4;
    TlgWrite(&stru_1402F34E0, &unk_14027ADB1, 0LL, 0LL, 4u, &v86);
  }
  if ( (v12 & 0x358) == 0 )
    goto LABEL_19;
  if ( (v12 & 2) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 5488) |= 2u;
      v12 = v58;
      *(_QWORD *)(BugCheckParameter2 + 5464) = KeGetCurrentThread();
      goto LABEL_28;
    }
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5464, v3);
    goto LABEL_125;
  }
  if ( (v12 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(v13, BugCheckParameter2 + 5464);
LABEL_28:
  if ( (v12 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) |= 1u;
    v12 = v58;
    *(_QWORD *)(BugCheckParameter2 + 5440) = KeGetCurrentThread();
  }
  v14 = (v12 >> 6) & 1;
  if ( (v12 & 8) == 0 )
  {
LABEL_33:
    if ( (v12 & 0x158) != 0 )
      v17 = HvStoreModifiedData(BugCheckParameter2);
    else
      v17 = 0;
    if ( v17 )
    {
      v54 = v17 - 1;
      if ( !v54 )
      {
        valid = 0;
        LOBYTE(v19) = v59 | 2;
        goto LABEL_67;
      }
      valid = -1073741823;
      if ( v54 == 1 )
        goto LABEL_129;
    }
    if ( (v12 & 0x80u) != 0 )
    {
      v55 = *(_DWORD *)(BugCheckParameter2 + 1400);
      v18 = *(_DWORD *)(BugCheckParameter2 + 5492);
      if ( v55 > v18 )
      {
        v19 = v55 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
LABEL_38:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        if ( (v12 & 0x80u) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 1);
          v21 = v63;
          valid = HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v19, v63);
          CmpLogFlushPhaseEnd(v56, 1, valid);
          LOBYTE(v19) = v59;
          if ( valid < 0 )
            goto LABEL_52;
          v19 = v59 | 0x21;
          v59 |= 0x21u;
        }
        else
        {
          v19 = v59;
          v21 = v63;
        }
        if ( (v12 & 8) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 2);
          valid = HvWriteLogFile(BugCheckParameter2, 1, v22, &v64);
          CmpLogFlushPhaseEnd(v23, 2, valid);
          if ( valid < 0 )
            goto LABEL_52;
          HvTruncateCurrentLogFileIfRequired(BugCheckParameter2);
          v19 |= 2u;
          v59 = v19;
        }
        if ( (v12 & 0x10) != 0 )
        {
          CmpLogFlushPhaseStart(v20, 3);
          LOBYTE(v39) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v39, v21);
          CmpLogFlushPhaseEnd(v40, 3, valid);
          if ( valid < 0 )
          {
            v12 |= 0x400u;
            goto LABEL_52;
          }
          v19 |= 0x20u;
          v59 = v19;
        }
        CmpLogFlushPhaseStart(v20, 4);
        if ( (v12 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 2904, BugCheckParameter2 + 2856);
          HvFreeDirtyData(BugCheckParameter2);
          v19 |= 4u;
          v59 = v19;
        }
        CmpLogFlushPhaseEnd(v24, 4, valid);
        if ( (v12 & 0x20) != 0 )
        {
          HvSwapLogFiles(BugCheckParameter2, ((unsigned __int8)v60 >> 2) & 1);
          v19 |= 8u;
          v59 = v19;
        }
        if ( (v12 & 0x45) == 0x41 )
        {
          if ( v10 )
            CmpLockRegistry();
          else
            CmpLockRegistryFreezeAware(0LL);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
          v32 = (struct _KEVENT *)CmpReleaseWriteQueue(v31, BugCheckParameter2 + 5440);
          v33 = valid;
          if ( (v19 & 2) == 0 )
            v33 = -1073741823;
          CmpWakeWriteQueueWaiters(v32, v33);
          v34 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
          v19 |= 0x10u;
          *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
          v59 = v19;
          ExReleaseResourceLite(v34);
          CmpUnlockRegistry();
        }
        if ( (v12 & 0x40) != 0 )
        {
          CmpLogFlushPhaseStart(v25, 5);
          valid = HvWriteHivePrimaryFile(BugCheckParameter2);
          CmpLogFlushPhaseEnd(v36, 5, valid);
          if ( valid < 0 )
            goto LABEL_52;
          v19 |= 0x20u;
          v59 = v19;
        }
        if ( (v12 & 0x100) != 0 )
        {
          CmpLogFlushPhaseStart(v25, 6);
          LOBYTE(v41) = 1;
          LOBYTE(v42) = 1;
          valid = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v42, v41, v21);
          CmpLogFlushPhaseEnd(v43, 6, valid);
          if ( valid < 0 )
            goto LABEL_52;
          v19 |= 0x20u;
          v59 = v19;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
        }
        if ( (v12 & 0x200) != 0 && (v19 & 0x20) == 0 )
        {
          CmpLogFlushPhaseStart(v25, 7);
          if ( (unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) )
          {
            v19 |= 0x20u;
            v59 = v19;
          }
          CmpLogFlushPhaseEnd(v35, 7, (v59 & 0x20) == 0 ? 0xC0000001 : 0);
        }
LABEL_52:
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        if ( valid < 0 && (v12 & 0x80u) != 0 && (v19 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v18;
        if ( (v19 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
          *(_DWORD *)(BugCheckParameter2 + 5488) |= 4u;
        }
        if ( valid < 0 )
        {
          if ( (v19 & 2) != 0 && (v12 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 160) -= v64;
            --*(_DWORD *)(BugCheckParameter2 + 152);
            LOBYTE(v19) = v19 & 0xFD;
          }
          goto LABEL_58;
        }
        if ( (v12 & 0x800) != 0 )
        {
          *(_QWORD *)(BugCheckParameter2 + 5392) = KiQueryUnbiasedInterruptTime();
          if ( (v12 & 0x1000) != 0 )
            goto LABEL_106;
          CmpArmLazyWriter(1LL, 0LL, 0);
        }
        if ( (v12 & 0x1000) == 0 )
        {
LABEL_58:
          v14 = (v12 >> 6) & 1;
          if ( v14 )
          {
            v37 = *(_DWORD *)(BugCheckParameter2 + 2936);
            v38 = *(_DWORD **)(BugCheckParameter2 + 2928);
            if ( valid < 0 )
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v38, v37, 1);
              HvFoldBackUnreconciledData(BugCheckParameter2);
            }
            else
            {
              HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v38, v37, 0);
              HvFreeUnreconciledData(BugCheckParameter2);
              if ( (v12 & 1) != 0 && (v19 & 0x10) == 0 )
              {
                HvResetLogFileStatusAll(BugCheckParameter2);
                *(_DWORD *)(BugCheckParameter2 + 160) = 0;
                if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
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
          if ( (v12 & 8) != 0 && (v19 & 4) == 0 )
          {
            if ( (v19 & 2) != 0 )
            {
              if ( !v14 )
              {
                LOBYTE(v26) = 1;
                HvUpdateUnreconciledVector(BugCheckParameter2, v26);
              }
              HvFreeDirtyData(BugCheckParameter2);
            }
            else
            {
              HvFoldBackDirtyData(BugCheckParameter2);
            }
          }
          goto LABEL_67;
        }
LABEL_106:
        CmpArmLazyWriter(1LL, 0LL, 1);
        goto LABEL_58;
      }
      v12 &= ~0x80u;
    }
    v18 = v61;
    v19 = v62;
    goto LABEL_38;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v15 = HvpMarkDirty(BugCheckParameter2);
  v16 = *(struct _FAST_MUTEX **)(BugCheckParameter2 + 2840);
  if ( v15 )
  {
    ExReleaseFastMutexUnsafe(v16);
    goto LABEL_33;
  }
  ExReleaseFastMutexUnsafe(v16);
  valid = -1073741823;
LABEL_129:
  LOBYTE(v19) = v59;
LABEL_67:
  if ( (v12 & 1) == 0 || (v19 & 0x10) != 0 )
  {
    v27 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
    v27 = (struct _KEVENT *)CmpReleaseWriteQueue(v13, BugCheckParameter2 + 5440);
  }
  if ( (v12 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~2u;
    v28 = (struct _KEVENT *)CmpReleaseWriteQueue(v13, BugCheckParameter2 + 5464);
  }
  else
  {
    v28 = 0LL;
  }
  if ( (v19 & 2) != 0 )
    v29 = 0;
  else
    v29 = -1073741823;
  CmpWakeWriteQueueWaiters(v27, v29);
  v30 = valid;
  if ( !v14 )
    v30 = -1073741823;
  CmpWakeWriteQueueWaiters(v28, v30);
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
LABEL_5:
  v7 = EtwpRegTraceHandle;
  v69 = valid;
  v72 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &v72) )
  {
    v73.Reserved = 0;
    v73.Ptr = (ULONGLONG)&v69;
    v73.Size = 4;
    EtwWrite(v7, &v72, 0LL, 1u, &v73);
  }
  if ( stru_1402F34E0.LevelPlus1 > 4 )
  {
    v96 = 0;
    v94 = &v70;
    v70 = valid;
    v95 = 4;
    TlgWrite(&stru_1402F34E0, &unk_14027AD8E, 0LL, 0LL, 3u, &v93);
  }
  return (unsigned int)valid;
}
