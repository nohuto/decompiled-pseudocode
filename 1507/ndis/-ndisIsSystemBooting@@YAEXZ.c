/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x1C00B1D18
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C0020258 (ndisInitialBindCompleted.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
