/*
 * XREFs of KxNmiInterrupt @ 0x140169BC0
 * Callers:
 *     KiNmiInterruptStart @ 0x140169880 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x14008269C (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x140082BD8 (KiSaveProcessorState.c)
 */

unsigned __int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2E88u) != 5 )
    KiSaveProcessorState(v0 - 128, (__int64)v2);
  return KiProcessNMI(v0 - 128, (__int64)v2);
}
