/*
 * XREFs of PopDispatchFullWake @ 0x14056993C
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopEventCalloutDispatch @ 0x14014FBB8 (PopEventCalloutDispatch.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x14055BFCC (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 */

struct _KTHREAD *__fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  struct _KTHREAD *result; // rax

  if ( byte_14032E641 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9);
    if ( (PopFullWake & 3) == 2 )
    {
      if ( (PoDebug & 8) != 0 )
        DbgPrint("PopEventDispatch: full wake\n");
      _InterlockedOr(&PopFullWake, 1u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock();
      PopInitSIdle();
      PopReleasePolicyLock();
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
