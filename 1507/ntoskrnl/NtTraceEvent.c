/*
 * XREFs of NtTraceEvent @ 0x140016980
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpLogSystemEventUnsafe @ 0x14000BBEC (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceMessageVa @ 0x140016040 (EtwpTraceMessageVa.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 *     EtwTraceEvent @ 0x14015C274 (EtwTraceEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateEnableMask @ 0x1404D315C (EtwpUpdateEnableMask.c)
 *     EtwpSetMark @ 0x1406E50A4 (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  ULONG v7; // eax
  ULONG64 ProcessorTime; // r13
  PEVENT_TRACE_HEADER v9; // r12
  int v10; // r15d
  unsigned __int8 *v11; // rdi
  void *v12; // r10
  __int64 v13; // r8
  unsigned __int16 v14; // cx
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  _BYTE *v20; // rcx
  __int64 GuidPtr_high; // rcx
  __int64 v22; // rdi
  _DWORD *v23; // r14
  _BYTE *v24; // rax
  ULONG64 v25; // r13
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  ULONG64 v33; // rax
  __int64 v34; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rdx
  struct _KTHREAD *v41; // rcx
  __int16 v42; // ax
  char *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  __int64 v48; // r9
  unsigned __int8 v49; // [rsp+80h] [rbp-128h] BYREF
  char v50; // [rsp+81h] [rbp-127h]
  PEVENT_TRACE_HEADER v51; // [rsp+88h] [rbp-120h]
  unsigned int v52; // [rsp+90h] [rbp-118h]
  ULONG LowPart; // [rsp+94h] [rbp-114h]
  unsigned int Data1; // [rsp+98h] [rbp-110h]
  NTSTATUS v55; // [rsp+9Ch] [rbp-10Ch]
  unsigned __int8 v57; // [rsp+A1h] [rbp-107h]
  __int16 v58; // [rsp+A4h] [rbp-104h]
  char v59; // [rsp+A8h] [rbp-100h]
  __int64 v60; // [rsp+B0h] [rbp-F8h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-F0h]
  _DWORD *v62; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-C8h]
  ULONG v67; // [rsp+E8h] [rbp-C0h]
  int v68; // [rsp+ECh] [rbp-BCh]
  int v69; // [rsp+F0h] [rbp-B8h]
  int v70; // [rsp+F4h] [rbp-B4h]
  PEVENT_TRACE_HEADER v71; // [rsp+F8h] [rbp-B0h]
  int v72; // [rsp+100h] [rbp-A8h]
  ULONG v73; // [rsp+104h] [rbp-A4h]
  __int64 v74; // [rsp+108h] [rbp-A0h]
  __int64 v75; // [rsp+110h] [rbp-98h]
  ULONG64 v76; // [rsp+118h] [rbp-90h]
  unsigned __int64 v77; // [rsp+120h] [rbp-88h]
  __int64 v78; // [rsp+128h] [rbp-80h]
  __int64 v79; // [rsp+130h] [rbp-78h]
  ULONG64 v80; // [rsp+138h] [rbp-70h]
  unsigned __int64 v81; // [rsp+140h] [rbp-68h] BYREF
  int v82; // [rsp+148h] [rbp-60h]
  int v83; // [rsp+14Ch] [rbp-5Ch]
  __int128 v84; // [rsp+150h] [rbp-58h] BYREF

  v4 = (unsigned __int64)TraceHeader;
  v5 = TraceHeaderLength;
  v7 = Flags & 0xFF00;
  if ( v7 == 768 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)TraceHeader & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&TraceHeader[2].GuidPtr > MmUserProbeAddress || &TraceHeader[2].Guid < (GUID *)TraceHeader )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProcessorTime = TraceHeader[1].ProcessorTime;
    v76 = ProcessorTime;
    LODWORD(v51) = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
    v70 = (int)v51;
    v66 = *((unsigned __int16 *)&TraceHeader[1].GuidPtr + 5);
    LowPart = TraceHeader[2].TimeStamp.LowPart;
    v67 = LowPart;
    v60 = *(_QWORD *)&TraceHeader[1].Size;
    v78 = v60;
    v49 = TraceHeader->Flags;
    v57 = v49;
    v9 = 0LL;
    v71 = 0LL;
    if ( TraceHeader[1].Guid.Data4[0] )
    {
      v9 = TraceHeader + 2;
      v71 = TraceHeader + 2;
    }
    v10 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v10 >= 0 )
    {
      v65 = 0LL;
      v11 = (unsigned __int8 *)Object;
      v12 = (void *)*((_QWORD *)Object + 4);
      Object = v12;
      v13 = *((_QWORD *)v11 + 5);
      v62 = (_DWORD *)v13;
      v14 = (Flags & 0x80000000) != 0;
      v52 = (Flags & 0x80000000) != 0;
      v63 = 0LL;
      v15 = 0LL;
      v16 = *((_QWORD *)v11 + 13);
      if ( v16 )
        v15 = v16 + 28;
      v17 = v11[99];
      if ( (_BYTE)v17 )
      {
        v10 = EtwpWriteUserEvent(
                (_DWORD)v12,
                v17,
                v14,
                v66,
                LowPart,
                v4,
                (__int64)v9,
                v49,
                v60,
                (_DWORD)v51,
                ProcessorTime,
                (__int64)&v63,
                0LL,
                v11[101],
                v15,
                (__int64)&v65);
        v14 = v52;
        LODWORD(v12) = (_DWORD)Object;
        v13 = (__int64)v62;
      }
      v18 = v11[100];
      if ( (_BYTE)v18 )
        v10 = EtwpWriteUserEvent(
                (_DWORD)v12,
                v18,
                v14,
                v66,
                LowPart,
                v4,
                (__int64)v9,
                v49,
                v60,
                (_DWORD)v51,
                ProcessorTime,
                (__int64)&v63,
                v13,
                v11[101],
                v15,
                (__int64)&v65);
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    }
    return v10;
  }
  if ( v7 == 512 )
  {
    v60 = *(_QWORD *)&TraceHandle;
    v61 = 0LL;
    if ( TraceHeaderLength == 40 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        v51 = TraceHeader;
        if ( ((unsigned __int8)TraceHeader & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = (_BYTE *)MmUserProbeAddress;
        if ( (unsigned __int64)&v51->ProcessorTime <= MmUserProbeAddress )
        {
          if ( &v51->KernelTime >= (ULONG *)v51 )
          {
LABEL_25:
            Data1 = v51->Guid.Data1;
            if ( (Flags & 0x80000000) != 0 )
            {
              LODWORD(v61) = *((_DWORD *)&v51->GuidPtr + 2);
              Data1 |= 0x80u;
            }
            else
            {
              v61 = *(&v51->GuidPtr + 1);
            }
            GuidPtr_high = HIDWORD(v51->GuidPtr);
            LowPart = GuidPtr_high;
            if ( (unsigned int)GuidPtr_high <= 0x10000 )
            {
              if ( (_DWORD)GuidPtr_high && (v61 + GuidPtr_high > MmUserProbeAddress || v61 + GuidPtr_high < v61) )
                *(_BYTE *)MmUserProbeAddress = 0;
              HIDWORD(v60) = GuidPtr_high;
              return EtwpTraceMessageVa(v60, Data1 | 0x40, (signed __int32 *)&v51->ThreadId, v51->Version, v61, 1);
            }
            v10 = -1073741811;
            v55 = -1073741811;
            return v10;
          }
          v20 = (_BYTE *)MmUserProbeAddress;
        }
        *v20 = 0;
        goto LABEL_25;
      }
      return -1073741637;
    }
    return -1073741811;
  }
  if ( v7 <= 0x600 )
  {
    if ( v7 != 1536 )
    {
      switch ( v7 )
      {
        case 0x100u:
          if ( (Flags & 0x80000000) != 0 )
            v29 = 3221880832LL;
          else
            v29 = 3222536192LL;
          return EtwTraceEvent(TraceHandle, v4, 48LL, v29, KeGetCurrentThread()->PreviousMode);
        case 0x400u:
          v30 = (unsigned __int16)TraceHandle;
          v52 = (unsigned __int16)TraceHandle;
          if ( (unsigned __int16)TraceHandle == 0xFFFF )
          {
            v30 = 0LL;
            v52 = 0;
          }
          else if ( (unsigned __int16)TraceHandle >= 0x40u )
          {
            return -1073741811;
          }
          if ( TraceHeaderLength > 0xFFDF )
            return -1073741675;
          v31 = v30;
          ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v30], 1u);
          _mm_lfence();
          v32 = WmipLoggerContext[v31];
          if ( (v32 & 1) == 0 && (unsigned __int8)PsEqualCurrentServerSilo(*(_QWORD *)(v32 + 912)) )
          {
            ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v31], 1u);
            if ( KeGetCurrentThread()->PreviousMode == 1 )
            {
              if ( (v4 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v33 = v5 + v4 + 32;
              if ( v33 > MmUserProbeAddress || v33 < v4 )
                *(_BYTE *)MmUserProbeAddress = 0;
              v77 = v4 + 32;
              v58 = *(_WORD *)(v4 + 6);
              v81 = v4 + 32;
              v82 = v5;
              v83 = 0;
              EtwpLogSystemEventUnsafe((__int64)&v81, KeGetCurrentThread(), v52, 1u, v58, Flags & 0xC00F00FF | 0x3100);
              return 0;
            }
            return -1073741637;
          }
          ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v31], 1u);
          return -1073741811;
        case 0x500u:
          v22 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
          PsGetMonitorContextServerSilo(EtwSiloMonitor, -1LL, &v62);
          v23 = v62;
          if ( *v62 == (_DWORD)v22 )
          {
            if ( (v4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v4 + 120 > MmUserProbeAddress || v4 + 120 < v4 )
              *(_BYTE *)MmUserProbeAddress = 0;
            v79 = *(_QWORD *)(v4 + 88);
            v68 = *(_DWORD *)(v4 + 84);
            v69 = *(_DWORD *)(v4 + 112);
            v74 = *(_QWORD *)(v4 + 48);
            v10 = EtwpWriteUserEvent(
                    (int)v23 + 8,
                    *((unsigned __int8 *)v23 + 424),
                    0,
                    0,
                    v69,
                    v4,
                    0LL,
                    *(_BYTE *)(v4 + 44),
                    v74,
                    v68,
                    v79,
                    0LL,
                    0LL,
                    0,
                    0LL,
                    0LL);
            PspDereferenceMonitorContextServerSilo(v23 - 24);
            return v10;
          }
          PspDereferenceMonitorContextServerSilo(v62 - 24);
          return -1073741790;
      }
      return -1073741811;
    }
    v34 = (unsigned __int16)TraceHandle;
    if ( (unsigned __int16)TraceHandle == 0xFFFF || !(_WORD)TraceHandle )
      v34 = (unsigned __int16)EtwpSystemLogger[0];
    if ( (unsigned int)v34 < 0x40 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v50 = 0;
      if ( PreviousMode == 1 || KeGetCurrentIrql() < 2u )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( !ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v34], 1u) )
        {
LABEL_106:
          v41 = KeGetCurrentThread();
          v42 = v41->KernelApcDisable + 1;
          v41->KernelApcDisable = v42;
          if ( !v42
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
            && !v41->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v41, v37, v38);
          }
          return -1073741816;
        }
        v50 = 1;
      }
      _mm_lfence();
      v39 = v34;
      v40 = WmipLoggerContext[v34];
      if ( (v40 & 1) == 0 )
      {
        if ( v40 )
        {
          if ( (*(_DWORD *)(v40 + 12) & 0x2000000) != 0 )
          {
            v43 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v40 + 834);
            if ( v43 && (*((_DWORD *)v43 + 1) & 0x28) != 0 )
              LOBYTE(TraceHeader) = 1;
            else
              LODWORD(TraceHeader) = 0;
            v10 = EtwpSetMark(v34, v4, v5, (int)TraceHeader, PreviousMode);
            v55 = v10;
          }
          else
          {
            v10 = -1073741811;
            v55 = -1073741811;
          }
          if ( v50 )
          {
            ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v39], 1u);
            v46 = KeGetCurrentThread();
            v47 = v46->KernelApcDisable + 1;
            v46->KernelApcDisable = v47;
            if ( !v47
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
              && !v46->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery(v46, v44, v45);
            }
            return v55;
          }
          return v10;
        }
        return -1073741816;
      }
      if ( v50 )
      {
        ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v39], 1u);
        goto LABEL_106;
      }
    }
    return -1073741816;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
    {
      v48 = 3222601728LL;
      if ( (Flags & 0x80000000) != 0 )
        v48 = 3221946368LL;
      return EtwTraceEvent(TraceHandle, v4, 72LL, v48, KeGetCurrentThread()->PreviousMode);
    }
    return -1073741811;
  }
  if ( !*(_QWORD *)&TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)TraceHeader & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = (_BYTE *)MmUserProbeAddress;
  if ( (unsigned __int64)&TraceHeader[2].GuidPtr > MmUserProbeAddress || &TraceHeader[2].Guid < (GUID *)TraceHeader )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    v24 = (_BYTE *)MmUserProbeAddress;
  }
  if ( (TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_QWORD *)&TraceHandle + 16LL > (unsigned __int64)v24
    || (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) < *(_QWORD *)&TraceHandle )
  {
    *v24 = 0;
  }
  v25 = TraceHeader[1].ProcessorTime;
  v80 = v25;
  LowPart = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
  v73 = LowPart;
  LODWORD(v51) = TraceHeader[2].TimeStamp.LowPart;
  v72 = (int)v51;
  v63 = *(_QWORD *)&TraceHeader[1].Size;
  v75 = v63;
  v50 = TraceHeader->Flags;
  v59 = v50;
  v84 = **(_OWORD **)&TraceHandle;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(&v84, 0LL);
  v27 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 80) )
    {
      v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u);
      if ( v10 >= 0 )
      {
        v49 = 0;
        KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
        LOBYTE(v28) = 1;
        EtwpUpdateEnableMask(v27, 0LL, v28, &v49);
        KeReleaseMutex(&EtwpNotificationMutex, 0);
        v10 = EtwpWriteUserEvent(
                v27,
                v49,
                (Flags & 0x80000000) != 0,
                0,
                (char)v51,
                v4,
                0LL,
                v50,
                v63,
                LowPart,
                v25,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
      }
      EtwpUnreferenceGuidEntry(v27);
      return v10;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return -1073741054;
}
