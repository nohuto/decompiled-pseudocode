/*
 * XREFs of EtwWriteEx @ 0x14009DF00
 * Callers:
 *     EtwWriteTransfer @ 0x14009250C (EtwWriteTransfer.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400DB5D4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400DC688 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400DC8C4 (PopDiagTraceFxDevicePowered.c)
 *     EtwTraceMemoryAcg @ 0x1400F5C1C (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14012126C (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140126BF8 (PopDiagTraceFxComponentIdleState.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 *     PoTraceDynamicTickDisabled @ 0x1401EEA1C (PoTraceDynamicTickDisabled.c)
 *     SmEtwLogRegionOp @ 0x14020800C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1402080D0 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x1402081E0 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1402082A4 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140208928 (SmKmStoreTerminateWorker.c)
 *     EtwpFileProvTrace @ 0x14020E638 (EtwpFileProvTrace.c)
 *     EtwpPsProvTracePriority @ 0x14020ED6C (EtwpPsProvTracePriority.c)
 *     EtwpTraceLostEvent @ 0x14020FB80 (EtwpTraceLostEvent.c)
 *     SmKmEtwLogGlobalStats @ 0x1405405D8 (SmKmEtwLogGlobalStats.c)
 *     SmKmEtwLogStoreChange @ 0x140659FC8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14065A104 (SmKmEtwLogStoreStats.c)
 *     EtwpPsProvTraceImage @ 0x140661AB4 (EtwpPsProvTraceImage.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
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
  PEVENT_DATA_DESCRIPTOR v14; // rsi
  ULONG v15; // ebp
  LPCGUID v16; // r14
  LPCGUID v17; // r15
  unsigned __int64 Keyword; // r8
  unsigned __int8 Level; // dl
  __int64 v21; // r9
  unsigned __int8 v22; // r11
  __int64 v23; // r9
  unsigned __int8 v24; // r11
  __int64 v25; // [rsp+90h] [rbp-48h] BYREF
  __int64 v26; // [rsp+98h] [rbp-40h]
  __int64 v27; // [rsp+E0h] [rbp+8h] BYREF
  ULONG64 v28; // [rsp+F0h] [rbp+18h]

  v28 = Filter;
  v27 = 0LL;
  v11 = 0;
  v25 = 0LL;
  if ( !RegHandle )
    return -1073741816;
  v12 = *(_QWORD *)(RegHandle + 104);
  if ( v12 )
    v13 = v12 + 28;
  else
    v13 = 0LL;
  v14 = UserData;
  v15 = UserDataCount;
  v16 = RelatedActivityId;
  v17 = ActivityId;
  if ( *(_BYTE *)(RegHandle + 99) )
  {
    Keyword = EventDescriptor->Keyword;
    Level = EventDescriptor->Level;
    v26 = *(_QWORD *)(RegHandle + 32);
    if ( EtwpLevelKeywordEnabled(v26 + 80, Level, Keyword) )
      v11 = EtwpEventWriteFull(
              v26,
              v22,
              v28,
              Flags,
              (__int64)EventDescriptor,
              v21,
              v21,
              (__int64)v17,
              (__int64)v16,
              v15,
              (__int64)v14,
              v21,
              (__int64)&v25,
              v21,
              *(_BYTE *)(RegHandle + 101),
              v13,
              (__int64)&v27);
  }
  if ( *(_BYTE *)(RegHandle + 100) )
  {
    if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 40) + 80LL, EventDescriptor->Level, EventDescriptor->Keyword) )
      return EtwpEventWriteFull(
               *(_QWORD *)(RegHandle + 32),
               v24,
               v28,
               Flags,
               (__int64)EventDescriptor,
               0,
               0,
               (__int64)v17,
               (__int64)v16,
               v15,
               (__int64)v14,
               0LL,
               (__int64)&v25,
               v23,
               *(_BYTE *)(RegHandle + 101),
               v13,
               (__int64)&v27);
  }
  return v11;
}
