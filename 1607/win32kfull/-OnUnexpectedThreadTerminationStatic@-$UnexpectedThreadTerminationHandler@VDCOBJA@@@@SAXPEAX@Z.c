/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C025CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(XDCOBJ *a1)
{
  if ( *(_QWORD *)a1 )
  {
    XDCOBJ::vAltUnlockNoNullSet(a1);
    *(_QWORD *)a1 = 0LL;
  }
}
