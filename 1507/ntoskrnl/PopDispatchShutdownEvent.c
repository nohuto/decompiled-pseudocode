/*
 * XREFs of PopDispatchShutdownEvent @ 0x1406BAD10
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopEventCalloutDispatch @ 0x14014FBB8 (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *PopDispatchShutdownEvent()
{
  unsigned __int32 v0; // ebx
  struct _KTHREAD *result; // rax

  v0 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v0 )
  {
    if ( (PoDebug & 0x10) != 0 )
      DbgPrint("PopNotify: Event %x\n", v0);
    PopEventCalloutDispatch(1, v0);
  }
  if ( PoPdcCallbacks )
    PoPdcCallbacks();
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
