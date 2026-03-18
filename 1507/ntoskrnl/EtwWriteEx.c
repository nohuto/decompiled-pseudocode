/*
 * XREFs of EtwWriteEx @ 0x140014D70
 * Callers:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140028790 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140028CEC (PopDiagTraceFxDevicePowerRequirement.c)
 *     EtwTraceMemoryAcg @ 0x1400DCD2C (EtwTraceMemoryAcg.c)
 *     EtwWriteTransfer @ 0x1400EFF50 (EtwWriteTransfer.c)
 *     PopDiagTraceFxDevicePowered @ 0x1401302C4 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140136C40 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140139C3C (PopDiagTraceFxComponentIdleState.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 *     PoTraceDynamicTickDisabled @ 0x14023D0D4 (PoTraceDynamicTickDisabled.c)
 *     SmEtwLogRegionOp @ 0x1402572A0 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x140257364 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140257474 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x140257538 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140257BBC (SmKmStoreTerminateWorker.c)
 *     EtwpFileProvTrace @ 0x14025D960 (EtwpFileProvTrace.c)
 *     EtwpPsProvTracePriority @ 0x14025E094 (EtwpPsProvTracePriority.c)
 *     EtwpTraceLostEvent @ 0x14025EF08 (EtwpTraceLostEvent.c)
 *     SmKmEtwLogGlobalStats @ 0x1405B5BD4 (SmKmEtwLogGlobalStats.c)
 *     SmKmEtwLogStoreChange @ 0x1406DC70C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1406DC848 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x1406E4AEC (EtwpPsProvTraceImage.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 */

NTSTATUS __stdcall EtwWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS v11; // r10d
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // edx
  PEVENT_DATA_DESCRIPTOR v15; // rsi
  ULONG v16; // ebp
  LPCGUID v17; // r14
  LPCGUID v18; // r15
  int v19; // edx
  __int64 v21; // r11
  unsigned __int64 Keyword; // r9
  unsigned __int8 v23; // al
  NTSTATUS v24; // eax
  __int64 v25; // r9
  unsigned __int64 v26; // r11
  unsigned __int8 v27; // al
  _QWORD v28[2]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+8h] BYREF
  ULONG64 v30; // [rsp+F0h] [rbp+18h]

  v30 = Filter;
  v29 = 0LL;
  v11 = 0;
  v28[0] = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v13 = v12 + 28;
  else
    v13 = 0LL;
  v14 = *(unsigned __int8 *)(RegHandle + 99);
  v15 = UserData;
  v16 = UserDataCount;
  v17 = RelatedActivityId;
  v18 = ActivityId;
  if ( (_BYTE)v14 )
  {
    v21 = *(_QWORD *)(RegHandle + 32);
    Keyword = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v21 + 80) )
    {
      v23 = *(_BYTE *)(v21 + 84);
      if ( (EventDescriptor->Level <= v23 || !v23)
        && ((*(_DWORD *)(v21 + 88) & 0x40) != 0 && !Keyword
         || (*(_QWORD *)(v21 + 96) & Keyword) != 0 && (Keyword & *(_QWORD *)(v21 + 104)) == *(_QWORD *)(v21 + 104)) )
      {
        v24 = EtwpEventWriteFull(
                v21,
                v14,
                Filter,
                Flags,
                (__int64)EventDescriptor,
                0,
                0,
                (__int64)ActivityId,
                (__int64)RelatedActivityId,
                UserDataCount,
                (__int64)UserData,
                0LL,
                (__int64)v28,
                0LL,
                *(_BYTE *)(RegHandle + 101),
                v13,
                (__int64)&v29);
        LODWORD(Filter) = v30;
        v11 = v24;
      }
    }
  }
  v19 = *(unsigned __int8 *)(RegHandle + 100);
  if ( (_BYTE)v19 )
  {
    v25 = *(_QWORD *)(RegHandle + 40);
    v26 = EventDescriptor->Keyword;
    if ( *(_DWORD *)(v25 + 80) )
    {
      v27 = *(_BYTE *)(v25 + 84);
      if ( (EventDescriptor->Level <= v27 || !v27)
        && ((*(_DWORD *)(v25 + 88) & 0x40) != 0 && !v26
         || (v26 & *(_QWORD *)(v25 + 96)) != 0 && (v26 & *(_QWORD *)(v25 + 104)) == *(_QWORD *)(v25 + 104)) )
      {
        return EtwpEventWriteFull(
                 *(_QWORD *)(RegHandle + 32),
                 v19,
                 Filter,
                 Flags,
                 (__int64)EventDescriptor,
                 0,
                 0,
                 (__int64)v18,
                 (__int64)v17,
                 v16,
                 (__int64)v15,
                 0LL,
                 (__int64)v28,
                 v25,
                 *(_BYTE *)(RegHandle + 101),
                 v13,
                 (__int64)&v29);
      }
    }
  }
  return v11;
}
