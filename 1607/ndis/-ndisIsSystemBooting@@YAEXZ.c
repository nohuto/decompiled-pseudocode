/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x1C009E9D8
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C0013804 (ndisInitialBindCompleted.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
