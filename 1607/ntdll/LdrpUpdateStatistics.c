/*
 * XREFs of LdrpUpdateStatistics @ 0x18000E34C
 * Callers:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18000E100 (LdrpWorkCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = LdrpStatistics;
  result = NtCurrentTeb();
  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    v0 = LdrpWorkInProgress;
  LdrpStatistics = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_180152264;
  else
    ++dword_180152268;
  return result;
}
