/*
 * XREFs of CmpFreezeThawWorker @ 0x14060300C
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 result; // rax

  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    return CmThawRegistry();
  return result;
}
