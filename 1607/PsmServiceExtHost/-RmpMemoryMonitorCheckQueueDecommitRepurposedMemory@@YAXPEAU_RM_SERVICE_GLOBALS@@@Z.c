/*
 * XREFs of ?RmpMemoryMonitorCheckQueueDecommitRepurposedMemory@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003270C
 * Callers:
 *     RmpMemoryMonitorCheckMetricsAndRemediateSingleStep @ 0x180008710 (RmpMemoryMonitorCheckMetricsAndRemediateSingleStep.c)
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800327B0 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVI.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpOfferLazyDecommitCheckQueueWork @ 0x1800346F4 (RmpOfferLazyDecommitCheckQueueWork.c)
 */

void __fastcall RmpMemoryMonitorCheckQueueDecommitRepurposedMemory(struct _RM_SERVICE_GLOBALS *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = RmpOfferLazyDecommitCheckQueueWork(a1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 5 )
  {
    if ( TlgKeywordOn(v2, 1uLL) )
    {
      v10 = 0;
      v8 = &v6;
      v9 = 4;
      TlgWrite(v3, &unk_180041DAC, v4, v5, 3u, &pData);
    }
  }
}
