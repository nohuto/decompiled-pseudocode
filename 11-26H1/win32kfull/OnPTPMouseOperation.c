/*
 * XREFs of OnPTPMouseOperation @ 0x1402CB5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 OnPTPMouseOperation()
{
  return CPTPProcessor::ProcessMouseQueue();
}
