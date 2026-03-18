/*
 * XREFs of EtwWriteEx @ 0x140013360
 * Callers:
 *     EtwWriteTransfer @ 0x14000A630 (EtwWriteTransfer.c)
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwTraceMemoryAcg @ 0x1400B7618 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400C15E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400C19EC (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400C2F08 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14012BB10 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401317E4 (PopDiagTraceFxComponentIdleState.c)
 *     _TlgWriteEx @ 0x1401E12FC (_TlgWriteEx.c)
 *     PoTraceDynamicTickDisabled @ 0x140207528 (PoTraceDynamicTickDisabled.c)
 *     SmEtwLogRegionOp @ 0x14022042C (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x1402204F0 (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x140220600 (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1402206C4 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140220D48 (SmKmStoreTerminateWorker.c)
 *     EtwpFileProvTrace @ 0x1402264EC (EtwpFileProvTrace.c)
 *     EtwpPsProvTracePriority @ 0x140226C4C (EtwpPsProvTracePriority.c)
 *     EtwpTraceLostEvent @ 0x140227AAC (EtwpTraceLostEvent.c)
 *     EtwpPsProvTraceImage @ 0x14054B09C (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x140697BC0 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140697CEC (SmKmEtwLogStoreStats.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D81F0 (EtwpLevelKeywordEnabled.c)
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
  __int64 Level; // rdx
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
  if ( *(_BYTE *)(RegHandle + 100) )
  {
    Keyword = EventDescriptor->Keyword;
    Level = EventDescriptor->Level;
    v26 = *(_QWORD *)(RegHandle + 32);
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v26 + 80, Level, Keyword) )
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
              *(_BYTE *)(RegHandle + 102),
              v13,
              (__int64)&v27);
  }
  if ( *(_BYTE *)(RegHandle + 101) )
  {
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(RegHandle + 40) + 80LL,
                            EventDescriptor->Level,
                            EventDescriptor->Keyword) )
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
               *(_BYTE *)(RegHandle + 102),
               v13,
               (__int64)&v27);
  }
  return v11;
}
