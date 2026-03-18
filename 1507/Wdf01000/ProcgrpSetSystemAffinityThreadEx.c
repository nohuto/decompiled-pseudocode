/*
 * XREFs of ProcgrpSetSystemAffinityThreadEx @ 0x1C00A4F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ProcgrpSetSystemAffinityThreadEx(KAFFINITY Affinity)
{
  KeSetSystemAffinityThread(Affinity);
  return 0LL;
}
