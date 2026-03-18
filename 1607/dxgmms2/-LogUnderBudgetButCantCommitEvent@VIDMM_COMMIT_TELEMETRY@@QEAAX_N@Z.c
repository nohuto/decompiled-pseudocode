/*
 * XREFs of ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C009C5D4
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C00207A0 (_TlgWrite.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C006790C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00679D0 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C009C0F8 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(GUID *pRelatedActivityId, char a2)
{
  const GUID *v4; // r9
  unsigned __int16 *v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  GUID ActivityId; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 v13; // [rsp+70h] [rbp+37h]
  _DWORD v14[2]; // [rsp+78h] [rbp+3Fh] BYREF

  if ( pRelatedActivityId[1].Data4[0]
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)pRelatedActivityId->Data4 + 248LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)hProvider > 5
      && (qword_1C0035010 & 0x400000000008LL) != 0
      && (qword_1C0035018 & 0x400000000008LL) == qword_1C0035018 )
    {
      v5 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)&pRelatedActivityId->Data1 + 24LL) + 1072LL);
      v12 = 0;
      v10 = v14;
      v11 = 2;
      v6 = *v5;
      v7 = *((_QWORD *)v5 + 1);
      v14[1] = 0;
      v13 = v7;
      v14[0] = v6;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C002AB03, &ActivityId, v4, 4u, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(
      pRelatedActivityId,
      *(__int64 ***)&pRelatedActivityId[1].Data1,
      a2,
      &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((VIDMM_COMMIT_TELEMETRY *)pRelatedActivityId, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (VIDMM_COMMIT_TELEMETRY *)pRelatedActivityId,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)pRelatedActivityId->Data4 + 16LL),
      &ActivityId);
  }
}
