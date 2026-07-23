/*
 * XREFs of TtmpEnterProximity @ 0x1406780AC
 * Callers:
 *     TtmiTerminalMonitorControl @ 0x140677EB8 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x140678DEC (TtmiScheduleSessionWorker.c)
 *     TtmiLogEnterProximity @ 0x14067AF48 (TtmiLogEnterProximity.c)
 */

__int64 __fastcall TtmpEnterProximity(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *(unsigned int *)(a2 + 32);
  if ( (result & 8) == 0 )
  {
    v5 = (unsigned int)++*(_DWORD *)(a2 + 260);
    *(_QWORD *)(a2 + 248) = -1LL;
    *(_DWORD *)(a2 + 32) = result | 8;
    TtmiLogEnterProximity(v5);
    *(_DWORD *)(a2 + 32) |= 4u;
    return TtmiScheduleSessionWorker(a1, 2LL);
  }
  return result;
}
