/*
 * XREFs of ?RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003A608
 * Callers:
 *     RmpEnforcerContextInitialize @ 0x180019ED8 (RmpEnforcerContextInitialize.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostContextClose(struct _RM_POWERBOOST_CONTEXT *a1)
{
  __int64 v2; // rbx

  if ( *((_QWORD *)a1 + 2) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v2 = *((_QWORD *)a1 + 2);
    *((_DWORD *)a1 + 6) |= 4u;
    *((_QWORD *)a1 + 2) = 0LL;
    RtlLeaveCriticalSection(&RmpGlobalLock);
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(v2, 1LL);
    TpReleaseTimer(v2);
  }
}
