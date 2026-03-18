/*
 * XREFs of EtwpEnableGuid @ 0x1404CD4B0
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140506134 (EtwpEnableTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpIsCaptureStateAllowed @ 0x1403B5208 (EtwpIsCaptureStateAllowed.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     EtwpIsRegEntryAllowed @ 0x1404CDCE4 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404CE210 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404CE398 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x1404CE650 (EtwpUnreferenceDataBlock.c)
 *     EtwpBuildNotificationPacket @ 0x1404CE668 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x1404CE704 (EtwpAllocDataBlock.c)
 *     EtwpValidateEnableNotification @ 0x1404CE7A0 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404CE8C8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404CE9C4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1404CF5BC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406639BC (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpReferenceStackLookasideList @ 0x14066676C (EtwpReferenceStackLookasideList.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, char a2)
{
  char v4; // al
  __int64 v5; // r12
  _QWORD *GuidEntryByGuid; // r15
  int v7; // edx
  __int64 v8; // rsi
  void *v9; // r13
  int updated; // ebx
  unsigned int v11; // r14d
  unsigned __int8 v12; // bl
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // si
  unsigned int *v18; // rdx
  __int16 v19; // cx
  char v20; // al
  __int64 v21; // r8
  _QWORD *v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rcx
  __int64 v25; // rtt
  PVOID *v26; // rdi
  __int64 v27; // rsi
  PVOID *v28; // rdi
  int v30; // eax
  int v31; // eax
  int v32; // r14d
  _DWORD *v33; // rdx
  unsigned __int8 i; // cl
  _QWORD *v35; // r12
  unsigned int v36; // r14d
  char v37; // al
  struct _KTHREAD *v38; // rax
  __int64 v39; // rbx
  unsigned __int64 *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  void *v46; // r12
  char v47; // si
  int v48; // r9d
  int v49; // edx
  int v50; // r8d
  char v51; // al
  char v52; // cl
  signed __int64 *v53; // rbx
  signed __int64 v54; // rax
  signed __int64 v55; // rcx
  signed __int64 v56; // rtt
  const EVENT_DESCRIPTOR *v57; // rdi
  __int64 v58; // r8
  __int64 v59; // rdx
  void *v60; // r14
  __int64 v61; // rcx
  int v62; // eax
  unsigned int *v63; // rdx
  signed __int32 *v64; // roff
  signed __int32 v65; // eax
  __int64 v66; // rcx
  signed __int32 v67; // ett
  ULONG_PTR SessionById; // rax
  char v69; // [rsp+40h] [rbp-C0h]
  char v70; // [rsp+41h] [rbp-BFh]
  char v71; // [rsp+42h] [rbp-BEh]
  _BYTE v72[13]; // [rsp+43h] [rbp-BDh] BYREF
  unsigned int *v73; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+60h] [rbp-A0h]
  int v76; // [rsp+64h] [rbp-9Ch]
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v78; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v80; // [rsp+80h] [rbp-80h]
  _QWORD v81[2]; // [rsp+88h] [rbp-78h] BYREF
  int v82; // [rsp+98h] [rbp-68h]
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-58h] BYREF
  int v85; // [rsp+B0h] [rbp-50h]
  int v86; // [rsp+B4h] [rbp-4Ch]
  __int64 v87; // [rsp+B8h] [rbp-48h]
  PVOID v88[6]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v89[48]; // [rsp+F0h] [rbp-10h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v90; // [rsp+120h] [rbp+20h] BYREF

  v87 = a1 + 40;
  v4 = *(_BYTE *)(a1 + 80) >> 4;
  v5 = 2LL;
  Handle = 0LL;
  Object = 0LL;
  v69 = v4 & 2;
  v75 = 0;
  GuidEntryByGuid = 0LL;
  v71 = 0;
  v70 = 0;
  LOBYTE(v76) = 0;
  v72[0] = 0;
  memset(v88, 0, sizeof(v88));
  *(_QWORD *)&v72[5] = 0LL;
  v81[0] = 0LL;
  v81[1] = 0LL;
  v82 = 0;
  LOBYTE(v7) = a2;
  Src = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  updated = EtwpValidateEnableNotification(a1, v7, (unsigned int)v81, (unsigned int)&v73, (__int64)v88);
  if ( updated < 0 )
    goto LABEL_36;
  v11 = *(_DWORD *)(a1 + 72);
  v74 = v11;
  if ( *(_DWORD *)(a1 + 116) )
  {
    v61 = *(_QWORD *)(a1 + 120);
    v86 = *(_DWORD *)(a1 + 132);
    v62 = *(_DWORD *)(a1 + 128);
    v84 = a1 + v61;
    v85 = v62;
  }
  else
  {
    v86 = 0;
  }
  v12 = v69;
  if ( !v69 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                (int)a1 + 40,
                *(unsigned __int16 *)(a1 + 78),
                v11,
                *(_DWORD *)(a1 + 88),
                (__int64)&v84,
                (__int64)&v72[1]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v72[1] )
      goto LABEL_36;
    v8 = *(_QWORD *)&v72[5];
    v9 = Src;
    v12 = 0;
  }
  if ( (*(_WORD *)(a1 + 78) & 0xFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 36) = PsGetCurrentThreadProcessId();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid((_DWORD *)(a1 + 40), v12);
    if ( !GuidEntryByGuid )
    {
      if ( BYTE2(v82) || v11 != 1 )
      {
        updated = -1073741163;
        goto LABEL_36;
      }
      GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(a1 + 40, v12);
      if ( !GuidEntryByGuid )
      {
        updated = -1073741801;
        goto LABEL_36;
      }
    }
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 96, 0LL) )
      ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 48, v15, (ULONG_PTR)(GuidEntryByGuid + 48));
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    v17 = 1;
    v18 = v73;
    GuidEntryByGuid[49] = KeGetCurrentThread();
    v71 = 1;
    if ( v18 && (v18[208] & 0x40) != 0 )
    {
      updated = -1073741162;
      goto LABEL_31;
    }
    if ( v69 == 2 )
    {
      updated = EtwpAcquireTokenAccessInformation(v73);
      if ( updated )
      {
LABEL_31:
        GuidEntryByGuid[49] = 0LL;
        _m_prefetchw(GuidEntryByGuid + 48);
        v23 = GuidEntryByGuid[48];
        if ( (v23 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v24 = v23 - 16;
        else
          v24 = 0LL;
        if ( (v23 & 2) != 0
          || (v25 = GuidEntryByGuid[48], v25 != _InterlockedCompareExchange64(GuidEntryByGuid + 48, v24, v23)) )
        {
          ExfReleasePushLock(GuidEntryByGuid + 48);
        }
        KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 48));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_36;
      }
    }
    *(_DWORD *)(a1 + 112) = v11;
    v19 = *(_WORD *)(a1 + 78);
    *(_WORD *)(a1 + 104) = v19;
    *(_BYTE *)(a1 + 106) = *(_BYTE *)(a1 + 76);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 88);
    v20 = BYTE2(v82);
    v21 = *(_QWORD *)(a1 + 88);
    if ( BYTE2(v82) )
    {
      *(_BYTE *)(a1 + 107) = 1;
      *(_WORD *)(a1 + 104) = v19 & 0x7FFF;
    }
    if ( !v21 )
      *(_QWORD *)(a1 + 88) = -1LL;
    if ( !*(_BYTE *)(a1 + 76) )
      *(_BYTE *)(a1 + 76) = -1;
    if ( v11 != 2 && !v20 )
    {
      updated = EtwpUpdateGuidEnableInfo((ULONG_PTR)GuidEntryByGuid, (__int64)v72);
      if ( updated < 0 )
        goto LABEL_31;
      *(_OWORD *)(a1 + 72) = *((_OWORD *)GuidEntryByGuid + 5);
      *(_OWORD *)(a1 + 88) = *((_OWORD *)GuidEntryByGuid + 6);
      if ( (*(_DWORD *)(a1 + 80) & 4) != 0 )
      {
        v63 = v73;
        v64 = (signed __int32 *)(v73 + 208);
        _m_prefetchw(v73 + 208);
        v65 = *v64;
        v21 = 0x2000LL;
        do
        {
          v66 = v65 | 0x2000u;
          v67 = v65;
          v65 = _InterlockedCompareExchange((volatile signed __int32 *)v63 + 208, v66, v65);
        }
        while ( v67 != v65 );
        if ( (v65 & 0x2000) == 0 )
          EtwpReferenceStackLookasideList(v66, v63, 0x2000LL);
      }
    }
    v22 = GuidEntryByGuid + 5;
    if ( (_QWORD *)*v22 == v22 )
    {
      updated = 0;
      goto LABEL_31;
    }
    if ( *(_BYTE *)(a1 + 12) )
    {
      updated = EtwpCreateUmReplyObject((ULONG_PTR)GuidEntryByGuid, &Handle, &Object);
      if ( updated < 0 )
        goto LABEL_31;
      v22 = GuidEntryByGuid + 5;
      *(_QWORD *)(a1 + 24) = Object;
    }
    LOBYTE(v21) = -1;
    v30 = EtwpBuildNotificationPacket(GuidEntryByGuid, a1, v21, &Src);
    v9 = Src;
    if ( v30 < 0 )
    {
      updated = -1073741801;
      goto LABEL_98;
    }
    v31 = EtwpAllocDataBlock(*((unsigned int *)Src + 1), Src);
    v8 = *(_QWORD *)&v72[5];
    if ( v31 < 0 )
    {
      updated = -1073741801;
    }
    else
    {
      v32 = v76;
      v33 = GuidEntryByGuid + 14;
      v80 = *(_QWORD *)&v72[5];
      for ( i = 0; i < 8u; ++i )
      {
        if ( *v33 )
          v32 = (unsigned __int8)v32 | (1 << i);
        v33 += 8;
      }
      v35 = (_QWORD *)*v22;
      v76 = v32;
      v36 = v74;
      if ( v35 != v22 )
      {
        do
        {
          v37 = v69;
          if ( v69 )
          {
            v38 = KeGetCurrentThread();
            v39 = (__int64)(v35 - 2);
            --v38->KernelApcDisable;
            v40 = (unsigned __int64 *)(v35[2] + 384LL);
            v41 = KeAbPreAcquire((ULONG_PTR)v40, 0LL, 0LL);
            v42 = v41;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0LL) )
              ExfAcquirePushLockExclusiveEx(v40, v41, (ULONG_PTR)v40);
            if ( v42 )
              *(_BYTE *)(v42 + 26) |= 1u;
            v8 = *(_QWORD *)&v72[5];
            v9 = Src;
            v36 = v74;
            *(_QWORD *)(*(_QWORD *)(v39 + 32) + 392LL) = KeGetCurrentThread();
            v37 = v69;
            v70 = 1;
          }
          else
          {
            v39 = (__int64)v35;
          }
          v35 = (_QWORD *)*v35;
          v78 = v35;
          if ( !(unsigned __int8)EtwpIsRegEntryAllowed(v39, (_DWORD)v73, (unsigned int)v81, a1, (__int64)v88, v37) )
            goto LABEL_83;
          v46 = v9;
          if ( !BYTE2(v82) )
          {
            if ( v36 == 2 )
            {
              if ( !EtwpIsCaptureStateAllowed(v39, a1, v88, v45) )
                goto LABEL_115;
            }
            else
            {
              if ( v69 )
                v47 = *(_BYTE *)(v39 + 100);
              else
                v47 = *(_BYTE *)(v39 + 99);
              LOBYTE(v43) = v72[0];
              LOBYTE(v44) = v69;
              EtwpUpdateRegEntryEnableMask(v39, v43, v44, v36);
              LOBYTE(v48) = v76;
              LOBYTE(v49) = v72[0];
              LOBYTE(v50) = v47;
              v51 = EtwpCalculateUpdateNotification(v39, v49, v50, v48, v69, v36, (__int64)&v72[5]);
              v8 = *(_QWORD *)&v72[5];
              if ( !v51 )
                goto LABEL_115;
              if ( *(_QWORD *)&v72[5] )
              {
                v46 = *(void **)&v72[5];
                if ( *(_QWORD *)&v72[5] != v80 )
                {
                  EtwpUnreferenceDataBlock(v80);
                  v80 = v8;
                }
              }
              else
              {
                v8 = v80;
                *(_QWORD *)&v72[5] = v80;
              }
              if ( v36 != 1 )
                goto LABEL_80;
            }
            v52 = *(_BYTE *)(v39 + 98);
            if ( (v52 & 8) != 0 || (v52 & 0x20) != 0 )
            {
              if ( (v52 & 1) != 0 )
              {
                v60 = 0LL;
                if ( (v52 & 0x10) == 0 )
                  goto LABEL_117;
                SessionById = MmGetSessionById(*(_DWORD *)(v39 + 56));
                v60 = (void *)SessionById;
                if ( !SessionById )
                  goto LABEL_80;
                if ( (int)MmAttachSession(SessionById) >= 0 )
                {
LABEL_117:
                  EtwpProviderArrivalCallback(v73, 0LL, v39);
                  if ( !v60 )
                    goto LABEL_80;
                  MmDetachSession((__int64)v60, (__int64)v89);
                }
                ObfDereferenceObject(v60);
              }
              else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v39 + 80) + 736LL)) )
              {
                KiStackAttachProcess(*(_KPROCESS **)(v39 + 80), 0LL, (__int64)&v90);
                LOBYTE(v59) = 1;
                EtwpProviderArrivalCallback(v73, v59, v39);
                KiUnstackDetachProcess(&v90, 0LL);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v39 + 80) + 736LL));
              }
            }
          }
LABEL_80:
          if ( (int)EtwpSendDataBlock(v39, v46) >= 0 )
          {
            v35 = v78;
            if ( (*(_BYTE *)(v39 + 98) & 2) != 0 )
              ++v75;
            goto LABEL_83;
          }
LABEL_115:
          v35 = v78;
LABEL_83:
          if ( v70 )
          {
            *(_QWORD *)(*(_QWORD *)(v39 + 32) + 392LL) = 0LL;
            v53 = (signed __int64 *)(*(_QWORD *)(v39 + 32) + 384LL);
            _m_prefetchw(v53);
            v54 = *v53;
            if ( (*v53 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v55 = v54 - 16;
            else
              v55 = 0LL;
            if ( (v54 & 2) != 0 || (v56 = *v53, v56 != _InterlockedCompareExchange64(v53, v55, v54)) )
              ExfReleasePushLock(v53);
            KeAbPostRelease((ULONG_PTR)v53);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v8 = *(_QWORD *)&v72[5];
            v9 = Src;
            v70 = 0;
          }
          v36 = v74;
        }
        while ( v35 != GuidEntryByGuid + 5 );
      }
      updated = 0;
      *(_DWORD *)(a1 + 20) = v75;
      *(_QWORD *)(a1 + 24) = Handle;
      if ( v73 )
      {
        if ( v36 == 1 )
        {
          v57 = &ETW_EVENT_PROVIDER_ENABLED;
          goto LABEL_93;
        }
        if ( !v36 )
        {
          v57 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_DISABLED;
LABEL_93:
          v5 = 2LL;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v57) )
            EtwpEventWriteTemplateSessAndProv(v87, v57, v58, 2LL, v73 + 38, v87);
          goto LABEL_95;
        }
      }
      v5 = 2LL;
    }
  }
  else
  {
    updated = -1073741790;
  }
LABEL_95:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
  v17 = v71;
LABEL_98:
  if ( v9 )
    EtwpUnreferenceDataBlock(v9);
  if ( v17 == 1 )
    goto LABEL_31;
LABEL_36:
  if ( v73 )
    EtwpReleaseLoggerContext(0LL, v73, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( GuidEntryByGuid )
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  v26 = v88;
  v27 = 3LL;
  do
  {
    if ( *v26 )
      ExFreePoolWithTag(*v26, 0);
    ++v26;
    --v27;
  }
  while ( v27 );
  v28 = &v88[3];
  do
  {
    if ( *v28 )
      ExFreePoolWithTag(*v28, 0);
    ++v28;
    --v5;
  }
  while ( v5 );
  if ( v88[5] )
    ExFreePoolWithTag(v88[5], 0);
  return (unsigned int)updated;
}
