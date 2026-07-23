/*
 * XREFs of sub_1407B5678 @ 0x1407B5678
 * Callers:
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 */

unsigned __int64 sub_1407B5678()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&stru_1402FA900, 0, 0);
  stru_1402FA8E0.Header.Size = 6;
  LOWORD(stru_1402FA8E0.Header.Lock) = 0;
  stru_1402FA8E0.Header.SignalState = 0;
  stru_1402FA8E0.Header.WaitListHead.Blink = &stru_1402FA8E0.Header.WaitListHead;
  stru_1402FA8E0.Header.WaitListHead.Flink = &stru_1402FA8E0.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140747168 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
