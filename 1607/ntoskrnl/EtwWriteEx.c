/*
 * XREFs of EtwWriteEx @ 0x140012EE0
 * Callers:
 *     EtwWriteTransfer @ 0x14000A1B0 (EtwWriteTransfer.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwTraceMemoryAcg @ 0x1400B54B0 (EtwTraceMemoryAcg.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400BF470 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400BF87C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400C0D98 (PopDiagTraceFxDevicePowered.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14012C080 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131D54 (PopDiagTraceFxComponentIdleState.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 *     PoTraceDynamicTickDisabled @ 0x140207354 (PoTraceDynamicTickDisabled.c)
 *     SmEtwLogRegionOp @ 0x140220258 (SmEtwLogRegionOp.c)
 *     SmEtwLogStoreCorruption @ 0x14022031C (SmEtwLogStoreCorruption.c)
 *     SmEtwLogStoreOp @ 0x14022042C (SmEtwLogStoreOp.c)
 *     SmEtwLogStoreStateChange @ 0x1402204F0 (SmEtwLogStoreStateChange.c)
 *     SmKmStoreTerminateWorker @ 0x140220B74 (SmKmStoreTerminateWorker.c)
 *     EtwpFileProvTrace @ 0x140226318 (EtwpFileProvTrace.c)
 *     EtwpPsProvTracePriority @ 0x140226A78 (EtwpPsProvTracePriority.c)
 *     EtwpTraceLostEvent @ 0x1402278D8 (EtwpTraceLostEvent.c)
 *     EtwpPsProvTraceImage @ 0x14054B5DC (EtwpPsProvTraceImage.c)
 *     SmKmEtwLogStoreChange @ 0x140697CA4 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140697DD0 (SmKmEtwLogStoreStats.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
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
