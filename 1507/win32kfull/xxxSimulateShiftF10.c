/*
 * XREFs of xxxSimulateShiftF10 @ 0x1C01D69A4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 */

unsigned __int64 xxxSimulateShiftF10()
{
  xxxKeyEvent(
    0xA0u,
    0x22Au,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL);
  xxxKeyEvent(
    0x79u,
    0x244u,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL);
  xxxKeyEvent(
    0x8079u,
    0x244u,
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL);
  return xxxKeyEvent(
           0x80A0u,
           0x22Au,
           (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
           0LL,
           0LL,
           0LL,
           0,
           0,
           0LL);
}
