/*
 * XREFs of CmpFreezeThawWorker @ 0x14065A3A0
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 result; // rax

  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    return CmThawRegistry();
  return result;
}
