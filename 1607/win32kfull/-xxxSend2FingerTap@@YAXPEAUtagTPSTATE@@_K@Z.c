/*
 * XREFs of ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01ED688
 * Callers:
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01ED1FC (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01ED3DC (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 * Callees:
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01E836C (-QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z.c)
 */

void __fastcall xxxSend2FingerTap(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER v3; // rdx
  LARGE_INTEGER v4; // rcx

  a1[261] = KeQueryPerformanceCounter(0LL);
  if ( gdwInAtomicOperation )
  {
    v4.QuadPart = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
    (LARGE_INTEGER)v4.QuadPart,
    (LARGE_INTEGER)v3.QuadPart);
  QueuePTPMouseEvent(gptCursorAsync, 8, a2);
  QueuePTPMouseEvent(
    gptCursorAsync,
    16,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  EnterCrit(0LL, 1LL);
  if ( IsFirstActionAfterKey() )
    dword_1C0326D08 = 2;
  else
    dword_1C0326D0C = 2;
  ++dword_1C0326D58;
  ++dword_1C0326D74;
}
