/*
 * XREFs of NtTraceEvent @ 0x1400741D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUpdateEnableMask @ 0x14046D0E0 (EtwpUpdateEnableMask.c)
 *     EtwpSetMark @ 0x140661FD0 (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  __int64 v5; // r14
  ULONG v7; // eax
  ULONG64 ProcessorTime; // r13
  PEVENT_TRACE_HEADER v9; // r12
  int v10; // r15d
  unsigned __int8 *v11; // r14
  void *v12; // r10
  __int64 v13; // r8
  unsigned __int16 v14; // cx
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // edx
  int v18; // edx
  _BYTE *v20; // rcx
  __int64 GuidPtr_high; // rcx
  __int64 v22; // rdi
  __int64 SiloDriverState; // rax
  __int64 v24; // rsi
  _BYTE *v25; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v27; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v29; // r15
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdi
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  signed __int64 v35; // rtt
  __int64 v36; // r9
  int v37; // r8d
  char *v38; // rdx
  unsigned int v39; // edi
  unsigned __int8 v40; // si
  __int64 v41; // rax
  int v42; // r9d
  char *v43; // rax
  __int64 v44; // r9
  char v45[8]; // [rsp+80h] [rbp-128h] BYREF
  PEVENT_TRACE_HEADER v46; // [rsp+88h] [rbp-120h]
  char v47; // [rsp+90h] [rbp-118h]
  _BYTE v48[3]; // [rsp+91h] [rbp-117h] BYREF
  unsigned int Data1; // [rsp+94h] [rbp-114h]
  ULONG LowPart; // [rsp+98h] [rbp-110h]
  unsigned __int64 v51; // [rsp+A0h] [rbp-108h]
  USHORT Version; // [rsp+ACh] [rbp-FCh]
  unsigned __int8 v54; // [rsp+B0h] [rbp-F8h]
  __int64 v55; // [rsp+B8h] [rbp-F0h]
  ULONG v56; // [rsp+C0h] [rbp-E8h]
  PVOID Object; // [rsp+C8h] [rbp-E0h] BYREF
  int v58; // [rsp+D0h] [rbp-D8h]
  int v59; // [rsp+D4h] [rbp-D4h]
  __int64 v60; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-C0h]
  int v63; // [rsp+F0h] [rbp-B8h]
  __int64 v64; // [rsp+F8h] [rbp-B0h]
  ULONG v65; // [rsp+100h] [rbp-A8h]
  PEVENT_TRACE_HEADER v66; // [rsp+108h] [rbp-A0h]
  ULONG64 v67; // [rsp+110h] [rbp-98h]
  __int64 v68; // [rsp+120h] [rbp-88h]
  ULONGLONG *v69; // [rsp+130h] [rbp-78h]
  ULONG64 v70; // [rsp+140h] [rbp-68h]
  ULONGLONG *v71; // [rsp+148h] [rbp-60h] BYREF
  int v72; // [rsp+150h] [rbp-58h]
  int v73; // [rsp+154h] [rbp-54h]
  __int128 v74; // [rsp+158h] [rbp-50h] BYREF

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
    v70 = ProcessorTime;
    LODWORD(v46) = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
    v63 = (int)v46;
    v62 = *((unsigned __int16 *)&TraceHeader[1].GuidPtr + 5);
    LowPart = TraceHeader[2].TimeStamp.LowPart;
    v65 = LowPart;
    v55 = *(_QWORD *)&TraceHeader[1].Size;
    v68 = v55;
    v45[0] = TraceHeader->Flags;
    v54 = v45[0];
    v9 = 0LL;
    v66 = 0LL;
    if ( TraceHeader[1].Guid.Data4[0] )
    {
      v9 = TraceHeader + 2;
      v66 = TraceHeader + 2;
    }
    v10 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v10 >= 0 )
    {
      v60 = 0LL;
      v11 = (unsigned __int8 *)Object;
      v12 = (void *)*((_QWORD *)Object + 4);
      Object = v12;
      v13 = *((_QWORD *)v11 + 5);
      v71 = (ULONGLONG *)v13;
      v14 = (Flags & 0x80000000) != 0;
      LODWORD(v51) = (Flags & 0x80000000) != 0;
      v61 = 0LL;
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
                v62,
                LowPart,
                (__int64)TraceHeader,
                (__int64)v9,
                v45[0],
                v55,
                (_DWORD)v46,
                ProcessorTime,
                (__int64)&v61,
                0LL,
                v11[101],
                v15,
                (__int64)&v60);
        v14 = v51;
        LODWORD(v12) = (_DWORD)Object;
        v13 = (__int64)v71;
      }
      v18 = v11[100];
      if ( (_BYTE)v18 )
        v10 = EtwpWriteUserEvent(
                (_DWORD)v12,
                v18,
                v14,
                v62,
                LowPart,
                (__int64)TraceHeader,
                (__int64)v9,
                v45[0],
                v55,
                (_DWORD)v46,
                ProcessorTime,
                (__int64)&v61,
                v13,
                v11[101],
                v15,
                (__int64)&v60);
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    }
    return v10;
  }
  if ( v7 == 512 )
  {
    v55 = *(_QWORD *)&TraceHandle;
    v51 = 0LL;
    if ( TraceHeaderLength == 40 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        v46 = TraceHeader;
        if ( ((unsigned __int8)TraceHeader & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = (_BYTE *)MmUserProbeAddress;
        if ( (unsigned __int64)&v46->ProcessorTime <= MmUserProbeAddress )
        {
          if ( &v46->KernelTime >= (ULONG *)v46 )
          {
LABEL_25:
            Data1 = v46->Guid.Data1;
            if ( (Flags & 0x80000000) != 0 )
            {
              LODWORD(v51) = *((_DWORD *)&v46->GuidPtr + 2);
              Data1 |= 0x80u;
            }
            else
            {
              v51 = *(&v46->GuidPtr + 1);
            }
            GuidPtr_high = HIDWORD(v46->GuidPtr);
            LowPart = GuidPtr_high;
            if ( (unsigned int)GuidPtr_high <= 0x10000 )
            {
              if ( (_DWORD)GuidPtr_high && (v51 + GuidPtr_high > MmUserProbeAddress || v51 + GuidPtr_high < v51) )
                *(_BYTE *)MmUserProbeAddress = 0;
              HIDWORD(v55) = GuidPtr_high;
              return EtwpTraceMessageVa(v55, Data1 | 0x40, (int)v46 + 8, LOWORD(v46->Version), v51, 1);
            }
            v10 = -1073741811;
            v59 = -1073741811;
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
    switch ( v7 )
    {
      case 0x600u:
        v39 = (unsigned __int16)TraceHandle;
        if ( (unsigned __int16)TraceHandle == 0xFFFF || !(_WORD)TraceHandle )
          v39 = (unsigned __int16)EtwpSystemLogger[0];
        if ( v39 >= 0x40 )
          return -1073741816;
        v40 = KeGetCurrentThread()->gap0[10];
        v41 = EtwpOpenLogger(v39, EtwpSiloState, v40, v48);
        if ( !v41 )
          return -1073741816;
        if ( (*(_DWORD *)(v41 + 12) & 0x2000000) != 0 )
        {
          v43 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v41 + 834);
          if ( v43 && (*((_DWORD *)v43 + 1) & 0x28) != 0 )
            LOBYTE(v42) = 1;
          else
            v42 = 0;
          v10 = EtwpSetMark(v39, (int)TraceHeader, v5, v42, v40);
        }
        else
        {
          v10 = -1073741811;
        }
        EtwpCloseLogger(v39, EtwpSiloState, v48[0]);
        return v10;
      case 0x100u:
        if ( (Flags & 0x80000000) != 0 )
          v36 = 3221880832LL;
        else
          v36 = 3222536192LL;
        return EtwTraceEvent(TraceHandle, TraceHeader, 48LL, v36, KeGetCurrentThread()->PreviousMode);
      case 0x400u:
        v37 = (unsigned __int16)TraceHandle;
        if ( (unsigned __int16)TraceHandle == 0xFFFF )
        {
          v37 = 0;
        }
        else if ( (unsigned __int16)TraceHandle >= 0x40u )
        {
          return -1073741811;
        }
        if ( (unsigned int)v5 > 0xFFDF )
          return -1073741675;
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v38 = (char *)&TraceHeader->GuidPtr + v5 + 8;
          if ( (unsigned __int64)v38 > MmUserProbeAddress || v38 < (char *)TraceHeader )
            *(_BYTE *)MmUserProbeAddress = 0;
          v69 = &TraceHeader->GuidPtr + 1;
          Version = TraceHeader->Class.Version;
          v71 = &TraceHeader->GuidPtr + 1;
          v72 = v5;
          v73 = 0;
          EtwpLogSystemEventUnsafe(
            (unsigned int)&v71,
            (unsigned int)KeGetCurrentThread(),
            v37,
            1,
            Version,
            Flags & 0xC00F00FF | 0x3100);
          return 0;
        }
        return -1073741637;
      case 0x500u:
        v22 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
        v24 = SiloDriverState;
        v46 = (PEVENT_TRACE_HEADER)SiloDriverState;
        if ( *(_DWORD *)(SiloDriverState + 5028) == (_DWORD)v22 )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&TraceHeader[2].GuidPtr > MmUserProbeAddress
            || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          v10 = EtwpWriteUserEvent(
                  SiloDriverState,
                  *(unsigned __int8 *)(SiloDriverState + 5024),
                  0,
                  0,
                  TraceHeader[2].TimeStamp.LowPart,
                  (__int64)TraceHeader,
                  0LL,
                  TraceHeader->Flags,
                  *(_QWORD *)&TraceHeader[1].Size,
                  *((_DWORD *)&TraceHeader[1].GuidPtr + 3),
                  TraceHeader[1].ProcessorTime,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
          PspDereferenceMonitorContextServerSilo(v24 - 128);
          return v10;
        }
        PspDereferenceMonitorContextServerSilo(SiloDriverState - 128);
        return -1073741790;
    }
    return -1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
    {
      v44 = 3222601728LL;
      if ( (Flags & 0x80000000) != 0 )
        v44 = 3221946368LL;
      return EtwTraceEvent(TraceHandle, TraceHeader, 72LL, v44, KeGetCurrentThread()->PreviousMode);
    }
    if ( v7 == 2304 )
    {
      if ( Flags == 2304 && TraceHeaderLength && TraceHeader )
        return EtwTraceRaw(TraceHandle, TraceHeader, TraceHeaderLength, (unsigned __int8)KeGetCurrentThread()->gap0[10]);
      return -1073741811;
    }
    return -1073741811;
  }
  if ( !*(_QWORD *)&TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)TraceHeader & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (_BYTE *)MmUserProbeAddress;
  if ( (unsigned __int64)&TraceHeader[2].GuidPtr > MmUserProbeAddress || &TraceHeader[2].Guid < (GUID *)TraceHeader )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
    v25 = (_BYTE *)MmUserProbeAddress;
  }
  if ( (TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_QWORD *)&TraceHandle + 16LL > (unsigned __int64)v25
    || (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) < *(_QWORD *)&TraceHandle )
  {
    *v25 = 0;
  }
  v67 = TraceHeader[1].ProcessorTime;
  v58 = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
  v56 = TraceHeader[2].TimeStamp.LowPart;
  v64 = *(_QWORD *)&TraceHeader[1].Size;
  v47 = TraceHeader->Flags;
  v74 = **(_OWORD **)&TraceHandle;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(&v74, 0LL);
  v27 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 80) )
    {
      v10 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u);
      v59 = v10;
      if ( v10 >= 0 )
      {
        v45[0] = 0;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v29 = (signed __int64 *)(v27 + 384);
        v30 = KeAbPreAcquire(v27 + 384, 0LL, 0LL);
        v32 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 384), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v27 + 384), v30, v27 + 384);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        *(_QWORD *)(v27 + 392) = KeGetCurrentThread();
        LOBYTE(v31) = 1;
        EtwpUpdateEnableMask(v27, 0LL, v31, v45);
        *(_QWORD *)(v27 + 392) = 0LL;
        _m_prefetchw(v29);
        v33 = *v29;
        if ( (*v29 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v34 = v33 - 16;
        else
          v34 = 0LL;
        if ( (v33 & 2) != 0 || (v35 = *v29, v35 != _InterlockedCompareExchange64(v29, v34, v33)) )
          ExfReleasePushLock((_QWORD *)(v27 + 384));
        KeAbPostRelease(v27 + 384);
        KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
        v10 = EtwpWriteUserEvent(
                v27,
                (unsigned __int8)v45[0],
                (Flags & 0x80000000) != 0,
                0,
                v56,
                (__int64)TraceHeader,
                0LL,
                v47,
                v64,
                v58,
                v67,
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
