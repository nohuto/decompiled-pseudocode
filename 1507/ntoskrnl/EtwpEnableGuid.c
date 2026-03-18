/*
 * XREFs of EtwpEnableGuid @ 0x1404D4AD0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x1404D720C (EtwpEnableTrace.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MmDetachSession @ 0x1400FD53C (MmDetachSession.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     EtwpIsRegEntryAllowed @ 0x1404D5198 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404D5734 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404D58C0 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 *     EtwpBuildNotificationPacket @ 0x1404D5C18 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x1404D5CB4 (EtwpAllocDataBlock.c)
 *     EtwpValidateEnableNotification @ 0x1404D5D50 (EtwpValidateEnableNotification.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404D5EA8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1404D5F80 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14055A838 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1406E6A9C (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpReferenceStackLookasideList @ 0x1406E9954 (EtwpReferenceStackLookasideList.c)
 *     EtwpIsCaptureStateAllowed @ 0x1406EA4DC (EtwpIsCaptureStateAllowed.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, char a2)
{
  void *v2; // r15
  char v3; // r12
  __int64 v6; // r14
  unsigned __int8 v7; // r12
  char *v8; // r13
  int v9; // edx
  void *v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rdx
  int updated; // ebx
  unsigned int v16; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v18; // eax
  struct _KTHREAD *v19; // rcx
  char *GuidEntryByGuid; // rax
  char v21; // si
  __int16 v22; // cx
  __int64 v23; // r8
  char *v24; // rbx
  PVOID *v25; // rdi
  __int64 v26; // rsi
  PVOID *v27; // rdi
  int v29; // eax
  int v30; // eax
  int v31; // r14d
  unsigned __int8 i; // cl
  char *v33; // r12
  unsigned int v34; // r14d
  __int64 v35; // rbx
  char IsRegEntryAllowed; // al
  void *v37; // rax
  char v38; // si
  int v39; // r9d
  int v40; // edx
  int v41; // r8d
  char v42; // al
  char v43; // cl
  int v44; // eax
  const EVENT_DESCRIPTOR *v45; // rdi
  struct _EX_RUNDOWN_REF *v46; // rdx
  unsigned __int64 v47; // rtt
  BOOLEAN v48; // al
  struct _EX_RUNDOWN_REF *v49; // rcx
  unsigned __int64 v50; // rtt
  _KPROCESS *v51; // r14
  __int64 v52; // rcx
  int v53; // eax
  unsigned int *v54; // rdx
  signed __int32 *v55; // roff
  signed __int32 v56; // eax
  __int64 v57; // rcx
  signed __int32 v58; // ett
  char IsCaptureStateAllowed; // al
  _KPROCESS *SessionById; // rax
  char v61; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v62; // [rsp+41h] [rbp-BFh]
  char v63; // [rsp+43h] [rbp-BDh] BYREF
  unsigned int v64; // [rsp+44h] [rbp-BCh]
  void *v65; // [rsp+48h] [rbp-B8h] BYREF
  void *v66; // [rsp+50h] [rbp-B0h]
  unsigned int *v67; // [rsp+58h] [rbp-A8h] BYREF
  int v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+64h] [rbp-9Ch]
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  void *v71; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h]
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v74[2]; // [rsp+90h] [rbp-70h] BYREF
  int v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h] BYREF
  int v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B4h] [rbp-4Ch]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  PVOID v80[6]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v81[48]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v82[48]; // [rsp+128h] [rbp+28h] BYREF

  v2 = 0LL;
  v3 = *(_BYTE *)(a1 + 80) >> 4;
  Handle = 0LL;
  Object = 0LL;
  v79 = a1 + 40;
  v6 = 2LL;
  v68 = 0;
  v7 = v3 & 2;
  v62 = v7;
  LOBYTE(v69) = 0;
  v8 = 0LL;
  v61 = 0;
  memset(v80, 0, sizeof(v80));
  v65 = 0LL;
  v74[0] = 0LL;
  v74[1] = 0LL;
  v75 = 0;
  LOBYTE(v9) = a2;
  Src = 0LL;
  v10 = 0LL;
  v11 = EtwpValidateEnableNotification(a1, v9, (unsigned int)v74, (unsigned int)&v67, (__int64)v80);
  v14 = 0LL;
  updated = v11;
  if ( v11 >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 72);
    v64 = v16;
    if ( *(_DWORD *)(a1 + 116) )
    {
      v52 = *(_QWORD *)(a1 + 120);
      v78 = *(_DWORD *)(a1 + 132);
      v53 = *(_DWORD *)(a1 + 128);
      v76 = a1 + v52;
      v77 = v53;
    }
    else
    {
      v78 = 0;
    }
    if ( !v7 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = EtwpEnableDisableSpecialGuids(
              (int)a1 + 40,
              *(unsigned __int16 *)(a1 + 78),
              v16,
              *(_DWORD *)(a1 + 88),
              (__int64)&v76,
              (__int64)&v63);
      v19 = KeGetCurrentThread();
      updated = v18;
      LOWORD(v18) = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v18;
      if ( !(_WORD)v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v63 )
        goto LABEL_30;
      v10 = v65;
      v2 = Src;
    }
    if ( (*(_WORD *)(a1 + 78) & 0xFFFD) != 0 )
    {
      *(_DWORD *)(a1 + 36) = PsGetCurrentThreadProcessId();
      GuidEntryByGuid = EtwpFindGuidEntryByGuid((_DWORD *)(a1 + 40), v7);
      v21 = BYTE2(v75);
      v8 = GuidEntryByGuid;
      if ( !GuidEntryByGuid )
      {
        if ( BYTE2(v75) || v16 != 1 )
        {
          updated = -1073741163;
          goto LABEL_30;
        }
        v8 = EtwpAddGuidEntry((unsigned int *)(a1 + 40), v7);
        if ( !v8 )
        {
          updated = -1073741801;
          goto LABEL_30;
        }
      }
      KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
      HIBYTE(v62) = 1;
      if ( v67 && (v67[208] & 0x40) != 0 )
      {
        updated = -1073741162;
        goto LABEL_29;
      }
      if ( v7 == 2 )
      {
        updated = EtwpAcquireTokenAccessInformation(v67);
        if ( updated )
          goto LABEL_29;
      }
      *(_DWORD *)(a1 + 112) = v16;
      v22 = *(_WORD *)(a1 + 78);
      *(_WORD *)(a1 + 104) = v22;
      *(_BYTE *)(a1 + 106) = *(_BYTE *)(a1 + 76);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 88);
      v23 = *(_QWORD *)(a1 + 88);
      if ( v21 )
      {
        *(_BYTE *)(a1 + 107) = 1;
        *(_WORD *)(a1 + 104) = v22 & 0x7FFF;
      }
      if ( !v23 )
        *(_QWORD *)(a1 + 88) = -1LL;
      if ( !*(_BYTE *)(a1 + 76) )
        *(_BYTE *)(a1 + 76) = -1;
      if ( v16 != 2 && !v21 )
      {
        updated = EtwpUpdateGuidEnableInfo((ULONG_PTR)v8, (__int64)&v61);
        if ( updated < 0 )
        {
LABEL_29:
          KeReleaseMutex(&EtwpNotificationMutex, 0);
LABEL_30:
          v6 = 2LL;
          goto LABEL_31;
        }
        *(_OWORD *)(a1 + 72) = *((_OWORD *)v8 + 5);
        *(_OWORD *)(a1 + 88) = *((_OWORD *)v8 + 6);
        if ( (*(_DWORD *)(a1 + 80) & 4) != 0 )
        {
          v54 = v67;
          v55 = (signed __int32 *)(v67 + 208);
          _m_prefetchw(v67 + 208);
          v56 = *v55;
          v23 = 0x2000LL;
          do
          {
            v57 = v56 | 0x2000u;
            v58 = v56;
            v56 = _InterlockedCompareExchange((volatile signed __int32 *)v54 + 208, v57, v56);
          }
          while ( v58 != v56 );
          if ( (v56 & 0x2000) == 0 )
            EtwpReferenceStackLookasideList(v57, v54, 0x2000LL);
        }
      }
      v24 = v8 + 40;
      if ( *(char **)v24 == v24 )
      {
        updated = 0;
        goto LABEL_29;
      }
      if ( *(_BYTE *)(a1 + 12) )
      {
        updated = EtwpCreateUmReplyObject((ULONG_PTR)v8, &Handle);
        if ( updated < 0 )
          goto LABEL_29;
        v24 = v8 + 40;
        *(_QWORD *)(a1 + 24) = Object;
      }
      LOBYTE(v23) = -1;
      v29 = EtwpBuildNotificationPacket(v8, a1, v23, &Src);
      v2 = Src;
      if ( v29 < 0 )
      {
        updated = -1073741801;
        goto LABEL_82;
      }
      v30 = EtwpAllocDataBlock(*((unsigned int *)Src + 1), Src);
      v10 = v65;
      v12 = 0LL;
      if ( v30 < 0 )
      {
        updated = -1073741801;
      }
      else
      {
        v31 = v69;
        v14 = v8 + 112;
        v71 = v65;
        for ( i = 0; i < 8u; ++i )
        {
          if ( *v14 )
            v31 = (unsigned __int8)v31 | (1 << i);
          v14 += 8;
        }
        v33 = *(char **)v24;
        v69 = v31;
        v34 = v64;
        if ( v33 != v24 )
        {
          do
          {
            v35 = (__int64)v33;
            if ( (_BYTE)v62 )
              v35 = (__int64)(v33 - 16);
            v33 = *(char **)v33;
            IsRegEntryAllowed = EtwpIsRegEntryAllowed(v35, (_DWORD)v67, (unsigned int)v74, a1, (__int64)v80, v62);
            v12 = 0LL;
            if ( !IsRegEntryAllowed )
              continue;
            v37 = v2;
            v66 = v2;
            if ( BYTE2(v75) )
              goto LABEL_71;
            if ( v34 == 2 )
            {
              IsCaptureStateAllowed = EtwpIsCaptureStateAllowed(v35, a1, v80);
              v12 = 0LL;
              if ( IsCaptureStateAllowed )
                goto LABEL_68;
            }
            else
            {
              if ( (_BYTE)v62 )
                v38 = *(_BYTE *)(v35 + 100);
              else
                v38 = *(_BYTE *)(v35 + 99);
              LOBYTE(v12) = v62;
              LOBYTE(v14) = v61;
              EtwpUpdateRegEntryEnableMask(v35, v14, v12, v34);
              LOBYTE(v39) = v69;
              LOBYTE(v40) = v61;
              LOBYTE(v41) = v38;
              v42 = EtwpCalculateUpdateNotification(v35, v40, v41, v39, v62, v34, (__int64)&v65);
              v10 = v65;
              v12 = 0LL;
              if ( v42 )
              {
                if ( v65 )
                {
                  v37 = v65;
                  v66 = v65;
                  if ( v65 != v71 )
                  {
                    EtwpUnreferenceDataBlock(v71);
                    v37 = v10;
                    v71 = v10;
                  }
                }
                else
                {
                  v10 = v71;
                  v37 = v2;
                  v65 = v71;
                }
                if ( v34 != 1 )
                  goto LABEL_71;
LABEL_68:
                v43 = *(_BYTE *)(v35 + 98);
                if ( (v43 & 8) == 0 && (v43 & 0x20) == 0 )
                  goto LABEL_70;
                if ( (v43 & 1) == 0 )
                {
                  v46 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v35 + 80) + 736LL);
                  _m_prefetchw(v46);
                  v47 = v46->Count & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( v47 == _InterlockedCompareExchange64((volatile signed __int64 *)v46, v47 + 2, v47) )
                    v48 = 1;
                  else
                    v48 = ExfAcquireRundownProtection(v46);
                  if ( v48 )
                  {
                    KiStackAttachProcess(*(_KPROCESS **)(v35 + 80), 0, (__int64)v82);
                    EtwpProviderArrivalCallback((__int64)v67, 1, v35);
                    KiUnstackDetachProcess((struct _KTHREAD *)v82, 0);
                    v49 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v35 + 80) + 736LL);
                    _m_prefetchw(v49);
                    v50 = v49->Count & 0xFFFFFFFFFFFFFFFEuLL;
                    if ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)v49, v50 - 2, v50) )
                      ExfReleaseRundownProtection(v49);
                  }
                  v10 = v65;
                  v2 = Src;
LABEL_70:
                  v37 = v66;
LABEL_71:
                  v44 = EtwpSendDataBlock(v35, v37);
                  v12 = 0LL;
                  if ( v44 >= 0 && (*(_BYTE *)(v35 + 98) & 2) != 0 )
                    ++v68;
                  continue;
                }
                v51 = 0LL;
                if ( (v43 & 0x10) != 0 )
                {
                  SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(v35 + 56));
                  v51 = SessionById;
                  if ( !SessionById )
                    goto LABEL_104;
                  if ( (int)MmAttachSession(SessionById, (__int64)v81) >= 0 )
                    goto LABEL_103;
                }
                else
                {
LABEL_103:
                  EtwpProviderArrivalCallback((__int64)v67, 0, v35);
                  if ( !v51 )
                  {
LABEL_104:
                    v34 = v64;
                    goto LABEL_70;
                  }
                  MmDetachSession((__int64)v51, (struct _KTHREAD *)v81);
                }
                ObfDereferenceObject(v51);
                goto LABEL_104;
              }
            }
          }
          while ( v33 != v8 + 40 );
        }
        updated = 0;
        *(_DWORD *)(a1 + 20) = v68;
        *(_QWORD *)(a1 + 24) = Handle;
        if ( !v67 )
          goto LABEL_80;
        if ( v34 == 1 )
        {
          v45 = &ETW_EVENT_PROVIDER_ENABLED;
          goto LABEL_78;
        }
        if ( !v34 )
        {
          v45 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_PROVIDER_DISABLED;
LABEL_78:
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v45) )
            EtwpEventWriteTemplateSessAndProv(v79, v45, v12, 2LL, v67 + 38, v79);
        }
      }
    }
    else
    {
      updated = -1073741790;
    }
LABEL_80:
    if ( v10 )
      EtwpUnreferenceDataBlock(v10);
LABEL_82:
    if ( v2 )
      EtwpUnreferenceDataBlock(v2);
    if ( HIBYTE(v62) != 1 )
      goto LABEL_30;
    goto LABEL_29;
  }
LABEL_31:
  if ( v67 )
    EtwpReleaseLoggerContext(v67, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
    EtwpUnreferenceGuidEntry((__int64 *)v8, (__int64)v14, v12, v13);
  v25 = v80;
  v26 = 3LL;
  do
  {
    if ( *v25 )
      ExFreePoolWithTag(*v25, 0);
    ++v25;
    --v26;
  }
  while ( v26 );
  v27 = &v80[3];
  do
  {
    if ( *v27 )
      ExFreePoolWithTag(*v27, 0);
    ++v27;
    --v6;
  }
  while ( v6 );
  if ( v80[5] )
    ExFreePoolWithTag(v80[5], 0);
  return (unsigned int)updated;
}
