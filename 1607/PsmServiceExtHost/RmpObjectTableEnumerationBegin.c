/*
 * XREFs of RmpObjectTableEnumerationBegin @ 0x180035278
 * Callers:
 *     RmpTracingControlCallback @ 0x18001F6F0 (RmpTracingControlCallback.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x1800293D0 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034D40 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableEnumerationBegin(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  RtlAcquireSRWLockShared(a1 + 16);
  *a2 = a1;
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[1] = a1;
  result = *(_QWORD *)(a1 + 8);
  a2[3] = result;
  a2[2] = result;
  return result;
}
