/*
 * XREFs of EtwpEnableGuid @ 0x14048EE64
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x14048E2B8 (EtwpEnableTrace.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmDetachSession @ 0x140076538 (MmDetachSession.c)
 *     MmAttachSession @ 0x14007659C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14048E090 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 *     EtwpIsRegEntryAllowed @ 0x14048F658 (EtwpIsRegEntryAllowed.c)
 *     EtwpFreeFilterInfo @ 0x14048F784 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x14048F810 (EtwpValidateEnableNotification.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140491978 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCalculateUpdateNotification @ 0x140491A90 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140491C28 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404924A0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x1404928BC (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x140492958 (EtwpAllocDataBlock.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 *     EtwpIsCaptureStateAllowed @ 0x14052E318 (EtwpIsCaptureStateAllowed.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140575BE4 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteProviderEnabled @ 0x1406A422C (EtwpEventWriteProviderEnabled.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406A4444 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpReferenceStackLookasideList @ 0x1406A8420 (EtwpReferenceStackLookasideList.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  char v4; // al
  ULONG_PTR v7; // r13
  int v8; // r8d
  volatile signed __int32 *v9; // r14
  volatile signed __int32 *v10; // r12
  int updated; // ebx
  unsigned int v12; // r15d
  unsigned __int8 v13; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rax
  _BYTE *v19; // rax
  _BYTE *v20; // rbx
  char v21; // r14
  __int64 v22; // rsi
  __int16 v23; // cx
  char v24; // al
  __int64 v25; // r8
  _QWORD *v26; // rbx
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // rtt
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // eax
  int v35; // eax
  int v36; // r15d
  _DWORD *v37; // rdx
  unsigned __int8 i; // cl
  _QWORD *v39; // rax
  unsigned int v40; // r15d
  unsigned int v41; // r13d
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  char v45; // bl
  int v46; // r9d
  int v47; // edx
  int v48; // r8d
  char v49; // al
  __int64 v50; // rdx
  __int64 v51; // r8
  __int16 v52; // cx
  const EVENT_DESCRIPTOR *v53; // r15
  __int64 v54; // r8
  struct _KTHREAD *v55; // rax
  unsigned __int64 *v56; // rbx
  _BYTE *v57; // rax
  _BYTE *v58; // rsi
  signed __int64 *v59; // rbx
  signed __int64 v60; // rax
  signed __int64 v61; // rcx
  signed __int64 v62; // rtt
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 ProcessServerSilo; // rax
  __int64 v67; // rbx
  __int64 v68; // rdx
  void *v69; // rbx
  __int64 v70; // rcx
  int v71; // eax
  signed __int32 v72; // eax
  __int64 v73; // rcx
  signed __int32 v74; // ett
  ULONG_PTR SessionById; // rax
  __int64 v76; // rcx
  char v77; // [rsp+50h] [rbp-B0h]
  _BYTE v78[15]; // [rsp+51h] [rbp-AFh] BYREF
  volatile signed __int32 *v79; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+70h] [rbp-90h]
  int v82; // [rsp+74h] [rbp-8Ch]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v84; // [rsp+80h] [rbp-80h]
  _QWORD *v85; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  _QWORD v87[2]; // [rsp+98h] [rbp-68h] BYREF
  int v88; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 *v89; // [rsp+B0h] [rbp-50h]
  __int64 GuidEntryByGuid; // [rsp+B8h] [rbp-48h]
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-38h] BYREF
  int v93; // [rsp+D0h] [rbp-30h]
  int v94; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v95; // [rsp+D8h] [rbp-28h]
  _BYTE v96[56]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v97[48]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v98[48]; // [rsp+148h] [rbp+48h] BYREF

  v4 = (*(_BYTE *)(a2 + 80) >> 4) & 2;
  Handle = 0LL;
  v77 = v4;
  Object = 0LL;
  v82 = 0;
  *(_WORD *)&v78[1] = 0;
  v7 = 0LL;
  LOBYTE(v81) = 0;
  v78[0] = 0;
  memset(v96, 0, sizeof(v96));
  v79 = 0LL;
  v87[0] = 0LL;
  v87[1] = 0LL;
  LOBYTE(v8) = a3;
  v88 = 0;
  Src = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  updated = EtwpValidateEnableNotification(a1, a2, v8, (unsigned int)v87, (__int64)&v78[7], (__int64)v96);
  if ( updated < 0 )
    goto LABEL_37;
  v12 = *(_DWORD *)(a2 + 72);
  v80 = v12;
  if ( *(_DWORD *)(a2 + 116) )
  {
    v70 = *(_QWORD *)(a2 + 120);
    v94 = *(_DWORD *)(a2 + 132);
    v71 = *(_DWORD *)(a2 + 128);
    v92 = a2 + v70;
    v93 = v71;
  }
  else
  {
    v94 = 0;
  }
  v13 = v77;
  if ( !v77 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                a1,
                (int)a2 + 40,
                *(unsigned __int16 *)(a2 + 78),
                v12,
                *(_DWORD *)(a2 + 88),
                (__int64)&v92,
                (__int64)&v78[3]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( v78[3] )
    {
LABEL_37:
      v22 = *(_QWORD *)&v78[7];
      goto LABEL_38;
    }
    v9 = v79;
    v10 = (volatile signed __int32 *)Src;
    v13 = 0;
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) != 0 )
  {
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    GuidEntryByGuid = (__int64)EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v13);
    v7 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      if ( BYTE2(v88) || v12 != 1 )
      {
        updated = -1073741163;
        goto LABEL_37;
      }
      GuidEntryByGuid = EtwpAddGuidEntry(a1, (_DWORD *)(a2 + 40), v13);
      v7 = GuidEntryByGuid;
      if ( !GuidEntryByGuid )
      {
        updated = -1073741801;
        goto LABEL_37;
      }
    }
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = (_BYTE *)KeAbPreAcquire(v7 + 384, 0LL, 0);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 384), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 384), v19, v7 + 384);
    if ( v20 )
      v20[26] |= 1u;
    v21 = 1;
    v22 = *(_QWORD *)&v78[7];
    *(_QWORD *)(v7 + 392) = KeGetCurrentThread();
    v78[2] = 1;
    if ( v22 && (*(_DWORD *)(v22 + 816) & 0x40) != 0 )
    {
      updated = -1073741162;
      goto LABEL_32;
    }
    if ( v77 == 2 )
    {
      updated = EtwpAcquireTokenAccessInformation(v22);
      if ( updated )
      {
LABEL_32:
        *(_QWORD *)(v7 + 392) = 0LL;
        _m_prefetchw((const void *)(v7 + 384));
        v27 = *(_QWORD *)(v7 + 384);
        if ( (v27 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v28 = v27 - 16;
        else
          v28 = 0LL;
        if ( (v27 & 2) != 0
          || (v29 = *(_QWORD *)(v7 + 384),
              v29 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 384), v28, v27)) )
        {
          ExfReleasePushLock((_QWORD *)(v7 + 384));
        }
        KeAbPostRelease(v7 + 384);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
        goto LABEL_37;
      }
    }
    *(_DWORD *)(a2 + 112) = v12;
    v23 = *(_WORD *)(a2 + 78);
    *(_WORD *)(a2 + 104) = v23;
    *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
    *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
    v24 = BYTE2(v88);
    v25 = *(_QWORD *)(a2 + 88);
    if ( BYTE2(v88) )
    {
      *(_BYTE *)(a2 + 107) = 1;
      *(_WORD *)(a2 + 104) = v23 & 0x7FFF;
    }
    if ( !v25 )
      *(_QWORD *)(a2 + 88) = -1LL;
    if ( !*(_BYTE *)(a2 + 76) )
      *(_BYTE *)(a2 + 76) = -1;
    if ( v12 != 2 && !v24 )
    {
      updated = EtwpUpdateGuidEnableInfo(v7, (__int64)v78);
      if ( updated < 0 )
        goto LABEL_32;
      *(_OWORD *)(a2 + 72) = *(_OWORD *)(v7 + 80);
      *(_OWORD *)(a2 + 88) = *(_OWORD *)(v7 + 96);
      if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
      {
        _m_prefetchw((const void *)(v22 + 816));
        v72 = *(_DWORD *)(v22 + 816);
        do
        {
          v73 = v72 | 0x2000u;
          v74 = v72;
          v72 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 816), v73, v72);
        }
        while ( v74 != v72 );
        if ( (v72 & 0x2000) == 0 )
          EtwpReferenceStackLookasideList(v73, 0x2000LL);
        v22 = *(_QWORD *)&v78[7];
      }
    }
    v26 = (_QWORD *)(v7 + 40);
    v95 = v26;
    if ( (_QWORD *)*v26 == v26 )
    {
      updated = 0;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(a2 + 12) )
    {
      updated = EtwpCreateUmReplyObject(v7, &Handle);
      if ( updated < 0 )
        goto LABEL_32;
      v26 = (_QWORD *)(v7 + 40);
      *(_QWORD *)(a2 + 24) = Object;
    }
    LOBYTE(v25) = -1;
    v34 = EtwpBuildNotificationPacket(v7, a2, v25, &Src);
    v10 = (volatile signed __int32 *)Src;
    if ( v34 < 0 )
    {
      updated = -1073741801;
      goto LABEL_80;
    }
    v35 = EtwpAllocDataBlock(*((unsigned int *)Src + 1), Src);
    v9 = v79;
    if ( v35 < 0 )
    {
      updated = -1073741801;
    }
    else
    {
      v36 = v81;
      v37 = (_DWORD *)(v7 + 112);
      v84 = v79;
      for ( i = 0; i < 8u; ++i )
      {
        if ( *v37 )
          v36 = (unsigned __int8)v36 | (1 << i);
        v37 += 8;
      }
      v39 = (_QWORD *)*v26;
      v81 = v36;
      v40 = v80;
      v85 = v39;
      if ( v39 != v26 )
      {
        v41 = v80;
        while ( 1 )
        {
          if ( v77 )
          {
            v42 = v39 - 2;
            v55 = KeGetCurrentThread();
            --v55->KernelApcDisable;
            v56 = (unsigned __int64 *)(v42[4] + 384LL);
            v57 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v56, 0LL, 0);
            v58 = v57;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v56, 0LL) )
              ExfAcquirePushLockExclusiveEx(v56, v57, (ULONG_PTR)v56);
            if ( v58 )
              v58[26] |= 1u;
            v9 = v79;
            v10 = (volatile signed __int32 *)Src;
            v22 = *(_QWORD *)&v78[7];
            *(_QWORD *)(v42[4] + 392LL) = KeGetCurrentThread();
            v39 = v85;
            v78[1] = 1;
          }
          else
          {
            v42 = v39;
          }
          v85 = (_QWORD *)*v39;
          if ( !(unsigned __int8)EtwpIsRegEntryAllowed((_DWORD)v42, v22, (unsigned int)v87, a2, (__int64)v96, v77) )
            goto LABEL_70;
          v89 = v10;
          if ( BYTE2(v88) )
            goto LABEL_67;
          if ( v41 != 2 )
            break;
          if ( (unsigned __int8)EtwpIsCaptureStateAllowed(v42, a2, v96) )
            goto LABEL_65;
LABEL_70:
          if ( v78[1] )
          {
            *(_QWORD *)(v42[4] + 392LL) = 0LL;
            v59 = (signed __int64 *)(v42[4] + 384LL);
            _m_prefetchw(v59);
            v60 = *v59;
            if ( (*v59 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v61 = v60 - 16;
            else
              v61 = 0LL;
            if ( (v60 & 2) != 0 || (v62 = *v59, v62 != _InterlockedCompareExchange64(v59, v61, v60)) )
              ExfReleasePushLock(v59);
            KeAbPostRelease((ULONG_PTR)v59);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v63, v64, v65);
            v9 = v79;
            v10 = (volatile signed __int32 *)Src;
            v22 = *(_QWORD *)&v78[7];
            v78[1] = 0;
          }
          v39 = v85;
          if ( v85 == v95 )
          {
            v7 = GuidEntryByGuid;
            v40 = v80;
            goto LABEL_73;
          }
        }
        if ( v77 )
          v45 = *((_BYTE *)v42 + 101);
        else
          v45 = *((_BYTE *)v42 + 100);
        LOBYTE(v43) = v78[0];
        LOBYTE(v44) = v77;
        EtwpUpdateRegEntryEnableMask(v42, v43, v44, v41);
        LOBYTE(v46) = v81;
        LOBYTE(v47) = v78[0];
        LOBYTE(v48) = v45;
        v49 = EtwpCalculateUpdateNotification((_DWORD)v42, v47, v48, v46, v77, v41, (__int64)&v79);
        v9 = v79;
        if ( !v49 )
        {
          if ( !v79 )
          {
            v9 = v84;
            v79 = v84;
          }
          goto LABEL_70;
        }
        if ( v79 )
        {
          v89 = v79;
          if ( v79 != v84 )
          {
            EtwpUnreferenceDataBlock(v84);
            v84 = v9;
          }
        }
        else
        {
          v9 = v84;
          v79 = v84;
        }
        if ( v41 == 1 )
        {
LABEL_65:
          v52 = *((_WORD *)v42 + 49);
          if ( (v52 & 8) != 0 || (v52 & 0x20) != 0 )
          {
            if ( (v52 & 1) == 0 )
            {
              if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v42[10] + 736LL)) )
              {
                ProcessServerSilo = PsGetProcessServerSilo(v42[10]);
                v67 = PsAttachSiloToCurrentThread(ProcessServerSilo);
                KiStackAttachProcess((_KPROCESS *)v42[10], 0, (__int64)v98);
                LOBYTE(v68) = 1;
                EtwpProviderArrivalCallback(v22, v68, v42);
                KiUnstackDetachProcess((struct _KTHREAD *)v98, 0);
                PsDetachSiloFromCurrentThread(v67);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v42[10] + 736LL));
              }
              goto LABEL_67;
            }
            v69 = 0LL;
            if ( (v52 & 0x10) == 0 )
              goto LABEL_105;
            SessionById = MmGetSessionById(*((_DWORD *)v42 + 14), v50, v51);
            v69 = (void *)SessionById;
            if ( !SessionById )
              goto LABEL_67;
            if ( (int)MmAttachSession(SessionById) >= 0 )
            {
LABEL_105:
              EtwpProviderArrivalCallback(v22, 0LL, v42);
              if ( !v69 )
                goto LABEL_67;
              MmDetachSession((__int64)v69, (__int64)v97);
            }
            ObfDereferenceObject(v69);
          }
        }
LABEL_67:
        if ( (int)EtwpSendDataBlock(v42, v89) >= 0 && (*((_BYTE *)v42 + 98) & 2) != 0 )
          ++v82;
        goto LABEL_70;
      }
LABEL_73:
      updated = 0;
      *(_DWORD *)(a2 + 20) = v82;
      *(_QWORD *)(a2 + 24) = Handle;
      if ( !v22 )
        goto LABEL_77;
      if ( v40 == 1 )
      {
        v53 = &ETW_EVENT_PROVIDER_ENABLED;
        goto LABEL_76;
      }
      if ( !v40 )
      {
        v53 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_DISABLED;
LABEL_76:
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v53) )
        {
          v76 = a2 + 40;
          if ( v80 == 1 )
            EtwpEventWriteProviderEnabled(
              v76,
              (_DWORD)v53,
              v54,
              v22 + 136,
              a2 + 40,
              *(_QWORD *)(a2 + 88),
              *(_QWORD *)(a2 + 96),
              *(_DWORD *)(a2 + 80),
              *(_BYTE *)(a2 + 76));
          else
            EtwpEventWriteTemplateSessAndProv(v76, v53, v54, 2LL, v22 + 136, a2 + 40);
        }
      }
    }
  }
  else
  {
    v22 = *(_QWORD *)&v78[7];
    updated = -1073741790;
  }
LABEL_77:
  if ( v9 )
    EtwpUnreferenceDataBlock(v9);
  v21 = v78[2];
LABEL_80:
  if ( v10 )
    EtwpUnreferenceDataBlock(v10);
  if ( v21 == 1 )
    goto LABEL_32;
LABEL_38:
  if ( v22 )
    EtwpReleaseLoggerContext(v22, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry((__int64 *)v7);
  EtwpFreeFilterInfo(v96);
  return (unsigned int)updated;
}
