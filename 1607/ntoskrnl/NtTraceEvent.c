/*
 * XREFs of NtTraceEvent @ 0x1400D3400
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1400737E8 (EtwpOpenLogger.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040DC0C (EtwpUnreferenceGuidEntry.c)
 *     EtwpAccessCheck @ 0x14040DE8C (EtwpAccessCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     EtwpUpdateEnableMask @ 0x140490A88 (EtwpUpdateEnableMask.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 *     EtwpSetMark @ 0x1406A2A5C (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  __int64 GuidPtr_high; // rcx
  int v9; // r15d
  ULONG64 ProcessorTime; // r13
  PEVENT_TRACE_HEADER v12; // r12
  unsigned __int8 *v13; // r14
  void *v14; // rcx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // edx
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v27; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v29; // r15
  _BYTE *v30; // rax
  __int64 v31; // r8
  _BYTE *v32; // rsi
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  signed __int64 v35; // rtt
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  char *v40; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  PEVENT_TRACE_HEADER v43; // rdx
  unsigned int v44; // edi
  char PreviousMode; // r15
  __int64 v46; // rsi
  __int64 v47; // rax
  int v48; // r9d
  char *v49; // rax
  char Object; // [rsp+20h] [rbp-188h]
  unsigned __int8 v51; // [rsp+80h] [rbp-128h] BYREF
  char v52; // [rsp+81h] [rbp-127h] BYREF
  char v53; // [rsp+82h] [rbp-126h]
  PEVENT_TRACE_HEADER v54; // [rsp+88h] [rbp-120h]
  unsigned int Data1; // [rsp+90h] [rbp-118h]
  unsigned __int8 v57; // [rsp+96h] [rbp-112h]
  USHORT Version; // [rsp+98h] [rbp-110h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-108h]
  ULONG LowPart; // [rsp+A8h] [rbp-100h]
  __int64 v61; // [rsp+B0h] [rbp-F8h]
  int v62; // [rsp+B8h] [rbp-F0h]
  ULONG v63; // [rsp+BCh] [rbp-ECh]
  int v64; // [rsp+C0h] [rbp-E8h]
  PVOID v65; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-C8h]
  int v69; // [rsp+ECh] [rbp-BCh]
  ULONG v70; // [rsp+F0h] [rbp-B8h]
  ULONG64 v71; // [rsp+F8h] [rbp-B0h]
  __int64 v72; // [rsp+100h] [rbp-A8h]
  PEVENT_TRACE_HEADER v73; // [rsp+108h] [rbp-A0h]
  ULONGLONG *v74; // [rsp+128h] [rbp-80h]
  ULONG64 v75; // [rsp+130h] [rbp-78h]
  __int64 v76; // [rsp+138h] [rbp-70h]
  ULONGLONG *v77; // [rsp+140h] [rbp-68h] BYREF
  int v78; // [rsp+148h] [rbp-60h]
  int v79; // [rsp+14Ch] [rbp-5Ch]
  __int128 v80; // [rsp+150h] [rbp-58h] BYREF

  v5 = TraceHeaderLength;
  v7 = Flags & 0xFF00;
  if ( v7 != 512 )
  {
    if ( v7 == 768 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
      {
        if ( ((unsigned __int8)TraceHeader & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      ProcessorTime = TraceHeader[1].ProcessorTime;
      v75 = ProcessorTime;
      LODWORD(v54) = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
      v69 = (int)v54;
      v68 = *((unsigned __int16 *)&TraceHeader[1].GuidPtr + 5);
      LowPart = TraceHeader[2].TimeStamp.LowPart;
      v70 = LowPart;
      v61 = *(_QWORD *)&TraceHeader[1].Size;
      v76 = v61;
      v51 = TraceHeader->Flags;
      v57 = v51;
      v12 = 0LL;
      v73 = 0LL;
      if ( TraceHeader[1].Guid.Data4[0] )
      {
        v12 = TraceHeader + 2;
        v73 = TraceHeader + 2;
      }
      v9 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &v65, 0LL);
      if ( v9 >= 0 )
      {
        v66 = 0LL;
        v13 = (unsigned __int8 *)v65;
        v14 = (void *)*((_QWORD *)v65 + 4);
        v65 = v14;
        v15 = *((_QWORD *)v13 + 5);
        v77 = (ULONGLONG *)v15;
        v16 = (Flags & 0x80000000) != 0;
        LODWORD(v59) = v16;
        v67 = 0LL;
        v17 = 0LL;
        v18 = *((_QWORD *)v13 + 13);
        if ( v18 )
          v17 = v18 + 28;
        v19 = v13[100];
        if ( (_BYTE)v19 )
        {
          v9 = EtwpWriteUserEvent(
                 (_DWORD)v14,
                 v19,
                 v16,
                 v68,
                 LowPart,
                 (__int64)TraceHeader,
                 (__int64)v12,
                 v51,
                 v61,
                 (_DWORD)v54,
                 ProcessorTime,
                 (__int64)&v67,
                 0LL,
                 v13[102],
                 v17,
                 (__int64)&v66);
          LODWORD(v14) = (_DWORD)v65;
          v16 = v59;
          v15 = (__int64)v77;
        }
        v20 = v13[101];
        if ( (_BYTE)v20 )
          v9 = EtwpWriteUserEvent(
                 (_DWORD)v14,
                 v20,
                 v16,
                 v68,
                 LowPart,
                 (__int64)TraceHeader,
                 (__int64)v12,
                 v51,
                 v61,
                 (_DWORD)v54,
                 ProcessorTime,
                 (__int64)&v67,
                 v15,
                 v13[102],
                 v17,
                 (__int64)&v66);
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
      }
      return v9;
    }
    if ( v7 > 0x600 )
    {
      if ( v7 == 1792 )
      {
        if ( *(_QWORD *)&TraceHandle )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&TraceHeader[2].GuidPtr > 0x7FFFFFFF0000LL
            || &TraceHeader[2].Guid < (GUID *)TraceHeader )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (TraceHandle & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) > 0x7FFFFFFF0000LL
            || (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) < *(_QWORD *)&TraceHandle )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v71 = TraceHeader[1].ProcessorTime;
          v62 = *((_DWORD *)&TraceHeader[1].GuidPtr + 3);
          v63 = TraceHeader[2].TimeStamp.LowPart;
          v72 = *(_QWORD *)&TraceHeader[1].Size;
          v53 = TraceHeader->Flags;
          v80 = **(_OWORD **)&TraceHandle;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[106], &v80, 0LL);
          v27 = GuidEntryByGuid;
          if ( GuidEntryByGuid )
          {
            if ( *(_DWORD *)(GuidEntryByGuid + 80) )
            {
              v9 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 56), 0x800u);
              v64 = v9;
              if ( v9 >= 0 )
              {
                v51 = 0;
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v29 = (signed __int64 *)(v27 + 384);
                v30 = (_BYTE *)KeAbPreAcquire(v27 + 384, 0LL, 0);
                v32 = v30;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 384), 0LL) )
                  ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v27 + 384), v30, v27 + 384);
                if ( v32 )
                  v32[26] |= 1u;
                *(_QWORD *)(v27 + 392) = KeGetCurrentThread();
                LOBYTE(v31) = 1;
                EtwpUpdateEnableMask(v27, 0LL, v31, &v51);
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
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
                v9 = EtwpWriteUserEvent(
                       v27,
                       v51,
                       (Flags & 0x80000000) != 0,
                       0,
                       v63,
                       (__int64)TraceHeader,
                       0LL,
                       v53,
                       v72,
                       v62,
                       v71,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL);
              }
              EtwpUnreferenceGuidEntry(v27);
              return v9;
            }
            EtwpUnreferenceGuidEntry(GuidEntryByGuid);
          }
          return -1073741054;
        }
        return -1073741811;
      }
      if ( v7 != 2048 )
      {
        if ( v7 != 2304 )
          return -1073741811;
        if ( Flags != 2304 || !TraceHeaderLength || !TraceHeader )
          return -1073741811;
        return EtwTraceRaw(TraceHandle, TraceHeader, TraceHeaderLength, (unsigned __int8)KeGetCurrentThread()->gap0[10]);
      }
      v41 = 3222601728LL;
      if ( (Flags & 0x80000000) != 0 )
        v41 = 3221946368LL;
      Object = KeGetCurrentThread()->PreviousMode;
      v42 = 72LL;
      v43 = TraceHeader;
    }
    else
    {
      if ( v7 == 1536 )
      {
        v44 = (unsigned __int16)TraceHandle;
        if ( (unsigned __int16)TraceHandle == 0xFFFF || !(_WORD)TraceHandle )
          v44 = (unsigned __int16)EtwpSystemLogger[0];
        if ( v44 >= 0x40 )
          return -1073741816;
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v46 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
        v47 = EtwpOpenLogger(v44, v46, PreviousMode, &v52);
        if ( !v47 )
          return -1073741816;
        if ( (*(_DWORD *)(v47 + 12) & 0x2000000) != 0 )
        {
          v49 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v47 + 818);
          if ( v49 && (*((_DWORD *)v49 + 1) & 0x28) != 0 )
            LOBYTE(v48) = 1;
          else
            v48 = 0;
          v9 = EtwpSetMark(v44, (int)TraceHeader, v5, v48, PreviousMode);
        }
        else
        {
          v9 = -1073741811;
        }
        EtwpCloseLogger(v44, v46, v52);
        return v9;
      }
      if ( v7 != 256 )
      {
        if ( v7 == 1024 )
        {
          v39 = (unsigned __int16)TraceHandle;
          if ( (unsigned __int16)TraceHandle == 0xFFFF )
          {
            v39 = 0LL;
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
            v40 = (char *)&TraceHeader->GuidPtr + v5 + 8;
            if ( (unsigned __int64)v40 > 0x7FFFFFFF0000LL || v40 < (char *)TraceHeader )
              MEMORY[0x7FFFFFFF0000] = 0;
            v74 = &TraceHeader->GuidPtr + 1;
            Version = TraceHeader->Class.Version;
            v77 = &TraceHeader->GuidPtr + 1;
            v78 = v5;
            v79 = 0;
            EtwpLogSystemEventUnsafe((__int64)&v77, KeGetCurrentThread(), v39, 1u, Version, Flags & 0xC00F00FF | 0x3100);
            return 0;
          }
          return -1073741637;
        }
        if ( v7 == 1280 )
        {
          v21 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
          if ( *(_DWORD *)(v21 + 5028) != v23 )
            return -1073741790;
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v22 + 120) > 0x7FFFFFFF0000LL || v22 + 120 < (unsigned __int64)TraceHeader )
            MEMORY[0x7FFFFFFF0000] = 0;
          return EtwpWriteUserEvent(
                   v21,
                   *(unsigned __int8 *)(v21 + 5024),
                   0,
                   0,
                   *(_DWORD *)(v22 + 112),
                   (__int64)TraceHeader,
                   0LL,
                   TraceHeader->Flags,
                   *(_QWORD *)&TraceHeader[1].Size,
                   *(_DWORD *)(v22 + 84),
                   *(_QWORD *)(v22 + 88),
                   0LL,
                   0LL,
                   0,
                   0LL,
                   0LL);
        }
        return -1073741811;
      }
      v41 = 3222536192LL;
      if ( (Flags & 0x80000000) != 0 )
        v41 = 3221880832LL;
      Object = KeGetCurrentThread()->PreviousMode;
      v42 = 48LL;
      v43 = TraceHeader;
    }
    return EtwTraceEvent(TraceHandle, v43, v42, v41, Object);
  }
  v61 = *(_QWORD *)&TraceHandle;
  v59 = 0LL;
  if ( TraceHeaderLength != 40 )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741637;
  v54 = TraceHeader;
  if ( ((unsigned __int8)TraceHeader & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&v54->ProcessorTime > 0x7FFFFFFF0000LL || &v54->KernelTime < (ULONG *)v54 )
    MEMORY[0x7FFFFFFF0000] = 0;
  Data1 = v54->Guid.Data1;
  if ( (Flags & 0x80000000) != 0 )
  {
    LODWORD(v59) = *((_DWORD *)&v54->GuidPtr + 2);
    Data1 |= 0x80u;
  }
  else
  {
    v59 = *(&v54->GuidPtr + 1);
  }
  GuidPtr_high = HIDWORD(v54->GuidPtr);
  LowPart = GuidPtr_high;
  if ( (unsigned int)GuidPtr_high > 0x10000 )
  {
    v9 = -1073741811;
    v64 = -1073741811;
    return v9;
  }
  if ( (_DWORD)GuidPtr_high && (v59 + GuidPtr_high > 0x7FFFFFFF0000LL || v59 + GuidPtr_high < v59) )
    MEMORY[0x7FFFFFFF0000] = 0;
  HIDWORD(v61) = GuidPtr_high;
  return EtwpTraceMessageVa(v61, Data1 | 0x40, (int)v54 + 8, LOWORD(v54->Version), v59, 1);
}
