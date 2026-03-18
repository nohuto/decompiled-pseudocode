/*
 * XREFs of xxxSimulateShiftF10 @ 0x1C01CF48C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 */

void xxxSimulateShiftF10()
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
  xxxKeyEvent(
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
