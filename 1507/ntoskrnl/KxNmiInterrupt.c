/*
 * XREFs of KxNmiInterrupt @ 0x14018E6C0
 * Callers:
 *     KiNmiInterruptStart @ 0x14018E380 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x1401FF5DC (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x14020AEAC (KiSaveProcessorState.c)
 */

__int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2E88u) != 5 )
    KiSaveProcessorState(v0 - 128, v2);
  return KiProcessNMI(v0 - 128, v2);
}
