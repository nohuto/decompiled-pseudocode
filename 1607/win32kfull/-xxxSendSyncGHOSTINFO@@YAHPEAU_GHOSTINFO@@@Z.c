/*
 * XREFs of ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01EE55C
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C01EE634 (xxxFrostCrashedWindow.c)
 * Callees:
 *     DwmSyncSignalGhost @ 0x1C025CDC8 (DwmSyncSignalGhost.c)
 */

__int64 __fastcall xxxSendSyncGHOSTINFO(struct _GHOSTINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = 0;
  if ( gdwInAtomicOperation )
  {
    a2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v5 = (void *)ReferenceDwmApiPort(a1, a2, gdwInAtomicOperation, a4);
  UserSessionSwitchLeaveCrit(v7, v6);
  LOBYTE(v4) = (int)DwmSyncSignalGhost(v5) >= 0;
  EnterCrit(0LL, 1LL);
  return v4;
}
