/*
 * XREFs of CmpFreezeThawWorker @ 0x1405E3654
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 result; // rax

  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    return CmThawRegistry();
  return result;
}
