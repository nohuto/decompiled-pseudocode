/*
 * XREFs of PpmPerfResetHistoryAll @ 0x140537958
 * Callers:
 *     PpmCheckReInit @ 0x140537328 (PpmCheckReInit.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfResetHistory @ 0x140139800 (PpmPerfResetHistory.c)
 */

__int64 PpmPerfResetHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  v2[1] = (unsigned __int16 *)qword_1402D17F8[0];
  v2[0] = (unsigned __int16 *)PpmCheckRegistered;
  v3 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v4, v2);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v4);
    PpmPerfResetHistory(Prcb);
  }
  return result;
}
