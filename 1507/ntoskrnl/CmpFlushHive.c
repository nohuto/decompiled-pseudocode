/*
 * XREFs of CmpFlushHive @ 0x14044C5C4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14014C088 (CmpDoFlushAll.c)
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RtlMergeBitMaps @ 0x140117218 (RtlMergeBitMaps.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     HvFreeDirtyData @ 0x14044C574 (HvFreeDirtyData.c)
 *     CmpReleaseWriteQueue @ 0x14044CDA4 (CmpReleaseWriteQueue.c)
 *     CmpGenerateFlushControlData @ 0x14044CDD8 (CmpGenerateFlushControlData.c)
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14044D690 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14044D6E8 (HvpLogTypeToLogArrayIndex.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpBoostActiveHiveWriter @ 0x1404AF82C (CmpBoostActiveHiveWriter.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     HvUpdateUnreconciledVector @ 0x14052E288 (HvUpdateUnreconciledVector.c)
 *     HvFreeUnreconciledData @ 0x140551154 (HvFreeUnreconciledData.c)
 *     HvSwapLogFiles @ 0x1405560A0 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1405599F8 (HvIsCurrentLogSwappable.c)
 *     HvResetLogFileStatusAll @ 0x14055BA34 (HvResetLogFileStatusAll.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14055BA64 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvFoldBackDirtyData @ 0x14065DD48 (HvFoldBackDirtyData.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  int v5; // r12d
  int v6; // eax
  int v7; // eax
  int v8; // esi
  unsigned int v9; // r15d
  int v10; // eax
  REGHANDLE v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // r14d
  __int64 v16; // rcx
  int v17; // r13d
  ULONG_PTR v18; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // al
  ULONG_PTR v23; // rbx
  signed __int32 v24; // eax
  int v25; // eax
  unsigned int v26; // r15d
  unsigned int v27; // ebx
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // r13d
  int v31; // esi
  __int64 v32; // r11
  __int64 v33; // rbx
  unsigned int v34; // r11d
  __int64 v35; // rcx
  struct _KEVENT *v36; // rax
  struct _ERESOURCE *v37; // rcx
  __int64 v38; // rdx
  struct _KEVENT *v39; // r15
  struct _KEVENT *v40; // r14
  unsigned int v41; // r9d
  _DWORD *v42; // r8
  ULONGLONG v43; // rcx
  unsigned int v44; // r9d
  ULONGLONG v45; // rdx
  __int64 v46; // rax
  unsigned int v47; // r9d
  ULONG v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  REGHANDLE v52; // rcx
  signed __int32 v53; // eax
  int v54; // eax
  unsigned int v55; // ebx
  int valid; // eax
  struct _KEVENT *Flink; // rbx
  struct _KEVENT *v58; // rbx
  ULONG v59; // eax
  bool v60; // zf
  struct _KEVENT *v61; // rbx
  struct _KEVENT *v62; // rbx
  struct _KEVENT *v63; // rbx
  struct _KEVENT *v64; // rbx
  int v65; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v66; // [rsp+40h] [rbp-C8h] BYREF
  int v67; // [rsp+44h] [rbp-C4h]
  int v68; // [rsp+48h] [rbp-C0h]
  unsigned int v69; // [rsp+50h] [rbp-B8h]
  unsigned int v70; // [rsp+54h] [rbp-B4h]
  unsigned int v71; // [rsp+60h] [rbp-A8h]
  unsigned int v72; // [rsp+64h] [rbp-A4h] BYREF
  int i; // [rsp+68h] [rbp-A0h]
  unsigned int v74; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v75[3]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78[5]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = a2;
  v74 = a2;
  v4 = 0;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START;
  v72 = 0;
  v5 = 0;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v43 = *(_QWORD *)(BugCheckParameter2 + 3016);
    v44 = 0;
    LOWORD(v65) = 0;
    if ( v43 )
    {
      v44 = 1;
      v78[0].Size = *(unsigned __int16 *)(BugCheckParameter2 + 3008);
      v78[0].Ptr = v43;
      v78[0].Reserved = 0;
    }
    v45 = *(_QWORD *)(BugCheckParameter2 + 3032);
    v46 = v44;
    v47 = v44 + 1;
    v46 *= 2LL;
    *(&v78[0].Ptr + v46) = (ULONGLONG)&v65;
    *((_QWORD *)&v78[0].Size + v46) = 2LL;
    if ( v45 )
    {
      v48 = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
      v49 = v47++;
      v78[v49].Ptr = v45;
      v78[v49].Size = v48;
      *(&v78[0].Reserved + 1 * v49) = 0;
    }
    v50 = v47;
    v78[v50].Ptr = (ULONGLONG)&v65;
    *(_QWORD *)&v78[v50].Size = 2LL;
    v51 = v47 + 1;
    v78[v51].Ptr = (ULONGLONG)&v74;
    v52 = EtwpRegTraceHandle;
    *(_QWORD *)&v78[v51].Size = 4LL;
    EtwWrite(v52, &EventDescriptor, 0LL, v47 + 2, v78);
  }
  v6 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( (v6 & 0x8001) != 0 )
    goto LABEL_15;
  if ( !*(_QWORD *)(BugCheckParameter2 + 2664) )
  {
    v5 = -1073741811;
    goto LABEL_15;
  }
  if ( (v6 & 2) != 0 )
    v2 |= 0xCu;
  if ( (v2 & 0x10) != 0 )
    v4 = 1;
  v7 = v2 & 1;
  v71 = v4;
  v8 = 0;
  v9 = 0;
  for ( i = v7; ; v7 = i )
  {
    if ( v7 )
      CmpLockRegistry();
    else
      CmpLockRegistryFreezeAware(0);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    if ( (v2 & 2) != 0 )
    {
      v10 = *(_DWORD *)(BugCheckParameter2 + 5488);
      if ( (v10 & 2) != 0 || (v10 & 1) != 0 && (v2 & 4) == 0 )
      {
LABEL_14:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        v5 = 0;
        goto LABEL_15;
      }
    }
    if ( (v2 & 4) != 0 && (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) != 0 )
      goto LABEL_96;
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 1) == 0 )
      break;
    if ( (v2 & 4) == 0 )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 88) || (v8 = 2, *(_BYTE *)(BugCheckParameter2 + 175)) )
        v8 = 1;
    }
    v5 = CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5440, v2);
    if ( v5 >= 0 )
      v9 += v8;
    v8 = 0;
LABEL_138:
    if ( v9 >= 2 )
      goto LABEL_15;
  }
  CmpGenerateFlushControlData(BugCheckParameter2, v2, &v66);
  v15 = v66;
  if ( (v66 & 0x358) == 0 )
    goto LABEL_14;
  if ( (v66 & 2) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 5488) & 2) == 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 5488) |= 2u;
      v15 = v66;
      *(_QWORD *)(BugCheckParameter2 + 5464) = KeGetCurrentThread();
      goto LABEL_24;
    }
LABEL_96:
    CmpWaitOnHiveWriteQueue(BugCheckParameter2, BugCheckParameter2 + 5464, v2);
    goto LABEL_138;
  }
  if ( (v66 & 0x2000) != 0 )
    CmpBoostActiveHiveWriter(v13, BugCheckParameter2 + 5464);
LABEL_24:
  v16 = 1LL;
  if ( (v15 & 1) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) |= 1u;
    v15 = v66;
    *(_QWORD *)(BugCheckParameter2 + 5440) = KeGetCurrentThread();
  }
  v17 = (v15 >> 6) & 1;
  if ( (v15 & 8) == 0 )
  {
LABEL_35:
    if ( (v15 & 0x158) != 0 )
      v25 = HvStoreModifiedData(BugCheckParameter2);
    else
      v25 = 0;
    if ( v25 )
    {
      v54 = v25 - 1;
      if ( !v54 )
      {
        v5 = 0;
        LOBYTE(v31) = v67 | 2;
        goto LABEL_79;
      }
      v5 = -1073741823;
      if ( v54 == 1 )
        goto LABEL_144;
    }
    if ( (v15 & 0x80u) != 0 )
    {
      v55 = *(_DWORD *)(BugCheckParameter2 + 1400);
      v26 = *(_DWORD *)(BugCheckParameter2 + 5492);
      if ( v55 > v26 )
      {
        v27 = v55 + 4096;
        *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
LABEL_40:
        ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
        CmpUnlockRegistry();
        v30 = v71;
        if ( (v15 & 0x80u) != 0 )
        {
          valid = HvExtendHivePrimaryFileValidDataLength(BugCheckParameter2, v27, v71);
          LOBYTE(v31) = v67;
          v5 = valid;
          if ( valid < 0 )
            goto LABEL_63;
          v31 = v67 | 0x21;
          v67 |= 0x21u;
        }
        else
        {
          v31 = v67;
        }
        if ( (v15 & 8) != 0 )
        {
          v5 = HvWriteLogFile(BugCheckParameter2, 1, v29, &v72);
          if ( v5 < 0 )
            goto LABEL_63;
          if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
          {
            v32 = *(unsigned int *)(BugCheckParameter2 + 148);
            if ( (_DWORD)v32 )
            {
              if ( *(_QWORD *)(BugCheckParameter2 + 8 * v32 + 2664) )
              {
                v33 = (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)v32);
                if ( *(_QWORD *)(BugCheckParameter2 + 8 * v33 + 2976) > (unsigned __int64)(unsigned int)HvGetEffectiveLogSizeCapForHive(BugCheckParameter2) )
                {
                  v29 = *(unsigned int *)(BugCheckParameter2 + 160);
                  if ( *(_QWORD *)(BugCheckParameter2 + 8 * v33 + 2976) > v29 )
                    CmpDoFileSetSizeEx(BugCheckParameter2, v34, v29, 0LL);
                }
              }
            }
          }
          v31 |= 2u;
          v67 = v31;
        }
        if ( (v15 & 0x10) != 0 )
        {
          LOBYTE(v29) = 1;
          v5 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 0LL, v29, v30);
          if ( v5 < 0 )
          {
            v15 |= 0x400u;
            v66 = v15;
            goto LABEL_63;
          }
          v31 |= 0x20u;
          v67 = v31;
        }
        if ( (v15 & 0x448) == 0x48 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 2904, BugCheckParameter2 + 2856);
          HvFreeDirtyData(BugCheckParameter2);
          v31 |= 4u;
          v67 = v31;
        }
        if ( (v15 & 0x20) != 0 )
        {
          HvSwapLogFiles(BugCheckParameter2, ((unsigned __int8)v68 >> 2) & 1);
          v31 |= 8u;
          v67 = v31;
        }
        if ( (v15 & 0x45) == 0x41 )
        {
          if ( i )
            CmpLockRegistry();
          else
            CmpLockRegistryFreezeAware(0);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
          v36 = (struct _KEVENT *)CmpReleaseWriteQueue(v35, BugCheckParameter2 + 5440);
          if ( (v31 & 2) != 0 )
          {
            if ( v36 )
            {
              do
              {
                Flink = (struct _KEVENT *)v36[1].Header.WaitListHead.Flink;
                v36[1].Header.LockNV = v5;
                KeSetEvent(v36, 0, 0);
                v36 = Flink;
              }
              while ( Flink );
            }
          }
          else if ( v36 )
          {
            do
            {
              v58 = (struct _KEVENT *)v36[1].Header.WaitListHead.Flink;
              v36[1].Header.LockNV = -1073741823;
              KeSetEvent(v36, 0, 0);
              v36 = v58;
            }
            while ( v58 );
          }
          v37 = *(struct _ERESOURCE **)(BugCheckParameter2 + 2848);
          v31 |= 0x10u;
          *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
          v67 = v31;
          ExReleaseResourceLite(v37);
          CmpUnlockRegistry();
        }
        if ( (v15 & 0x40) != 0 )
        {
          v5 = HvWriteHivePrimaryFile(BugCheckParameter2);
          if ( v5 < 0 )
            goto LABEL_63;
          v31 |= 0x20u;
          v67 = v31;
        }
        if ( (v15 & 0x100) == 0 )
        {
LABEL_62:
          if ( (v15 & 0x200) != 0 && (v31 & 0x20) == 0 && (unsigned __int8)CmpFileFlushAndPurge(BugCheckParameter2, 0LL) )
          {
            v31 |= 0x20u;
            v67 = v31;
          }
          goto LABEL_63;
        }
        LOBYTE(v29) = 1;
        LOBYTE(v28) = 1;
        v5 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v28, v29, v30);
        if ( v5 >= 0 )
        {
          v31 |= 0x20u;
          v67 = v31;
          HvTruncateAllLogFilesIfRequired(BugCheckParameter2);
          goto LABEL_62;
        }
LABEL_63:
        CmpLockRegistry();
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
        if ( v5 < 0 && (v15 & 0x80u) != 0 && (v31 & 1) == 0 )
          *(_DWORD *)(BugCheckParameter2 + 5492) = v26;
        if ( (v31 & 0x20) != 0 )
        {
          *(_DWORD *)(BugCheckParameter2 + 5492) = 0;
          *(_DWORD *)(BugCheckParameter2 + 5488) |= 4u;
        }
        if ( v5 < 0 )
        {
          if ( (v31 & 2) != 0 && (v15 & 0x400) != 0 )
          {
            *(_DWORD *)(BugCheckParameter2 + 160) -= v72;
            --*(_DWORD *)(BugCheckParameter2 + 152);
            LOBYTE(v31) = v31 & 0xFD;
          }
        }
        else
        {
          if ( (v15 & 0x800) != 0 )
          {
            v38 = MEMORY[0xFFFFF780000003B0];
            v16 = MEMORY[0xFFFFF780000003B0];
            v15 = v66;
            *(_QWORD *)(BugCheckParameter2 + 5392) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
            if ( (v15 & 0x1000) == 0 )
              CmpArmLazyWriter(1, 0LL, 0);
            LOBYTE(v31) = v67;
          }
          if ( (v15 & 0x1000) != 0 )
            CmpArmLazyWriter(1, 0LL, 1);
        }
        v17 = (v15 >> 6) & 1;
        if ( v17 )
        {
          v41 = *(_DWORD *)(BugCheckParameter2 + 2936);
          v42 = *(_DWORD **)(BugCheckParameter2 + 2928);
          if ( v5 < 0 )
          {
            HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v42, v41, 1);
            CmpLockRegistry();
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
            RtlMergeBitMaps(BugCheckParameter2 + 96, BugCheckParameter2 + 2904);
            v59 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 96));
            v60 = *(_BYTE *)(BugCheckParameter2 + 2896) == 0;
            *(_DWORD *)(BugCheckParameter2 + 112) = v59;
            if ( !v60 )
              *(_BYTE *)(BugCheckParameter2 + 175) = 1;
            ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
            CmpUnlockRegistry();
            HvFreeUnreconciledData(BugCheckParameter2);
          }
          else
          {
            HvSynchronizeAndDropTemporaryBins(BugCheckParameter2, 1, v42, v41, 0);
            HvFreeUnreconciledData(BugCheckParameter2);
            if ( (v15 & 1) != 0 && (v31 & 0x10) == 0 )
            {
              HvResetLogFileStatusAll(BugCheckParameter2);
              *(_DWORD *)(BugCheckParameter2 + 160) = 0;
              if ( (unsigned __int8)HvIsCurrentLogSwappable(BugCheckParameter2) )
                HvSwapLogFiles(BugCheckParameter2, 0LL);
            }
            else
            {
              v16 = *(unsigned int *)(BugCheckParameter2 + 148);
              if ( (unsigned int)(v16 - 4) <= 1 )
              {
                v16 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)((_DWORD)v16 != 4));
                *(_BYTE *)(v16 + BugCheckParameter2 + 172) = 0;
              }
            }
          }
        }
        if ( (v15 & 0x10) != 0 || (v15 & 0x100) != 0 )
          HvFreeUnreconciledData(BugCheckParameter2);
        if ( (v15 & 8) != 0 && (v31 & 4) == 0 )
        {
          if ( (v31 & 2) != 0 )
          {
            if ( !v17 )
            {
              LOBYTE(v38) = 1;
              HvUpdateUnreconciledVector(BugCheckParameter2, v38);
            }
            HvFreeDirtyData(BugCheckParameter2);
          }
          else
          {
            HvFoldBackDirtyData(BugCheckParameter2);
          }
        }
        goto LABEL_79;
      }
      v15 &= ~0x80u;
      v66 = v15;
    }
    v26 = v69;
    v27 = v70;
    goto LABEL_40;
  }
  v18 = *(_QWORD *)(BugCheckParameter2 + 2840);
  CurrentThread = KeGetCurrentThread();
  v20 = KeAbPreAcquire(v18, 0LL, 0LL, v14);
  v21 = v20;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v18, 0) )
    ExpAcquireFastMutexContended(v18, v20);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  *(_QWORD *)(v18 + 8) = CurrentThread;
  v22 = HvpMarkDirty(BugCheckParameter2);
  v23 = *(_QWORD *)(BugCheckParameter2 + 2840);
  *(_QWORD *)(v23 + 8) = 0LL;
  if ( v22 )
  {
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)v23, 1, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v23, v24);
    KeAbPostRelease(v23);
    v15 = v66;
    goto LABEL_35;
  }
  v53 = _InterlockedCompareExchange((volatile signed __int32 *)v23, 1, 0);
  if ( v53 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v23, v53);
  KeAbPostRelease(v23);
  LOBYTE(v15) = v66;
  v5 = -1073741823;
LABEL_144:
  LOBYTE(v31) = v67;
LABEL_79:
  if ( (v15 & 1) == 0 || (v31 & 0x10) != 0 )
  {
    v39 = 0LL;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~1u;
    v39 = (struct _KEVENT *)CmpReleaseWriteQueue(v16, BugCheckParameter2 + 5440);
  }
  if ( (v15 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 5488) &= ~2u;
    v40 = (struct _KEVENT *)CmpReleaseWriteQueue(v16, BugCheckParameter2 + 5464);
  }
  else
  {
    v40 = 0LL;
  }
  if ( (v31 & 2) != 0 )
  {
    if ( v39 )
    {
      do
      {
        v61 = (struct _KEVENT *)v39[1].Header.WaitListHead.Flink;
        v39[1].Header.LockNV = 0;
        KeSetEvent(v39, 0, 0);
        v39 = v61;
      }
      while ( v61 );
    }
  }
  else if ( v39 )
  {
    do
    {
      v62 = (struct _KEVENT *)v39[1].Header.WaitListHead.Flink;
      v39[1].Header.LockNV = -1073741823;
      KeSetEvent(v39, 0, 0);
      v39 = v62;
    }
    while ( v62 );
  }
  if ( v17 )
  {
    if ( v40 )
    {
      do
      {
        v63 = (struct _KEVENT *)v40[1].Header.WaitListHead.Flink;
        v40[1].Header.LockNV = v5;
        KeSetEvent(v40, 0, 0);
        v40 = v63;
      }
      while ( v63 );
    }
  }
  else if ( v40 )
  {
    do
    {
      v64 = (struct _KEVENT *)v40[1].Header.WaitListHead.Flink;
      v40[1].Header.LockNV = -1073741823;
      KeSetEvent(v40, 0, 0);
      v40 = v64;
    }
    while ( v64 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
LABEL_15:
  v11 = EtwpRegTraceHandle;
  LODWORD(v75[0]) = v5;
  *(_OWORD *)&v75[1] = REGISTRY_PERF_EVENT_HIVE_FLUSH_STOP;
  if ( EtwEventEnabled(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&v75[1]) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)v75;
    EtwWrite(v11, (PCEVENT_DESCRIPTOR)&v75[1], 0LL, 1u, &UserData);
  }
  return (unsigned int)v5;
}
